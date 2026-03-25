// Class RGIFriends.RGIFriendsAddFriendModalViewModel
// Size: 0x100 (Inherited: 0xd8)
struct URGIFriendsAddFriendModalViewModel : URGISocialSharedModalViewModelBase {
	struct URGIFriendsSubsystem* FriendsSubsystem; // 0xd8(0x08)
	struct FText AddFriendInput; // 0xe0(0x18)
	enum class ERGIFriendsRequestResponseErrors ErrorResult; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)

	void SetInputText(struct FText& InText); // Function RGIFriends.RGIFriendsAddFriendModalViewModel.SetInputText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x52f5720
};

// Class RGIFriends.RGIFriendsCollectionViewModel
// Size: 0xe8 (Inherited: 0x70)
struct URGIFriendsCollectionViewModel : UMVVMViewModelBase {
	struct TArray<struct URGIFriendsPlayerViewModel*> Friends; // 0x70(0x10)
	struct URGIFriendsPlayerViewModel* SelectedFriendsPlayerViewModel; // 0x80(0x08)
	struct TScriptInterface<IRGIFriendsDataStore> DataStore; // 0x88(0x10)
	struct TMap<struct FString, struct URGIFriendsPlayerViewModel*> FriendMap; // 0x98(0x50)

	void InitializeViewModel(struct UGameInstance* GameInstance); // Function RGIFriends.RGIFriendsCollectionViewModel.InitializeViewModel // (Native|Public|BlueprintCallable) // @ game+0x52d9a80
	void HandleFriendsUpdated(struct FRGIFriendsPlayers& FriendList); // Function RGIFriends.RGIFriendsCollectionViewModel.HandleFriendsUpdated // (Final|Native|Private|HasOutParms) // @ game+0x52f5ce0
	struct URGIFriendsPlayerViewModel* GetSelectedFriendsPlayerViewModel(); // Function RGIFriends.RGIFriendsCollectionViewModel.GetSelectedFriendsPlayerViewModel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52f5e60
	struct URGIFriendsPlayerViewModel* GetFriendByPuuid(struct FString Puuid); // Function RGIFriends.RGIFriendsCollectionViewModel.GetFriendByPuuid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52f61f0
	struct URGIFriendsPlayerViewModel* AddFriendToCollection(struct URGIFriendsPlayer* FriendData); // Function RGIFriends.RGIFriendsCollectionViewModel.AddFriendToCollection // (Final|Native|Public|BlueprintCallable) // @ game+0x52f5e80
};

// Class RGIFriends.RGIFriendsFriendRequestCollectionViewModel
// Size: 0xb8 (Inherited: 0x70)
struct URGIFriendsFriendRequestCollectionViewModel : UMVVMViewModelBase {
	struct TArray<struct URGIFriendsFriendRequestViewModel*> InboundFriendRequestCollection; // 0x70(0x10)
	struct TArray<struct URGIFriendsFriendRequestViewModel*> OutboundFriendRequestCollection; // 0x80(0x10)
	int32_t InboundFriendRequestCount; // 0x90(0x04)
	int32_t OutboundFriendRequestCount; // 0x94(0x04)
	struct TScriptInterface<IRGIFriendsDataStore> DataStore; // 0x98(0x10)
	struct URGISocialSharedModalManagerViewModel* ModalManagerViewModel; // 0xa8(0x08)
	struct UGameInstance* CachedGameInstance; // 0xb0(0x08)

	struct FMVVMViewModelContext MakeContext(); // Function RGIFriends.RGIFriendsFriendRequestCollectionViewModel.MakeContext // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x52f6c60
	struct TArray<struct URGIFriendsFriendRequestViewModel*> GetOutboundFriendRequestCollection(); // Function RGIFriends.RGIFriendsFriendRequestCollectionViewModel.GetOutboundFriendRequestCollection // (Final|Native|Public|BlueprintCallable) // @ game+0x52f6a20
	struct URGIFriendsFriendRequestViewModel* GetInboundFriendRequestViewModelAtIndex(int32_t Index); // Function RGIFriends.RGIFriendsFriendRequestCollectionViewModel.GetInboundFriendRequestViewModelAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52f67c0
	struct TArray<struct URGIFriendsFriendRequestViewModel*> GetInboundFriendRequestCollection(); // Function RGIFriends.RGIFriendsFriendRequestCollectionViewModel.GetInboundFriendRequestCollection // (Final|Native|Public|BlueprintCallable) // @ game+0x52f6b40
	struct URGIFriendsFriendRequestViewModel* GetFriendRequestViewModel(struct FString Puuid); // Function RGIFriends.RGIFriendsFriendRequestCollectionViewModel.GetFriendRequestViewModel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52f68e0
};

// Class RGIFriends.RGIFriendsFriendRequestViewModel
// Size: 0xc8 (Inherited: 0x70)
struct URGIFriendsFriendRequestViewModel : UMVVMViewModelBase {
	char pad_70[0x8]; // 0x70(0x08)
	struct FString Puuid; // 0x78(0x10)
	struct FString GameName; // 0x88(0x10)
	struct FString GameTag; // 0x98(0x10)
	enum class ERGIFriendRequestType RequestType; // 0xa8(0x01)
	enum class ERGIFriendsPlatform Platform; // 0xa9(0x01)
	char pad_AA[0x6]; // 0xaa(0x06)
	struct TScriptInterface<IRGIFriendsDataStore> DataStore; // 0xb0(0x10)
	struct URGIFriendsFriendRequestCollectionViewModel* OwningCollectionViewModel; // 0xc0(0x08)

