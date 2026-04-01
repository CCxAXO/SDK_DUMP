// Class HeadMountedDisplay.HandKeypointConversion
// Size: 0x30 (Inherited: 0x30)
struct UHandKeypointConversion : UBlueprintFunctionLibrary {

	int32_t Conv_HandKeypointToInt32(enum class EHandKeypoint Input); // Function HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32 // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3241550
};

// Class HeadMountedDisplay.MotionControllerComponent
// Size: 0x820 (Inherited: 0x690)
struct UMotionControllerComponent : UPrimitiveComponent {
	int32_t PlayerIndex; // 0x690(0x04)
	struct FName MotionSource; // 0x694(0x0c)
	char bDisableLowLatencyUpdate : 1; // 0x6a0(0x01)
	char pad_6A0_1 : 7; // 0x6a0(0x01)
	char pad_6A1[0x3]; // 0x6a1(0x03)
	enum class ETrackingStatus CurrentTrackingStatus; // 0x6a4(0x01)
	bool bDisplayDeviceModel; // 0x6a5(0x01)
	char pad_6A6[0x2]; // 0x6a6(0x02)
	struct FName DisplayModelSource; // 0x6a8(0x0c)
	char pad_6B4[0x4]; // 0x6b4(0x04)
	struct UStaticMesh* CustomDisplayMesh; // 0x6b8(0x08)
	struct TArray<struct UMaterialInterface*> DisplayMeshMaterialOverrides; // 0x6c0(0x10)
	struct UPrimitiveComponent* DisplayComponent; // 0x6d0(0x08)
	char pad_6D8[0x148]; // 0x6d8(0x148)

	void SetTrackingSource(enum class EControllerHand NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3247920
	void SetTrackingMotionSource(struct FName NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3247770
	void SetShowDeviceModel(bool bShowControllerModel); // Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3247cd0
	void SetDisplayModelSource(struct FName NewDisplayModelSource); // Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3247bb0
	void SetCustomDisplayMesh(struct UStaticMesh* NewDisplayMesh); // Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3247a30
	void SetAssociatedPlayerIndex(int32_t NewPlayer); // Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3247630
	void OnMotionControllerUpdated(); // Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x1b42740
	bool IsTracked(); // Function HeadMountedDisplay.MotionControllerComponent.IsTracked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3247a10
	enum class EControllerHand GetTrackingSource(); // Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x32478c0
	float GetParameterValue(struct FName InName, bool& bValueFound); // Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue // (Final|RequiredAPI|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x3247400
	bool GetLinearVelocity(struct FVector& OutLinearVelocity); // Function HeadMountedDisplay.MotionControllerComponent.GetLinearVelocity // (Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x32470e0
	bool GetLinearAcceleration(struct FVector& OutLinearAcceleration); // Function HeadMountedDisplay.MotionControllerComponent.GetLinearAcceleration // (Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3246ee0
	struct FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound); // Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition // (Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x32471e0
	bool GetAngularVelocity(struct FRotator& OutAngularVelocity); // Function HeadMountedDisplay.MotionControllerComponent.GetAngularVelocity // (Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3246fe0
};

