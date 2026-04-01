// Enum RGIFriends.ERGIFriendsBlockPlayerResponseErrors
enum class ERGIFriendsBlockPlayerResponseErrors : uint8 {
	NoPuuidProvided = 0,
	MissingPuuidOrName = 1,
	AlreadyBlocked = 2,
	TargetingSelf = 3,
	InternalError = 4,
	ERGIFriendsBlockPlayerResponseErrors_MAX = 5
};

// Enum RGIFriends.ERGIFriendsDeclineRequestErrors
enum class ERGIFriendsDeclineRequestErrors : uint8 {
	RequestNotFound = 0,
	InternalError = 1,
	ERGIFriendsDeclineRequestErrors_MAX = 2
};

// Enum RGIFriends.ERGIFriendsRequestResponseErrors
enum class ERGIFriendsRequestResponseErrors : uint8 {
	NoGameNameAndTagLineProvided = 0,
	InvalidNameTagFormatting = 1,
	RequestSentToFriend = 2,
	RequestSentToBlockedPlayer = 3,
	RequestSentToBlockingPlayer = 4,
	RequestSentToSelf = 5,
	RequestAlreadyExists = 6,
	RequestedPlayerNotFound = 7,
	FriendListFull = 8,
	MaxOutgoingInvites = 9,
	MaxIncomingInvites = 10,
	InternalError = 11,
	MissingPrivileges = 12,
	ERGIFriendsRequestResponseErrors_MAX = 13
};

// Enum RGIFriends.ERGIFriendsPlatform
enum class ERGIFriendsPlatform : uint8 {
	FirstPartyA = 0,
	FirstPartyB = 1,
	FirstPartyC = 2,
	NotFirstParty = 3,
	Windows = 4,
	Mac = 5,
	Ios = 6,
	Android = 7,
	Web = 8,
	Riot = 9,
	Unknown = 10,
	ERGIFriendsPlatform_MAX = 11
};

// Enum RGIFriends.ERGIFriendRequestType
enum class ERGIFriendRequestType : uint8 {
	Inbound = 0,
	Outbound = 1,
	ERGIFriendRequestType_MAX = 2
};

// Enum RGIFriends.ERGIFriendsPermissionRequestResponseErrors
enum class ERGIFriendsPermissionRequestResponseErrors : uint8 {
	PermissionIdNotFound = 0,
	InternalError = 1,
	ERGIFriendsPermissionRequestResponseErrors_MAX = 2
};

// Enum RGIFriends.ERGIFriendsRemoveFriendErrors
enum class ERGIFriendsRemoveFriendErrors : uint8 {
	FriendNotFound = 0,
	InternalError = 1,
	ERGIFriendsRemoveFriendErrors_MAX = 2
};

// Enum RGIFriends.ERGIFriendsSetCrossPlatformSocialPermissionErrors
enum class ERGIFriendsSetCrossPlatformSocialPermissionErrors : uint8 {
	InternalError = 0,
	ERGIFriendsSetCrossPlatformSocialPermissionErrors_MAX = 1
};

// Enum RGIFriends.ERGIFriendsUnblockPlayerResponseErrors
enum class ERGIFriendsUnblockPlayerResponseErrors : uint8 {
	NoPuuidProvided = 0,
	NotBlocked = 1,
	TargetingSelf = 2,
	InternalError = 3,
	ERGIFriendsUnblockPlayerResponseErrors_MAX = 4
};

// Enum RGIFriends.ERGIFriendsUpdateFriendsResponseErrors
enum class ERGIFriendsUpdateFriendsResponseErrors : uint8 {
	FriendGroupEmpty = 0,
	MetaGroupName = 1,
	FriendNotFound = 2,
	StatusAlreadyTrue = 3,
	InternalError = 4,
	ERGIFriendsUpdateFriendsResponseErrors_MAX = 5
};

// Enum RGIFriends.ERGIFriendsUpdatePresenceErrors
enum class ERGIFriendsUpdatePresenceErrors : uint8 {
	NoPlayerPUUID = 0,
	InternalError = 1,
	ERGIFriendsUpdatePresenceErrors_MAX = 2
};

// Enum RGIFriends.ERGIFriendsDisplayFirstPartyProfileResponseErrors
enum class ERGIFriendsDisplayFirstPartyProfileResponseErrors : uint8 {
	FirstPartyAPINotReady = 0,
	UserNotLoggedIn = 1,
	FirstPartyProfileNotFound = 2,
	InvalidIdFormat = 3,
	InternalError = 4,
	ERGIFriendsDisplayFirstPartyProfileResponseErrors_MAX = 5
};

