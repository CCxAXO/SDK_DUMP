// Class OnlineSubsystemRiot.OnlineIdentityRiotSettings
// Size: 0x58 (Inherited: 0x48)
struct UOnlineIdentityRiotSettings : UDeveloperSettings {
	struct TArray<struct FString> ExtraRSOScopes; // 0x48(0x10)
};

// Class OnlineSubsystemRiot.RGIOPRiotGamesApiSettings
// Size: 0x190 (Inherited: 0x48)
struct URGIOPRiotGamesApiSettings : UDeveloperSettings {
	struct TMap<struct FString, struct FRGIOPRiotGamesApiConfig> Configurations; // 0x48(0x50)
	struct FString ProductId; // 0x98(0x10)
	struct FString AppName; // 0xa8(0x10)
	struct FString EditorPatchlineId; // 0xb8(0x10)
	struct FString DefaultPatchlineId; // 0xc8(0x10)
	struct FRGIOPConsoleClientConfigEnvironments ConsoleClientConfigEnvironments; // 0xd8(0xb0)
	bool bShouldUseRiotClientSettings; // 0x188(0x01)
	bool bAutoSetAlias; // 0x189(0x01)
	bool bAutoAcceptEula; // 0x18a(0x01)
	bool bReserveAccountsFromSourceControl; // 0x18b(0x01)
	bool bPersistLogin; // 0x18c(0x01)
	bool bEnableDebugLogging; // 0x18d(0x01)
	char pad_18E[0x2]; // 0x18e(0x02)
};

// Class OnlineSubsystemRiot.RGIOPRiotGamesApiEditorSettings
// Size: 0x60 (Inherited: 0x48)
struct URGIOPRiotGamesApiEditorSettings : UDeveloperSettings {
	struct FString EditorPatchlineOverride; // 0x48(0x10)
	bool bShouldUseDevRiotClient; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)

	struct TArray<struct FString> GetPatchlineOptions(); // Function OnlineSubsystemRiot.RGIOPRiotGamesApiEditorSettings.GetPatchlineOptions // (Final|Native|Public|Const) // @ game+0x555cfe0
};

