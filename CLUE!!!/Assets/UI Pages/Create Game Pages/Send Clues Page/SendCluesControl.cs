using System;
using System.Text;
using UnityEngine;

public class SendCluesControl : MonoBehaviour
{

    public NetworkIO networkIO;
    public FileIO fileIO;

    void Start()
    {
        networkIO.Connect();
        SendClues();
        WaitForReferenceCode();
    }

    void Update()
    {
        
    }

    void onReceiveMessage(string message)
    {
        Debug.Log(message);
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
