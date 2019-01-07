using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnapButtonBehaviour : ButtonBehaviour {
    public FileIO fileIO;
    public override void onClick()
    {
        string cluecount = fileIO.FileRead("cluecount");
        Debug.Log("clueScreenshot" + cluecount);
        ScreenCapture.CaptureScreenshot(Application.dataPath + "/CLUES/clueScreenshot" + cluecount);
        UnityEngine.SceneManagement.SceneManager.LoadScene("Confirm Picture Page");
    }
    public override void onHover()
    {

    }
    public override void onIdle()
    {

    }
}
