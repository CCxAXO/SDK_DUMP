// WidgetBlueprintGeneratedClass WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C
// Size: 0x412 (Inherited: 0x3e0)
struct UWBP_Panel_SkinLevelIndicator_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UHorizontalBox* LevelProgressContainer; // 0x3e8(0x08)
	struct UWBP_Panel_CheckToggleIndicator_C* WBP_Panel_CheckToggleIndicator; // 0x3f0(0x08)
	struct UVM_WeaponSkinLevels_C* WeaponSkinLevelsVM; // 0x3f8(0x08)
	struct FMulticastInlineDelegate OnInputActionPreferenceChanged; // 0x400(0x10)
	bool ShowLevelDetails; // 0x410(0x01)
	bool ShowCheckmarks; // 0x411(0x01)

	enum class EActivationPreference GetActivationPreferenceForAction(struct FAresConditionalInputAction Action); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.GetActivationPreferenceForAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetOfferDTO(struct UOfferDTO* OfferDTO, bool ShowCheckmarks); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.SetOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateVisibility(); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleHasValidDataChanged(bool NewValue); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.HandleHasValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Skin Changed(struct UEquippableSkinHandle* EquippableSkin, int32_t SelectedLevel, int32_t CurrentLevel); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.Handle Skin Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindViewModel(bool Bind); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.BindViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateViewModel(); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.CreateViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetViewModel(struct UVM_WeaponSkinLevels_C* WeaponSkinLevelsVM); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.SetViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateDisplay(struct UEquippableSkinHandle* EquippableSkinHandle, int32_t SelectedLevel, int32_t CurrentLevel); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.UpdateDisplay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_SkinLevelIndicator(int32_t EntryPoint); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.ExecuteUbergraph_WBP_Panel_SkinLevelIndicator // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnInputActionPreferenceChanged__DelegateSignature(); // Function WBP_Panel_SkinLevelIndicator.WBP_Panel_SkinLevelIndicator_C.OnInputActionPreferenceChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

