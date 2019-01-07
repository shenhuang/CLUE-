using UnityEngine;

public class ExampleButtonBehavior : ButtonBehaviour
{
    public SpriteRenderer sprite;
    public override void onClick()
    {
        Debug.Log("Example Button Cilcked!");
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
