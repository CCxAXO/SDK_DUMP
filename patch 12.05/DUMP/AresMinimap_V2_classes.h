// WidgetBlueprintGeneratedClass AresMinimap_V2.AresMinimap_V2_C
// Size: 0x3a9 (Inherited: 0x330)
struct UAresMinimap_V2_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UAresMapBase_C* AresMapBase; // 0x338(0x08)
	struct UImage* BG; // 0x340(0x08)
	struct UTextBlock* CalloutRegionName_Main; // 0x348(0x08)
	struct UWidget_DebuffNotificationAlly_C* Widget_DebuffNotificationAlly_V2; // 0x350(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x358(0x08)
	struct UCoordinatedShooterUIModel* ShooterUIModel; // 0x360(0x08)
	struct AAresMinimapCamera* AresMinimap; // 0x368(0x08)
	double Initial Rotation; // 0x370(0x08)
	struct FVector2D Original Size; // 0x378(0x10)
	struct AAresCalloutRegion* CurrentCalloutRegion; // 0x388(0x08)
	struct FName HideMinimapConfigName; // 0x390(0x0c)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct UTextBlock* CalloutNameText; // 0x3a0(0x08)
	bool UseBottomCalloutRegion; // 0x3a8(0x01)

	void GetCalloutNameText(struct UTextBlock*& TextWidget); // Function AresMinimap_V2.AresMinimap_V2_C.GetCalloutNameText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void HandleOnCalloutRegionChanged(struct AAresCalloutRegion* NewCalloutRegion); // Function AresMinimap_V2.AresMinimap_V2_C.HandleOnCalloutRegionChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPaint(struct FPaintContext& Context); // Function AresMinimap_V2.AresMinimap_V2_C.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void Construct(); // Function AresMinimap_V2.AresMinimap_V2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ToggleMinimapVisibility(bool IsVisible); // Function AresMinimap_V2.AresMinimap_V2_C.ToggleMinimapVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCoordinatedShooterUIModel(struct UCoordinatedShooterUIModel* CoordinatedShooterUIModel); // Function AresMinimap_V2.AresMinimap_V2_C.SetCoordinatedShooterUIModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HideMinimapForNPE(); // Function AresMinimap_V2.AresMinimap_V2_C.HideMinimapForNPE // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCinematicModeUpdated_Event_1(); // Function AresMinimap_V2.AresMinimap_V2_C.OnCinematicModeUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HideMinimap4Publishing(struct FName& ConfigName); // Function AresMinimap_V2.AresMinimap_V2_C.HideMinimap4Publishing // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCalloutRegionChanged(struct AAresCalloutRegion* NewCalloutRegion); // Function AresMinimap_V2.AresMinimap_V2_C.OnCalloutRegionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function AresMinimap_V2.AresMinimap_V2_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AresMinimap_V2(int32_t EntryPoint); // Function AresMinimap_V2.AresMinimap_V2_C.ExecuteUbergraph_AresMinimap_V2 // (Final|UbergraphFunction) // @ game+0x1af5410
};

