using UnityEngine;
using UnityEngine.UI;

public class CameraControl : MonoBehaviour
{

    /* cycles through cameras everytime when a touch is release and display the contents on a raw image. */

    public Text debugText;
    public RawImage cameraDisplay;
    public int switchCount = -1;
    WebCamTexture webCamTexture;
    WebCamDevice[] devices;

    void Start()
    {
        devices = WebCamTexture.devices;
        Switch();
    }

    public void Switch()
    {
        switchCount++;
        if (switchCount >= devices.Length)
        {
            switchCount = 0;
        }
        webCamTexture = new WebCamTexture();
        webCamTexture.deviceName = devices[switchCount].name;
        webCamTexture.filterMode = FilterMode.Trilinear;
        cameraDisplay.texture = webCamTexture;
        webCamTexture.Play();
    }

    void Update()
    {
        cameraDisplay.SetNativeSize();
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            if (touch.phase == TouchPhase.Ended)
            {
                Switch();
            }
        }
    }
}