	enum class ERGIFriendRequestType GetRequestType(); // Function RGIFriends.RGIFriendsFriendRequestViewModel.GetRequestType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52f75c0
	struct FString GetPuuid(); // Function RGIFriends.RGIFriendsFriendRequestViewModel.GetPuuid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52f7780
	enum class ERGIFriendsPlatform GetPlatform(); // Function RGIFriends.RGIFriendsFriendRequestViewModel.GetPlatform // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52f75a0
	struct FString GetGameTag(); // Function RGIFriends.RGIFriendsFriendRequestViewModel.GetGameTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52dc140
	struct FString GetGameName(); // Function RGIFriends.RGIFriendsFriendRequestViewModel.GetGameName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52f7680
	struct FString GetFullRiotID(); // Function RGIFriends.RGIFriendsFriendRequestViewModel.GetFullRiotID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52f75e0
	void DeclineFriendRequest(struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsFriendRequestViewModel.DeclineFriendRequest // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x52f7140
	void AcceptFriendRequest(struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsFriendRequestViewModel.AcceptFriendRequest // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x52f7370
};

// Class RGIFriends.RGIFriendsPlayerActionModalViewModel
// Size: 0xf0 (Inherited: 0xd8)
struct URGIFriendsPlayerActionModalViewModel : URGISocialSharedModalViewModelBase {
	struct FString PlayerPuuid; // 0xd8(0x10)
	enum class ERGIFriendsFriendStatus PlayerStatus; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
};

// Class RGIFriends.RGIFriendsPlayerViewModel
// Size: 0x208 (Inherited: 0x70)
struct URGIFriendsPlayerViewModel : UMVVMViewModelBase {
	struct FString Puuid; // 0x70(0x10)
	struct FString GameName; // 0x80(0x10)
	struct FString PreferredDisplayName; // 0x90(0x10)
	struct FString GameTag; // 0xa0(0x10)
	struct FString Product; // 0xb0(0x10)
	struct FString ProductPresenceName; // 0xc0(0x10)
	struct FString ProductFolderName; // 0xd0(0x10)
	struct FString VoiceSessionId; // 0xe0(0x10)
	struct FString Note; // 0xf0(0x10)
	struct FString FirstPartyAAlias; // 0x100(0x10)
	struct FString FirstPartyBAlias; // 0x110(0x10)
	struct FString FirstPartyBSuffix; // 0x120(0x10)
	struct FString Message; // 0x130(0x10)
	bool bIsSelectedFriend; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct FString AccountRank; // 0x148(0x10)
	enum class ERGIFriendsFriendStatus Status; // 0x158(0x01)
	enum class ERGIFriendsPlatform Platform; // 0x159(0x01)
	char pad_15A[0x2]; // 0x15a(0x02)
	int32_t VisiblePlatforms; // 0x15c(0x04)
	struct FString PresenceState; // 0x160(0x10)
	char pad_170[0x20]; // 0x170(0x20)
	bool bIsDiscordFriend; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct FString DiscordDisplayName; // 0x198(0x10)
	bool bIsRiotFriend; // 0x1a8(0x01)
	bool bIsActivePlatformFriend; // 0x1a9(0x01)
	bool bIsRiotBlocked; // 0x1aa(0x01)
	bool bIsActivePlatformBlocked; // 0x1ab(0x01)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct TArray<struct FRGIFriendsParty> Parties; // 0x1b0(0x10)
	struct URGIFriendsPlayer* Player; // 0x1c0(0x08)
	struct TScriptInterface<IRGIFriendsDataStore> DataStore; // 0x1c8(0x10)
	char pad_1D8[0x30]; // 0x1d8(0x30)

	void SetPresenceState(struct FString Value); // Function RGIFriends.RGIFriendsPlayerViewModel.SetPresenceState // (Final|Native|Public|BlueprintCallable) // @ game+0x52f9850
	void SetIsSelectedFriend(bool InIsSelectedFriend); // Function RGIFriends.RGIFriendsPlayerViewModel.SetIsSelectedFriend // (Final|Native|Public|BlueprintCallable) // @ game+0x52f9710
	void SetAccountRank(struct FString Value); // Function RGIFriends.RGIFriendsPlayerViewModel.SetAccountRank // (Native|Public|BlueprintCallable) // @ game+0x52f94d0
	bool IsSelectedFriend(); // Function RGIFriends.RGIFriendsPlayerViewModel.IsSelectedFriend // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52f9830
	bool IsPlayingSameProduct(); // Function RGIFriends.RGIFriendsPlayerViewModel.IsPlayingSameProduct // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52f94a0
	bool IsDiscordFriend(); // Function RGIFriends.RGIFriendsPlayerViewModel.IsDiscordFriend // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52f9bf0
	enum class ERGIFriendsFriendStatus GetStatus(); // Function RGIFriends.RGIFriendsPlayerViewModel.GetStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52f9c60
	struct FString GetPuuid(); // Function RGIFriends.RGIFriendsPlayerViewModel.GetPuuid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52fa060
	struct FString GetProduct(); // Function RGIFriends.RGIFriendsPlayerViewModel.GetProduct // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52f9e00
	struct FString GetPresenceState(); // Function RGIFriends.RGIFriendsPlayerViewModel.GetPresenceState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52f99c0
	struct FString GetPreferredDisplayName(); // Function RGIFriends.RGIFriendsPlayerViewModel.GetPreferredDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52f9cd0
	struct FString GetGameName(); // Function RGIFriends.RGIFriendsPlayerViewModel.GetGameName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52f9f30
	struct FString GetDiscordDisplayName(); // Function RGIFriends.RGIFriendsPlayerViewModel.GetDiscordDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52f9ac0
	struct FString GetAccountRank(); // Function RGIFriends.RGIFriendsPlayerViewModel.GetAccountRank // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52f9610
};

// Class RGIFriends.RGIFriendsPrivateCDataInterface
// Size: 0x30 (Inherited: 0x30)
struct URGIFriendsPrivateCDataInterface : UInterface {
};

// Class RGIFriends.RGIFriendsSendPartyInviteViewModel
// Size: 0x110 (Inherited: 0xd8)
struct URGIFriendsSendPartyInviteViewModel : URGISocialSharedModalViewModelBase {
	struct FText TextInput; // 0xd8(0x18)
	struct FText ResultText; // 0xf0(0x18)
	struct URGISocialPartyCollectionViewModel* PartyCollectionViewModel; // 0x108(0x08)

	void OnTextSubmitted(struct FText& Text); // Function RGIFriends.RGIFriendsSendPartyInviteViewModel.OnTextSubmitted // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x52faf00
};

// Class RGIFriends.RGIFriendsUserSettings
// Size: 0x120 (Inherited: 0x48)
struct URGIFriendsUserSettings : UDeveloperSettings {
	bool bUseMockedData; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TSoftObjectPtr<URGIFriendsMockedData> MockedData; // 0x50(0x30)
	struct UObject* CustomPrivateDataClass; // 0x80(0x08)
	struct TSoftClassPtr<UObject> PartyCollectionViewModelClass; // 0x88(0x30)
	struct TSoftClassPtr<UObject> FriendsCollectionViewModelClass; // 0xb8(0x30)
	struct TSoftClassPtr<UObject> FriendRequestCollectionViewModelClass; // 0xe8(0x30)
	bool bGenerateFakePuuidWhenEmpty; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
};

// Class RGIFriends.RGISocialPartyCollectionViewModel
// Size: 0xd0 (Inherited: 0x70)
struct URGISocialPartyCollectionViewModel : UMVVMViewModelBase {
	struct URGISocialSharedModalManagerViewModel* ModalManagerViewModel; // 0x70(0x08)
	struct TArray<struct URGISocialPartyViewModel*> Parties; // 0x78(0x10)
	struct TArray<struct URGISocialPartyInviteViewModel*> AllPartyInvites; // 0x88(0x10)
	struct TArray<struct URGISocialPartyInviteViewModel*> InboundPartyInvites; // 0x98(0x10)
	int32_t InboundPartyInviteCount; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct URGISocialPartyInviteViewModel*> OutboundPartyInvites; // 0xb0(0x10)
	int32_t OutboundPartyInviteCount; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct UGameInstance* CachedGameInstance; // 0xc8(0x08)

	void SetParties(struct TArray<struct URGISocialPartyViewModel*>& NewParties); // Function RGIFriends.RGISocialPartyCollectionViewModel.SetParties // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x52fdce0
	void SetAllPartyInvites(struct TArray<struct URGISocialPartyInviteViewModel*>& NewInvites); // Function RGIFriends.RGISocialPartyCollectionViewModel.SetAllPartyInvites // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x52fd2d0
	void RemoveParty(struct URGISocialPartyViewModel* PartyViewModel); // Function RGIFriends.RGISocialPartyCollectionViewModel.RemoveParty // (Native|Protected|BlueprintCallable) // @ game+0x3a67380
	void RemoveInvite(struct FString InviteId); // Function RGIFriends.RGISocialPartyCollectionViewModel.RemoveInvite // (Native|Public|BlueprintCallable) // @ game+0x52fd190
	void PartyInviteSelected(struct URGISocialPartyInviteViewModel* PartyInviteViewModel); // Function RGIFriends.RGISocialPartyCollectionViewModel.PartyInviteSelected // (Native|Public|BlueprintCallable) // @ game+0x52fe190
	void OnPartyUpdated(struct FString PartyId, struct UObject* OptionalContext); // Function RGIFriends.RGISocialPartyCollectionViewModel.OnPartyUpdated // (Native|Public|BlueprintCallable) // @ game+0x52fd920
	void OnPartyInviteSubmitted(struct FString InviteePuuid, struct FString InviterPuuid, struct UObject* OptionalContext); // Function RGIFriends.RGISocialPartyCollectionViewModel.OnPartyInviteSubmitted // (Native|Public|BlueprintCallable) // @ game+0x52fced0
	void OnPartyInviteListSubmitted(struct TArray<struct FString>& InviteePuuids, struct FString InviterPuuid, struct UObject* OptionalContext); // Function RGIFriends.RGISocialPartyCollectionViewModel.OnPartyInviteListSubmitted // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x52fcbc0
	void OnPartyCreated(struct FString PartyId, struct UObject* OptionalContext); // Function RGIFriends.RGISocialPartyCollectionViewModel.OnPartyCreated // (Native|Public|BlueprintCallable) // @ game+0x52fdb00
	void OnInviteReceived(struct FString InviteId, struct UObject* OptionalContext); // Function RGIFriends.RGISocialPartyCollectionViewModel.OnInviteReceived // (Native|Public|BlueprintCallable) // @ game+0x52fd740
	void OnInviteDeclined(struct URGISocialPartyInviteViewModel* PartyInviteViewModel); // Function RGIFriends.RGISocialPartyCollectionViewModel.OnInviteDeclined // (Native|Public) // @ game+0x52fcac0
	void OnInviteAccepted(struct URGISocialPartyInviteViewModel* PartyInviteViewModel); // Function RGIFriends.RGISocialPartyCollectionViewModel.OnInviteAccepted // (Native|Public) // @ game+0x39a26f0
	struct FMVVMViewModelContext MakeContext(); // Function RGIFriends.RGISocialPartyCollectionViewModel.MakeContext // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x52fe290
	struct URGISocialPartyInviteViewModel* GetPartyInvite(struct FString InviteId); // Function RGIFriends.RGISocialPartyCollectionViewModel.GetPartyInvite // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52fdf90
	struct URGISocialPartyViewModel* GetPartyById(struct FString PartyId); // Function RGIFriends.RGISocialPartyCollectionViewModel.GetPartyById // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52fd600
	struct TArray<struct URGISocialPartyViewModel*> GetParties(); // Function RGIFriends.RGISocialPartyCollectionViewModel.GetParties // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52fe160
	struct TArray<struct URGISocialPartyInviteViewModel*> GetOutboundInvites(); // Function RGIFriends.RGISocialPartyCollectionViewModel.GetOutboundInvites // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52fe100
	int32_t GetOutboundInviteCount(); // Function RGIFriends.RGISocialPartyCollectionViewModel.GetOutboundInviteCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4283140
	int32_t GetInviteCount(); // Function RGIFriends.RGISocialPartyCollectionViewModel.GetInviteCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52fde40
	struct URGISocialPartyInviteViewModel* GetInboundPartyInvite(int32_t Index); // Function RGIFriends.RGISocialPartyCollectionViewModel.GetInboundPartyInvite // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52fde70
	struct TArray<struct URGISocialPartyInviteViewModel*> GetInboundInvites(); // Function RGIFriends.RGISocialPartyCollectionViewModel.GetInboundInvites // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52fe130
	int32_t GetInboundInviteCount(); // Function RGIFriends.RGISocialPartyCollectionViewModel.GetInboundInviteCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52fde20
	struct TArray<struct URGISocialPartyInviteViewModel*> GetAllPartyInvites(); // Function RGIFriends.RGISocialPartyCollectionViewModel.GetAllPartyInvites // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52fe0d0
	void CreateInboundPartyInviteToast(struct URGISocialPartyInviteViewModel* NewInvite); // Function RGIFriends.RGISocialPartyCollectionViewModel.CreateInboundPartyInviteToast // (Final|Native|Public|BlueprintCallable) // @ game+0x52fd410
	void AddParty(struct URGISocialPartyViewModel* NewParty); // Function RGIFriends.RGISocialPartyCollectionViewModel.AddParty // (Native|Public|BlueprintCallable) // @ game+0x4fd8730
	void AddInvite(struct URGISocialPartyInviteViewModel* NewInvite); // Function RGIFriends.RGISocialPartyCollectionViewModel.AddInvite // (Native|Public|BlueprintCallable) // @ game+0x52fd500
};

// Class RGIFriends.RGISocialPartyInviteViewModel
// Size: 0x110 (Inherited: 0x70)
struct URGISocialPartyInviteViewModel : UMVVMViewModelBase {
	char pad_70[0x8]; // 0x70(0x08)
	struct FString InviteId; // 0x78(0x10)
	struct FText Description; // 0x88(0x18)
	struct FString InvitePuuid; // 0xa0(0x10)
	struct FString InviteGameName; // 0xb0(0x10)
	struct FString InviteGameTag; // 0xc0(0x10)
	enum class ERGIFriendsFriendStatus InviteStatus; // 0xd0(0x01)
	enum class ERGIFriendsListInviteType InviteType; // 0xd1(0x01)
	enum class ERGIFriendsListInviteState InviteState; // 0xd2(0x01)
	char pad_D3[0x5]; // 0xd3(0x05)
	double InviteSpawnGameTime; // 0xd8(0x08)
	struct FDateTime InviteSpawnTime; // 0xe0(0x08)
	struct FDateTime InviteExpiryTime; // 0xe8(0x08)
	struct FString FolderName; // 0xf0(0x10)
	struct URGISocialPartyCollectionViewModel* OwningCollectionViewModel; // 0x100(0x08)
	struct UGameInstance* CachedGameInstance; // 0x108(0x08)

	void SetInviteType(enum class ERGIFriendsListInviteType InInviteType); // Function RGIFriends.RGISocialPartyInviteViewModel.SetInviteType // (Final|Native|Public|BlueprintCallable) // @ game+0x52ff050
	void SetInviteStatus(enum class ERGIFriendsFriendStatus InInviteStatus); // Function RGIFriends.RGISocialPartyInviteViewModel.SetInviteStatus // (Final|Native|Public|BlueprintCallable) // @ game+0x52ff170
	void SetInviteState(enum class ERGIFriendsListInviteState InInviteState); // Function RGIFriends.RGISocialPartyInviteViewModel.SetInviteState // (Final|Native|Public|BlueprintCallable) // @ game+0x52fef30
	void SetInvitePuuid(struct FString InInvitePuuid); // Function RGIFriends.RGISocialPartyInviteViewModel.SetInvitePuuid // (Final|Native|Public|BlueprintCallable) // @ game+0x52ff510
	void SetInviteId(struct FString InInviteId); // Function RGIFriends.RGISocialPartyInviteViewModel.SetInviteId // (Final|Native|Public|BlueprintCallable) // @ game+0x52ff760
	void SetInviteGameTag(struct FString InInviteGameTag); // Function RGIFriends.RGISocialPartyInviteViewModel.SetInviteGameTag // (Final|Native|Public|BlueprintCallable) // @ game+0x52ff290
	void SetInviteGameName(struct FString InInviteGameName); // Function RGIFriends.RGISocialPartyInviteViewModel.SetInviteGameName // (Final|Native|Public|BlueprintCallable) // @ game+0x52ff3d0
	void SetDescription(struct FText& InDescription); // Function RGIFriends.RGISocialPartyInviteViewModel.SetDescription // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x52ff640
	void OnInviteUpdated(); // Function RGIFriends.RGISocialPartyInviteViewModel.OnInviteUpdated // (Native|Public|BlueprintCallable) // @ game+0x3f54a80
	void OnInviteDeclined(); // Function RGIFriends.RGISocialPartyInviteViewModel.OnInviteDeclined // (Native|Public|BlueprintCallable) // @ game+0x285b8c0
	void OnInviteCancelled(); // Function RGIFriends.RGISocialPartyInviteViewModel.OnInviteCancelled // (Native|Public|BlueprintCallable) // @ game+0x285b890
	void OnInviteAccepted(); // Function RGIFriends.RGISocialPartyInviteViewModel.OnInviteAccepted // (Native|Public|BlueprintCallable) // @ game+0x3ba22b0
	enum class ERGIFriendsListInviteType GetInviteType(); // Function RGIFriends.RGISocialPartyInviteViewModel.GetInviteType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52ff9e0
	enum class ERGIFriendsFriendStatus GetInviteStatus(); // Function RGIFriends.RGISocialPartyInviteViewModel.GetInviteStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52ff940
	enum class ERGIFriendsListInviteState GetInviteState(); // Function RGIFriends.RGISocialPartyInviteViewModel.GetInviteState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52ff9c0
	struct FString GetInvitePuuid(); // Function RGIFriends.RGISocialPartyInviteViewModel.GetInvitePuuid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52ffa00
	struct FString GetInviteId(); // Function RGIFriends.RGISocialPartyInviteViewModel.GetInviteId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52ffa60
	struct FString GetInviteGameTag(); // Function RGIFriends.RGISocialPartyInviteViewModel.GetInviteGameTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52ff960
	struct FString GetInviteGameName(); // Function RGIFriends.RGISocialPartyInviteViewModel.GetInviteGameName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52ff990
	struct FString GetFullRiotID(); // Function RGIFriends.RGISocialPartyInviteViewModel.GetFullRiotID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52ff8a0
	struct FText GetDescription(); // Function RGIFriends.RGISocialPartyInviteViewModel.GetDescription // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52ffa30
};

// Class RGIFriends.RGISocialPartyMemberViewModel
// Size: 0xb0 (Inherited: 0x70)
struct URGISocialPartyMemberViewModel : UMVVMViewModelBase {
	struct FString Puuid; // 0x70(0x10)
	struct FString GameName; // 0x80(0x10)
	struct FString GameTag; // 0x90(0x10)
	enum class ERGIFriendsPlatform Platform; // 0xa0(0x01)
	bool bIsPartyLeader; // 0xa1(0x01)
	bool bIsLocalPlayer; // 0xa2(0x01)
	enum class ERGIFriendsFriendStatus FriendStatus; // 0xa3(0x01)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct UGameInstance* CachedGameInstance; // 0xa8(0x08)

	void SetPuuid(struct FString InPuuid); // Function RGIFriends.RGISocialPartyMemberViewModel.SetPuuid // (Final|Native|Public|BlueprintCallable) // @ game+0x5300ae0
	void SetPlatform(enum class ERGIFriendsPlatform InPlatform); // Function RGIFriends.RGISocialPartyMemberViewModel.SetPlatform // (Final|Native|Public|BlueprintCallable) // @ game+0x5300740
	void SetIsPartyLeader(bool bInIsPartyLeader); // Function RGIFriends.RGISocialPartyMemberViewModel.SetIsPartyLeader // (Final|Native|Public|BlueprintCallable) // @ game+0x5300620
	void SetIsLocalPlayer(bool bInIsLocalPlayer); // Function RGIFriends.RGISocialPartyMemberViewModel.SetIsLocalPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x5300500
	void SetGameTag(struct FString InGameTag); // Function RGIFriends.RGISocialPartyMemberViewModel.SetGameTag // (Final|Native|Public|BlueprintCallable) // @ game+0x5300860
	void SetGameName(struct FString InGameName); // Function RGIFriends.RGISocialPartyMemberViewModel.SetGameName // (Final|Native|Public|BlueprintCallable) // @ game+0x53009a0
	void SetFriendStatus(enum class ERGIFriendsFriendStatus InStatus); // Function RGIFriends.RGISocialPartyMemberViewModel.SetFriendStatus // (Final|Native|Public|BlueprintCallable) // @ game+0x53003e0
	void MemberUpdated(struct UObject* OptionalContext); // Function RGIFriends.RGISocialPartyMemberViewModel.MemberUpdated // (Native|Public|BlueprintCallable) // @ game+0x52d9a80
	struct FString GetPuuid(); // Function RGIFriends.RGISocialPartyMemberViewModel.GetPuuid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5300cc0
	enum class ERGIFriendsPlatform GetPlatform(); // Function RGIFriends.RGISocialPartyMemberViewModel.GetPlatform // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5300c70
	bool GetIsPartyLeader(); // Function RGIFriends.RGISocialPartyMemberViewModel.GetIsPartyLeader // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5300c50
	bool GetIsLocalPlayer(); // Function RGIFriends.RGISocialPartyMemberViewModel.GetIsLocalPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5300c30
	struct FString GetGameTag(); // Function RGIFriends.RGISocialPartyMemberViewModel.GetGameTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5300c90
	struct FString GetGameName(); // Function RGIFriends.RGISocialPartyMemberViewModel.GetGameName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5300c90
	enum class ERGIFriendsFriendStatus GetFriendStatus(); // Function RGIFriends.RGISocialPartyMemberViewModel.GetFriendStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5300c10
};

// Class RGIFriends.RGISocialPartyViewModel
// Size: 0xd8 (Inherited: 0x70)
struct URGISocialPartyViewModel : UMVVMViewModelBase {
	struct FString PartyId; // 0x70(0x10)
	struct FText GameName; // 0x80(0x18)
	struct FText GameTag; // 0x98(0x18)
	struct TArray<struct URGISocialPartyMemberViewModel*> Members; // 0xb0(0x10)
	int32_t MaxPartySize; // 0xc0(0x04)
	int32_t CurrentPartySize; // 0xc4(0x04)
	enum class ERGIFriendsPresencesPartyStatus PartyStatus; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct UGameInstance* CachedGameInstance; // 0xd0(0x08)

	void SetStatus(enum class ERGIFriendsPresencesPartyStatus InStatus); // Function RGIFriends.RGISocialPartyViewModel.SetStatus // (Final|Native|Public|BlueprintCallable) // @ game+0x5301490
	void SetPartyId(struct FString InPartyId); // Function RGIFriends.RGISocialPartyViewModel.SetPartyId // (Final|Native|Public|BlueprintCallable) // @ game+0x5302280
	void SetMembers(struct TArray<struct URGISocialPartyMemberViewModel*>& InMembers); // Function RGIFriends.RGISocialPartyViewModel.SetMembers // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5301e70
	void SetMaxPartySize(int32_t InMaxPartySize); // Function RGIFriends.RGISocialPartyViewModel.SetMaxPartySize // (Final|Native|Public|BlueprintCallable) // @ game+0x53016d0
	void SetGameTag(struct FText InGameTag); // Function RGIFriends.RGISocialPartyViewModel.SetGameTag // (Final|Native|Public|BlueprintCallable) // @ game+0x5301fa0
	void SetGameName(struct FText InGameName); // Function RGIFriends.RGISocialPartyViewModel.SetGameName // (Final|Native|Public|BlueprintCallable) // @ game+0x5302140
	void SetCurrentPartySize(int32_t InPartySize); // Function RGIFriends.RGISocialPartyViewModel.SetCurrentPartySize // (Final|Native|Public|BlueprintCallable) // @ game+0x53015b0
	void RemoveMemberByPuuid(struct FString Puuid); // Function RGIFriends.RGISocialPartyViewModel.RemoveMemberByPuuid // (Final|Native|Public|BlueprintCallable) // @ game+0x53017f0
	void RemoveMember(struct URGISocialPartyMemberViewModel* Member); // Function RGIFriends.RGISocialPartyViewModel.RemoveMember // (Final|Native|Public|BlueprintCallable) // @ game+0x5301920
	void PartyUpdated(struct UObject* OptionalContext); // Function RGIFriends.RGISocialPartyViewModel.PartyUpdated // (Native|Public|BlueprintCallable) // @ game+0x52d9a80
	void OnLeaveParty(); // Function RGIFriends.RGISocialPartyViewModel.OnLeaveParty // (Native|Public|BlueprintCallable) // @ game+0x3ba22b0
	enum class ERGIFriendsPresencesPartyStatus GetStatus(); // Function RGIFriends.RGISocialPartyViewModel.GetStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x53023c0
	struct FString GetPartyId(); // Function RGIFriends.RGISocialPartyViewModel.GetPartyId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5300cc0
	struct TArray<struct URGISocialPartyMemberViewModel*> GetMembers(); // Function RGIFriends.RGISocialPartyViewModel.GetMembers // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5302400
	int32_t GetMaxPartySize(); // Function RGIFriends.RGISocialPartyViewModel.GetMaxPartySize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4283140
	struct FText GetGameTag(); // Function RGIFriends.RGISocialPartyViewModel.GetGameTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5302490
	struct FText GetGameName(); // Function RGIFriends.RGISocialPartyViewModel.GetGameName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5302500
	int32_t GetCurrentPartySize(); // Function RGIFriends.RGISocialPartyViewModel.GetCurrentPartySize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x53023e0
	void AddMember(struct URGISocialPartyMemberViewModel* NewMember); // Function RGIFriends.RGISocialPartyViewModel.AddMember // (Final|Native|Public|BlueprintCallable) // @ game+0x5301b20
};

// Class RGIFriends.RGIFriendsPlayer
// Size: 0x208 (Inherited: 0x30)
struct URGIFriendsPlayer : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	struct FString GameName; // 0x48(0x10)
	struct FString PreferredDisplayName; // 0x58(0x10)
	struct FString GameTag; // 0x68(0x10)
	struct FString Pid; // 0x78(0x10)
	struct FString Puuid; // 0x88(0x10)
	struct FString Region; // 0x98(0x10)
	struct FString Note; // 0xa8(0x10)
	struct FString VoiceSessionId; // 0xb8(0x10)
	enum class ERGIFriendsPlatform Platform; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FString Product; // 0xd0(0x10)
	struct FString ProductPresenceName; // 0xe0(0x10)
	struct FString ProductFolderName; // 0xf0(0x10)
	bool bIsRiotFriend; // 0x100(0x01)
	bool bIsActivePlatformFriend; // 0x101(0x01)
	bool bIsRiotBlocked; // 0x102(0x01)
	bool bIsActivePlatformBlocked; // 0x103(0x01)
	char pad_104[0x4]; // 0x104(0x04)
	struct FString AccountRank; // 0x108(0x10)
	struct FString FirstPartyAAlias; // 0x118(0x10)
	struct FString FirstPartyBAlias; // 0x128(0x10)
	struct FString FirstPartyBSuffix; // 0x138(0x10)
	char pad_148[0x1]; // 0x148(0x01)
	enum class ERGIFriendsFriendStatus Status; // 0x149(0x01)
	enum class ERGIFriendsDiscordStatus DiscordStatus; // 0x14a(0x01)
	char pad_14B[0x5]; // 0x14b(0x05)
	struct FString Message; // 0x150(0x10)
	struct TArray<struct FRGIFriendsParty> Parties; // 0x160(0x10)
	char pad_170[0x30]; // 0x170(0x30)
	struct FRGIPermissionsCrossPlayPermissions CrossPlayPermissions; // 0x1a0(0x20)
	char pad_1C0[0x30]; // 0x1c0(0x30)
	bool bIsDiscordFriend; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct FString DiscordDisplayName; // 0x1f8(0x10)

	void SetIsDiscordFriend(bool bValue); // Function RGIFriends.RGIFriendsPlayer.SetIsDiscordFriend // (Final|Native|Public|BlueprintCallable) // @ game+0x5305da0
	void SetDiscordDisplayName(struct FString Value); // Function RGIFriends.RGIFriendsPlayer.SetDiscordDisplayName // (Final|Native|Public|BlueprintCallable) // @ game+0x5305c00
	bool IsDiscordFriend(); // Function RGIFriends.RGIFriendsPlayer.IsDiscordFriend // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5305d80
	struct FString GetDiscordDisplayName(); // Function RGIFriends.RGIFriendsPlayer.GetDiscordDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5305bd0
};

// Class RGIFriends.RGIFriendsDataStore
// Size: 0x30 (Inherited: 0x30)
struct URGIFriendsDataStore : UInterface {
};

// Class RGIFriends.RGIFriendsMockedData
// Size: 0xc0 (Inherited: 0x38)
struct URGIFriendsMockedData : UPrimaryDataAsset {
	struct URGIFriendsPlayer* LoggedPlayer; // 0x38(0x08)
	struct FRGIFriendsPresenceLocalizedContent LoggedPlayerPresenceLocalizedContent; // 0x40(0x40)
	struct TArray<struct URGIFriendsPlayer*> Friends; // 0x80(0x10)
	struct TArray<struct URGIFriendsPlayer*> BlockedPlayers; // 0x90(0x10)
	struct TArray<struct FRGIFriendsFriendRequest> FriendsRequests; // 0xa0(0x10)
	struct TArray<struct URGIFriendsPlayer*> PartyPlayers; // 0xb0(0x10)
};

// Class RGIFriends.FriendsMockedDataStore
// Size: 0x4e0 (Inherited: 0x30)
struct UFriendsMockedDataStore : UObject {
	char pad_30[0x2f8]; // 0x30(0x2f8)
	struct URGIFriendsPlayer* LoggedPlayer; // 0x328(0x08)
	struct FRGIFriendsPresenceLocalizedContent LoggedPlayerPresenceLocalizedContent; // 0x330(0x40)
	struct FRGIFriendsPlayers Friends; // 0x370(0x50)
	struct FRGIFriendsPlayers BlockedPlayers; // 0x3c0(0x50)
	struct FRGIFriendsFriendRequests FriendRequests; // 0x410(0x50)
	struct TMap<struct FString, struct URGIFriendsPlayer*> PartyMembers; // 0x460(0x50)
	struct FRGIFriendsAliasList AliasList; // 0x4b0(0x10)
	struct UObject* CustomPrivateDataObject; // 0x4c0(0x08)
	struct FRGIFriendsConnectionState ConnectionState; // 0x4c8(0x02)
	char pad_4CA[0x6]; // 0x4ca(0x06)
	struct URGIPermissionsLoggedPlayerPermissionsViewModel* LoggedPlayerPermissionsViewModel; // 0x4d0(0x08)
	char pad_4D8[0x8]; // 0x4d8(0x08)

