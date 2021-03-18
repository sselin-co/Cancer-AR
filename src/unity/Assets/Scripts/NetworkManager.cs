using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;


public class NetworkManager : MonoBehaviourPunCallbacks
{
    
    public Text connectionStatus;

    
    // Start is called before the first frame update
    private void Start()
    {
        PhotonNetwork.AutomaticallySyncScene = true;
        connectionStatus.text = "Connecting...";
        PhotonNetwork.ConnectUsingSettings();
        Debug.Log("Connecting to Server...");
    }
    
    public override void OnConnectedToMaster() //Callback function for when the first connection is established successfully.
    {
        connectionStatus.text = "Connected to " + PhotonNetwork.CloudRegion;
        connectionStatus.color = Color.yellow;
        Debug.Log("Cloud Region is " + PhotonNetwork.CloudRegion);
        onClick_CreateRoom();
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
        connectionStatus.text = "Connected to Photon!";
        connectionStatus.color = Color.green;
        RoomOptions roomOptions = new RoomOptions();
        roomOptions.MaxPlayers = 4;
        PhotonNetwork.JoinOrCreateRoom("Demo", roomOptions, TypedLobby.Default);
        Debug.Log("Connected to Photon");

        // check to make sure room name is not empty
        // if (roomName.text.Length > 0)
        // {
        //     
        // }
        // else
        // {
        //     Debug.Log("Enter a room name first");
        // }
    }
    
    public override void OnCreatedRoom()
    {
        connectionStatus.text = "Created Room: " + PhotonNetwork.CurrentRoom.Name;
        connectionStatus.color = Color.cyan;
        Debug.Log("Room created successfully " + PhotonNetwork.CurrentRoom.Name);
    }

    public override void OnJoinedRoom()
    {
        connectionStatus.text = "Room: " + PhotonNetwork.CurrentRoom.Name + " \nPlayer #: " + PhotonNetwork.CurrentRoom.PlayerCount;
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
