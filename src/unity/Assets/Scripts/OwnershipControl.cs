using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class OwnershipControl : MonoBehaviourPun
{

    void Start()
    {
        Lean.Touch.LeanTouch.OnFingerTap += HandleFingerTap;
        Debug.Log("Tap Detected in Ownership Script");
    }

    void HandleFingerTap(Lean.Touch.LeanFinger finger)
    {
        Debug.Log("Changing Ownership");
        photonView.RequestOwnership();
    }
}