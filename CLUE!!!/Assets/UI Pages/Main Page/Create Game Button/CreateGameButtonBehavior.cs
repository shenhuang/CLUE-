using UnityEngine;

public class CreateGameButtonBehavior : ButtonBehaviour
{
    public SpriteRenderer sprite;
    public FileIO fileIO;
    public override void onClick()
    {
        //fileIO.FileWrite("0", "cluecount");
        UnityEngine.SceneManagement.SceneManager.LoadScene("Add Clue Page");
    }
    public override void onHover()
    {
        sprite.color = Color.blue;
    }
    public override void onIdle()
    {
        sprite.color = Color.white;
    }
}
