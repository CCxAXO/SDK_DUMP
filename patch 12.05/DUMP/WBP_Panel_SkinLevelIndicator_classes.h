// WidgetBlueprintGeneratedClass WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C
// Size: 0x438 (Inherited: 0x3e0)
struct UWBP_Panel_SkinLevelIndicator_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_List_Base_C* WBP_List_Base; // 0x3e8(0x08)
	struct UVM_WeaponSkinLevels_C* WeaponSkinLevelsVM; // 0x3f0(0x08)
	struct FMulticastInlineDelegate OnInputActionPreferenceChanged; // 0x3f8(0x10)
	int32_t SelectedLevel; // 0x408(0x04)
	int32_t CurrentLevel; // 0x40c(0x04)
	bool DataIsValid; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct FMulticastInlineDelegate OnSkinLevelSelected; // 0x418(0x10)
	struct UEquippableSkinHandle* CurrentSkin; // 0x428(0x08)
	struct UEquippableSkinLevelHandle* CurrentSkinLevel; // 0x430(0x08)

	enum class EActivationPreference GetActivationPreferenceForAction(struct FAresConditionalInputAction Action); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.GetActivationPreferenceForAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ClearHighlights(); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.ClearHighlights // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ClearSkinLevelSelection(); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.ClearSkinLevelSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetLevelHighlighted(struct UEquippableSkinLevelHandle* HighlightedSkinLevel, bool IsHighlighted); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.SetLevelHighlighted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSkinLevel(struct UEquippableSkinLevelHandle* NewSkinLevel); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.SetSkinLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromSkinHandle(struct UEquippableSkinHandle* SkinHandle); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.InitFromSkinHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Skin Changed(struct UEquippableSkinHandle* SkinHandle, int32_t SelectedLevel, int32_t CurrentLevel); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.Handle Skin Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateVisibility(); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleHasValidDataChanged(bool NewValue); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.HandleHasValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindViewModel(bool Bind); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.BindViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateViewModel(); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.CreateViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetViewModel(struct UVM_WeaponSkinLevels_C* WeaponSkinLevelsVM); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.SetViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateDisplay(struct UEquippableSkinHandle* EquippableSkinHandle, int32_t TotalLevels); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.UpdateDisplay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_SkinLevelIndicator_PC_WBP_List_Base_K2Node_ComponentBoundEvent_0_OnEntryObjectAndWidgetChanged__DelegateSignature(struct UObject* EntryObject, struct UUserWidget* EntryWidget); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.BndEvt__WBP_Panel_SkinLevelIndicator_PC_WBP_List_Base_K2Node_ComponentBoundEvent_0_OnEntryObjectAndWidgetChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_SkinLevelIndicator(int32_t EntryPoint); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.ExecuteUbergraph_WBP_Panel_SkinLevelIndicator // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnSkinLevelSelected__DelegateSignature(struct UEquippableSkinHandle* EquippableSkinHandle, int32_t SelectedLevelNumber); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.OnSkinLevelSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInputActionPreferenceChanged__DelegateSignature(); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.OnInputActionPreferenceChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

