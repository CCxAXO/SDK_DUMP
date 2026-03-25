// WidgetBlueprintGeneratedClass WBP_CPanel_Setting_Bool_Toggle.WBP_CPanel_Setting_Bool_Toggle_C
// Size: 0x1c00 (Inherited: 0x1bb0)
struct UWBP_CPanel_Setting_Bool_Toggle_C : UAresBoolSettingClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1bb0(0x08)
	struct UWidgetAnimation* Enable; // 0x1bb8(0x08)
	struct UWidgetAnimation* Focus; // 0x1bc0(0x08)
	struct UWidgetAnimation* Toggle; // 0x1bc8(0x08)
	struct UAresInputSwitcher* AresInputSwitcher_1; // 0x1bd0(0x08)
	struct UImage* Img_Toggle; // 0x1bd8(0x08)
	struct UWBP_Button_Basic_Toggle_C* Toggle_Button_PC; // 0x1be0(0x08)
	struct UAresButtonTextComponent* Txt_Primary; // 0x1be8(0x08)
	struct UWBP_SettingsEntryTemplate_C* WBP_SettingsEntryTemplate_91; // 0x1bf0(0x08)
	bool bImediateAnimation; // 0x1bf8(0x01)
	char pad_1BF9[0x3]; // 0x1bf9(0x03)
	float Setting_Toggle_Height; // 0x1bfc(0x04)

	void OnMaterialCreated(); // Function WBP_CPanel_Setting_Bool_Toggle.WBP_CPanel_Setting_Bool_Toggle_C.OnMaterialCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void RefreshViewFromSettingOptionViewModel(); // Function WBP_CPanel_Setting_Bool_Toggle.WBP_CPanel_Setting_Bool_Toggle_C.RefreshViewFromSettingOptionViewModel // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionHovered(); // Function WBP_CPanel_Setting_Bool_Toggle.WBP_CPanel_Setting_Bool_Toggle_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionUnHovered(); // Function WBP_CPanel_Setting_Bool_Toggle.WBP_CPanel_Setting_Bool_Toggle_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnToggleStateChanged(bool bIsSelected); // Function WBP_CPanel_Setting_Bool_Toggle.WBP_CPanel_Setting_Bool_Toggle_C.OnToggleStateChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void UpdateToggleText(bool bIsSelected); // Function WBP_CPanel_Setting_Bool_Toggle.WBP_CPanel_Setting_Bool_Toggle_C.UpdateToggleText // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetText(struct FText& InText); // Function WBP_CPanel_Setting_Bool_Toggle.WBP_CPanel_Setting_Bool_Toggle_C.SetText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionEnabled(); // Function WBP_CPanel_Setting_Bool_Toggle.WBP_CPanel_Setting_Bool_Toggle_C.BP_OnTransitionEnabled // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionDisabled(); // Function WBP_CPanel_Setting_Bool_Toggle.WBP_CPanel_Setting_Bool_Toggle_C.BP_OnTransitionDisabled // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_CPanel_Setting_Bool_Toggle.WBP_CPanel_Setting_Bool_Toggle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnMaterialAnimationsInitialized(); // Function WBP_CPanel_Setting_Bool_Toggle.WBP_CPanel_Setting_Bool_Toggle_C.OnMaterialAnimationsInitialized // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_CPanel_Setting_Bool_Toggle_Toggle_Button_PC_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_CPanel_Setting_Bool_Toggle.WBP_CPanel_Setting_Bool_Toggle_C.BndEvt__WBP_CPanel_Setting_Bool_Toggle_Toggle_Button_PC_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_CPanel_Setting_Bool_Toggle(int32_t EntryPoint); // Function WBP_CPanel_Setting_Bool_Toggle.WBP_CPanel_Setting_Bool_Toggle_C.ExecuteUbergraph_WBP_CPanel_Setting_Bool_Toggle // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

