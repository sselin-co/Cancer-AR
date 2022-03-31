using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using Photon.Pun;
using UnityEngine.UI;

public class Annotate : MonoBehaviourPun
{
    public GameObject trailPrefab;
    GameObject thisTrail;
    Vector3 startPos;
    Plane objPlane;
    public GameObject parentKidneys;
    public GameObject parentLungs;
    public static bool isAnnotateActive;
    [SerializeField] GameObject annotationActiveSprite;
    [SerializeField] GameObject annotationInactiveSprite;

    void Start()
    {
        //objPlane = new Plane(Camera.allCameras[0].transform.forward * -1, this.transform.position);
        objPlane = new Plane(Camera.allCameras[0].transform.forward, this.transform.position);
    }

    public void OnClick_Annotate()
    {
        isAnnotateActive = !isAnnotateActive;
        /** if (isAnnotateActive)
         {
             annotationActiveSprite.SetActive(true);
             annotationInactiveSprite.SetActive(false);
         }
         else
         {
             annotationActiveSprite.SetActive(false);
             annotationInactiveSprite.SetActive(true);
         } **/
    }

    void Update()
    {
        if (isAnnotateActive && !EventSystem.current.IsPointerOverGameObject())
        {
            if ((Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began) || Input.GetMouseButtonDown(0))
            {
                Ray mRay = Camera.allCameras[0].ScreenPointToRay(Input.mousePosition);
                float rayDistance;
                if (objPlane.Raycast(mRay, out rayDistance))
                {
                    startPos = mRay.GetPoint(rayDistance);
                    thisTrail = PhotonNetwork.Instantiate(trailPrefab.name, startPos, Quaternion.identity);
                }
            }
            else if ((Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Moved) || Input.GetMouseButton(0)  && thisTrail != null)
            {
                Ray mRay = Camera.allCameras[0].ScreenPointToRay(Input.mousePosition);
                float rayDistance;
                if (objPlane.Raycast(mRay, out rayDistance))
                {
                    thisTrail.transform.position = mRay.GetPoint(rayDistance);
                }
            }
            else if ((Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Ended) || Input.GetMouseButtonUp(0) && thisTrail != null)
            {
                if ((Vector3.Distance(thisTrail.transform.position, startPos) < 0.1))
                {
                    Destroy(thisTrail);
                }
                isAnnotateActive = !isAnnotateActive;
            }
        }
    }
}