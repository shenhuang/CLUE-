using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnapButtonBehaviour : ButtonBehaviour {
    public FileIO fileIO;
    public override void onClick()
    {
        //string cluecount = fileIO.FileRead("cluecount");
        string cluecount = "0";
        Debug.Log("clueScreenshot" + cluecount);
        ScreenCapture.CaptureScreenshot(Application.dataPath + "/CLUES/clueScreenshot" + cluecount);
        Texture2D screenshot = new Texture2D(0, 0);
        screenshot.LoadImage(fileIO.FileReadBytes(Application.dataPath + "/CLUES/clueScreenshot" + cluecount));

        UnityEngine.SceneManagement.SceneManager.LoadScene("Confirm Picture Page");
    }
    public override void onHover()
    {

    }
    public override void onIdle()
    {

    }
}
