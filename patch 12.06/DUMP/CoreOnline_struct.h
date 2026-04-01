// Enum CoreOnline.ECoreOnlineDummy
enum class ECoreOnlineDummy : uint8 {
	Dummy = 0,
	ECoreOnlineDummy_MAX = 1
};

// ScriptStruct CoreOnline.JoinabilitySettings
// Size: 0x18 (Inherited: 0x00)
struct FJoinabilitySettings {
	struct FName SessionName; // 0x00(0x0c)
	bool bPublicSearchable; // 0x0c(0x01)
	bool bAllowInvites; // 0x0d(0x01)
	bool bJoinViaPresence; // 0x0e(0x01)
	bool bJoinViaPresenceFriendsOnly; // 0x0f(0x01)
	int32_t MaxPlayers; // 0x10(0x04)
	int32_t MaxPartySize; // 0x14(0x04)
};

// ScriptStruct CoreOnline.UniqueNetIdWrapper
// Size: 0x01 (Inherited: 0x00)
struct FUniqueNetIdWrapper {
	char pad_0[0x1]; // 0x00(0x01)
};

