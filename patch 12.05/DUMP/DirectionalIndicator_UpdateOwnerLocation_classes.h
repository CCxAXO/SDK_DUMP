// WidgetBlueprintGeneratedClass DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C
// Size: 0x412 (Inherited: 0x318)
struct UDirectionalIndicator_UpdateOwnerLocation_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Loop; // 0x320(0x08)
	struct UWidgetAnimation* Outro; // 0x328(0x08)
	struct UWidgetAnimation* Intro; // 0x330(0x08)
	struct UImage* Indicator_EchoLine; // 0x338(0x08)
	struct UImage* Indicator_TrailLine1; // 0x340(0x08)
	struct UImage* Indicator_TrailLine2; // 0x348(0x08)
	struct UImage* IndicatorImage; // 0x350(0x08)
	struct UInvalidationBox* InvalidationBox_DirectionalIndicator_UpdateOwnerLocation; // 0x358(0x08)
	struct UOverlay* Overlay_Indicator; // 0x360(0x08)
	struct FLinearColor Color; // 0x368(0x10)
	struct FVector Location; // 0x378(0x18)
	double DurationSeconds; // 0x390(0x08)
	double StartTime; // 0x398(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x3a0(0x08)
	struct FRotator ReverseDirectionRotator; // 0x3a8(0x18)
	struct FVector2D Size; // 0x3c0(0x10)
	double RadialIndicatorDistance; // 0x3d0(0x08)
	bool HideIfOffscreenSimple; // 0x3d8(0x01)
	char pad_3D9[0x7]; // 0x3d9(0x07)
	struct AActor* TrackedActor; // 0x3e0(0x08)
	bool HadTrackedActor; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct FVector LastTrackedActorLocatin; // 0x3f0(0x18)
	struct FTimerHandle LoopingAnimTimer; // 0x408(0x08)
	bool Animate; // 0x410(0x01)
	bool IndicatorStopped; // 0x411(0x01)

	void GetIndicatorLocation(struct FVector& Location); // Function DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C.GetIndicatorLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetMiddleOfScreen(double& X_MIddle, double& Y_Middle); // Function DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C.GetMiddleOfScreen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void LocationProjectedIsOnScreen(struct FVector& WorldPosition, bool& ProjectedLocationIsOnScreen); // Function DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C.LocationProjectedIsOnScreen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Update Widget(); // Function DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C.Update Widget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StopDirectionalIndicator(); // Function DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C.StopDirectionalIndicator // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RemoveDirectionalFromParent(); // Function DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C.RemoveDirectionalFromParent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_DirectionalIndicator_UpdateOwnerLocation(int32_t EntryPoint); // Function DirectionalIndicator_UpdateOwnerLocation.DirectionalIndicator_UpdateOwnerLocation_C.ExecuteUbergraph_DirectionalIndicator_UpdateOwnerLocation // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

