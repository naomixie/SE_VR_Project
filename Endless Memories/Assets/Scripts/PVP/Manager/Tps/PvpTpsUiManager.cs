using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

// Description:
// This class manages TPS Ui initialization including:
// (1) Adding button listeners
public class PvpTpsUiManager : MonoBehaviour
{
    public Button prepareThrowBtn;
    public Button cancelThrowBtn;
    public Button prepareDropBtn;
    public Button cancelDropBtn;

    public GameObject tpsPlayer;
    public Canvas tpsCanvas;

    void Start()
    {
        
    }

    void Update()
    {

    }

    public void Init()
    {
        tpsCanvas.gameObject.SetActive(true);
        InitButtonListenr();
    }

    public void InitButtonListenr()
    {
        if(tpsPlayer != null)
        {
            Button prepareThrow = prepareThrowBtn.GetComponent<Button>();
            Button cancelThrow= cancelThrowBtn.GetComponent<Button>();

            Button prepareDrop = prepareDropBtn.GetComponent<Button>();
            Button cancelDrop= cancelDropBtn.GetComponent<Button>();

            Reaper reaper = tpsPlayer.GetComponent<Reaper>();
            
            prepareThrow.onClick.AddListener(reaper.PrepareThrow);
            cancelThrow.onClick.AddListener(reaper.CancelThrow);

            prepareDrop.onClick.AddListener(reaper.PrepareDrop);
            cancelDrop.onClick.AddListener(reaper.CancelDrop);
        }
    }
}
