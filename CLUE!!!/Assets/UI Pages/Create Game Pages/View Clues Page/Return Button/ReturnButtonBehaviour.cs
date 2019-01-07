using UnityEngine;

public class ReturnButtonBehaviour : ButtonBehaviour
{
    public override void onClick()
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene("Add Clue Page");
    }

    public override void onHover()
    {
        
    }

    public override void onIdle()
    {
        
    }
}
