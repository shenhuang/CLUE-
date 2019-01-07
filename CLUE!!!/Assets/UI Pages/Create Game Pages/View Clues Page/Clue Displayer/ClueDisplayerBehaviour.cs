using UnityEngine;
using UnityEngine.UI;

public class ClueDisplayerBehaviour : MonoBehaviour
{

    public RawImage clueDisplay;
    public RawImage locationDisplay;

    public void setClueDisplay(Texture2D texture)
    {
        clueDisplay.texture = texture;
    }

    public void setLocationDisplay(Texture2D texture)
    {
        locationDisplay.texture = texture;
    }
}