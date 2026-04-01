// Class RGIPermissions.RGIPermissionsLoggedPlayerPermissionsViewModel
// Size: 0xb8 (Inherited: 0x70)
struct URGIPermissionsLoggedPlayerPermissionsViewModel : UMVVMViewModelBase {
	struct TScriptInterface<IRGIPermissionsDataStore> DataStore; // 0x70(0x10)
	struct FRGIPermissionsLoggedPlayerPermissions LoggedPlayerPermissions; // 0x80(0x30)
	char pad_B0[0x8]; // 0xb0(0x08)

	void SetLoggedPlayerPermissions(struct FRGIPermissionsLoggedPlayerPermissions& InLoggedPlayerPermissions); // Function RGIPermissions.RGIPermissionsLoggedPlayerPermissionsViewModel.SetLoggedPlayerPermissions // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x52ed580
	void SetCrossPlatformInteractionsPermission(bool bNewCrossPlatformInteractionsPermission); // Function RGIPermissions.RGIPermissionsLoggedPlayerPermissionsViewModel.SetCrossPlatformInteractionsPermission // (Final|Native|Public|BlueprintCallable) // @ game+0x52ed320
	struct FRGIPermissionsLoggedPlayerPermissions GetLoggedPlayerPermissions(); // Function RGIPermissions.RGIPermissionsLoggedPlayerPermissionsViewModel.GetLoggedPlayerPermissions // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52ed420
};

// Class RGIPermissions.RGIPermissionsMockedData
// Size: 0x68 (Inherited: 0x38)
struct URGIPermissionsMockedData : UPrimaryDataAsset {
	struct FRGIPermissionsLoggedPlayerPermissions LoggedPlayerPermissions; // 0x38(0x30)
};

// Class RGIPermissions.RGIPermissionsMockedDataStore
// Size: 0x80 (Inherited: 0x30)
struct URGIPermissionsMockedDataStore : UObject {
	char pad_30[0x20]; // 0x30(0x20)
	struct FRGIPermissionsLoggedPlayerPermissions LoggedPlayerPermissions; // 0x50(0x30)
};

// Class RGIPermissions.RGIPermissionsUserSettings
// Size: 0x80 (Inherited: 0x48)
struct URGIPermissionsUserSettings : UDeveloperSettings {
	bool bUseMockedData; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TSoftObjectPtr<URGIPermissionsMockedData> MockedData; // 0x50(0x30)
};

// Class RGIPermissions.RGIPermissionsDataStore
// Size: 0x30 (Inherited: 0x30)
struct URGIPermissionsDataStore : UInterface {
};

// Class RGIPermissions.RGIPermissionsNoOpDataStore
// Size: 0x50 (Inherited: 0x30)
struct URGIPermissionsNoOpDataStore : UObject {
	char pad_30[0x20]; // 0x30(0x20)
};

// Class RGIPermissions.RGIPermissionsSubsystem
// Size: 0x88 (Inherited: 0x38)
struct URGIPermissionsSubsystem : UGameInstanceSubsystem {
	char pad_38[0x20]; // 0x38(0x20)
	struct TScriptInterface<IRGIPermissionsDataStore> DataStore; // 0x58(0x10)
	struct URGIPermissionsLoggedPlayerPermissionsViewModel* LoggedPlayerPermissionsViewModel; // 0x68(0x08)
	char pad_70[0x18]; // 0x70(0x18)

	void UpdateCrossPlatformInteractionsPermission(); // Function RGIPermissions.RGIPermissionsSubsystem.UpdateCrossPlatformInteractionsPermission // (Native|Public|BlueprintCallable) // @ game+0x52f0530
	void SetCrossPlatformInteractionsPermission(bool bNewCrossPlatformInteractionsPermission); // Function RGIPermissions.RGIPermissionsSubsystem.SetCrossPlatformInteractionsPermission // (Final|Native|Public|BlueprintCallable) // @ game+0x52efee0
	void GetUsersCommunicationPermissions(struct TMap<struct FString, enum class ERGISocialSharedPlatform>& Players, struct FDelegate& OnSuccess, struct FDelegate& OnError); // Function RGIPermissions.RGIPermissionsSubsystem.GetUsersCommunicationPermissions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x52f0230
	struct FRGIPermissionsLoggedPlayerPermissions GetLoggedPlayerPermissions(); // Function RGIPermissions.RGIPermissionsSubsystem.GetLoggedPlayerPermissions // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52efff0
};

