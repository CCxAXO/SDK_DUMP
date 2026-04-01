// Class Lobby.LobbyBeaconClient
// Size: 0x580 (Inherited: 0x4f8)
struct ALobbyBeaconClient : AOnlineBeaconClient {
	struct ALobbyBeaconState* LobbyState; // 0x4f8(0x08)
	struct ALobbyBeaconPlayerState* PlayerState; // 0x500(0x08)
	char pad_508[0x1]; // 0x508(0x01)
	enum class ELobbyBeaconJoinState LobbyJoinServerState; // 0x509(0x01)
	char pad_50A[0x76]; // 0x50a(0x76)

	void ServerSetPartyOwner(struct FUniqueNetIdRepl InUniqueId, struct FUniqueNetIdRepl InPartyOwnerId); // Function Lobby.LobbyBeaconClient.ServerSetPartyOwner // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x6f1fa80
	void ServerNotifyJoiningServer(); // Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x6f1ffe0
	void ServerLoginPlayer(struct FString InSessionId, struct FUniqueNetIdRepl InUniqueId, struct FString UrlString); // Function Lobby.LobbyBeaconClient.ServerLoginPlayer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x6f200e0
	void ServerKickPlayer(struct FUniqueNetIdRepl PlayerToKick, struct FText Reason); // Function Lobby.LobbyBeaconClient.ServerKickPlayer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x6f1fd40
	void ServerDisconnectFromLobby(); // Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x6f20060
	void ServerCheat(struct FString Msg); // Function Lobby.LobbyBeaconClient.ServerCheat // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x6f20490
	void ClientWasKicked(struct FText KickReason); // Function Lobby.LobbyBeaconClient.ClientWasKicked // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x6f1f740
	void ClientSetInviteFlags(struct FJoinabilitySettings Settings); // Function Lobby.LobbyBeaconClient.ClientSetInviteFlags // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x6f20610
	void ClientPlayerLeft(struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerLeft // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x6f1f370
	void ClientPlayerJoined(struct FText NewPlayerName, struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerJoined // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x6f1f4f0
	void ClientLoginComplete(struct FUniqueNetIdRepl InUniqueId, bool bWasSuccessful); // Function Lobby.LobbyBeaconClient.ClientLoginComplete // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x6f1f860
	void ClientJoinGame(); // Function Lobby.LobbyBeaconClient.ClientJoinGame // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x4d00520
	void ClientAckJoiningServer(); // Function Lobby.LobbyBeaconClient.ClientAckJoiningServer // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x4200e80
};

// Class Lobby.LobbyBeaconHost
// Size: 0x4d0 (Inherited: 0x488)
struct ALobbyBeaconHost : AOnlineBeaconHostObject {
	char pad_488[0x10]; // 0x488(0x10)
	struct TSoftClassPtr<UObject> LobbyStateClass; // 0x498(0x30)
	struct ALobbyBeaconState* LobbyState; // 0x4c8(0x08)
};

// Class Lobby.LobbyBeaconPlayerState
// Size: 0x530 (Inherited: 0x460)
struct ALobbyBeaconPlayerState : AInfo {
	struct FText DisplayName; // 0x460(0x18)
	struct FUniqueNetIdRepl UniqueId; // 0x478(0x30)
	struct FUniqueNetIdRepl PartyOwnerUniqueId; // 0x4a8(0x30)
	bool bInLobby; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct AOnlineBeaconClient* ClientActor; // 0x4e0(0x08)
	char pad_4E8[0x48]; // 0x4e8(0x48)

	void OnRep_UniqueId(); // Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId // (Final|Native|Protected) // @ game+0x6f251d0
	void OnRep_PartyOwner(); // Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner // (Final|Native|Protected) // @ game+0x6f25170
	void OnRep_InLobby(); // Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby // (Final|Native|Protected) // @ game+0x6f25110
};

// Class Lobby.LobbyBeaconState
// Size: 0x608 (Inherited: 0x460)
struct ALobbyBeaconState : AInfo {
	int32_t MaxPlayers; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
	struct ALobbyBeaconPlayerState* LobbyBeaconPlayerStateClass; // 0x468(0x08)
	char pad_470[0x8]; // 0x470(0x08)
	bool bLobbyStarted; // 0x478(0x01)
	char pad_479[0x3]; // 0x479(0x03)
	float WaitForPlayersTimeRemaining; // 0x47c(0x04)
	struct FLobbyPlayerStateInfoArray Players; // 0x480(0x120)
	char pad_5A0[0x68]; // 0x5a0(0x68)

	void OnRep_WaitForPlayersTimeRemaining(); // Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining // (Final|Native|Protected) // @ game+0x6f27200
	void OnRep_LobbyStarted(); // Function Lobby.LobbyBeaconState.OnRep_LobbyStarted // (Final|Native|Protected) // @ game+0x6f27230
};

