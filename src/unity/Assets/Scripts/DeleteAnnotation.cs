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
    void Start()
    {

    }

    public static bool deleteEnabled = false;
    // Update is called once per frame
    void Update()
    {
        if (deleteEnabled)
        {
            deleteEnabled = false;
            // when adding new annotations, make sure to make the prefab have either one of these tags
            // or add a new one to the prefab and add it here
            DeleteAnnotations(GameObject.FindGameObjectsWithTag("swipe"));
            DeleteAnnotations(GameObject.FindGameObjectsWithTag("circle"));
            DeleteAnnotations(GameObject.FindGameObjectsWithTag("arrow"));
        }
    }
    void DeleteAnnotations(GameObject[] objs)
    {
        foreach (GameObject obj in objs)
        {
            Photon.Pun.PhotonNetwork.Destroy(obj);
            print(obj.name + " destroyed");
        }
    }

    public void onClick_Delete()
    {
        deleteEnabled = true;
    }

}
