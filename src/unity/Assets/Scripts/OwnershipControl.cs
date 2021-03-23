using UnityEngine;
using Photon.Pun;

public class OwnershipControl : MonoBehaviourPun
{
    private void OnMouseDown()
    {
        Debug.Log("Changing Ownership from Mouse Input");
        base.photonView.RequestOwnership();
    }

    private void Update()
    {
        if (Input.touchCount > 0)
        {
            Debug.Log("Touch Detected to Change Ownership");
            base.photonView.RequestOwnership();
        }
    }
}