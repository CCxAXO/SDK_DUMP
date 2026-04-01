// Class Hotfix.OnlineHotfixManager
// Size: 0x270 (Inherited: 0x30)
struct UOnlineHotfixManager : UObject {
	char pad_30[0x200]; // 0x30(0x200)
	struct FString OSSName; // 0x230(0x10)
	struct FString HotfixManagerClassName; // 0x240(0x10)
	struct FString DebugPrefix; // 0x250(0x10)
	struct TArray<struct UObject*> AssetsHotfixedFromIniFiles; // 0x260(0x10)

	void StartHotfixProcess(); // Function Hotfix.OnlineHotfixManager.StartHotfixProcess // (Native|Public|BlueprintCallable) // @ game+0x3f35b60
};

// Class Hotfix.UpdateManager
// Size: 0x200 (Inherited: 0x30)
struct UUpdateManager : UObject {
	char pad_30[0x60]; // 0x30(0x60)
	float UpdateCheckStartDelay; // 0x90(0x04)
	float UpdateCheckCachedResponseDelay; // 0x94(0x04)
	float HotfixCheckCompleteDelay; // 0x98(0x04)
	float UpdateCheckCompleteDelay; // 0x9c(0x04)
	float HotfixAvailabilityCheckCompleteDelay; // 0xa0(0x04)
	float UpdateCheckAvailabilityCompleteDelay; // 0xa4(0x04)
	char pad_A8[0x4]; // 0xa8(0x04)
	int32_t AppSuspendedUpdateCheckTimeSeconds; // 0xac(0x04)
	char pad_B0[0x8]; // 0xb0(0x08)
	bool bPlatformEnvironmentDetected; // 0xb8(0x01)
	bool bInitialUpdateFinished; // 0xb9(0x01)
	bool bCheckHotfixAvailabilityOnly; // 0xba(0x01)
	enum class EUpdateState CurrentUpdateState; // 0xbb(0x01)
	int32_t WorstNumFilesPendingLoadViewed; // 0xbc(0x04)
	char pad_C0[0x4]; // 0xc0(0x04)
	enum class EHotfixResult LastHotfixResult; // 0xc4(0x01)
	char pad_C5[0x23]; // 0xc5(0x23)
	struct FDateTime LastUpdateCheck[0x2]; // 0xe8(0x10)
	enum class EUpdateCompletionStatus LastCompletionResult[0x2]; // 0xf8(0x02)
	char pad_FA[0x26]; // 0xfa(0x26)
	struct UEnum* UpdateStateEnum; // 0x120(0x08)
	struct UEnum* UpdateCompletionEnum; // 0x128(0x08)
	struct FUpdateContextDefinition UpdateContextDefinitionUnknown; // 0x130(0x68)
	struct TArray<struct FUpdateContextDefinition> UpdateContextDefinitions; // 0x198(0x10)
	char pad_1A8[0x58]; // 0x1a8(0x58)
};

