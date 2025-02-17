﻿using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using Photon.Pun;

public class Annotate : MonoBehaviourPun
{
    public GameObject trailPrefab;
    GameObject thisTrail;
    Vector3 startPos;
    Plane objPlane;
    public static bool isAnnotateActive;
    [SerializeField] GameObject annotationBtnLabel;

    void Start()
    {
        objPlane = new Plane(Camera.allCameras[0].transform.forward * -1, this.transform.position);
        
    }

    public void onClick_Annotate()
    {
        isAnnotateActive = !isAnnotateActive;
        annotationBtnLabel.GetComponent<TMPro.TextMeshProUGUI>().text = (isAnnotateActive) ? "Done" : "Annotate";
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
            else if ((Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Moved) || Input.GetMouseButton(0))
            {
                Ray mRay = Camera.allCameras[0].ScreenPointToRay(Input.mousePosition);
                float rayDistance;
                if (objPlane.Raycast(mRay, out rayDistance))
                {
                    thisTrail.transform.position = mRay.GetPoint(rayDistance);
                }
            }
            else if ((Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Ended) || Input.GetMouseButtonUp(0))
            {
                if (Vector3.Distance(thisTrail.transform.position, startPos) < 0.1)
                {
                    Destroy(thisTrail);
                }
            }
        }
    }
}