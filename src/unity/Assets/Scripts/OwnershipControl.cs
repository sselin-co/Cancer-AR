using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class OwnershipControl : MonoBehaviourPun
{

    void Start()
    {
        Lean.Touch.LeanTouch.OnFingerTap += HandleFingerTap;
    }

    void HandleFingerTap(Lean.Touch.LeanFinger finger)
    {
        photonView.RequestOwnership();
    }
}