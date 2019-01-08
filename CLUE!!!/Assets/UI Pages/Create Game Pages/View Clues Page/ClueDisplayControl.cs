using UnityEngine;

public class ClueDisplayControl : MonoBehaviour
{
    public FileIO fileIO;
    public Camera mainCamera;
    public GameObject clueDisplayer;
    public GameObject[] clueDisplayers;

    public int cluecount;
    public float velocity;
    public float velocityDecay;
    public float velocityAmplifier;
    public Vector3 finalCluePosition;
    public Vector3 cluePositionOffset;
    public Vector2 touchPreviousPosition;
    public Vector2 touchPreviousLiftVelocity;

    private void Awake()
    {
        velocity = 0.0f;
        velocityDecay = 5.0f;
        velocityAmplifier = 5.0f;
        finalCluePosition = new Vector3(0, -1, 0);
        cluePositionOffset = new Vector3(0, 3, 0);
    }

    void Start()
    {
        cluecount = int.Parse(fileIO.FileRead("cluecount"));
        clueDisplayers = new GameObject[cluecount];
        for (int index = cluecount; index > 0; index--)
        {
            GameObject newClueDisplayer = Instantiate(clueDisplayer, finalCluePosition + cluePositionOffset * (cluecount - index), Quaternion.identity);
            newClueDisplayer.transform.SetParent(transform);
            Texture2D clueTexture = new Texture2D(0, 0);
            clueTexture.LoadImage(fileIO.FileReadBytes("clueScreenshot" + (index - 1)));
            newClueDisplayer.GetComponent<ClueDisplayerBehaviour>().setClueDisplay(clueTexture);
            Texture2D locationTexture = new Texture2D(0, 0);
            locationTexture.LoadImage(fileIO.FileReadBytes("locationScreenshot" + (index - 1)));
            newClueDisplayer.GetComponent<ClueDisplayerBehaviour>().setLocationDisplay(locationTexture);
            clueDisplayers[cluecount - index] = newClueDisplayer;
        }
    }

    void Update()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            Vector3 touchPoint = mainCamera.ScreenToWorldPoint(touch.position);
            switch (touch.phase)
            {
                case TouchPhase.Began:
                    touchPreviousPosition = touchPoint;
                    break;
                case TouchPhase.Moved:
                    transform.position = new Vector3(transform.position.x, transform.position.y + touchPoint.y - touchPreviousPosition.y, transform.position.z);
                    touchPreviousPosition = touchPoint;
                    break;
                case TouchPhase.Ended:
                    transform.position = new Vector3(transform.position.x, transform.position.y + touchPoint.y - touchPreviousPosition.y, transform.position.z);
                    velocity = (touchPoint.y - touchPreviousPosition.y) * velocityAmplifier;
                    break;
            }
        }
        else
        {
            transform.position = new Vector3(transform.position.x, transform.position.y + velocity * Time.deltaTime, transform.position.z);
            if(Mathf.Abs(velocity) < velocityDecay * Time.deltaTime)
            {
                velocity = 0;
            }
            else
            {
                velocity -= velocityDecay * Mathf.Sign(velocity) * Time.deltaTime;
            }
        }
        if (transform.position.y > 0)
        {
            transform.position = new Vector3(transform.position.x, 0, transform.position.z);
            velocity = 0;
        }
        if (transform.position.y < cluePositionOffset.y * (2 - cluecount))
        {
            transform.position = new Vector3(transform.position.x, cluePositionOffset.y * (2 - cluecount), transform.position.z);
            velocity = 0;
        }
    }
}
