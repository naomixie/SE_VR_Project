using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PvpManager : MonoBehaviourPunCallbacks, IPunObservable
{
    bool pvpTimeIsRunning = false;
    bool prepareTimeIsRunning = false;

    float pvpTimeCountData = 30;
    float prepareTimeCountData = 10;

    float pvpTimeCount;
    float prepareTimeCount;


    int waveCount = 0;
    int tScore = 0;
    int fScore = 0;

    public PvpFpsManager pvpFpsManager;
    public PvpTpsManager pvpTpsManager;

    // Photon Synchronization Test
    public Text tpsScoreText;
    public Text fpsScoreText;
    public Text waveText;
    public Text timeText;


    public bool noiceFlag = false;
    public Vector3 noticePosition;
    public bool dropFlag = false;
    public Vector3 dropPosition;


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


    // Start is called before the first frame update
    void Start()
    {
        pvpTimeCount = pvpTimeCountData;
        prepareTimeCount = prepareTimeCountData;

        PrepareWave();
    }

    // Update is called once per frame
    void Update()
    {
        Sync();

        Count();

        UpdateText();
    }


    void DisplayTime(float timeToDisplay)
    {
        float minutes = Mathf.FloorToInt(timeToDisplay / 60);  
        float seconds = Mathf.FloorToInt(timeToDisplay % 60);

        timeText.text = "TIME\n" + string.Format("{0:00}:{1:00}", minutes, seconds);
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
            Debug.Log("Time has run out!");
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
            Debug.Log("Time has run out!");
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

    void UpdateText()
    {
        fpsScoreText.text = fScore.ToString();
        tpsScoreText.text = tScore.ToString();
        waveText.text = "WAVE\n" + waveCount.ToString();
    }

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

    public void DropGhost(Vector3 dropPosition)
    {
        GameObject.FindGameObjectWithTag("Chaser").GetComponent<Chase>().teleport(dropPosition);
    }

    public void NoticeSound(Vector3 noticePosition)
    {
        GameObject.FindGameObjectWithTag("Chaser").GetComponent<Chase>().noticeSound(100, noticePosition);
    }

    public void FScore(int score)
    {
        this.fScore = score;
    }

    public void TScore(int score)
    {
        this.tScore = score;
    }
}