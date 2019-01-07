using UnityEngine;

public class JoinGameButtonBehaviour : ButtonBehaviour
{
    public SpriteRenderer sprite;
    public override void onClick()
    {
        //fileIO.FileWrite("0", "cluecount");
        UnityEngine.SceneManagement.SceneManager.LoadScene("Enter Code Page");
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
