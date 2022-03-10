using System.Collections;
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
            addCircleLabel();
            circleActiveSprite.SetActive(false);
            circleInactiveSprite.SetActive(true);
            //bc.size = new Vector3(5, 5, 5);
            //g.GetComponent<BoxCollider>().size = new Vector3(15, 15, 15);

        }


    }

    [PunRPC]
    public void addCircleLabel()
    {
        var g = PhotonNetwork.Instantiate("EmptyObj", Vector3.zero, Quaternion.identity);
        // GameObject g = new GameObject("Circle");
        BoxCollider bc = g.AddComponent<BoxCollider>();
        RaycastHit hit;
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        MeshCollider mc = ButtonManager.GetComponent<ButtonManager>().centralObject.GetComponent<MeshCollider>();

        if (mc.Raycast(ray, out hit, 1000))
        {
            g.transform.parent = ButtonManager.GetComponent<ButtonManager>().centralObject.transform.parent;
            int val = ButtonManager.GetComponent<ButtonManager>().modelDropdown.GetComponent<TMP_Dropdown>().value;
            if (val == 0)
            {
                g.transform.position = new Vector3(hit.point.x, hit.point.y, hit.point.z);
            }
            else if (val == 2)
            {
                g.transform.position = new Vector3(hit.point.x, hit.point.y, hit.point.z - 4);
            }
            else
            {
                g.transform.position = new Vector3(hit.point.x, hit.point.y, hit.point.z);
            }
            //circle.transform.parent = g.transform;
            var Circle = PhotonNetwork.Instantiate("Circle", hit.point, Quaternion.identity);
            Circle.transform.parent = g.transform;

        }
        //circle.transform.position = centralObject.transform.position;
        g.transform.rotation = Quaternion.LookRotation(-2 * ButtonManager.GetComponent<ButtonManager>().centralObject.transform.position);
        bc.size = new Vector3(20, 20, 20);

    }
    public void onClick_AddCircle()
    {
        addCircleEnabled = true;
        circleActiveSprite.SetActive(true);
        circleInactiveSprite.SetActive(false);

    }
}
