using System;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;


public class NetworkManager : MonoBehaviourPunCallbacks
{
    public Text connectionStatus;
    [SerializeField] GameObject RoomNameInput;
    public String RoomName;
    private int ServerPing;

    [SerializeField] GameObject CreateRoomPnl;

    // Start is called before the first frame update
    private void Start()
    {
        PhotonNetwork.AutomaticallySyncScene = true;
        connectionStatus.text = "Connecting...";
        PhotonNetwork.ConnectUsingSettings();
        Debug.Log("Connecting to Server...");
    }

    public override void
        OnConnectedToMaster() //Callback function for when the first connection is established successfully.
    {
        if (PhotonNetwork.CloudRegion.Equals("cae/*"))
        {
            connectionStatus.text = "Connected to Photon Server: Canada - Ping: " + ServerPing;
        }
        else
        {
            connectionStatus.text = "Connected to Photon Server: " + PhotonNetwork.CloudRegion;
        }

        connectionStatus.color = Color.green;
        Debug.Log("Cloud Region is " + PhotonNetwork.CloudRegion);
    }

    private void Update()
    {
        RoomName = RoomNameInput.GetComponent<TMPro.TMP_InputField>().text;
        ServerPing = PhotonNetwork.GetPing();
    }

    public void onClick_CreateRoom()
    {
        Debug.Log("onClick_CreateRoom");
        // if not connected, do not create room
        if (!PhotonNetwork.IsConnected)
        {
            connectionStatus.text = "Not Connected";
            connectionStatus.color = Color.red;
            Debug.Log("Not connected");
            return;
        }

        RoomOptions roomOptions = new RoomOptions();
        roomOptions.MaxPlayers = 4;
        Debug.Log("Connected to Photon");

        // check to make sure room name is not empty
        if (RoomName.Length > 0)
        {
            connectionStatus.text = "Connecting to " + RoomName + "...";
            connectionStatus.color = Color.white;
            PhotonNetwork.JoinOrCreateRoom(RoomName, roomOptions, TypedLobby.Default);
            CreateRoomPnl.SetActive(false);
        }
        else
        {
            Debug.Log("Enter a room name first");
        }
    }

    public override void OnCreatedRoom()
    {
        connectionStatus.text = "Created Room: " + PhotonNetwork.CurrentRoom.Name;
        connectionStatus.color = Color.cyan;
        Debug.Log("Room created successfully " + PhotonNetwork.CurrentRoom.Name);
    }

    public override void OnJoinedRoom()
    {
        connectionStatus.text = "Room Name: " + PhotonNetwork.CurrentRoom.Name + ", Player #: " +
                                PhotonNetwork.CurrentRoom.PlayerCount + " Ping: " + ServerPing;
        connectionStatus.color = Color.cyan;
        Debug.Log("Joined Room successfully " + PhotonNetwork.CurrentRoom.Name);
    }

    public override void OnJoinRoomFailed(short returnCode, string message)
    {
        connectionStatus.text = "Failed to Join Room ";
        connectionStatus.color = Color.red;
        Debug.LogErrorFormat("Room creation failed with error code {0} and error message {1}", returnCode, message);
    }

    //callback function for if we fail to create a room. Most likely fail because room name was taken.
    public override void OnCreateRoomFailed(short returnCode, string message)
    {
        connectionStatus.text = "Failed to Create Room";
        connectionStatus.color = Color.red;
        Debug.Log("Failed to create room... trying again");
    }
}