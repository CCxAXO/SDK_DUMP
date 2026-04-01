// Class CoreSDKUtils.CoreSDKUtilsBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UCoreSDKUtilsBlueprintLibrary : UBlueprintFunctionLibrary {

	bool IsPlatformIOS(); // Function CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.IsPlatformIOS // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3c6df80
	bool IsPlatformAndroid(); // Function CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.IsPlatformAndroid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3c6df80
	bool IsMobile(); // Function CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.IsMobile // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5555e10
	bool IsBuildFromCI(); // Function CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.IsBuildFromCI // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5556230
	bool IsAutomationWorker(); // Function CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.IsAutomationWorker // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5555df0
	bool IsAutomationMonitor(); // Function CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.IsAutomationMonitor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5555dd0
	struct FString GetProjectVersionString(); // Function CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetProjectVersionString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5556460
	struct FString GetProjectName(); // Function CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetProjectName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4475750
	struct FString GetPatchline(); // Function CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetPatchline // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5555e50
	struct FString GetFullVersionString(); // Function CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetFullVersionString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x55565b0
	struct FString GetCoreSDKVersionString(); // Function CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetCoreSDKVersionString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5556320
	struct FString GetClientPatchline(); // Function CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetClientPatchline // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5555f20
	struct FDateTime GetBuildTime(); // Function CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetBuildTime // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x5556190
	struct FString GetBuildTargetType(); // Function CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetBuildTargetType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5555ff0
	int32_t GetBuildNumber(); // Function CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetBuildNumber // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x55561e0
	struct FString GetBuildConfiguration(); // Function CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetBuildConfiguration // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4475890
	int32_t GetBuildCompatibleChangelist(); // Function CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetBuildCompatibleChangelist // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x55560f0
	int32_t GetBuildChangelist(); // Function CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetBuildChangelist // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5556140
	struct FString GetBuildBranch(); // Function CoreSDKUtils.CoreSDKUtilsBlueprintLibrary.GetBuildBranch // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5556280
};

// Class CoreSDKUtils.CoreSDKUtilsConfig
// Size: 0x88 (Inherited: 0x30)
struct UCoreSDKUtilsConfig : UObject {
	struct FString CoreSDKVersion; // 0x30(0x10)
	int32_t BuildNumber; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString BuildTime; // 0x48(0x10)
	int32_t Change; // 0x58(0x04)
	int32_t CodeChange; // 0x5c(0x04)
	struct FString Branch; // 0x60(0x10)
	struct FString TeamName; // 0x70(0x10)
	bool bManageCrashData; // 0x80(0x01)
	bool bCrashDataIncludesBuildInfo; // 0x81(0x01)
	bool bCrashDataIncludesUserIdentification; // 0x82(0x01)
	char pad_83[0x5]; // 0x83(0x05)
};

