using UnityEngine;

public class SendCluesControl : MonoBehaviour
{

    public NetworkIO networkIO;
    public FileIO fileIO;

    int phase;
    int cluecount;
    int index;


    void Start()
    {
        phase = 0;
        index = 0;
        cluecount = int.Parse(fileIO.FileRead("cluecount"));
    }

    void Update()
    {
        switch (phase)
        {
            case 0:
                networkIO.Connect();
                phase++;
                networkIO.readyForNextSegment = false;
                networkIO.SendText("sending-locations");
                break;
            case 1:
                if (networkIO.readyForNextSegment)
                {
                    index = 0;
                    phase++;
                    networkIO.readyForNextSegment = false;
                    networkIO.SendText(fileIO.FileRead("location" + index));
                }
                break;
            case 2:
                if (networkIO.readyForNextSegment)
                {
                    index++;
                    if (index + 1 >= cluecount)
                    {
                        phase++;
                    }
                    networkIO.readyForNextSegment = false;
                    networkIO.SendText(fileIO.FileRead("location" + index));
                }
                break;
            case 3:
                networkIO.SendText("end-location-sending");
                phase++;
                break;
            case 4:
                if (networkIO.readyForNextSegment)
                {
                    phase++;
                    networkIO.readyForNextSegment = false;
                    networkIO.SendText("sending-screenshots");
                }
                break;
            case 5:
                if (networkIO.readyForNextSegment)
                {
                    index = 0;
                    phase++;
                    networkIO.readyForNextSegment = false;
                    networkIO.sendingLongBytesState = 0;
                    networkIO.SendLongBytesAsync(fileIO.FileReadBytes("clueScreenshot" + index));
                }
                break;
            case 6:
                if (networkIO.readyForNextSegment && networkIO.sendingLongBytesState > 3)
                {
                    index++;
                    if (index + 1 >= cluecount)
                    {
                        phase++;
                    }
                    networkIO.readyForNextSegment = false;
                    networkIO.sendingLongBytesState = 0;
                    networkIO.SendLongBytesAsync(fileIO.FileReadBytes("clueScreenshot" + index));
                }
                break;
            case 7:
                if(networkIO.sendingLongBytesState > 3)
                {
                    networkIO.SendText("end-screenshot-sending");
                    phase++;
                }
                break;
            case 8:
                if (networkIO.readyForNextSegment)
                {
                    networkIO.SendText("end-clue-sending");
                    phase++;
                }
                break;
            case 9:
                WaitForReferenceCode();
                networkIO.Disconnect();
                phase++;
                break;
        }
    }

    void WaitForReferenceCode()
    {
        Debug.Log(networkIO.waitForReferenceCode());
    }
}