// Enum RGIFriends.ERGIFriendsFriendStatus
enum class ERGIFriendsFriendStatus : uint8 {
	Chat = 0,
	Away = 1,
	Dnd = 2,
	FirstPartyOnline = 3,
	FirstPartyBlocked = 4,
	DiscordOnline = 5,
	Offline = 6,
	ERGIFriendsFriendStatus_MAX = 7
};

// Enum RGIFriends.ERGIFriendsDiscordStatus
enum class ERGIFriendsDiscordStatus : uint8 {
	Online = 0,
	Offline = 1,
	ERGIFriendsDiscordStatus_MAX = 2
};

// Enum RGIFriends.ERGIFriendsPresencesPartyStatus
enum class ERGIFriendsPresencesPartyStatus : uint8 {
	Open = 0,
	Closed = 1,
	ERGIFriendsPresencesPartyStatus_MAX = 2
};

// Enum RGIFriends.ERGIFriendsPresencesPartyMemberRole
enum class ERGIFriendsPresencesPartyMemberRole : uint8 {
	Member = 0,
	Leader = 1,
	ERGIFriendsPresencesPartyMemberRole_MAX = 2
};

// Enum RGIFriends.ERGIFriendsListInviteType
enum class ERGIFriendsListInviteType : uint8 {
	Incoming = 0,
	Outgoing = 1,
	ERGIFriendsListInviteType_MAX = 2
};

// Enum RGIFriends.ERGIFriendsListInviteState
enum class ERGIFriendsListInviteState : uint8 {
	Valid = 0,
	Cancelled = 1,
	Expired = 2,
	ERGIFriendsListInviteState_MAX = 3
};

// Enum RGIFriends.FRGIFriendsOnSetPrivateDataForLocalPlayerErrors
enum class FRGIFriendsOnSetPrivateDataForLocalPlayerErrors : uint8 {
	NoLoggedPlayer = 0,
	InternalError = 1,
	FRGIFriendsOnSetPrivateDataForLocalPlayerErrors_MAX = 2
};

// Enum RGIFriends.ERGIFriendsPlatformMask
enum class ERGIFriendsPlatformMask : uint8 {
	None = 0,
	FirstPartyA = 1,
	FirstPartyB = 2,
	FirstPartyC = 4,
	ERGIFriendsPlatformMask_MAX = 5
};

// Enum RGIFriends.ERGIFriendsActivityProgressType
enum class ERGIFriendsActivityProgressType : uint8 {
	StartTime = 0,
	EndTime = 1,
	Custom = 2,
	ERGIFriendsActivityProgressType_MAX = 3
};

// Enum RGIFriends.ERGIFriendsLinkDiscordAccountErrors
enum class ERGIFriendsLinkDiscordAccountErrors : uint8 {
	AlreadyLinked = 0,
	Disabled = 1,
	InternalError = 2,
	RateLimited = 3,
	ERGIFriendsLinkDiscordAccountErrors_MAX = 4
};

// ScriptStruct RGIFriends.RGIFriendsPuuidGameNameAndTagMapping
// Size: 0x50 (Inherited: 0x00)
struct FRGIFriendsPuuidGameNameAndTagMapping {
	struct TMap<struct FString, struct FRGIFriendsGameNameAndTag> MapOfPuuidsToGameNameAndTag; // 0x00(0x50)
};

// ScriptStruct RGIFriends.RGIFriendsGameNameAndTag
// Size: 0x50 (Inherited: 0x00)
struct FRGIFriendsGameNameAndTag {
	struct FString GameName; // 0x00(0x10)
	struct FString Tag; // 0x10(0x10)
	struct FString FirstPartyAAlias; // 0x20(0x10)
	struct FString FirstPartyBAlias; // 0x30(0x10)
	struct FString FirstPartyBSuffix; // 0x40(0x10)
};

// ScriptStruct RGIFriends.RGIFriendsPlayers
// Size: 0x50 (Inherited: 0x00)
struct FRGIFriendsPlayers {
	struct TMap<struct FString, struct URGIFriendsPlayer*> MapOfPlayers; // 0x00(0x50)
};

// ScriptStruct RGIFriends.RGIFriendsFriendRequests
// Size: 0x50 (Inherited: 0x00)
struct FRGIFriendsFriendRequests {
	struct TMap<struct FString, struct FRGIFriendsFriendRequest> MapOfPuuidsToRequests; // 0x00(0x50)
};

