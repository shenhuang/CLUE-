using UnityEngine;

public class SendButtonBehaviour : ButtonBehaviour
{

    public SpriteRenderer sprite;

    public override void onClick()
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene("Send Clues Page");
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