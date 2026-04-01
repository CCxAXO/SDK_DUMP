// Class NetCore.PushModelSettings
// Size: 0x58 (Inherited: 0x30)
struct UPushModelSettings : UObject {
	enum class EPushModelGlobalBehavior PushModelGlobalBehavior; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct TSoftClassPtr<UObject>> Allowlist; // 0x38(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> Denylist; // 0x48(0x10)
};

// Class NetCore.NetAnalyticsAggregatorConfig
// Size: 0x40 (Inherited: 0x30)
struct UNetAnalyticsAggregatorConfig : UObject {
	struct TArray<struct FNetAnalyticsDataConfig> NetAnalyticsData; // 0x30(0x10)
};

// Class NetCore.StatePerObjectConfig
// Size: 0x70 (Inherited: 0x30)
struct UStatePerObjectConfig : UObject {
	char pad_30[0x28]; // 0x30(0x28)
	struct FString PerObjectConfigSection; // 0x58(0x10)
	bool bEnabled; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class NetCore.EscalationManagerConfig
// Size: 0x90 (Inherited: 0x70)
struct UEscalationManagerConfig : UStatePerObjectConfig {
	struct TArray<struct FString> EscalationSeverity; // 0x70(0x10)
	char pad_80[0x10]; // 0x80(0x10)
};

