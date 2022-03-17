using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using TMPro;


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
    [SerializeField] GameObject shellActiveSprite;
    [SerializeField] GameObject shellInactiveSprite;
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

    // dropdown object for model selection
    public GameObject modelDropdown;

    // Used in CircleAnnotation.cs to act as the anchor for circles
    public GameObject centralObject;

    // gets dropdown value and displays the appropriate model
    public void ModelSelect()
    {
        int val = modelDropdown.GetComponent<TMP_Dropdown>().value;
        switch (val)
        {
            case 0:
                SelectKidneys();
                break;

            case 1:
                SelectLungs();
                break;
        }
    }

    // displays lungs when selected
    public void SelectLungs()
    {
        lungs.SetActive(true);
        kidneys.SetActive(false);
        if (PhotonNetwork.IsConnected)
        {
            lungs = PhotonNetwork.Instantiate("models/model", lungs.transform.position, lungs.transform.rotation, 0);
            centralObject = GameObject.Find("ImageTarget/model/model/default");
        }

        Setup();
    }

    // displays kidneys when selected
    public void SelectKidneys()
    {
        lungs.SetActive(false);
        kidneys.SetActive(true);
        if (PhotonNetwork.IsConnected)
        {
            kidneys = PhotonNetwork.Instantiate("models/model2", kidneys.transform.position, kidneys.transform.rotation,
                0);
            centralObject = GameObject.Find("ImageTarget/model2/model/default");
        }

        Setup();
    }


    // functions is called on initial load
    private void Setup()
    {
        // initialize game objects based on their tags
        modelTranslateScript = GameObject.FindWithTag("model").GetComponent<Lean.Touch.LeanTranslate>();
        modelScaleScript = GameObject.FindWithTag("model").GetComponent<Lean.Touch.LeanScale>();
        modelRotateXScript = GameObject.FindWithTag("model").GetComponent<Lean.Touch.LeanRotateCustomAxisX>();
        modelRotateYScript = GameObject.FindWithTag("model").GetComponent<Lean.Touch.LeanRotateCustomAxisY>();
        modelRotateZScript = GameObject.FindWithTag("model").GetComponent<Lean.Touch.LeanRotateCustomAxisZ>();
        shell = GameObject.FindWithTag("model");
        shellColl = GameObject.FindWithTag("model").GetComponent<BoxCollider>();
        
        modelSelectPnl.SetActive(false);
        helpPnl.SetActive(true);
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

    void Update()
    {
        modeImage.SetActive(!Annotate.isAnnotateActive);
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

        // only allow scaling, translating and rotating if annotate is inactive
        if (!Annotate.isAnnotateActive)
        {
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
            }
        }
        // disable all model attributes when annotating is active
        else
        {
            modelTranslateScript.enabled = false;
            modelScaleScript.enabled = false;
            modelRotateXScript.enabled = false;
            modelRotateYScript.enabled = false;
            modelRotateZScript.enabled = false;
        }

        // TODO: Look into making this "less" expensive and refactoring it 
        modeLbl.GetComponent<TMPro.TextMeshProUGUI>().text = axisStatus;
        // TODO: stop following line from  creating an ArgumentOutOfRange exception
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
            shellActiveSprite.SetActive(true);
            shellInactiveSprite.SetActive(false);
        }
        else
        {
            shell.transform.GetChild(0).GetChild(0).GetComponent<MeshRenderer>().enabled = true;
            shellColl.enabled = true;
            shellActiveSprite.SetActive(false);
            shellInactiveSprite.SetActive(true);
        }

        UpdateShellButtonLabel();
    }

    private void UpdateShellButtonLabel()
    {
        /** shellLbl.GetComponent<TMPro.TextMeshProUGUI>().text =
            (shell.transform.GetChild(0).GetChild(0).GetComponent<MeshRenderer>().enabled)
                ? "Show shell"
                : "Hide shell"; **/
        /** if (shell.transform.GetChild(0).GetChild(0).GetComponent<MeshRenderer>().enabled)
        {
            shellActiveSprite.SetActive(true);
            shellInactiveSprite.SetActive(false);
        }
        else
        {
            shellActiveSprite.SetActive(false);
            shellInactiveSprite.SetActive(true);
        } **/
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
        UpdateShellButtonLabel();
    }
    public void onClick_ExitButton()
    {
        Application.Quit();
    }
    
}