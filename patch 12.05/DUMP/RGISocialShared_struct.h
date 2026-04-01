// Enum RGISocialShared.EAudioEventID
enum class EAudioEventID : uint8 {
	None = 0,
	FriendsListOpen = 1,
	FriendsListClosed = 2,
	FriendsListBack = 3,
	TabNavigateLeft = 4,
	TabNavigateRight = 5,
	TabNavigateClick = 6,
	TabNavigateHovered = 7,
	ShowLocalPlayerProfile = 8,
	FriendsListItemHovered = 9,
	FriendsListItemFocused = 10,
	FriendsListItemClicked = 11,
	FriendsRequestListItemClickedAccept = 12,
	FriendsRequestListItemClickedDecline = 13,
	AddFriendButtonClicked = 14,
	AddFriendButtonFocused = 15,
	AddFriendButtonHovered = 16,
	AddFriendTextCommitted = 17,
	ContextListItemHovered = 18,
	ContextListItemFocused = 19,
	ContextListItemClicked = 20,
	ConversationListItemHovered = 21,
	ConversationListItemFocused = 22,
	ConversationListItemClicked = 23,
	ConversationInputTextClicked = 24,
	ConversationInputTextComitted = 25,
	NotificationOnlineFriendCountIncreased = 26,
	NotificationMessagesCountIncreased = 27,
	NotificationFriendRequestCountIncreased = 28,
	NotificationPlayInviteCountIncreased = 29,
	EAudioEventID_MAX = 30
};

// Enum RGISocialShared.EAudioLockID
enum class EAudioLockID : uint8 {
	None = 0,
	MainPanelLoading = 1,
	PanelLoading = 2,
	PanelUnloading = 3,
	PanelCovering = 4,
	WidgetSwitcherMain = 5,
	WidgetSwitcherSubPanels = 6,
	ContextMenuLoading = 7,
	DiscordModalLoading = 8,
	ConversationsTabPanelLoading = 9,
	SearchPanelLoading = 10,
	ListItemScrolling = 11,
	ConversationsInputTextFocused = 12,
	EAudioLockID_MAX = 13
};

// Enum RGISocialShared.ERGISocialSharedPlatform
enum class ERGISocialSharedPlatform : uint8 {
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
	ERGISocialSharedPlatform_MAX = 11
};

// Enum RGISocialShared.EToastState
enum class EToastState : uint8 {
	Success = 0,
	Error = 1,
	Other = 2,
	EToastState_MAX = 3
};

// Enum RGISocialShared.EToastType
enum class EToastType : uint8 {
	FriendRequestInbound = 0,
	PartyInviteInbound = 1,
	Generic = 2,
	EToastType_MAX = 3
};

// ScriptStruct RGISocialShared.RGISocialSharedAudioViewModelEventContext
// Size: 0x18 (Inherited: 0x00)
struct FRGISocialSharedAudioViewModelEventContext {
	struct UObject* CallingObject; // 0x00(0x08)
	enum class EAudioEventID EventId; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UObject* AdditionalContext; // 0x10(0x08)
};

// ScriptStruct RGISocialShared.RGISocialSharedPlayer
// Size: 0x10 (Inherited: 0x00)
struct FRGISocialSharedPlayer {
	struct FString Puuid; // 0x00(0x10)
};

// ScriptStruct RGISocialShared.RGISocialSharedMessage
// Size: 0xb8 (Inherited: 0x00)
struct FRGISocialSharedMessage {
	struct FString Body; // 0x00(0x10)
	struct FString Channel; // 0x10(0x10)
	struct FString GameName; // 0x20(0x10)
	struct FString GameTag; // 0x30(0x10)
	struct FString Mid; // 0x40(0x10)
	struct FString Name; // 0x50(0x10)
	struct FString Pid; // 0x60(0x10)
	struct FString Puuid; // 0x70(0x10)
	bool bRead; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString Region; // 0x88(0x10)
	struct FDateTime Timestamp; // 0x98(0x08)
	struct FString Type; // 0xa0(0x10)
	bool bUicEvent; // 0xb0(0x01)
	bool bIsInteractionAllowed; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
};

// ScriptStruct RGISocialShared.RGISocialSharedAudioViewModelScopedLock
// Size: 0x10 (Inherited: 0x00)
struct FRGISocialSharedAudioViewModelScopedLock {
	struct URGISocialSharedAudioViewModel* AudioViewModel; // 0x00(0x08)
	enum class EAudioLockID LockId; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