	void OnCustomPrivateDataUpdated(struct FString SerializedData); // Function RGIFriends.FriendsMockedDataStore.OnCustomPrivateDataUpdated // (Final|Native|Public) // @ game+0x5307c00
};

// Class RGIFriends.RGIFriendsNoOpDataStore
// Size: 0x418 (Inherited: 0x30)
struct URGIFriendsNoOpDataStore : UObject {
	char pad_30[0x2e0]; // 0x30(0x2e0)
	struct URGIFriendsPlayer* LoggedPlayer; // 0x310(0x08)
	struct FRGIFriendsPlayers Friends; // 0x318(0x50)
	struct FRGIFriendsFriendRequests FriendRequests; // 0x368(0x50)
	struct FRGIFriendsPlayers BlockedPlayers; // 0x3b8(0x50)
	struct FRGIFriendsAliasList AliasList; // 0x408(0x10)
};

// Class RGIFriends.RGIFriendsFriendRequestNotificationData
// Size: 0x68 (Inherited: 0x30)
struct URGIFriendsFriendRequestNotificationData : UObject {
	struct FString PlayerName; // 0x30(0x10)
	struct FString PlayerTag; // 0x40(0x10)
	struct FString Puuid; // 0x50(0x10)
	enum class ERGIFriendsPlatform Platform; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class RGIFriends.RGIFriendsSubsystem
// Size: 0x4c8 (Inherited: 0x38)
struct URGIFriendsSubsystem : UGameInstanceSubsystem {
	char pad_38[0x2e0]; // 0x38(0x2e0)
	struct TScriptInterface<IRGIFriendsDataStore> DataStore; // 0x318(0x10)
	struct URGISocialNotificationsNotificationCollectionViewModel* NotificationCollection; // 0x328(0x08)
	char pad_330[0x28]; // 0x330(0x28)
	struct FMulticastInlineDelegate OnFriendsUpdatedDynamic; // 0x358(0x10)
	char pad_368[0x18]; // 0x368(0x18)
	struct FMulticastInlineDelegate OnLoggedPlayerUpdatedDynamic; // 0x380(0x10)
	char pad_390[0x18]; // 0x390(0x18)
	struct FMulticastInlineDelegate OnBlockedPlayersUpdatedDynamic; // 0x3a8(0x10)
	char pad_3B8[0x18]; // 0x3b8(0x18)
	struct FMulticastInlineDelegate OnFriendsRequestListUpdatedDynamic; // 0x3d0(0x10)
	char pad_3E0[0x18]; // 0x3e0(0x18)
	struct FMulticastInlineDelegate OnFriendRequestAcceptedDynamic; // 0x3f8(0x10)
	char pad_408[0x18]; // 0x408(0x18)
	struct FMulticastInlineDelegate OnFriendRequestDeclinedDynamic; // 0x420(0x10)
	char pad_430[0x18]; // 0x430(0x18)
	struct FMulticastInlineDelegate OnFriendRequestSentDynamic; // 0x448(0x10)
	char pad_458[0x30]; // 0x458(0x30)
	struct FMulticastInlineDelegate OnProfileViewStateChangedDynamic; // 0x488(0x10)
	char pad_498[0x18]; // 0x498(0x18)
	struct URGIFriendsFriendRequestCollectionViewModel* FriendRequestCollectionViewModel; // 0x4b0(0x08)
	struct URGIFriendsCollectionViewModel* FriendsCollectionViewModel; // 0x4b8(0x08)
	struct URGISocialPartyCollectionViewModel* PartyCollectionViewModel; // 0x4c0(0x08)

