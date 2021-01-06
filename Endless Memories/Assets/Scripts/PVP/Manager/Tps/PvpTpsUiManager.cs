using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

// Description:
// This class manages TPS Ui initialization including:
// (1) Adding button listeners
public class PvpTpsUiManager : MonoBehaviour
{
    public Button throwBtn;
    public Button dropBtn;

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
            Button Throw = throwBtn.GetComponent<Button>();

            Button Drop = dropBtn.GetComponent<Button>();

            Reaper reaper = tpsPlayer.GetComponent<Reaper>();
            
            Throw.onClick.AddListener(reaper.Throw);
            Drop.onClick.AddListener(reaper.Drop);
        }
    }
}
