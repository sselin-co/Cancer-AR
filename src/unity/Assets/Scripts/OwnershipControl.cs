using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class OwnershipControl : MonoBehaviourPun
{
    // Start is called before the first frame update

    public void OnMouseDown()
    {
        photonView.RequestOwnership();
    }
    
    void Start()
    {
        // Debug.Log("Test");
    }

    // Update is called once per frame
    void Update()
    {
        // Debug.Log("Once per frame");
    }
}
