using UnityEngine;
using UnityEngine.UI;

public class PictureDisplayBehaviour : MonoBehaviour
{
    public FileIO fileIO;
    public RawImage pictureDisplay;

    void Awake()
    {
        string cluecount = fileIO.FileRead("cluecount");
        Texture2D texture = new Texture2D(0, 0);
        texture.LoadImage(fileIO.FileReadBytes("clueScreenshot" + cluecount));
        pictureDisplay.texture = texture;
    }
}