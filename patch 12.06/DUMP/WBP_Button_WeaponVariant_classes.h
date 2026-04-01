// WidgetBlueprintGeneratedClass WBP_Button_WeaponVariant.WBP_Button_WeaponVariant_C
// Size: 0x1b31 (Inherited: 0x1ae0)
struct UWBP_Button_WeaponVariant_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UImage* BackgroundImage; // 0x1ae8(0x08)
	struct UImage* Image_92; // 0x1af0(0x08)
	struct UWBP_Template_OwnableContent_C* WBP_Template_OwnableContent; // 0x1af8(0x08)
	struct UVM_WeaponVariant_C* WeaponVariantViewModel; // 0x1b00(0x08)
	struct UEquippableSkinChromaHandle* ChromaHandle; // 0x1b08(0x08)
	struct FMulticastInlineDelegate OnChromaHandleChanged; // 0x1b10(0x10)
	bool IsUnlocked; // 0x1b20(0x01)
	char pad_1B21[0x7]; // 0x1b21(0x07)
	struct UVM_InventoryItem_C* InventoryItemViewModel; // 0x1b28(0x08)
	bool IsFavorited; // 0x1b30(0x01)

	void BroadcastChromaHandleUpdate(); // Function WBP_Button_WeaponVariant.WBP_Button_WeaponVariant_C.BroadcastChromaHandleUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindInventoryItemViewModelEvents(bool bShouldBind); // Function WBP_Button_WeaponVariant.WBP_Button_WeaponVariant_C.BindInventoryItemViewModelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToInventoryItemViewModel(); // Function WBP_Button_WeaponVariant.WBP_Button_WeaponVariant_C.BindToInventoryItemViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsVariantFavorited(bool& bIsFavorited); // Function WBP_Button_WeaponVariant.WBP_Button_WeaponVariant_C.IsVariantFavorited // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void IsVariantUnlocked(bool& bIsUnlocked); // Function WBP_Button_WeaponVariant.WBP_Button_WeaponVariant_C.IsVariantUnlocked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void InitFromVM(); // Function WBP_Button_WeaponVariant.WBP_Button_WeaponVariant_C.InitFromVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsFavoritedChanged(bool bIsFavorited); // Function WBP_Button_WeaponVariant.WBP_Button_WeaponVariant_C.HandleIsFavoritedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsOwnedChanged(bool bIsOwned); // Function WBP_Button_WeaponVariant.WBP_Button_WeaponVariant_C.HandleIsOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsEquippedChanged(bool bIsEquipped); // Function WBP_Button_WeaponVariant.WBP_Button_WeaponVariant_C.HandleIsEquippedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleChromaTextureChanged(struct UTexture* OutTexture); // Function WBP_Button_WeaponVariant.WBP_Button_WeaponVariant_C.HandleChromaTextureChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindWeaponVariantViewModelEvents(bool bShouldBind); // Function WBP_Button_WeaponVariant.WBP_Button_WeaponVariant_C.BindWeaponVariantViewModelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToWeaponVariantViewModel(); // Function WBP_Button_WeaponVariant.WBP_Button_WeaponVariant_C.BindToWeaponVariantViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Button_WeaponVariant.WBP_Button_WeaponVariant_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Button_WeaponVariant.WBP_Button_WeaponVariant_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SetEntryData(struct FWildcard Data); // Function WBP_Button_WeaponVariant.WBP_Button_WeaponVariant_C.SetEntryData // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnButtonBaseHovered_Event_1(struct UCommonButtonBase* Button); // Function WBP_Button_WeaponVariant.WBP_Button_WeaponVariant_C.OnButtonBaseHovered_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Button_WeaponVariant.WBP_Button_WeaponVariant_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnPressed(); // Function WBP_Button_WeaponVariant.WBP_Button_WeaponVariant_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_WeaponVariant(int32_t EntryPoint); // Function WBP_Button_WeaponVariant.WBP_Button_WeaponVariant_C.ExecuteUbergraph_WBP_Button_WeaponVariant // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnChromaHandleChanged__DelegateSignature(struct UEquippableSkinChromaHandle* OutChromaHandle); // Function WBP_Button_WeaponVariant.WBP_Button_WeaponVariant_C.OnChromaHandleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

