using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Nodule : MonoBehaviour
{
    [SerializeField]
    GameObject nodulePnl;
    [SerializeField]
    GameObject noduleText;
    [SerializeField]
    GameObject noduleImg;

    [SerializeField]
    GameObject noduleInfo;
    [SerializeField]
    GameObject noduleGfx;



    private void OnMouseDown()
    {
        nodulePnl.SetActive(true);
        noduleText.GetComponent<TMPro.TextMeshProUGUI>().text = noduleInfo.GetComponent<TMPro.TextMeshProUGUI>().text;
        noduleImg.GetComponent<UnityEngine.UI.Image>().sprite = noduleGfx.GetComponent<SpriteRenderer>().sprite;
    }
}
