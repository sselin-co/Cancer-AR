using System.Collections.Generic;
using UnityEngine;

public class ButtonManager : MonoBehaviour
{
    [SerializeField]
    GameObject modeLbl;

    Lean.Touch.LeanTranslate modelTranslateScript;

    Lean.Touch.LeanScale modelScaleScript;

    Lean.Touch.LeanRotateCustomAxisX modelRotateXScript;

    Lean.Touch.LeanRotateCustomAxisY modelRotateYScript;

    Lean.Touch.LeanRotateCustomAxisZ modelRotateZScript;

    GameObject shell;

    [SerializeField]
    GameObject shellLbl;

    BoxCollider shellColl;

    List<GameObject> texts = new List<GameObject>();

    [SerializeField]
    GameObject annotationPnl;

    [SerializeField]
    GameObject annotationInputText;

    private int textsCounter = 0;

    [SerializeField]
    GameObject nodulePnl;

    [SerializeField]
    GameObject lungs;

    [SerializeField]
    GameObject kidneys;

    [SerializeField]
    GameObject modelSelectPnl;

    public void SelecKidneys()
    {
        lungs.SetActive(false);
        kidneys.SetActive(true);
        Setup();
    }

    public void SelectLungs()
    {
        lungs.SetActive(true);
        kidneys.SetActive(false);
        Setup();
    }

    private void Setup()
    {
        modelSelectPnl.SetActive(false);
        modelTranslateScript = GameObject.FindWithTag("model").GetComponent<Lean.Touch.LeanTranslate>();
        modelScaleScript = GameObject.FindWithTag("model").GetComponent<Lean.Touch.LeanScale>();
        modelRotateXScript = GameObject.FindWithTag("model").GetComponent<Lean.Touch.LeanRotateCustomAxisX>();
        modelRotateYScript = GameObject.FindWithTag("model").GetComponent<Lean.Touch.LeanRotateCustomAxisY>();
        modelRotateZScript = GameObject.FindWithTag("model").GetComponent<Lean.Touch.LeanRotateCustomAxisZ>();
        shell = GameObject.FindWithTag("model");
        shellColl = GameObject.FindWithTag("model").GetComponent<BoxCollider>();
        for (int i = 0; i < 5; i++)
        {
            texts.Add(GameObject.FindWithTag("notes").transform.GetChild(i).gameObject);
            texts[i].SetActive(false);
        }
    }

    public void EnableTranslation()
    {
        modelTranslateScript.enabled = true;
        modelScaleScript.enabled = false;
        modelRotateXScript.enabled = false;
        modelRotateYScript.enabled = false;
        modelRotateZScript.enabled = false;
        texts[textsCounter == 0 ? textsCounter : textsCounter -1].GetComponent<Lean.Touch.LeanTranslate>().enabled = false;
        texts[textsCounter == 0 ? textsCounter : textsCounter - 1].GetComponent<Lean.Touch.LeanScale>().enabled = false;
        modeLbl.GetComponent<TMPro.TextMeshProUGUI>().text = "Current Mode: Translate";
    }

    public void EnableScaling()
    {
        modelTranslateScript.enabled = false;
        modelScaleScript.enabled = true;
        modelRotateXScript.enabled = false;
        modelRotateYScript.enabled = false;
        modelRotateZScript.enabled = false;
        texts[textsCounter == 0 ? textsCounter : textsCounter - 1].GetComponent<Lean.Touch.LeanTranslate>().enabled = false;
        texts[textsCounter == 0 ? textsCounter : textsCounter - 1].GetComponent<Lean.Touch.LeanScale>().enabled = false;
        modeLbl.GetComponent<TMPro.TextMeshProUGUI>().text = "Current Mode: Scale";
    }

    public void EnableXRotation()
    {
        modelTranslateScript.enabled = false;
        modelScaleScript.enabled = false;
        modelRotateXScript.enabled = true;
        modelRotateYScript.enabled = false;
        modelRotateZScript.enabled = false;
        texts[textsCounter == 0 ? textsCounter : textsCounter - 1].GetComponent<Lean.Touch.LeanTranslate>().enabled = false;
        texts[textsCounter == 0 ? textsCounter : textsCounter - 1].GetComponent<Lean.Touch.LeanScale>().enabled = false;
        modeLbl.GetComponent<TMPro.TextMeshProUGUI>().text = "Current Mode: Rotate X";
    }

    public void EnableYRotation()
    {
        modelTranslateScript.enabled = false;
        modelScaleScript.enabled = false;
        modelRotateXScript.enabled = false;
        modelRotateYScript.enabled = true;
        modelRotateZScript.enabled = false;
        texts[textsCounter == 0 ? textsCounter : textsCounter - 1].GetComponent<Lean.Touch.LeanTranslate>().enabled = false;
        texts[textsCounter == 0 ? textsCounter : textsCounter - 1].GetComponent<Lean.Touch.LeanScale>().enabled = false;
        modeLbl.GetComponent<TMPro.TextMeshProUGUI>().text = "Current Mode: Rotate Y";
    }

    public void EnableZRotation()
    {
        modelTranslateScript.enabled = false;
        modelScaleScript.enabled = false;
        modelRotateXScript.enabled = false;
        modelRotateYScript.enabled = false;
        modelRotateZScript.enabled = true;
        texts[textsCounter == 0 ? textsCounter : textsCounter - 1].GetComponent<Lean.Touch.LeanTranslate>().enabled = false;
        texts[textsCounter == 0 ? textsCounter : textsCounter - 1].GetComponent<Lean.Touch.LeanScale>().enabled = false;
        modeLbl.GetComponent<TMPro.TextMeshProUGUI>().text = "Current Mode: Rotate Z";
    }

    public void Shell()
    {
        if(shell.transform.GetChild(0).GetChild(0).GetComponent<MeshRenderer>().enabled)
        {
            shell.transform.GetChild(0).GetChild(0).GetComponent<MeshRenderer>().enabled = false;
            shellColl.enabled = false;
            shellLbl.GetComponent<TMPro.TextMeshProUGUI>().text = "Show shell";
        }
        else
        {
            shell.transform.GetChild(0).GetChild(0).GetComponent<MeshRenderer>().enabled = true;
            shellColl.enabled = true;
            shellLbl.GetComponent<TMPro.TextMeshProUGUI>().text = "Hide shell";
        }
    }

    public void Annotate()
    {
        modelTranslateScript.enabled = false;
        modelScaleScript.enabled = false;
        modelRotateXScript.enabled = false;
        modelRotateYScript.enabled = false;
        modelRotateZScript.enabled = false;
        texts[textsCounter].GetComponent<Lean.Touch.LeanTranslate>().enabled = true;
        texts[textsCounter].GetComponent<Lean.Touch.LeanScale>().enabled = true;
        modeLbl.GetComponent<TMPro.TextMeshProUGUI>().text = "Current Mode: Annotating";
        annotationPnl.SetActive(true);

        if (textsCounter < 5)
        {
            texts[textsCounter].SetActive(true);
            textsCounter++;
        }
        else
        {
            Debug.Log("Too many annotations!");
        }
    }

    public void DoneAnnotating()
    {
        texts[textsCounter-1].GetComponent<TextMesh>().text = annotationInputText.GetComponent<TMPro.TMP_InputField>().text;
        annotationPnl.SetActive(false);
    }

    public void DoneWithNodule()
    {
        nodulePnl.SetActive(false);
    }
}
