// WidgetBlueprintGeneratedClass FirstPersonHUDPC.FirstPersonHUDPC_C
// Size: 0x3c5 (Inherited: 0x330)
struct UFirstPersonHUDPC_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UVerticalBox* BelowMinimapBox; // 0x338(0x08)
	struct UCanvasPanel* CanvasPanel_48; // 0x340(0x08)
	struct UCanvasPanel* InnerContainer; // 0x348(0x08)
	struct UInvalidationBox* InvalidationBox_spacer; // 0x350(0x08)
	struct UInvalidationBox* InvalidationBox_spacer2; // 0x358(0x08)
	struct UAresMinimap_V2_C* MinimapHud; // 0x360(0x08)
	struct UScaleBox* MinimapScaleBox; // 0x368(0x08)
	struct UVerticalBox* MinimapVerticalBox; // 0x370(0x08)
	struct USpectatorCountWidget_C* SpectatorCountWidget; // 0x378(0x08)
	struct USpectatorWidget_C* SpectatorWidget_90; // 0x380(0x08)
	struct UWBP_WeaponWheel_PC_C* WeaponWheel; // 0x388(0x08)
	struct USpikeEquippableHUDElement_C* YouHaveTheSpike; // 0x390(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x398(0x08)
	struct UCoordinatedShooterUIModel* ShooterUIModel; // 0x3a0(0x08)
	bool LastBudgetsOverlay; // 0x3a8(0x01)
	char pad_3A9[0x3]; // 0x3a9(0x03)
	struct FName ShowBudgetsOverlayCVarName; // 0x3ac(0x0c)
	struct FName HideMinimapCVarName; // 0x3b8(0x0c)
	bool LastHideMinimap; // 0x3c4(0x01)

	void AddBelowMinimapWidget(); // Function FirstPersonHUDPC.FirstPersonHUDPC_C.AddBelowMinimapWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateMinimapScale(); // Function FirstPersonHUDPC.FirstPersonHUDPC_C.UpdateMinimapScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ToggleHUDVisibilityForShop(bool IsVisible); // Function FirstPersonHUDPC.FirstPersonHUDPC_C.ToggleHUDVisibilityForShop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHUDModelOnHUDElements(struct TArray<struct UCoordinatedHUDElement*>& CoordinatedHUDElements, struct UCoordinatedHUDModel* HUDModel); // Function FirstPersonHUDPC.FirstPersonHUDPC_C.SetHUDModelOnHUDElements // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateVisibility(); // Function FirstPersonHUDPC.FirstPersonHUDPC_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCoordinatedShooterUIModel(struct UCoordinatedShooterUIModel* CoordinatedShooterUIModel); // Function FirstPersonHUDPC.FirstPersonHUDPC_C.SetCoordinatedShooterUIModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function FirstPersonHUDPC.FirstPersonHUDPC_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMinimapSizeChanged(enum class EAresFloatSettingName SettingName, float OldValue, float NewValue); // Function FirstPersonHUDPC.FirstPersonHUDPC_C.OnMinimapSizeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCinematicModeUpdated(); // Function FirstPersonHUDPC.FirstPersonHUDPC_C.OnCinematicModeUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function FirstPersonHUDPC.FirstPersonHUDPC_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function FirstPersonHUDPC.FirstPersonHUDPC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnShopVisibilityChanged(bool IsVisible); // Function FirstPersonHUDPC.FirstPersonHUDPC_C.OnShopVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnShooterHUDReady(); // Function FirstPersonHUDPC.FirstPersonHUDPC_C.OnShooterHUDReady // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FirstPersonHUDPC(int32_t EntryPoint); // Function FirstPersonHUDPC.FirstPersonHUDPC_C.ExecuteUbergraph_FirstPersonHUDPC // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

