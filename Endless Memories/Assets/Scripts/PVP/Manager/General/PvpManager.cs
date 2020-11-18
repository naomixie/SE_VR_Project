using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

// Description:
// This class manages elements generally used in multiplayer mode including:
// (1) Time count down
// (2) Pass signals from guest(TPS) to host(FPS) when specific skills have been called
// (3) Manage game rounds
public class PvpManager : MonoBehaviourPunCallbacks, IPunObservable
{
    // References to managers
    public PvpFpsManager pvpFpsManager;
    public PvpTpsManager pvpTpsManager;

    public PvpUiManager pvpUiManager;


    // Variables for count downs
    bool pvpTimeIsRunning = false;
    bool prepareTimeIsRunning = false;

    float pvpTimeCountData = 30;
    float prepareTimeCountData = 10;

    float pvpTimeCount;
    float prepareTimeCount;

    // Variables for managing scores and waves
    int waveCount = 0;
    int tScore = 0;
    int fScore = 0;


    // Variables for sending signals
    public bool noiceFlag = false;
    public Vector3 noticePosition;
    public bool dropFlag = false;
    public Vector3 dropPosition;

    void Start()
    {
        pvpUiManager = gameObject.GetComponent<PvpUiManager>();

        pvpTimeCount = pvpTimeCountData;
        prepareTimeCount = prepareTimeCountData;

        PrepareWave();
    }

    void Update()
    {
        Sync();

        Count();

        UpdateText();
    }



    #region IPunObservable implementation
    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.IsWriting)
        {
            // We own this player: send the others our data
            stream.SendNext(pvpTimeCount);
            stream.SendNext(pvpTimeIsRunning);
            stream.SendNext(prepareTimeCount);
            stream.SendNext(prepareTimeIsRunning);
            stream.SendNext(waveCount);

            stream.SendNext(tScore);
            stream.SendNext(fScore);
        }
        else
        {
            // Network player, receive data
            this.pvpTimeCount = (float)stream.ReceiveNext();
            this.pvpTimeIsRunning = (bool)stream.ReceiveNext();
            this.prepareTimeCount = (float)stream.ReceiveNext();
            this.prepareTimeIsRunning = (bool)stream.ReceiveNext();
            this.waveCount = (int)stream.ReceiveNext();

            this.tScore = (int)stream.ReceiveNext();
            this.fScore = (int)stream.ReceiveNext();
        }
    }
    #endregion

    
    // Displays computed time
    void DisplayTime(float timeToDisplay)
    {
        float minutes = Mathf.FloorToInt(timeToDisplay / 60);  
        float seconds = Mathf.FloorToInt(timeToDisplay % 60);

        pvpUiManager.timeText.text = "TIME\n" + string.Format("{0:00}:{1:00}", minutes, seconds);
    }

    void Count()
    {
        if(prepareTimeIsRunning)
            CountPrepare();
        else if(pvpTimeIsRunning)
            CountPvp();
    }

    void CountPvp()
    {
        if (pvpTimeCount > 0)
        {
            pvpTimeCount -= Time.deltaTime;
        }
        else
        {
            pvpTimeCount = 0;
            pvpTimeCountData += 30;
            PrepareWave();
        }
        DisplayTime(pvpTimeCount);
    }

    void CountPrepare()
    {
        if (prepareTimeCount > 0)
        {
            prepareTimeCount -= Time.deltaTime;
        }
        else
        {
            prepareTimeCount = 0;
            StartWave();
        }
        DisplayTime(prepareTimeCount);
    }

    void PrepareWave()
    {
        prepareTimeCount = prepareTimeCountData;
        pvpTimeIsRunning = false;
        prepareTimeIsRunning = true;
    }

    void StartWave()
    {
        pvpTimeCount = pvpTimeCountData;
        prepareTimeIsRunning = false;
        pvpTimeIsRunning = true;
        waveCount++;
    }

    // Updating texts
    void UpdateText()
    {
        pvpUiManager.fpsScoreText.text = "SURVIVOR\n" + fScore.ToString();
        pvpUiManager.tpsScoreText.text = "REAPER\n" + tScore.ToString();
        pvpUiManager.waveText.text = "WAVE\n" + waveCount.ToString();
    }

    // Sync variables if they're not the same
    void Sync()
    {
        if(pvpTpsManager.pvpTpsDataManager.tScore != tScore)
        {
            tScore = pvpTpsManager.pvpTpsDataManager.tScore;
        }

        if(pvpFpsManager.fScore != fScore)
        {
            fScore = pvpFpsManager.fScore;
        }

        if(pvpTpsManager.pvpTpsDataManager.noiceFlag != noiceFlag)
        {
            noiceFlag = pvpTpsManager.pvpTpsDataManager.noiceFlag;
            noticePosition = pvpTpsManager.pvpTpsDataManager.noticePosition;
            NoticeSound(noticePosition);
        }

        if(pvpTpsManager.pvpTpsDataManager.dropFlag != dropFlag)
        {
            dropFlag = pvpTpsManager.pvpTpsDataManager.dropFlag;
            dropPosition = pvpTpsManager.pvpTpsDataManager.dropPosition;
            DropGhost(dropPosition);
        }
    }

    // Teleporting ghost
    public void DropGhost(Vector3 dropPosition)
    {
        GameObject.FindGameObjectWithTag("Chaser").GetComponent<Chase>().teleport(dropPosition);
    }

    // Making sounds
    public void NoticeSound(Vector3 noticePosition)
    {
        GameObject.FindGameObjectWithTag("Chaser").GetComponent<Chase>().noticeSound(100, noticePosition);
    }
}