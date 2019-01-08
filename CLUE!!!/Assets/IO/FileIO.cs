using UnityEngine;
using System.IO;
using System.Text;

public class FileIO : MonoBehaviour
{
    public bool FileWrite(string text, string filename)
    {
        byte[] contents = Encoding.ASCII.GetBytes(text);
        if (!Directory.Exists(Application.dataPath + "/CLUES/"))
        {
            Directory.CreateDirectory(Application.dataPath + "/CLUES/");

        }
        try
        {
            File.WriteAllBytes(Application.dataPath + "/CLUES/" + filename, contents);
        }
        catch (IOException e)
        {
            Debug.LogError(e.Message);
            return false;
        }
        return true;
    }

    public bool FileWriteBytes(byte[] bytes, string filename)
    {
        if (!Directory.Exists(Application.dataPath + "/CLUES/"))
        {
            Directory.CreateDirectory(Application.dataPath + "/CLUES/");
        }
        try
        {
            File.WriteAllBytes(Application.dataPath + "/CLUES/" + filename, bytes);
        }
        catch (IOException e)
        {
            Debug.LogError(e.Message);
            return false;
        }
        return true;
    }

    public string FileRead(string filename)
    {
        if(!File.Exists(Application.dataPath + "/CLUES/" + filename))
            return null;
        byte[] contents;
        try
        {
            contents = File.ReadAllBytes(Application.dataPath + "/CLUES/" + filename);
        }
        catch (IOException e)
        {
            Debug.LogError(e.Message);
            return null;
        }
        return Encoding.ASCII.GetString(contents);
    }

    public byte[] FileReadBytes(string filename)
    {
        if (!File.Exists(Application.dataPath + "/CLUES/" + filename))
            return null;
        byte[] contents;
        try
        {
            contents = File.ReadAllBytes(Application.dataPath + "/CLUES/" + filename);
        }
        catch (IOException e)
        {
            Debug.LogError(e.Message);
            return null;
        }
        return contents;
    }
}
