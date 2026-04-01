// ScriptStruct OnlineSubsystemRiot.RGIOPRestrictionData
// Size: 0x08 (Inherited: 0x00)
struct FRGIOPRestrictionData {
	int64_t ExpirationMillis; // 0x00(0x08)
};

// ScriptStruct OnlineSubsystemRiot.RGIOPRestrictionClaim
// Size: 0x38 (Inherited: 0x00)
struct FRGIOPRestrictionClaim {
	struct FString Type; // 0x00(0x10)
	struct FString scope; // 0x10(0x10)
	struct FString Reason; // 0x20(0x10)
	struct FRGIOPRestrictionData Data; // 0x30(0x08)
};

// ScriptStruct OnlineSubsystemRiot.RGIOPBanClaims
// Size: 0x10 (Inherited: 0x00)
struct FRGIOPBanClaims {
	struct TArray<struct FRGIOPRestrictionClaim> Restrictions; // 0x00(0x10)
};

// ScriptStruct OnlineSubsystemRiot.RGIOPUserAccount
// Size: 0x20 (Inherited: 0x00)
struct FRGIOPUserAccount {
	struct FString GameName; // 0x00(0x10)
	struct FString Tagline; // 0x10(0x10)
};

// ScriptStruct OnlineSubsystemRiot.RGIOPUserInfo
// Size: 0x68 (Inherited: 0x00)
struct FRGIOPUserInfo {
	bool bAccountVerified; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FRGIOPUserAccount Account; // 0x08(0x20)
	int32_t Age; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString Country; // 0x30(0x10)
	int64_t IssuedAt; // 0x40(0x08)
	struct FString Puuid; // 0x48(0x10)
	struct FRGIOPBanClaims BanClaims; // 0x58(0x10)
};

// ScriptStruct OnlineSubsystemRiot.RGIOPRiotGamesApiConfig
// Size: 0x70 (Inherited: 0x00)
struct FRGIOPRiotGamesApiConfig {
	struct FString ProductId; // 0x00(0x10)
	struct FString Publisher; // 0x10(0x10)
	struct FString RsoClientId; // 0x20(0x10)
	struct FString PatchlineId; // 0x30(0x10)
	struct FString DefaultRegion; // 0x40(0x10)
	struct FString DefaultLocale; // 0x50(0x10)
	struct FString ClientConfigUrl; // 0x60(0x10)
};

// ScriptStruct OnlineSubsystemRiot.RGIOPConsoleClientConfigEnvironments
// Size: 0xb0 (Inherited: 0x00)
struct FRGIOPConsoleClientConfigEnvironments {
	struct FString PS5DefaultEnvironment; // 0x00(0x10)
	struct TMap<struct FString, struct FString> PS5ClientConfigUrls; // 0x10(0x50)
	struct TMap<struct FString, struct FString> XSXClientConfigUrls; // 0x60(0x50)
};

