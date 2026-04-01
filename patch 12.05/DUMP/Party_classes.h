// Class Party.Chatroom
// Size: 0x60 (Inherited: 0x30)
struct UChatroom : UObject {
	struct FString CurrentChatRoomId; // 0x30(0x10)
	int32_t MaxChatRoomRetries; // 0x40(0x04)
	int32_t NumChatRoomRetries; // 0x44(0x04)
	char pad_48[0x18]; // 0x48(0x18)
};

// Class Party.SocialManager
// Size: 0x1b8 (Inherited: 0x30)
struct USocialManager : UObject {
	char pad_30[0x80]; // 0x30(0x80)
	struct TArray<struct USocialToolkit*> SocialToolkits; // 0xb0(0x10)
	struct USocialDebugTools* SocialDebugTools; // 0xc0(0x08)
	char pad_C8[0xf0]; // 0xc8(0xf0)
};

// Class Party.SocialToolkit
// Size: 0x2b8 (Inherited: 0x30)
struct USocialToolkit : UObject {
	char pad_30[0x40]; // 0x30(0x40)
	struct USocialUser* LocalUser; // 0x70(0x08)
	struct TArray<struct USocialUser*> AllUsers; // 0x78(0x10)
	char pad_88[0x50]; // 0x88(0x50)
	bool bRemoveInvalidatedUserFromMaps; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	struct TWeakObjectPtr<struct ULocalPlayer> LocalPlayerOwner; // 0xdc(0x08)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct USocialChatManager* SocialChatManager; // 0xe8(0x08)
	char pad_F0[0x1c8]; // 0xf0(0x1c8)
};

// Class Party.SocialChatManager
// Size: 0x228 (Inherited: 0x30)
struct USocialChatManager : UObject {
	char pad_30[0x50]; // 0x30(0x50)
	struct TMap<struct TWeakObjectPtr<struct USocialUser>, struct USocialPrivateMessageChannel*> DirectChannelsByTargetUser; // 0x80(0x50)
	struct TMap<struct FString, struct USocialChatRoom*> ChatRoomsById; // 0xd0(0x50)
	struct TMap<struct FString, struct USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName; // 0x120(0x50)
	bool bEnableChatSlashCommands; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
	struct TMap<struct FUniqueNetIdRepl, struct USocialGroupChannel*> GroupChannels; // 0x178(0x50)
	char pad_1C8[0x60]; // 0x1c8(0x60)
};

// Class Party.SocialChatChannel
// Size: 0xf0 (Inherited: 0x30)
struct USocialChatChannel : UObject {
	char pad_30[0xc0]; // 0x30(0xc0)
};

// Class Party.SocialChatRoom
// Size: 0x100 (Inherited: 0xf0)
struct USocialChatRoom : USocialChatChannel {
	char pad_F0[0x10]; // 0xf0(0x10)
};

// Class Party.SocialGroupChannel
// Size: 0xa0 (Inherited: 0x30)
struct USocialGroupChannel : UObject {
	struct USocialUser* SocialUser; // 0x30(0x08)
	struct FUniqueNetIdRepl GroupId; // 0x38(0x30)
	struct FText DisplayName; // 0x68(0x18)
	struct TArray<struct USocialUser*> Members; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)
};

// Class Party.SocialPartyChatRoom
// Size: 0x100 (Inherited: 0x100)
struct USocialPartyChatRoom : USocialChatRoom {
};

// Class Party.SocialPrivateMessageChannel
// Size: 0xf8 (Inherited: 0xf0)
struct USocialPrivateMessageChannel : USocialChatChannel {
	struct USocialUser* TargetUser; // 0xf0(0x08)
};

// Class Party.SocialReadOnlyChatChannel
// Size: 0xf0 (Inherited: 0xf0)
struct USocialReadOnlyChatChannel : USocialChatChannel {
};

// Class Party.SocialParty
// Size: 0x370 (Inherited: 0x30)
struct USocialParty : UObject {
	char pad_30[0x38]; // 0x30(0x38)
	struct APartyBeaconClient* ReservationBeaconClientClass; // 0x68(0x08)
	struct ASpectatorBeaconClient* SpectatorBeaconClientClass; // 0x70(0x08)
	char pad_78[0x10]; // 0x78(0x10)
	struct FUniqueNetIdRepl OwningLocalUserId; // 0x88(0x30)
	struct FUniqueNetIdRepl CurrentLeaderId; // 0xb8(0x30)
	struct TMap<struct FUniqueNetIdRepl, struct UPartyMember*> PartyMembersById; // 0xe8(0x50)
	bool bEnableAutomaticPartyRejoin; // 0x138(0x01)
	char pad_139[0x57]; // 0x139(0x57)
	double PlatformUserInviteCooldown; // 0x190(0x08)
	double PrimaryUserInviteCooldown; // 0x198(0x08)
	char pad_1A0[0x70]; // 0x1a0(0x70)
	struct TWeakObjectPtr<struct APartyBeaconClient> ReservationBeaconClient; // 0x210(0x08)
	char pad_218[0xc]; // 0x218(0x0c)
	struct TWeakObjectPtr<struct ASpectatorBeaconClient> SpectatorBeaconClient; // 0x224(0x08)
	char pad_22C[0x2c]; // 0x22c(0x2c)
	float JoinInProgressTimerRate; // 0x258(0x04)
	int32_t JoinInProgressRequestTimeout; // 0x25c(0x04)
	int32_t JoinInProgressResponseTimeout; // 0x260(0x04)
	char pad_264[0x10c]; // 0x264(0x10c)
};

// Class Party.PartyMember
// Size: 0x118 (Inherited: 0x30)
struct UPartyMember : UObject {
	char pad_30[0x48]; // 0x30(0x48)
	struct USocialUser* SocialUser; // 0x78(0x08)
	char pad_80[0x98]; // 0x80(0x98)
};

// Class Party.SocialDebugTools
// Size: 0x90 (Inherited: 0x30)
struct USocialDebugTools : UObject {
	char pad_30[0x60]; // 0x30(0x60)
};

// Class Party.SocialSettings
// Size: 0x78 (Inherited: 0x30)
struct USocialSettings : UObject {
	struct TArray<struct FName> OssNamesWithEnvironmentIdPrefix; // 0x30(0x10)
	int32_t DefaultMaxPartySize; // 0x40(0x04)
	bool bPreferPlatformInvites; // 0x44(0x01)
	bool bMustSendPrimaryInvites; // 0x45(0x01)
	bool bLeavePartyOnDisconnect; // 0x46(0x01)
	bool bSetDesiredPrivacyOnLocalPlayerBecomesLeader; // 0x47(0x01)
	float UserListAutoUpdateRate; // 0x48(0x04)
	int32_t MinNicknameLength; // 0x4c(0x04)
	int32_t MaxNicknameLength; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct FSocialPlatformDescription> SocialPlatformDescriptions; // 0x58(0x10)
	struct TArray<struct FName> SonyOSSNames; // 0x68(0x10)
};

// Class Party.SocialUser
// Size: 0x1d8 (Inherited: 0x30)
struct USocialUser : UObject {
	char pad_30[0x1a8]; // 0x30(0x1a8)
};

