// WidgetBlueprintGeneratedClass WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C
// Size: 0x1ca0 (Inherited: 0x1ba0)
struct UWBP_Panel_ActionTraitSetting_C : UAresActionSettingClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ba0(0x08)
	struct UAresInputSwitcher* AresInputSwitcher; // 0x1ba8(0x08)
	struct UMenuAnchor* ClickDescriptionAnchor; // 0x1bb0(0x08)
	struct USizeBox* ConsoleNotifIconSizeBox; // 0x1bb8(0x08)
	struct UWBP_Panel_InputListener_C* KeyBindingInputListenerConsolePrimary; // 0x1bc0(0x08)
	struct UWBP_Panel_InputListener_C* KeyBindingInputListenerPCPrimary; // 0x1bc8(0x08)
	struct UWBP_Panel_InputListener_C* KeyBindingInputListenerPCSecondary; // 0x1bd0(0x08)
	struct UHorizontalBox* NameHBox; // 0x1bd8(0x08)
	struct UAresInputSwitcher* NotificationIconInputSwitcher; // 0x1be0(0x08)
	struct USizeBox* PCNotifIconSizeBox; // 0x1be8(0x08)
	struct UWBP_SettingsEntryTemplate_C* WBP_SettingsEntryTemplate; // 0x1bf0(0x08)
	struct UTexture2D* Icon; // 0x1bf8(0x08)
	struct FMulticastInlineDelegate OnBindingChanged; // 0x1c00(0x10)
	struct FAresConditionalInputAction ConfirmClear; // 0x1c10(0x28)
	struct FAresConditionalInputAction ConfirmRebind; // 0x1c38(0x28)
	bool IsRebinding; // 0x1c60(0x01)
	bool ReceivedCustomBinding; // 0x1c61(0x01)
	bool Is Locked; // 0x1c62(0x01)
	char pad_1C63[0x1]; // 0x1c63(0x01)
	int32_t WidgetSwitcher_ActionChord; // 0x1c64(0x04)
	int32_t WidgetSwitcher_NoneText; // 0x1c68(0x04)
	int32_t WidgetSwitcher_RebindingText; // 0x1c6c(0x04)
	struct FText HoldText; // 0x1c70(0x18)
	struct FText DoubleTapText; // 0x1c88(0x18)

	void OnIsLockedChanged(bool bIsLocked); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnIsLockedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Input Type Changed(enum class ECommonInputType NewInputType); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.On Input Type Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToViewLevelEvents(bool bShouldBind); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.BindToViewLevelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsKeySelectingChanged(bool bIsSelecting); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnIsKeySelectingChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* GetUnbindTooltip(); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.GetUnbindTooltip // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void OnResetButtonClicked(int32_t BindIndex); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnResetButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnClearButtonClicked(int32_t BindIndex); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnClearButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Secondary Reset Icon Visibility Changed(enum class ESlateVisibility NewValue); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.On Secondary Reset Icon Visibility Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Primary Reset Icon Visibility Changed(enum class ESlateVisibility NewValue); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.On Primary Reset Icon Visibility Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnKeySelectionSuccessful(struct FKey InKey, int32_t InBindingIndex); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnKeySelectionSuccessful // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnActiveConsoleWidgetSwitcherIndexChanged(enum class EActionTraitSettingConsoleWidgetSwitcherIndex& ActiveConsoleWidgetSwitcherIndex); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnActiveConsoleWidgetSwitcherIndexChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnActionChordConsoleChordPrimaryVisibilityChanged(enum class ESlateVisibility NewActionChordConsolePrimaryChordVisibility); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnActionChordConsoleChordPrimaryVisibilityChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Console Input Listener Text Changed(struct FText& NewConsoleInputListenerText); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.On Console Input Listener Text Changed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindActionTraitViewModel(bool ShouldBind, struct UActionTraitSettingViewModel* InActionTraitViewModel); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.BindActionTraitViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitConditionalInputActionCallbacks(); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.InitConditionalInputActionCallbacks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnClearBinding(struct FName ActionName); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnClearBinding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRebind(struct FName ActionName); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnRebind // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnActionChordConsoleChordPrimaryChanged(struct FActionChord& ChordedBinding); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnActionChordConsoleChordPrimaryChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnActionChordConsolePrimaryChanged(struct FActionChord& InputActionChord); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnActionChordConsolePrimaryChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnActionChordPCSecondaryChanged(struct FActionChord& InputActionChord); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnActionChordPCSecondaryChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnActionChordPCPrimaryChanged(struct FActionChord& InputActionChord); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnActionChordPCPrimaryChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceivedNewBinding(struct FKey InKey, int32_t InBindingIndex); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.ReceivedNewBinding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionHovered(); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionUnHovered(); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BindToSettingOptionViewModel(bool bBind); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.BindToSettingOptionViewModel // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_ActionTraitSetting(int32_t EntryPoint); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.ExecuteUbergraph_WBP_Panel_ActionTraitSetting // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnBindingChanged__DelegateSignature(); // Function WBP_Panel_ActionTraitSetting.WBP_Panel_ActionTraitSetting_C.OnBindingChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

