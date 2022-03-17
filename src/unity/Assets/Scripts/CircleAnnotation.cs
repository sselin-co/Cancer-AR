﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using TMPro;

public class CircleAnnotation : MonoBehaviour, IPunInstantiateMagicCallback
{
    [SerializeField]
    private GameObject circle;
    [SerializeField]
    private GameObject addCircleBtn;
    [SerializeField]
    private GameObject ButtonManager;
    public bool addCircleEnabled = false;
    [SerializeField] public GameObject circleActiveSprite;
    [SerializeField] public GameObject circleInactiveSprite;
    private GameObject circleAnnotation;


    // Start is called before the first frame update
    void Start()
    {


    }

    public void OnPhotonInstantiate(Photon.Pun.PhotonMessageInfo info)
    {
        // Example... 
        Debug.Log("Is this mine?... " + info.Sender.IsLocal.ToString());
    }

    // Update is called once per frame
    void Update()
    {

        if (Input.GetMouseButtonDown(0) && addCircleEnabled)
        {
            addCircleEnabled = false;
            RaycastHit hit;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            MeshCollider mc = ButtonManager.GetComponent<ButtonManager>().centralObject.GetComponent<MeshCollider>();
            mc.Raycast(ray, out hit, 1000);
            Vector3 hitVector = hit.point;
            int val = ButtonManager.GetComponent<ButtonManager>().modelDropdown.GetComponent<TMP_Dropdown>().value;
            if (val == 0) // Kidneys
            {
                PhotonView view = PhotonView.Find(2);
                view.RPC("AddCircleLabel", RpcTarget.AllBufferedViaServer, hitVector);
            }
            if (val == 1) // Lungs
            {
                PhotonView view = PhotonView.Find(1);
                view.RPC("AddCircleLabel", RpcTarget.AllBufferedViaServer, hitVector);
            }
            //AddCircleLabel();
            circleActiveSprite.SetActive(false);
            circleInactiveSprite.SetActive(true);
            //bc.size = new Vector3(5, 5, 5);
            //g.GetComponent<BoxCollider>().size = new Vector3(15, 15, 15);

        }


    }

    [PunRPC]
    public void AddCircleLabel(Vector3 hit)
    {
        print("AddCircleLabel RPC has been triggered");
        circleAnnotation = PhotonNetwork.Instantiate(circle.name, Vector3.zero, Quaternion.identity);
        circleAnnotation.transform.SetPositionAndRotation(new Vector3(hit.x, hit.y, hit.z), Quaternion.identity);
        circleAnnotation.transform.SetParent(ButtonManager.GetComponent<ButtonManager>().centralObject.transform.parent);

    }
    public void onClick_AddCircle()
    {
        addCircleEnabled = true;
        circleActiveSprite.SetActive(true);
        circleInactiveSprite.SetActive(false);

    }
}