// ScriptStruct RGIFriends.RGIFriendsFriendRequest
// Size: 0x38 (Inherited: 0x00)
struct FRGIFriendsFriendRequest {
	struct FString PlayerName; // 0x00(0x10)
	struct FString PlayerTag; // 0x10(0x10)
	struct FString Puuid; // 0x20(0x10)
	enum class ERGIFriendRequestType RequestType; // 0x30(0x01)
	enum class ERGIFriendsPlatform Platform; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct RGIFriends.ReflectedFriendEntry
// Size: 0x18 (Inherited: 0x00)
struct FReflectedFriendEntry {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct RGIFriends.RGIFriendsPartyMember
// Size: 0x18 (Inherited: 0x00)
struct FRGIFriendsPartyMember {
	struct FString Puuid; // 0x00(0x10)
	int32_t TimeJoined; // 0x10(0x04)
	enum class ERGIFriendsPlatform Platform; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct RGIFriends.RGIFriendsParty
// Size: 0x68 (Inherited: 0x00)
struct FRGIFriendsParty {
	struct FString PartyId; // 0x00(0x10)
	struct FString Join; // 0x10(0x10)
	struct TArray<struct FString> Actions; // 0x20(0x10)
	struct FText Title; // 0x30(0x18)
	int32_t TimeCreated; // 0x48(0x04)
	int32_t MaxPartySize; // 0x4c(0x04)
	int32_t CurrentPartySize; // 0x50(0x04)
	enum class ERGIFriendsPresencesPartyStatus Status; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct TArray<struct FRGIFriendsPartyMember> Members; // 0x58(0x10)
};

// ScriptStruct RGIFriends.RGIFriendsPartyInvite
// Size: 0x68 (Inherited: 0x00)
struct FRGIFriendsPartyInvite {
	struct FString InviteId; // 0x00(0x10)
	struct FText Description; // 0x10(0x18)
	struct FString Puuid; // 0x28(0x10)
	enum class ERGIFriendsListInviteType InviteType; // 0x38(0x01)
	enum class ERGIFriendsListInviteState InviteState; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	double InviteSpawnGameTime; // 0x40(0x08)
	struct FDateTime InviteSpawnTime; // 0x48(0x08)
	struct FDateTime InviteExpiryTime; // 0x50(0x08)
	struct FString FolderName; // 0x58(0x10)
};

// ScriptStruct RGIFriends.RGIFriendsPartyInviteWithPlayer
// Size: 0x60 (Inherited: 0x00)
struct FRGIFriendsPartyInviteWithPlayer {
	struct FString ID; // 0x00(0x10)
	struct FText Description; // 0x10(0x18)
	struct URGIFriendsPlayer* InviteTargetPlayer; // 0x28(0x08)
	enum class ERGIFriendsListInviteType InviteType; // 0x30(0x01)
	enum class ERGIFriendsListInviteState InviteState; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	double InviteSpawnGameTime; // 0x38(0x08)
	struct FDateTime InviteSpawnTime; // 0x40(0x08)
	struct FDateTime InviteExpiryTime; // 0x48(0x08)
	struct FString FolderName; // 0x50(0x10)
};

// ScriptStruct RGIFriends.RGIFriendsConnectionState
// Size: 0x02 (Inherited: 0x00)
struct FRGIFriendsConnectionState {
	bool bIsInternetConnected; // 0x00(0x01)
	bool bIsChatConnected; // 0x01(0x01)
};

// ScriptStruct RGIFriends.RGIFriendsActivityProgress
// Size: 0x18 (Inherited: 0x00)
struct FRGIFriendsActivityProgress {
	enum class ERGIFriendsActivityProgressType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Value; // 0x08(0x10)
};

// ScriptStruct RGIFriends.RGIFriendsPresenceActivity
// Size: 0x58 (Inherited: 0x00)
struct FRGIFriendsPresenceActivity {
	struct TArray<struct FString> Actors; // 0x00(0x10)
	struct FString Location; // 0x10(0x10)
	struct FString Mode; // 0x20(0x10)
	struct FRGIFriendsActivityProgress Progress; // 0x30(0x18)
	struct FString Spectate; // 0x48(0x10)
};

// ScriptStruct RGIFriends.RGIFriendsPresenceLocalizedContent
// Size: 0x40 (Inherited: 0x00)
struct FRGIFriendsPresenceLocalizedContent {
	struct FString State; // 0x00(0x10)
	struct FString Location; // 0x10(0x10)
	struct FString Mode; // 0x20(0x10)
	struct TArray<struct FString> Actors; // 0x30(0x10)
};

// ScriptStruct RGIFriends.RGIFriendsLoggedPlayerPrivateData
// Size: 0x50 (Inherited: 0x00)
struct FRGIFriendsLoggedPlayerPrivateData {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct RGIFriends.RGIFriendsAliasList
// Size: 0x10 (Inherited: 0x00)
struct FRGIFriendsAliasList {
	char pad_0[0x10]; // 0x00(0x10)
};

