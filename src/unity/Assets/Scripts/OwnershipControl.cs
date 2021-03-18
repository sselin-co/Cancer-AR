using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class OwnershipControl : MonoBehaviourPun
{
    [SerializeField] GameObject helpPnl;

    void Start()
    {
        Lean.Touch.LeanTouch.OnFingerTap += HandleFingerTap;
    }

    void HandleFingerTap(Lean.Touch.LeanFinger finger)
    {
        bool isHelpPanelActive = helpPnl.activeSelf;
        if (!isHelpPanelActive)
        {
            photonView.RequestOwnership();
        }
    }
}