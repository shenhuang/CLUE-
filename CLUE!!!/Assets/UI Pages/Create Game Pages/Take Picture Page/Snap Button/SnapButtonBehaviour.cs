using System.IO;
using UnityEngine;

public class SnapButtonBehaviour : ButtonBehaviour
{
    public override void onClick()
    {
        ScreenCapture.CaptureScreenshot(Application.dataPath + "/CLUES/tempClueScreenshot");
        UnityEngine.SceneManagement.SceneManager.LoadScene("Confirm Picture Page");
    }
    public override void onHover()
    {

    }
    public override void onIdle()
    {

    }
}
