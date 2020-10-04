using Photon.Pun;
using Photon.Realtime;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PvpMainMenu : MonoBehaviourPunCallbacks
{
    [SerializeField] private GameObject findOpponentPanel = null;
    [SerializeField] private GameObject waitingStatusPanel = null;
    
    private Text waitingStatusText = null;
    private bool isConnecting = false;

    private const string GameVersion = "0.1";
    private const int MaxPlayersPerRoom = 2;


    private void Start()
    {
        waitingStatusText = waitingStatusPanel.gameObject.GetComponentInChildren<Text>();
    }

    private void Awake()
    {
        PhotonNetwork.AutomaticallySyncScene = true;
    }

    public void FindOpponent()
    {
        isConnecting = true;

        findOpponentPanel.SetActive(false);
        waitingStatusPanel.SetActive(true);

        waitingStatusText.text = "Searching...";

        if(PhotonNetwork.IsConnected)
        {
            PhotonNetwork.JoinRandomRoom();
        }
        else
        {
            PhotonNetwork.GameVersion = GameVersion;
            PhotonNetwork.ConnectUsingSettings();
        }
    }

    public override void OnConnectedToMaster()
    {
        Debug.Log("Connected to Master");
        if(isConnecting)
        {
            PhotonNetwork.JoinRandomRoom();
        }
    }

    public override void OnDisconnected(DisconnectCause cause)
    {
        waitingStatusPanel.SetActive(false);
        findOpponentPanel.SetActive(true);

        Debug.Log($"Disconnected due to: {cause}.");
    }

    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        Debug.Log("No clients are waiting for an opponent, creating a new room.");

        PhotonNetwork.CreateRoom(null, new RoomOptions { MaxPlayers = MaxPlayersPerRoom });
    }

    // For player joining the room
    public override void OnJoinedRoom()
    {
        // TPS mode for player joining the room.
        PlayerPrefs.SetInt("mode", 3);
        Debug.Log("Client successfully joined a room.");

        int playerCount = PhotonNetwork.CurrentRoom.PlayerCount;

        if(playerCount < MaxPlayersPerRoom)
        {
            waitingStatusText.text = "Waiting for Opponent...";
            Debug.Log("Client is waiting for an opponent.");
        }
        else
        {
            waitingStatusText.text = "Opponent Found!";
            Debug.Log("Match is ready to begin.");
        }
    }

    // For player in the room
    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        // FPS mode for player creating the room.
        PlayerPrefs.SetInt("mode", 1);
        if (PhotonNetwork.CurrentRoom.PlayerCount >= MaxPlayersPerRoom)
        {
            PhotonNetwork.CurrentRoom.IsOpen = false;

            Debug.Log("Match is ready to begin.");
            waitingStatusText.text = "Opponent Found!";

            PhotonNetwork.LoadLevel("Scene_Main");
        }
    }
}
