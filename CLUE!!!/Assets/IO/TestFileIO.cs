using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestFileIO : MonoBehaviour
{
    public FileIO fileIO;
    void Start()
    {
        fileIO.FileWrite("Hello World!", "test");
        Debug.Log(fileIO.FileRead("test"));
    }
}
