using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class OwnershipControl : MonoBehaviourPun
{
    // Start is called before the first frame update

    public void OnMouseDown()
    {
    }

    void Start()
    {
        Lean.Touch.LeanTouch.OnFingerTap += HandleFingerTap;
    }

    void HandleFingerTap(Lean.Touch.LeanFinger finger)
    {
        photonView.RequestOwnership();
    }

    // Update is called once per frame
    void Update()
    {
        // Debug.Log("Once per frame");
    }
}