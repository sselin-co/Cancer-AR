using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon;

public class DeleteAnnotation : MonoBehaviour
{
    //private GameObject addArrowBtn;
    // private Vector3 Pivot;
    // Start is called before the first frame update
    public static int flag = 0;
    [SerializeField] GameObject disposeActiveSprite;
    [SerializeField] GameObject disposeInactiveSprite;
    void Start()
    {

    }

    public static bool deleteEnabled = false;
    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0) && deleteEnabled)
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            RaycastHit hit;
            if (Physics.Raycast(ray, out hit, 1000))
            {
                BoxCollider bc = hit.collider as BoxCollider;
                print(bc.gameObject.tag);
                if (bc != null && bc.gameObject.tag != "model")
                {
                    if (bc.gameObject.name == "EmptyObj(Clone)")
                    {
                        flag = 1;
                        Debug.Log("3d label");
                    }
                    Photon.Pun.PhotonNetwork.Destroy(bc.gameObject);
                }
                else
                {
                    GameObject[] swipes = GameObject.FindGameObjectsWithTag("swipe");
                    foreach(GameObject swipe in swipes)
                    {
                        Destroy(swipe);
                        print("annotation destroyed");
                    }
                }
            }
            deleteEnabled = false;
            disposeActiveSprite.SetActive(false);
            disposeInactiveSprite.SetActive(true);
        }
    }

    public void onClick_Delete()
    {
        if (!deleteEnabled)
        {
            deleteEnabled = true;
            disposeActiveSprite.SetActive(true);
            disposeInactiveSprite.SetActive(false);
        }
    }

}
