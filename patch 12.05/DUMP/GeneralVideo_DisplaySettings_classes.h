// WidgetBlueprintGeneratedClass GeneralVideo_DisplaySettings.GeneralVideo_DisplaySettings_C
// Size: 0x388 (Inherited: 0x318)
struct UGeneralVideo_DisplaySettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USharedButtonMaster_C* ApplyButton; // 0x320(0x08)
	struct USharedSecondaryButtonText_C* ApplyDisplaySettings; // 0x328(0x08)
	struct USettingsV2_Subheader_C* DisplayHeader; // 0x330(0x08)
	struct UDisplayModeWidget_C* DisplayModeWidget; // 0x338(0x08)
	struct UVerticalBox* DisplaySubsection; // 0x340(0x08)
	struct ULetterboxWidget_C* LetterboxWidget; // 0x348(0x08)
	struct UMonitorSelectionWidget_C* MonitorSelectionWidget; // 0x350(0x08)
	struct UResolutionWidget_C* ResolutionWidget_91; // 0x358(0x08)
	struct USharedButtonMaster_C* RevertButton; // 0x360(0x08)
	struct USharedSecondaryButtonText_C* RevertDisplaySettings; // 0x368(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x370(0x10)
	struct UConfirmResolutionSettingsModal_C* ResolutionConfirmationPopup; // 0x380(0x08)

	void OnVideoCategorySelected_Display(); // Function GeneralVideo_DisplaySettings.GeneralVideo_DisplaySettings_C.OnVideoCategorySelected_Display // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function GeneralVideo_DisplaySettings.GeneralVideo_DisplaySettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void UserSettingsUINeedsUpdate(); // Function GeneralVideo_DisplaySettings.GeneralVideo_DisplaySettings_C.UserSettingsUINeedsUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function GeneralVideo_DisplaySettings.GeneralVideo_DisplaySettings_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void UpdateUI(); // Function GeneralVideo_DisplaySettings.GeneralVideo_DisplaySettings_C.UpdateUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayConfirmationClosed(bool bShouldApplySettings); // Function GeneralVideo_DisplaySettings.GeneralVideo_DisplaySettings_C.DisplayConfirmationClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ApplyDisplaySettings_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(struct USharedSecondaryButtonText_C* TextButton); // Function GeneralVideo_DisplaySettings.GeneralVideo_DisplaySettings_C.BndEvt__ApplyDisplaySettings_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__RevertDisplaySettings_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(struct USharedSecondaryButtonText_C* TextButton); // Function GeneralVideo_DisplaySettings.GeneralVideo_DisplaySettings_C.BndEvt__RevertDisplaySettings_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_21_Clicked__DelegateSignature(); // Function GeneralVideo_DisplaySettings.GeneralVideo_DisplaySettings_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_21_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__RevertButton_K2Node_ComponentBoundEvent_24_Clicked__DelegateSignature(); // Function GeneralVideo_DisplaySettings.GeneralVideo_DisplaySettings_C.BndEvt__RevertButton_K2Node_ComponentBoundEvent_24_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_GeneralVideo_DisplaySettings(int32_t EntryPoint); // Function GeneralVideo_DisplaySettings.GeneralVideo_DisplaySettings_C.ExecuteUbergraph_GeneralVideo_DisplaySettings // (Final|UbergraphFunction) // @ game+0x1af5410
};

