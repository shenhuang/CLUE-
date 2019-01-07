using UnityEngine;

public class TakePictureButtonBehavior : ButtonBehaviour
{
    public GameObject lbsControl;
    public FileIO fileIO;

    public override void onClick()
    {
        string cluecountstring = fileIO.FileRead("cluecount");
        LBSControl lbscb = lbsControl.GetComponent<LBSControl>();
        fileIO.FileWrite(lbscb.longitude + "\n" + lbscb.latitude, "location" + cluecountstring);
        ScreenCapture.CaptureScreenshot(Application.dataPath + "/CLUES/locationScreenshot" + cluecountstring);
        Input.location.Stop();
        UnityEngine.SceneManagement.SceneManager.LoadScene("Take Picture Page");
    }
    public override void onHover()
    {
        
    }
    public override void onIdle()
    {
        
    }
}
