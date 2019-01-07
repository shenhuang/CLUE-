using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConfirmButtonBehaviour : ButtonBehaviour
{
    public FileIO fileIO;
    public override void onClick()
    {
        int cluecount = int.Parse(fileIO.FileRead("cluecount"));
        cluecount++;
        fileIO.FileWrite(cluecount.ToString(), "cluecount");
        UnityEngine.SceneManagement.SceneManager.LoadScene("View Clues Page");
    }
    public override void onHover()
    {

    }
    public override void onIdle()
    {

    }
}
