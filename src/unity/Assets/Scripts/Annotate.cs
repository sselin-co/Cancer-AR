using UnityEngine;
using System.Collections;

public class Annotate : MonoBehaviour
{
    public GameObject trailPrefab;
    GameObject thisTrail;
    Vector3 startPos;
    Plane objPlane;


    void Start()
    {
        objPlane = new Plane(Camera.allCameras[0].transform.forward * -1, this.transform.position);
    }

    void Update()
    {
        if ((Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began) || Input.GetMouseButtonDown(0))
        {
            
            Ray mRay = Camera.allCameras[0].ScreenPointToRay(Input.mousePosition);
            float rayDistance;
            if (objPlane.Raycast(mRay, out rayDistance))
            {
                Debug.Log("Start");
                startPos = mRay.GetPoint(rayDistance);
                thisTrail = (GameObject) Instantiate(trailPrefab, startPos, Quaternion.identity);
            }
        }
        else if ((Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Moved) || Input.GetMouseButton(0))
        {
            Ray mRay = Camera.allCameras[0].ScreenPointToRay(Input.mousePosition);
            float rayDistance;
            if (objPlane.Raycast(mRay, out rayDistance))
            {
                Debug.Log("In moving");
                thisTrail.transform.position = mRay.GetPoint(rayDistance);
            }
        }
        else if ((Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Ended) || Input.GetMouseButtonUp(0))
        {
            if (Vector3.Distance(thisTrail.transform.position, startPos) < 0.1)
            {
                Debug.Log("Ended");
                Destroy(thisTrail);
            }
        }
    }
}