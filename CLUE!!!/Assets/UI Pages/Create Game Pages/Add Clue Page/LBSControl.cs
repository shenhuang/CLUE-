using Mapbox.Unity.Map;
using Mapbox.Utils;
using UnityEngine;

public class LBSControl : MonoBehaviour
{
    public GameObject map;
    public float latitude;
    public float longitude;

    public Camera mainCamera;
    Vector3 initialPosition;
    Vector2 touchInitialPosition;
    float touchInitialDistance;

    AbstractMap abstractMap;
    LocationService locationService;
    const float maxZoom = 20;
    const float minZoom = 10;
    const float initialZoom = 16;
    const float zoomScale = 0.005f;

	void Awake()
	{
        abstractMap = map.GetComponent<AbstractMap>();
        map.transform.SetParent(transform);
        initialPosition = transform.position;
	}

    void Update()
    {
        if (Input.location.isEnabledByUser)
        {
            Input.location.Start(5);
            LocationInfo location = Input.location.lastData;
            abstractMap.SetCenterLatitudeLongitude(new Vector2d(location.latitude, location.longitude));
            latitude = location.latitude;
            longitude = location.longitude;
            if (Input.touchCount > 0)
            {
                if(Input.touchCount > 1)
                {
                    Touch touchOne = Input.GetTouch(0);
                    Touch touchTwo = Input.GetTouch(1);
                    Vector3 touchOnePoint = mainCamera.ScreenToWorldPoint(touchOne.position);
                    Vector3 touchTwoPoint = mainCamera.ScreenToWorldPoint(touchTwo.position);
                    float zoomFactor = 1;
                    switch (touchTwo.phase)
                    {
                        case TouchPhase.Began:
                            touchInitialDistance = Vector3.Distance(touchOnePoint, touchTwoPoint);
                            touchInitialPosition = (touchOnePoint + touchTwoPoint) / 2;
                            break;
                        case TouchPhase.Moved:
                            zoomFactor = Mathf.Pow((Vector3.Distance(touchOnePoint, touchTwoPoint) / touchInitialDistance), zoomScale);
                            transform.position = new Vector3(initialPosition.x + (touchOnePoint.x + touchTwoPoint.x) / 2 - touchInitialPosition.x, initialPosition.y + (touchOnePoint.y + touchTwoPoint.y) / 2 - touchInitialPosition.y, initialPosition.z);
                            Debug.Log(zoomFactor);
                            break;
                        case TouchPhase.Ended:
                            zoomFactor = Mathf.Pow((Vector3.Distance(touchOnePoint, touchTwoPoint) / touchInitialDistance), zoomScale);
                            transform.position = initialPosition;
                            break;
                    }
                    float zoomAmount = abstractMap.Zoom * zoomFactor;
                    if(zoomAmount > maxZoom)
                    {
                        zoomAmount = maxZoom;
                    }
                    if (zoomAmount < minZoom)
                    {
                        zoomAmount = minZoom;
                    }
                    abstractMap.SetZoom(zoomAmount);
                }
                else
                {
                    Touch touch = Input.GetTouch(0);
                    Vector3 touchPoint = mainCamera.ScreenToWorldPoint(touch.position);
                    switch (touch.phase)
                    {
                        case TouchPhase.Began:
                            touchInitialPosition = touchPoint;
                            break;
                        case TouchPhase.Moved:
                            transform.position = new Vector3(initialPosition.x + touchPoint.x - touchInitialPosition.x, initialPosition.y + touchPoint.y - touchInitialPosition.y, initialPosition.z);
                            break;
                        case TouchPhase.Ended:
                            transform.position = initialPosition;
                            break;
                    }
                }
            }
            abstractMap.UpdateMap();
        }
    }
}
