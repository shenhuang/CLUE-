using UnityEngine;

public class SendCluesControl : MonoBehaviour
{

    public NetworkIO networkIO;
    public FileIO fileIO;

    private bool clueSent;

    void Start()
    {
        
    }

    void Update()
    {
        if(!clueSent)
        {
            Debug.Log("Sending Clues!");
            networkIO.Connect();
            SendClues();
            WaitForReferenceCode();
            networkIO.Disconnect();
            clueSent = true;
        }
    }

    void SendClues()
    {
        int cluecount = int.Parse(fileIO.FileRead("cluecount"));
        networkIO.SendText("sending-locations");
        if (!networkIO.waitForReady())
            return;
        for (int index = 0; index < cluecount; index++)
        {
            networkIO.SendText(fileIO.FileRead("location" + index));
            if (!networkIO.waitForReady())
                return;
        }
        networkIO.SendText("end-location-sending");
        if (!networkIO.waitForReady())
            return;
        networkIO.SendText("sending-screenshots");
        if (!networkIO.waitForReady())
            return;
        for (int index = 0; index < cluecount; index++)
        {
            networkIO.SendLongBytes(fileIO.FileReadBytes("clueScreenshot" + index));
            if (!networkIO.waitForReady())
                return;
        }
        networkIO.SendText("end-screenshot-sending");
        if (!networkIO.waitForReady())
            return;
        networkIO.SendText("end-clue-sending");
    }

    void WaitForReferenceCode()
    {
        Debug.Log(networkIO.waitForReferenceCode());
    }
}
