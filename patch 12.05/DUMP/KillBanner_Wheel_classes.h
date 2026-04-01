// WidgetBlueprintGeneratedClass KillBanner_Wheel.KillBanner_Wheel_C
// Size: 0x494 (Inherited: 0x318)
struct UKillBanner_Wheel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* ReverseSpin; // 0x320(0x08)
	struct UAnimatedMaterialWidget_C* AnimatedMaterialWidget; // 0x328(0x08)
	struct UImage* Ring; // 0x330(0x08)
	struct UOverlay* SpinHolder; // 0x338(0x08)
	int32_t TotalKills; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	double GoalAngle; // 0x348(0x08)
	struct FKillBannerStruct KillBannerData; // 0x350(0x128)
	double PreviewRadius; // 0x478(0x08)
	struct TArray<struct UKillBanner_PieSlice_C*> Slices; // 0x480(0x10)
	int32_t CurrentShownSliceIndex; // 0x490(0x04)

	void MockupSlices(int32_t TotalKills); // Function KillBanner_Wheel.KillBanner_Wheel_C.MockupSlices // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeKillWheel(struct FKillBannerStruct KillBannerData, int32_t TotalSlices); // Function KillBanner_Wheel.KillBanner_Wheel_C.InitializeKillWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GenerateSlices(int32_t TotalKills); // Function KillBanner_Wheel.KillBanner_Wheel_C.GenerateSlices // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayAnimationForKill(int32_t Kills, int32_t TotalKills); // Function KillBanner_Wheel.KillBanner_Wheel_C.PlayAnimationForKill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function KillBanner_Wheel.KillBanner_Wheel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function KillBanner_Wheel.KillBanner_Wheel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function KillBanner_Wheel.KillBanner_Wheel_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void DelayedSpin(); // Function KillBanner_Wheel.KillBanner_Wheel_C.DelayedSpin // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_KillBanner_Wheel(int32_t EntryPoint); // Function KillBanner_Wheel.KillBanner_Wheel_C.ExecuteUbergraph_KillBanner_Wheel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

