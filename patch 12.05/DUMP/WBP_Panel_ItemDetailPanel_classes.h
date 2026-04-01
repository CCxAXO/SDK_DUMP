// WidgetBlueprintGeneratedClass WBP_Panel_ItemDetailPanel.WBP_Panel_ItemDetailPanel_C
// Size: 0x3d0 (Inherited: 0x328)
struct UWBP_Panel_ItemDetailPanel_C : UShopItemDetailPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UOverlay* BasicDetails; // 0x330(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x338(0x08)
	struct UImage* Image; // 0x340(0x08)
	struct UImage* Image_185; // 0x348(0x08)
	struct UImage* incomingGunImage; // 0x350(0x08)
	struct UTextBlock* incomingItemName; // 0x358(0x08)
	struct UTextBlock* ItemDesc_text; // 0x360(0x08)
	struct UBorder* outgoingContainer; // 0x368(0x08)
	struct UImage* outgoingGunImage; // 0x370(0x08)
	struct UImage* outgoingItemIcon; // 0x378(0x08)
	struct UTextBlock* outgoingItemText; // 0x380(0x08)
	struct UOverlay* Overlay_2; // 0x388(0x08)
	struct UScaleBox* ScaleBox_1; // 0x390(0x08)
	struct UTextBlock* TextBlock_3; // 0x398(0x08)
	struct UWBP_ArmorStatsPanel_C* WBP_ArmorStatsPanel; // 0x3a0(0x08)
	struct UWBP_WeaponStatsPanel_C* WBP_WeaponStatsPanel; // 0x3a8(0x08)
	struct UImage* Weapon; // 0x3b0(0x08)
	struct UWeaponStatsPanel_C* WeaponStatsPanelPC; // 0x3b8(0x08)
	struct UUserWidget* EquippableWidget; // 0x3c0(0x08)
	struct UWeaponStats_C* WeaponStatsPanelTouch; // 0x3c8(0x08)

	void GetFromGlobalsMobileWeaponStatsPanel(); // Function WBP_Panel_ItemDetailPanel.WBP_Panel_ItemDetailPanel_C.GetFromGlobalsMobileWeaponStatsPanel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TriggerPreviewUpdate(struct UShopPurchasableModel* SelectedWeapon); // Function WBP_Panel_ItemDetailPanel.WBP_Panel_ItemDetailPanel_C.TriggerPreviewUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TriggerPreviewReset(struct UShopPurchasableModel* SelectedWeapon); // Function WBP_Panel_ItemDetailPanel.WBP_Panel_ItemDetailPanel_C.TriggerPreviewReset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FSlateBrush Get_weapon_Brush_1(); // Function WBP_Panel_ItemDetailPanel.WBP_Panel_ItemDetailPanel_C.Get_weapon_Brush_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_ItemDetailPanel.WBP_Panel_ItemDetailPanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ResetPreview(struct UShopPurchasableModel* SelectedWeapon); // Function WBP_Panel_ItemDetailPanel.WBP_Panel_ItemDetailPanel_C.ResetPreview // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePreview(struct UShopPurchasableModel* SelectedWeapon); // Function WBP_Panel_ItemDetailPanel.WBP_Panel_ItemDetailPanel_C.UpdatePreview // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_ItemDetailPanel.WBP_Panel_ItemDetailPanel_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetWeaponImage(); // Function WBP_Panel_ItemDetailPanel.WBP_Panel_ItemDetailPanel_C.SetWeaponImage // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_ItemDetailPanel(int32_t EntryPoint); // Function WBP_Panel_ItemDetailPanel.WBP_Panel_ItemDetailPanel_C.ExecuteUbergraph_WBP_Panel_ItemDetailPanel // (Final|UbergraphFunction) // @ game+0x1af5410
};

