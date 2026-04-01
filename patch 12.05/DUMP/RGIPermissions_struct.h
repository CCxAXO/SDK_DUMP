// Enum RGIPermissions.ERGIPermissionsUsersCommunicationPermissionsResponseErrors
enum class ERGIPermissionsUsersCommunicationPermissionsResponseErrors : uint8 {
	RiotGamesApiUpdateRequired = 0,
	NotAvailable = 1,
	PlatformUserNotConnected = 2,
	InternalError = 3,
	ERGIPermissionsUsersCommunicationPermissionsResponseErrors_MAX = 4
};

// Enum RGIPermissions.ERGIPermissionsCommunicationPermissionState
enum class ERGIPermissionsCommunicationPermissionState : uint8 {
	NotAllowed = 0,
	Allowed = 1,
	ERGIPermissionsCommunicationPermissionState_MAX = 2
};

// Enum RGIPermissions.ERGIPermissionsCommunicationPermissionType
enum class ERGIPermissionsCommunicationPermissionType : uint8 {
	Unknown = 0,
	Text = 1,
	Voice = 2,
	ERGIPermissionsCommunicationPermissionType_MAX = 3
};

// Enum RGIPermissions.ERGIPermissionsCrossPlayPermissionsPartyCompatibility
enum class ERGIPermissionsCrossPlayPermissionsPartyCompatibility : uint8 {
	Compatible = 0,
	NewMemberDoesNotSupportCrossPlay = 1,
	TargetPartyDoesNotSupportCrossPlay = 2,
	Invalid = 3,
	PartyFull = 4,
	MissingData = 5,
	ERGIPermissionsCrossPlayPermissionsPartyCompatibility_MAX = 6
};

// Enum RGIPermissions.ERGIPermissionsCrossPlayPermissionsPlayerCompatibility
enum class ERGIPermissionsCrossPlayPermissionsPlayerCompatibility : uint8 {
	Compatible = 0,
	LocalPlayerCrossPlayOff = 1,
	TargetPlayerCrossPlayOff = 2,
	Invalid = 3,
	ERGIPermissionsCrossPlayPermissionsPlayerCompatibility_MAX = 4
};

// Enum RGIPermissions.ERGIPermissionsTextChatPermission
enum class ERGIPermissionsTextChatPermission : uint8 {
	Everyone = 0,
	FriendsOnly = 1,
	None = 2,
	ERGIPermissionsTextChatPermission_MAX = 3
};

// Enum RGIPermissions.ERGIPermissionsUsersCommunicationPermissionsDenyReasons
enum class ERGIPermissionsUsersCommunicationPermissionsDenyReasons : uint8 {
	Unknown = 0,
	NotAllowed = 1,
	MissingPrivilege = 2,
	PrivilegeRestrictsTarget = 3,
	BlockListRestrictsTarget = 4,
	MuteListRestrictsTarget = 5,
	PrivacySettingRestrictsTarget = 6,
	CrossNetworkUserMustBeFriend = 7,
	ERGIPermissionsUsersCommunicationPermissionsDenyReasons_MAX = 8
};

// ScriptStruct RGIPermissions.RGIPermissionsUsersCommunicationPermissions
// Size: 0x50 (Inherited: 0x00)
struct FRGIPermissionsUsersCommunicationPermissions {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct RGIPermissions.RGIPermissionsCrossPlayPermissionsCheckResult
// Size: 0x03 (Inherited: 0x00)
struct FRGIPermissionsCrossPlayPermissionsCheckResult {
	enum class ERGIPermissionsCrossPlayPermissionsPlayerCompatibility PlayerCompatibility; // 0x00(0x01)
	enum class ERGIPermissionsCrossPlayPermissionsPartyCompatibility InviteCompatibility; // 0x01(0x01)
	enum class ERGIPermissionsCrossPlayPermissionsPartyCompatibility JoinCompatibility; // 0x02(0x01)
};

// ScriptStruct RGIPermissions.RGIPermissionsCrossPlayPermissions
// Size: 0x20 (Inherited: 0x00)
struct FRGIPermissionsCrossPlayPermissions {
	bool bHasPlayerCrossPlayEnabled; // 0x00(0x01)
	bool bIsInParty; // 0x01(0x01)
	bool bHasPartyCrossPlayEnabled; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct TArray<enum class ERGISocialSharedPlatform> PartyMemberPlatforms; // 0x08(0x10)
	uint32_t CurrentPartySize; // 0x18(0x04)
	uint32_t MaxPartySize; // 0x1c(0x04)
};

// ScriptStruct RGIPermissions.RGIPermissionsCommunicationPermission
// Size: 0x18 (Inherited: 0x00)
struct FRGIPermissionsCommunicationPermission {
	enum class ERGIPermissionsCommunicationPermissionState Permission; // 0x00(0x01)
	enum class ERGIPermissionsCommunicationPermissionType Type; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<enum class ERGIPermissionsUsersCommunicationPermissionsDenyReasons> Reasons; // 0x08(0x10)
};

// ScriptStruct RGIPermissions.RGIPermissionsUserCommunicationPermissions
// Size: 0x20 (Inherited: 0x00)
struct FRGIPermissionsUserCommunicationPermissions {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct RGIPermissions.RGIPermissionsPermissionEnum
// Size: 0x20 (Inherited: 0x00)
struct FRGIPermissionsPermissionEnum {
	struct FString Type; // 0x00(0x10)
	struct TArray<struct FString> Values; // 0x10(0x10)
};

// ScriptStruct RGIPermissions.RGIPermissionsPermissionLimit
// Size: 0x38 (Inherited: 0x00)
struct FRGIPermissionsPermissionLimit {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct RGIPermissions.RGIPermissionsLoggedPlayerPermissionDetails
// Size: 0x88 (Inherited: 0x00)
struct FRGIPermissionsLoggedPlayerPermissionDetails {
	struct FString PermissionId; // 0x00(0x10)
	bool bIsGranted; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FRGIPermissionsPermissionEnum> Enums; // 0x18(0x10)
	struct TArray<struct FRGIPermissionsPermissionLimit> Limit; // 0x28(0x10)
	char pad_38[0x50]; // 0x38(0x50)
};

// ScriptStruct RGIPermissions.RGIPermissionsLoggedPlayerPermissions
// Size: 0x30 (Inherited: 0x00)
struct FRGIPermissionsLoggedPlayerPermissions {
	struct TArray<struct FRGIPermissionsLoggedPlayerPermissionDetails> Permissions; // 0x00(0x10)
	struct FRGIPermissionsCrossPlayPermissions DetailedCrossPlayPermissions; // 0x10(0x20)
};

