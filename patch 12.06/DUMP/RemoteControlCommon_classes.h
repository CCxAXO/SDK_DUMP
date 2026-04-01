// Class RemoteControlCommon.RCPropertyContainerBase
// Size: 0x58 (Inherited: 0x30)
struct URCPropertyContainerBase : UObject {
	char pad_30[0x28]; // 0x30(0x28)
};

// Class RemoteControlCommon.RCPropertyContainerRegistry
// Size: 0x88 (Inherited: 0x38)
struct URCPropertyContainerRegistry : UEngineSubsystem {
	struct TMap<struct FRCPropertyContainerKey, struct URCPropertyContainerBase*> CachedContainerClasses; // 0x38(0x50)
};

// Class RemoteControlCommon.PropertyContainerTestObject
// Size: 0xc0 (Inherited: 0x30)
struct UPropertyContainerTestObject : UObject {
	bool bSomeBool; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	uint32_t SomeUInt32; // 0x34(0x04)
	float SomeFloat; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FVector SomeVector; // 0x40(0x18)
	struct FRotator SomeRotator; // 0x58(0x18)
	int32_t SomeClampedInt; // 0x70(0x04)
	int32_t SomeClampedInt2; // 0x74(0x04)
	int32_t SomeUIClampedInt; // 0x78(0x04)
	float SomeClampedFloat; // 0x7c(0x04)
	float SomeUIClampedFloat; // 0x80(0x04)
	float SomeClampedFloat2; // 0x84(0x04)
	struct FString SomeString; // 0x88(0x10)
	struct FText SomeText; // 0x98(0x18)
	struct TArray<float> SomeFloatArray; // 0xb0(0x10)
};

// Class RemoteControlCommon.RemoteControlSettings
// Size: 0x118 (Inherited: 0x48)
struct URemoteControlSettings : UDeveloperSettings {
	bool bProtocolsGenerateTransactions; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString RemoteControlWebInterfaceBindAddress; // 0x50(0x10)
	uint32_t RemoteControlWebInterfacePort; // 0x60(0x04)
	bool bForceWebAppBuildAtStartup; // 0x64(0x01)
	bool bWebAppLogRequestDuration; // 0x65(0x01)
	bool bAutoStartWebServer; // 0x66(0x01)
	bool bAutoStartWebSocketServer; // 0x67(0x01)
	uint32_t RemoteControlHttpServerPort; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FString RemoteControlWebsocketServerBindAddress; // 0x70(0x10)
	uint32_t RemoteControlWebSocketServerPort; // 0x80(0x04)
	bool bDisplayInEditorOnlyWarnings; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float TreeBindingSplitRatio; // 0x88(0x04)
	bool bUseRebindingContext; // 0x8c(0x01)
	bool bIgnoreProtectedCheck; // 0x8d(0x01)
	bool bIgnoreGetterSetterCheck; // 0x8e(0x01)
	bool bIgnoreWarnings; // 0x8f(0x01)
	bool bRestrictServerAccess; // 0x90(0x01)
	bool bEnableRemotePythonExecution; // 0x91(0x01)
	char pad_92[0x6]; // 0x92(0x06)
	struct TSet<struct FRCNetworkAddressRange> AllowlistedClients; // 0x98(0x50)
	struct FString AllowedOrigin; // 0xe8(0x10)
	bool bEnforcePassphraseForRemoteClients; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct TArray<struct FRCPassphrase> Passphrases; // 0x100(0x10)
	bool bShowPassphraseDisabledWarning; // 0x110(0x01)
	bool bSecuritySettingsReviewed; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)
};

