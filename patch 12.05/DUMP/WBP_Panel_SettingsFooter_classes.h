// WidgetBlueprintGeneratedClass WBP_Panel_SettingsFooter.WBP_Panel_SettingsFooter_C
// Size: 0x430 (Inherited: 0x3e0)
struct UWBP_Panel_SettingsFooter_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UProfilePresetsViewModel* ProfilePresetsViewModel; // 0x3e8(0x08)
	struct UWBP_Button_Primary_C* CloseSettingsButton; // 0x3f0(0x08)
	struct UWBP_Button_Ghost_C* CopyToProfilesButton; // 0x3f8(0x08)
	struct UWBP_Button_Ghost_C* ResetToDefaultButton; // 0x400(0x08)
	struct USettingsNotificationBannerStateWidget_C* SettingsNotificationBannerStateWidget; // 0x408(0x08)
	bool bDoesNothing; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct FText Tooltip Text Content; // 0x418(0x18)

	void On Selected Agent Changed(struct FName InSelectedAgent); // Function WBP_Panel_SettingsFooter.WBP_Panel_SettingsFooter_C.On Selected Agent Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnResetSuccessful(); // Function WBP_Panel_SettingsFooter.WBP_Panel_SettingsFooter_C.OnResetSuccessful // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCopySuccessful(bool bWasDefaultProfile); // Function WBP_Panel_SettingsFooter.WBP_Panel_SettingsFooter_C.OnCopySuccessful // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_SettingsFooter.WBP_Panel_SettingsFooter_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_SettingsFooter_ResetToDefaultButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_SettingsFooter.WBP_Panel_SettingsFooter_C.BndEvt__WBP_Panel_SettingsFooter_ResetToDefaultButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_SettingsFooter_CopyToProfilesButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_SettingsFooter.WBP_Panel_SettingsFooter_C.BndEvt__WBP_Panel_SettingsFooter_CopyToProfilesButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_SettingsFooter_CloseSettingsButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_SettingsFooter.WBP_Panel_SettingsFooter_C.BndEvt__WBP_Panel_SettingsFooter_CloseSettingsButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_SettingsFooter.WBP_Panel_SettingsFooter_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_SettingsFooter(int32_t EntryPoint); // Function WBP_Panel_SettingsFooter.WBP_Panel_SettingsFooter_C.ExecuteUbergraph_WBP_Panel_SettingsFooter // (Final|UbergraphFunction) // @ game+0x1af5410
};

