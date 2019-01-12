using UnityEngine;
using System.IO;
using System.Text;
using System.Net.Sockets;

public class NetworkIO : MonoBehaviour
{
    TcpClient tcpClient;
    NetworkStream serverStream;

    public string host;
    public int port;
    const float waitTimeOut = 5;

    public bool readyForNextSegment;
    public int sendingLongBytesState;
    public int numberOfSegments;
    public int segmentsSent;
    public byte[] longBytes;
    const int segmentLength = 1024;

	void Awake()
	{
        sendingLongBytesState = -1;
	}

	public void Connect()
    {
        tcpClient = new TcpClient();
        try
        {
            tcpClient.Connect(host, port);
        }
        catch (SocketException e)
        {
            Debug.LogError(e.ErrorCode + ": " + e.Message);
            tcpClient = null;
            return;
        }
        serverStream = tcpClient.GetStream();
    }

    public bool SendText(string text)
    {
        if (tcpClient == null)
            return false;
        byte[] outstream = Encoding.ASCII.GetBytes(text);
        try
        {
            serverStream.Write(outstream, 0, outstream.Length);
        }
        catch (IOException e)
        {
            Debug.LogError(e.Message);
            Disconnect();
            return false;
        }
        return true;
    }

    public bool SendBytes(byte[] bytes)
    {
        if (tcpClient == null)
            return false;
        try
        {
            serverStream.Write(bytes, 0, bytes.Length);
        }
        catch (IOException e)
        {
            Debug.LogError(e.Message);
            Disconnect();
            return false;
        }
        return true;
    }

    public bool SendLongBytes(byte[] bytes)
    {
        if (tcpClient == null)
            return false;
        try
        {
            numberOfSegments = bytes.Length / segmentLength;
            SendText("long-byte-start");
            if (!waitForReady())
                return false;
            for (int index = 0; index < numberOfSegments; index++)
            {
                serverStream.Write(bytes, index * segmentLength, segmentLength);
                if (!waitForReady())
                    return false;
            }
            serverStream.Write(bytes, numberOfSegments * segmentLength, bytes.Length % segmentLength);
            if (!waitForReady())
                return false;
            SendText("long-byte-end");
        }
        catch (IOException e)
        {
            Debug.LogError(e.Message);
            Disconnect();
            return false;
        }
        return true;
    }

    public void SendLongBytesAsync(byte[] bytes)
    {
        longBytes = bytes;
        numberOfSegments = bytes.Length / segmentLength;
        segmentsSent = 0;
    }

    public void SendLongBytesUpdate()
    {
        switch(sendingLongBytesState)
        {
            case 0:
                readyForNextSegment = false;
                SendText("long-byte-start");
                sendingLongBytesState++;
                break;
            case 1:
                if (readyForNextSegment)
                {
                    readyForNextSegment = false;
                    serverStream.Write(longBytes, segmentsSent * segmentLength, segmentLength);
                    segmentsSent++;
                    if(segmentsSent >= numberOfSegments)
                    {
                        sendingLongBytesState++;
                    }
                }
                break;
            case 2:
                if (readyForNextSegment)
                {
                    readyForNextSegment = false;
                    serverStream.Write(longBytes, numberOfSegments * segmentLength, longBytes.Length % segmentLength);
                    sendingLongBytesState++;
                }
                break;
            case 3:
                if (readyForNextSegment)
                {
                    SendText("long-byte-end");
                    sendingLongBytesState++;
                }
                break;
        }
    }

    void Update()
    {
        if (tcpClient == null || serverStream == null || !serverStream.DataAvailable)
            return;
        // Assumption: max message size is 1024 characters
        byte[] msg = new byte[1024];
        int bytesRead = serverStream.Read(msg, 0, 1024);
        ASCIIEncoding encoder = new ASCIIEncoding();
        string message = encoder.GetString(msg, 0, bytesRead);
        if (message == "ready-for-next-segment")
        {
            readyForNextSegment = true;
        }
        SendLongBytesUpdate();
    }

    public bool waitForReady()
    {
        bool ready = false;
        float timer = 0;
        while(!ready)
        {
            timer += Time.deltaTime;
            if (timer >= waitTimeOut)
            {
                Debug.Log("NetworkIO Timed Out!");
                return ready;
            }
            byte[] msg = new byte[1024];
            int bytesRead = serverStream.Read(msg, 0, 1024);
            ASCIIEncoding encoder = new ASCIIEncoding();
            string message = encoder.GetString(msg, 0, bytesRead);
            if(message == "ready-for-next-segment")
            {
                ready = true;
            }
        }
        return ready;
    }

    public string waitForReferenceCode()
    {
        bool ready = false;
        float timer = 0;
        while (!ready)
        {
            timer += Time.deltaTime;
            if (timer >= waitTimeOut)
            {
                Debug.Log("NetworkIO Timed Out!");
                return null;
            }
            byte[] msg = new byte[1024];
            int bytesRead = serverStream.Read(msg, 0, 1024);
            ASCIIEncoding encoder = new ASCIIEncoding();
            string message = encoder.GetString(msg, 0, bytesRead);
            if (message == "invalid-clues")
            {
                return null;
            }
            else
            {
                ready = true;
                return message;
            }
        }
        return null;
    }

    public bool SendTexture(Texture2D texture)
    {
        if (tcpClient == null)
            return false;
        byte[] outstream = texture.EncodeToPNG();
        try
        {
            serverStream.Write(outstream, 0, outstream.Length);
        }
        catch (IOException e)
        {
            Debug.LogError(e.Message);
            Disconnect();
            return false;
        }
        return true;
    }

    public void Disconnect()
    {
        serverStream.Close();
        serverStream = null;
        tcpClient.Close();
        tcpClient = null;
    }

    void OnApplicationQuit()
    {
        if (tcpClient != null)
            Disconnect();
    }
}