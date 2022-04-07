using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon;

public class DeleteAnnotation : MonoBehaviour
{
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
            // any new annotation prefabs added must have the "annotation" tag added to them in the inspector 
            DeleteAnnotations(GameObject.FindGameObjectsWithTag("annotation"));
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
