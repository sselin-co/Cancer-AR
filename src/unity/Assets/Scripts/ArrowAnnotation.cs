using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using TMPro;

public class ArrowAnnotation : MonoBehaviour, IPunInstantiateMagicCallback
{
    [SerializeField]
    private GameObject arrow;
    [SerializeField]
    private GameObject addArrowBtn;
    [SerializeField]
    private GameObject ButtonManager;
    private bool addArrowEnabled = false;
    private GameObject arrowAnnotation;


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
        if (addArrowEnabled && Input.GetMouseButtonDown(0))
        {
            RaycastHit hit;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            MeshCollider mc = ButtonManager.GetComponent<ButtonManager>().centralObject.GetComponent<MeshCollider>();
            // casts a ray from where the user touches to detect if a model has been interacted with
            mc.Raycast(ray, out hit, 1000);
            Vector3 hitVector = hit.point;
            int val = ButtonManager.GetComponent<ButtonManager>().modelDropdown.GetComponent<TMP_Dropdown>().value;
            if (val == 0) // Kidneys
            {
                addArrowEnabled = false;
                // Kidney photon view ID is 2
                PhotonView view = PhotonView.Find(2);
                arrowAnnotation = PhotonNetwork.Instantiate(arrow.name, hitVector, Quaternion.FromToRotation(Vector3.up, hit.normal));
                arrowAnnotation.transform.SetParent(ButtonManager.GetComponent<ButtonManager>().centralObject.transform.parent);
                // Grabs recently instantiated annotation and sync it with the other player
                view.RPC("AddArrowLabel", RpcTarget.Others, arrowAnnotation.GetPhotonView().ViewID);
            }
            else if (val == 1) // Lungs
            {
                addArrowEnabled = false;
                // Lungs photon ID is 1
                PhotonView view = PhotonView.Find(1);
                arrowAnnotation = PhotonNetwork.Instantiate(arrow.name, hitVector, Quaternion.FromToRotation(Vector3.up, hit.normal));
                arrowAnnotation.transform.SetParent(ButtonManager.GetComponent<ButtonManager>().centralObject.transform.parent);
                // Grabs recently instantiated annotation and sync it with the other player
                view.RPC("AddArrowLabel", RpcTarget.Others, arrowAnnotation.GetPhotonView().ViewID);
            }

        }


    }

    // Finds instantiated arrow GameObject from Update() RPC and appends it to the client's parent centralObject
    [PunRPC]
    public void AddArrowLabel(int viewID)
    {
        arrowAnnotation = PhotonView.Find(viewID).gameObject;
        arrowAnnotation.transform.SetParent(ButtonManager.GetComponent<ButtonManager>().centralObject.transform.parent);

    }

    public void onClick_AddArrow()
    {
        if (!addArrowEnabled)
        {
            addArrowEnabled = true;
        }
        else
        {
            addArrowEnabled = false;
        }

    }
}
