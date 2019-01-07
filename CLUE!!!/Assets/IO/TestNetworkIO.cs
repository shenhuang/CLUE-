using UnityEngine;

public class TestNetworkIO : MonoBehaviour
{

    public NetworkIO networkIO;
    public Texture2D texture;
    void Start()
    {
        networkIO.Connect();
        networkIO.SendText("Hello Server!");
        networkIO.SendTexture(texture);
    }
}
