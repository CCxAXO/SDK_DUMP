// WidgetBlueprintGeneratedClass WBP_Panel_CollectionsWeaponSlot.WBP_Panel_CollectionsWeaponSlot_C
// Size: 0x1c70 (Inherited: 0x1ae0)
struct UWBP_Panel_CollectionsWeaponSlot_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* ReleaseAnim; // 0x1ae8(0x08)
	struct UWidgetAnimation* PressAnim; // 0x1af0(0x08)
	struct UWidgetAnimation* UnHoverAnim; // 0x1af8(0x08)
	struct UWidgetAnimation* HoverAnim; // 0x1b00(0x08)
	struct UImage* CurrentSkinImage; // 0x1b08(0x08)
	struct UImage* CurrentSkinShadow; // 0x1b10(0x08)
	struct UImage* GunBuddy; // 0x1b18(0x08)
	struct UOverlay* GunContainer; // 0x1b20(0x08)
	struct UAresCommonText* GunName; // 0x1b28(0x08)
	struct UOverlay* ShadowContainer; // 0x1b30(0x08)
	struct UVM_WeaponSlot_C* WeaponSlotViewModel; // 0x1b38(0x08)
	struct TMap<struct TSoftClassPtr<UObject>, struct FVector2D> GunOffsetAnchors; // 0x1b40(0x50)
	struct TMap<struct TSoftClassPtr<UObject>, struct FVector2D> GunOffsetScale; // 0x1b90(0x50)
	struct UEquippableDataAsset* Weapon Slot; // 0x1be0(0x08)
	struct FVector NewVar_1; // 0x1be8(0x18)
	struct FMargin Padding 0; // 0x1c00(0x10)
	bool ButtonHovered; // 0x1c10(0x01)
	char pad_1C11[0x7]; // 0x1c11(0x07)
	struct UAresCommonTextStyle* Text Style; // 0x1c18(0x08)
	struct TMap<struct UEquippableDataAsset*, struct FString> TelemetryNameMap; // 0x1c20(0x50)

	void Is Melee(bool& IsMelee); // Function WBP_Panel_CollectionsWeaponSlot.WBP_Panel_CollectionsWeaponSlot_C.Is Melee // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void BindClickEvents(bool bBind); // Function WBP_Panel_CollectionsWeaponSlot.WBP_Panel_CollectionsWeaponSlot_C.BindClickEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEquippableClassChanged(struct UEquippableDataAsset* NewEquippableClass); // Function WBP_Panel_CollectionsWeaponSlot.WBP_Panel_CollectionsWeaponSlot_C.OnEquippableClassChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetViewModel(struct UVM_WeaponSlot_C* NewWeaponSlotVM); // Function WBP_Panel_CollectionsWeaponSlot.WBP_Panel_CollectionsWeaponSlot_C.SetViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnWeaponSlotNameChanged(struct FText NewWeaponSlotName); // Function WBP_Panel_CollectionsWeaponSlot.WBP_Panel_CollectionsWeaponSlot_C.OnWeaponSlotNameChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBuddyImageChanged(struct UTexture* NewBuddyImage); // Function WBP_Panel_CollectionsWeaponSlot.WBP_Panel_CollectionsWeaponSlot_C.OnBuddyImageChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnShowBuddyChanged(bool bShowBuddy); // Function WBP_Panel_CollectionsWeaponSlot.WBP_Panel_CollectionsWeaponSlot_C.OnShowBuddyChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSkinImageChanged(struct UTexture* NewSkinImage); // Function WBP_Panel_CollectionsWeaponSlot.WBP_Panel_CollectionsWeaponSlot_C.OnSkinImageChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Panel_CollectionsWeaponSlot.WBP_Panel_CollectionsWeaponSlot_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModel(); // Function WBP_Panel_CollectionsWeaponSlot.WBP_Panel_CollectionsWeaponSlot_C.InitViewModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnHovered(); // Function WBP_Panel_CollectionsWeaponSlot.WBP_Panel_CollectionsWeaponSlot_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnUnhovered(); // Function WBP_Panel_CollectionsWeaponSlot.WBP_Panel_CollectionsWeaponSlot_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_CollectionsWeaponSlot.WBP_Panel_CollectionsWeaponSlot_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_CollectionsWeaponSlot.WBP_Panel_CollectionsWeaponSlot_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionPressed(); // Function WBP_Panel_CollectionsWeaponSlot.WBP_Panel_CollectionsWeaponSlot_C.BP_OnTransitionPressed // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionReleased(); // Function WBP_Panel_CollectionsWeaponSlot.WBP_Panel_CollectionsWeaponSlot_C.BP_OnTransitionReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_CollectionsWeaponSlot.WBP_Panel_CollectionsWeaponSlot_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnButtonBaseClicked_Event_1(struct UCommonButtonBase* Button); // Function WBP_Panel_CollectionsWeaponSlot.WBP_Panel_CollectionsWeaponSlot_C.OnButtonBaseClicked_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_CollectionsWeaponSlot.WBP_Panel_CollectionsWeaponSlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_CollectionsWeaponSlot(int32_t EntryPoint); // Function WBP_Panel_CollectionsWeaponSlot.WBP_Panel_CollectionsWeaponSlot_C.ExecuteUbergraph_WBP_Panel_CollectionsWeaponSlot // (Final|UbergraphFunction) // @ game+0x1b42740
};