	void ViewFirstPartyProfile(struct FString ID, struct FDelegate OnSuccess, struct FDelegate OnError, bool bIsFirstPartyId); // Function RGIFriends.RGIFriendsSubsystem.ViewFirstPartyProfile // (Final|Native|Public|BlueprintCallable) // @ game+0x530d510
	void UnblockPlayer(struct FString Puuid, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.UnblockPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x530dbe0
	void SetBuddyNote(struct FString Puuid, struct FString NoteString, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.SetBuddyNote // (Final|Native|Public|BlueprintCallable) // @ game+0x530d850
	void SendPresence(struct FDelegate& OnSuccess, struct FDelegate& OnError); // Function RGIFriends.RGIFriendsSubsystem.SendPresence // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x530d040
	void SendFriendRequest(struct FString GameNameAndTagLine, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.SendFriendRequest // (Final|Native|Public|BlueprintCallable) // @ game+0x530e990
	void RequestLoggedPlayerInactiveAliasList(); // Function RGIFriends.RGIFriendsSubsystem.RequestLoggedPlayerInactiveAliasList // (Native|Public|BlueprintCallable) // @ game+0x530c8f0
	void RemoveFriend(struct FString Puuid, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.RemoveFriend // (Final|Native|Public|BlueprintCallable) // @ game+0x530e6e0
	struct FText GetVersion(); // Function RGIFriends.RGIFriendsSubsystem.GetVersion // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x530cd00
	void GetPlayerNamesFromPuuids(struct TArray<struct FString>& Puuids, struct FDelegate OnSuccess); // Function RGIFriends.RGIFriendsSubsystem.GetPlayerNamesFromPuuids // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x530d240
	struct FRGIFriendsPresenceLocalizedContent GetLoggedPlayerPresenceLocalizedContent(); // Function RGIFriends.RGIFriendsSubsystem.GetLoggedPlayerPresenceLocalizedContent // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x530c980
	struct URGIFriendsPlayer* GetLoggedPlayer(); // Function RGIFriends.RGIFriendsSubsystem.GetLoggedPlayer // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x530ca10
	bool GetIsReady(); // Function RGIFriends.RGIFriendsSubsystem.GetIsReady // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x530cc60
	struct URGIFriendsPlayerViewModel* GetFriendViewModel(struct FString Puuid); // Function RGIFriends.RGIFriendsSubsystem.GetFriendViewModel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x530cd50
	struct FRGIFriendsPlayers GetFriends(); // Function RGIFriends.RGIFriendsSubsystem.GetFriends // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x530cc10
	struct URGIFriendsFriendRequestViewModel* GetFriendRequestViewModel(struct FString Puuid); // Function RGIFriends.RGIFriendsSubsystem.GetFriendRequestViewModel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x530cf00
	struct FRGIFriendsFriendRequests GetFriendRequests(); // Function RGIFriends.RGIFriendsSubsystem.GetFriendRequests // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x530ca60
	struct URGIFriendsPlayer* GetFriend(struct FString Puuid); // Function RGIFriends.RGIFriendsSubsystem.GetFriend // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x530cab0
	struct UObject* GetCustomPrivateDataObject(); // Function RGIFriends.RGIFriendsSubsystem.GetCustomPrivateDataObject // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x530ccb0
	struct FRGIFriendsPlayers GetBlockedPlayers(); // Function RGIFriends.RGIFriendsSubsystem.GetBlockedPlayers // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x530c930
	void DeclineFriendRequest(struct FString Puuid, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.DeclineFriendRequest // (Final|Native|Public|BlueprintCallable) // @ game+0x530e140
	void BlockPlayer(struct FString Puuid, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.BlockPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x530de90
	void AcceptFriendRequest(struct FString Puuid, struct FDelegate OnSuccess, struct FDelegate OnError); // Function RGIFriends.RGIFriendsSubsystem.AcceptFriendRequest // (Final|Native|Public|BlueprintCallable) // @ game+0x530e410
};

