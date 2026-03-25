// Class RGIJiraSubmitterCore.RGIJiraSubmitterConfig
// Size: 0x110 (Inherited: 0x48)
struct URGIJiraSubmitterConfig : UDeveloperSettings {
	struct FString HostName; // 0x48(0x10)
	struct FString CloudClientId; // 0x58(0x10)
	struct FString CloudScope; // 0x68(0x10)
	struct FString CloudRedirectUri; // 0x78(0x10)
	int32_t CloudRedirectUriPort; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FString Project; // 0x90(0x10)
	struct FString FixVersion; // 0xa0(0x10)
	struct FString AffectsVersion; // 0xb0(0x10)
	struct FString SummaryPrefix; // 0xc0(0x10)
	struct FString BasicAuthUser; // 0xd0(0x10)
	struct FString BasicAuthToken; // 0xe0(0x10)
	struct TArray<struct FString> Labels; // 0xf0(0x10)
	struct FString CloudClientSecret; // 0x100(0x10)
};

// Class RGIJiraSubmitterCore.RGIJiraSubmitterPerProjectUser
// Size: 0x48 (Inherited: 0x30)
struct URGIJiraSubmitterPerProjectUser : UObject {
	struct FString CloudAccessToken; // 0x30(0x10)
	int64_t CloudAccessTokenExpiration; // 0x40(0x08)
};

