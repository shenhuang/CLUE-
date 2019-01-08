using System.IO;
using UnityEngine;
using UnityEngine.UI;

public class PictureDisplayBehaviour : MonoBehaviour
{
    public FileIO fileIO;
    public RawImage pictureDisplay;

    void Awake()
    {
        string cluecount = fileIO.FileRead("cluecount");

        Texture2D screenshot = new Texture2D(0, 0);
        byte[] imageData = File.ReadAllBytes(Application.dataPath + "/CLUES/tempClueScreenshot");
        ImageConversion.LoadImage(screenshot, imageData, false);
        int width = screenshot.width;
        int height = screenshot.height;
        Color[] c = screenshot.GetPixels(0, 150, width, height - 300);
        Texture2D newScreenshot = new Texture2D(width, height - 300, TextureFormat.RGB565, false);
        newScreenshot.SetPixels(c);
        newScreenshot.Apply();
        fileIO.FileWriteBytes(newScreenshot.EncodeToPNG(), "/clueScreenshot" + cluecount);

        imageData = File.ReadAllBytes(Application.dataPath + "/CLUES/tempLocationScreenshot");
        ImageConversion.LoadImage(screenshot, imageData, false);
        width = screenshot.width;
        height = screenshot.height;
        c = screenshot.GetPixels(0, 150, width, height - 300);
        newScreenshot = new Texture2D(width, height - 300, TextureFormat.RGB565, false);
        newScreenshot.SetPixels(c);
        newScreenshot.Apply();
        fileIO.FileWriteBytes(newScreenshot.EncodeToPNG(), "/locationScreenshot" + cluecount);

        Texture2D texture = new Texture2D(0, 0);
        texture.LoadImage(fileIO.FileReadBytes("clueScreenshot" + cluecount));
        pictureDisplay.texture = texture;
    }
}