// BlueprintGeneratedClass Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C
// Size: 0x191 (Inherited: 0xd8)
struct UComp_Gun_FlaggedZoomSettings_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct TMap<struct UZoomComponent*, struct FZoomTransitionSettings> OriginalSettings; // 0xe0(0x50)
	struct TMap<struct UZoomComponent*, struct FZoomTransitionSettings> PrototypeSettings; // 0x130(0x50)
	double ZoomTransitionDurationMultiplier; // 0x180(0x08)
	double CosmeticZoomInTriggerPercent; // 0x188(0x08)
	bool IsManuallyDisabled; // 0x190(0x01)

	double GetZoomTransitionDurationMultiplier(); // Function Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C.GetZoomTransitionDurationMultiplier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	bool IsEnabled(); // Function Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C.IsEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void InitializeSettingsMapsForComponent(struct UZoomComponent* Component); // Function Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C.InitializeSettingsMapsForComponent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeSettingsMaps(); // Function Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C.InitializeSettingsMaps // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateZoomTransitionSettings(); // Function Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C.UpdateZoomTransitionSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Comp_Gun_FlaggedZoomSettings(int32_t EntryPoint); // Function Comp_Gun_FlaggedZoomSettings.Comp_Gun_FlaggedZoomSettings_C.ExecuteUbergraph_Comp_Gun_FlaggedZoomSettings // (Final|UbergraphFunction) // @ game+0x1b42740
};

