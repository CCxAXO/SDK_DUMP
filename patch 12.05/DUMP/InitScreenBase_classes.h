// WidgetBlueprintGeneratedClass InitScreenBase.InitScreenBase_C
// Size: 0x320 (Inherited: 0x318)
struct UInitScreenBase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)

	void ShouldShowPhotoSensitivityWarning(bool& ShouldShow); // Function InitScreenBase.InitScreenBase_C.ShouldShowPhotoSensitivityWarning // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	bool GetRequiresRatingDisplay(); // Function InitScreenBase.InitScreenBase_C.GetRequiresRatingDisplay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateLocalizationOverrides(); // Function InitScreenBase.InitScreenBase_C.UpdateLocalizationOverrides // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateState(); // Function InitScreenBase.InitScreenBase_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function InitScreenBase.InitScreenBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnClientGameInstanceInitStatusChanged(enum class EAresClientGameInstanceInitStatus Status, struct FText ErrorCode); // Function InitScreenBase.InitScreenBase_C.OnClientGameInstanceInitStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnQueueUpdated(); // Function InitScreenBase.InitScreenBase_C.OnQueueUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLoginReady(); // Function InitScreenBase.InitScreenBase_C.OnLoginReady // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_InitScreenBase(int32_t EntryPoint); // Function InitScreenBase.InitScreenBase_C.ExecuteUbergraph_InitScreenBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

