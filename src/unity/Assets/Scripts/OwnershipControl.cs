using UnityEngine;
using Photon.Pun;
using UnityEngine.EventSystems;

public class OwnershipControl : MonoBehaviourPun
{
    private void OnMouseDown()
    {
        Debug.Log("Changing Ownership from Mouse Input");
        TransferOwnership();
    }

    private void Update()
    {
        // check for touch input that is NOT over a UI element i.e a button
        if (Input.touchCount > 0 && !EventSystem.current.IsPointerOverGameObject())
        {
            Debug.Log("Touch Detected to Change Ownership");
            TransferOwnership();
        }
    }

    private void TransferOwnership()
    {
        // do not allow ownership transfer if annotate is active
        if (!Annotate.isAnnotateActive)
        {
            // transfer ownership (ensure the prefab's ownership is set to "TakeOver" - read photon doc for more info
            photonView.RequestOwnership();
        }
    }
}