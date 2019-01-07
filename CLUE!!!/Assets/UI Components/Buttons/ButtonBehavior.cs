using UnityEngine;

public abstract class ButtonBehaviour : MonoBehaviour
{

    public Camera mainCamera;
    public BoxCollider2D boxCollider2D;
    public CircleCollider2D circleCollider2D;

    void Update()
    {
        Vector3 mousePoint = mainCamera.ScreenToWorldPoint(Input.mousePosition);
        if (boxCollider2D != null)
        {
            if (Mathf.Abs(transform.position.x + boxCollider2D.offset.x - mousePoint.x) < boxCollider2D.size.x * transform.localScale.x / 2 &&
                Mathf.Abs(transform.position.y + boxCollider2D.offset.y - mousePoint.y) < boxCollider2D.size.y * transform.localScale.y / 2)
            {
                if (Input.GetMouseButtonDown(0) || Input.GetMouseButtonDown(1) || Input.GetMouseButtonDown(2))
                {
                    onClick();
                }
                onHover();
            }
            else
            {
                onIdle();
            }
        }
        if (circleCollider2D != null)
        {
            if (Mathf.Sqrt(Mathf.Pow(Mathf.Abs(transform.position.x + circleCollider2D.offset.x - mousePoint.x), 2) +
                           Mathf.Pow(Mathf.Abs(transform.position.y + circleCollider2D.offset.y - mousePoint.y), 2)) < circleCollider2D.radius * transform.localScale.x)
            {
                if (Input.GetMouseButtonDown(0) || Input.GetMouseButtonDown(1) || Input.GetMouseButtonDown(2))
                {
                    onClick();
                }
                onHover();
            }
            else
            {
                onIdle();
            }
        }
    }
    public abstract void onClick();
    public abstract void onHover();
    public abstract void onIdle();
}
