// WidgetBlueprintGeneratedClass ControlsSettings.ControlsSettings_C
// Size: 0x418 (Inherited: 0x318)
struct UControlsSettings_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UKeybindCategoryErrorIndicatorWidget_C* ActionsControlsCategeryErrorIcon; // 0x320(0x08)
	struct UVerticalBox* ActionsControlsContainer; // 0x328(0x08)
	struct UActionsControlsSettingsTabWidget_C* ActionsControlsSettingsTabWidget; // 0x330(0x08)
	struct UKeybindCategoryErrorIndicatorWidget_C* CommunicationControlsCategeryErrorIcon; // 0x338(0x08)
	struct UVerticalBox* CommunicationControlsContainer; // 0x340(0x08)
	struct UCommunicationControlsSettingsTabWidget_C* CommunicationControlsSettingsTabWidget; // 0x348(0x08)
	struct UWidgetSwitcher* ControlsWidgetSwitcher; // 0x350(0x08)
	struct USharedTertiaryButtonText_C* CopyToButton; // 0x358(0x08)
	struct UKeybindCategoryErrorIndicatorWidget_C* EquipmentControlsCategeryErrorIcon; // 0x360(0x08)
	struct UVerticalBox* EquipmentControlsContainer1; // 0x368(0x08)
	struct UEquipmentControlsSettingsTabWidgetV2_C* EquipmentControlsSettingsTabWidgetV2; // 0x370(0x08)
	struct UKeybindCategoryErrorIndicatorWidget_C* InterfaceControlsCategeryErrorIcon; // 0x378(0x08)
	struct UVerticalBox* InterfaceControlsContainer; // 0x380(0x08)
	struct UInterfaceControlsSettingsTabWidget_C* InterfaceControlsSettingsTabWidget; // 0x388(0x08)
	struct USharedTertiaryButtonText_C* ResetControlsButton; // 0x390(0x08)
	struct USharedNavButton_C* SettingsControls1NavButton; // 0x398(0x08)
	struct USharedNavButton_C* SettingsControls2NavButton; // 0x3a0(0x08)
	struct USharedNavButton_C* SettingsControls4NavButton; // 0x3a8(0x08)
	struct USharedNavButton_C* SettingsControls5NavButton; // 0x3b0(0x08)
	struct USettingsNotificationBannerStateWidget_C* SettingsNotificationBannerStateWidget; // 0x3b8(0x08)
	struct UCharacterHandle* CurrentCharacter; // 0x3c0(0x08)
	struct TMap<struct FString, struct FText> SettingNameToDisplayText; // 0x3c8(0x50)

	void FilterConflictsToAvailableSettings(struct TArray<struct FConflictList>& ConflictsList); // Function ControlsSettings.ControlsSettings_C.FilterConflictsToAvailableSettings // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void GetDisplayTextForKeybindSettingName(struct FName SettingName, enum class EActionBindSetAxisDirection AxisDirection, struct FText& DisplayText); // Function ControlsSettings.ControlsSettings_C.GetDisplayTextForKeybindSettingName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void AddChildActionsToSettingNameMap(struct UPanelWidget* Container); // Function ControlsSettings.ControlsSettings_C.AddChildActionsToSettingNameMap // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateBindingsForCharacter(struct UCharacterHandle* CharacterHandle); // Function ControlsSettings.ControlsSettings_C.UpdateBindingsForCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetAsActivePage(); // Function ControlsSettings.ControlsSettings_C.SetAsActivePage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SelectSubsection(int32_t SubsectionIndex); // Function ControlsSettings.ControlsSettings_C.SelectSubsection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ControlsSettings.ControlsSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_420_OnClicked__DelegateSignature(struct USharedTertiaryButtonText_C* TextButton); // Function ControlsSettings.ControlsSettings_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_420_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SettingsControls2NavButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(); // Function ControlsSettings.ControlsSettings_C.BndEvt__SettingsControls2NavButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SettingsControls1NavButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(); // Function ControlsSettings.ControlsSettings_C.BndEvt__SettingsControls1NavButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SettingsControls3NavButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function ControlsSettings.ControlsSettings_C.BndEvt__SettingsControls3NavButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SettingsControls4NavButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature(); // Function ControlsSettings.ControlsSettings_C.BndEvt__SettingsControls4NavButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__CopyToButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct USharedTertiaryButtonText_C* TextButton); // Function ControlsSettings.ControlsSettings_C.BndEvt__CopyToButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ResetBindings(); // Function ControlsSettings.ControlsSettings_C.ResetBindings // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CopyBindings(); // Function ControlsSettings.ControlsSettings_C.CopyBindings // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ControlsSettings(int32_t EntryPoint); // Function ControlsSettings.ControlsSettings_C.ExecuteUbergraph_ControlsSettings // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

