using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonManager : MonoBehaviour
{
    // translating 
    Lean.Touch.LeanTranslate modelTranslateScript;

    // scaling
    Lean.Touch.LeanScale modelScaleScript;

    // rotation 
    Lean.Touch.LeanRotateCustomAxisX modelRotateXScript;
    Lean.Touch.LeanRotateCustomAxisY modelRotateYScript;
    Lean.Touch.LeanRotateCustomAxisZ modelRotateZScript;

    // model outer shell + label
    GameObject shell;
    [SerializeField] GameObject shellLbl;
    BoxCollider shellColl;

    // annotation panel, annotate texts + input 
    List<GameObject> texts = new List<GameObject>();
    [SerializeField] GameObject annotationPnl;
    [SerializeField] GameObject annotationInputText;
    private int textsCounter = 0;

    [SerializeField] GameObject helpBtn;
    [SerializeField] GameObject helpPnl;
    
    // panel displayed after cancer nodule is selected
    [SerializeField] GameObject nodulePnl;

    // label used for each model (kidney or lungs)
    [SerializeField] GameObject modeLbl;

    // models
    [SerializeField] GameObject lungs;
    [SerializeField] GameObject kidneys;

    // initial screen mode selection variable 
    [SerializeField] GameObject modelSelectPnl;

    // axis status based on number of taps
    string axisStatus = "";
    [SerializeField] GameObject modeImage;
    public Sprite xImage; 
    public Sprite yImage;
    public Sprite zImage;

    // displays kidneys when selected
    public void SelecKidneys()
    {
        lungs.SetActive(false);
        kidneys.SetActive(true);
        Setup();
    }

    // displays lungs when selected
    public void SelectLungs()
    {
        lungs.SetActive(true);
        kidneys.SetActive(false);
        Setup();
    }

    // functions is called on initial load
    private void Setup()
    {
        // helpPanel.SetActive(true);
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

        helpBtn.SetActive(true);
        // detect finger tap         
        Lean.Touch.LeanTouch.OnFingerTap += HandleFingerTap;


        // initial state of the model
        modelTranslateScript.enabled = true;
        modelScaleScript.enabled = true;
        modelRotateXScript.enabled = true;
        modelRotateYScript.enabled = false;
        modelRotateZScript.enabled = false;
        axisStatus = "X Axis";
    }


    // function is called onDisable 
    void OnDisable()
    {
        Lean.Touch.LeanTouch.OnFingerTap -= HandleFingerTap;
    }


    // function to handle finger taps from user
    void HandleFingerTap(Lean.Touch.LeanFinger finger)
    {
        var fingerTapCount = finger.TapCount;


        // actions based on number of user finger taps
        switch (fingerTapCount)
        {
            // x axis 
            case 1:
                modelTranslateScript.enabled = true;
                modelScaleScript.enabled = true;
                modelRotateXScript.enabled = true;
                modelRotateYScript.enabled = false;
                modelRotateZScript.enabled = false;
                modeImage.GetComponent<Image>().sprite = xImage;
                break;
            // y axis 
            case 2:
                modelTranslateScript.enabled = false;
                modelScaleScript.enabled = false;
                modelRotateXScript.enabled = false;
                modelRotateYScript.enabled = true;
                modelRotateZScript.enabled = false;
                modeImage.GetComponent<Image>().sprite = yImage;
                break;
            // z axis
            case 3:
                modelTranslateScript.enabled = false;
                modelScaleScript.enabled = false;
                modelRotateXScript.enabled = false;
                modelRotateYScript.enabled = false;
                modelRotateZScript.enabled = true;
                modeImage.GetComponent<Image>().sprite = zImage;
                break;
            default:
                axisStatus = "Tap Once to Reset";
                break;
        }
        
        // TODO: Look into making this "less" expensive and refactoring it 
        modeLbl.GetComponent<TMPro.TextMeshProUGUI>().text = axisStatus;
        texts[textsCounter == 0 ? textsCounter : textsCounter - 1].GetComponent<Lean.Touch.LeanTranslate>().enabled =
            false;
        texts[textsCounter == 0 ? textsCounter : textsCounter - 1].GetComponent<Lean.Touch.LeanScale>().enabled = false;
    }

    // function is called to hide/show shell depending on the current state of shell
    public void Shell()
    {
        if (shell.transform.GetChild(0).GetChild(0).GetComponent<MeshRenderer>().enabled)
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

    // function is called when user starts annotating on screen
    public void Annotate()
    {
        modelTranslateScript.enabled = false;
        modelScaleScript.enabled = false;
        modelRotateXScript.enabled = false;
        modelRotateYScript.enabled = false;
        modelRotateZScript.enabled = false;
        texts[textsCounter].GetComponent<Lean.Touch.LeanTranslate>().enabled = true;
        texts[textsCounter].GetComponent<Lean.Touch.LeanScale>().enabled = true;
        annotationPnl.SetActive(true);

        // 5 annotations is the max 
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

    // function is called when user is done annotating 
    public void DoneAnnotating()
    {
        texts[textsCounter - 1].GetComponent<TextMesh>().text =
            annotationInputText.GetComponent<TMPro.TMP_InputField>().text;
        annotationPnl.SetActive(false);
    }

    // function is called after user preses "OK" after viewing the cancer nodule
    public void DoneWithNodule()
    {
        nodulePnl.SetActive(false);
    }

    public void DisplayHelp()
    {
        bool isHelpActive = helpPnl.activeSelf;
        helpPnl.SetActive(!isHelpActive);
        helpBtn.SetActive(isHelpActive);
    }
}