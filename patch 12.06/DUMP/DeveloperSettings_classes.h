// Class DeveloperSettings.DeveloperSettings
// Size: 0x48 (Inherited: 0x30)
struct UDeveloperSettings : UObject {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class DeveloperSettings.DeveloperSettingsBackedByCVars
// Size: 0x48 (Inherited: 0x48)
struct UDeveloperSettingsBackedByCVars : UDeveloperSettings {
};

// Class DeveloperSettings.PlatformSettings
// Size: 0x50 (Inherited: 0x30)
struct UPlatformSettings : UObject {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class DeveloperSettings.PlatformSettingsManager
// Size: 0x90 (Inherited: 0x30)
struct UPlatformSettingsManager : UObject {
	struct TMap<struct UPlatformSettings*, struct FPlatformSettingsInstances> SettingsMap; // 0x30(0x50)
	char pad_80[0x10]; // 0x80(0x10)
};

