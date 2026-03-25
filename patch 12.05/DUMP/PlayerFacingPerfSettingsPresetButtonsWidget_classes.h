// WidgetBlueprintGeneratedClass PlayerFacingPerfSettingsPresetButtonsWidget.PlayerFacingPerfSettingsPresetButtonsWidget_C
// Size: 0x400 (Inherited: 0x320)
struct UPlayerFacingPerfSettingsPresetButtonsWidget_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UButton* OptionGraphOnlyButton; // 0x330(0x08)
	struct UImage* OptionGraphOnlySelected; // 0x338(0x08)
	struct UTextBlock* OptionGraphOnlyTextBox; // 0x340(0x08)
	struct UButton* OptionShowBothButton; // 0x348(0x08)
	struct UImage* OptionShowBothSelected; // 0x350(0x08)
	struct UTextBlock* OptionShowBothTextBox; // 0x358(0x08)
	struct UButton* OptionTextOnlyButton; // 0x360(0x08)
	struct UImage* OptionTextOnlySelected; // 0x368(0x08)
	struct UTextBlock* OptionTextOnlyTextBox; // 0x370(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x378(0x08)
	int32_t Chosen Value; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)
	struct FText Option Text Only Text; // 0x388(0x18)
	struct FText Option Graph Only Text; // 0x3a0(0x18)
	int32_t Option Text Only Value; // 0x3b8(0x04)
	int32_t Option Graph Only Value; // 0x3bc(0x04)
	struct FText Option Show Both Text; // 0x3c0(0x18)
	int32_t Option Show Both Value; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct TArray<struct FPlayerFacingPerfPresetGroup> Presets; // 0x3e0(0x10)
	struct FMulticastInlineDelegate GetActivePreset; // 0x3f0(0x10)

	void ApplyPreset(struct TArray<enum class EAresIntSettingName>& NewParam); // Function PlayerFacingPerfSettingsPresetButtonsWidget.PlayerFacingPerfSettingsPresetButtonsWidget_C.ApplyPreset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void EnablePresetButtons(bool IsEnabled); // Function PlayerFacingPerfSettingsPresetButtonsWidget.PlayerFacingPerfSettingsPresetButtonsWidget_C.EnablePresetButtons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ChangeButtonDisabledState_Interface(bool ButtonState); // Function PlayerFacingPerfSettingsPresetButtonsWidget.PlayerFacingPerfSettingsPresetButtonsWidget_C.ChangeButtonDisabledState_Interface // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetButtonStyleIfActive(int32_t Chosen Value, int32_t ButtonValue, struct UTextBlock* OptionTextBox, struct UImage* OptionImageBox, struct UButton* OptionButtonBox); // Function PlayerFacingPerfSettingsPresetButtonsWidget.PlayerFacingPerfSettingsPresetButtonsWidget_C.SetButtonStyleIfActive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetColors(); // Function PlayerFacingPerfSettingsPresetButtonsWidget.PlayerFacingPerfSettingsPresetButtonsWidget_C.SetColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyStaticUI(); // Function PlayerFacingPerfSettingsPresetButtonsWidget.PlayerFacingPerfSettingsPresetButtonsWidget_C.ApplyStaticUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function PlayerFacingPerfSettingsPresetButtonsWidget.PlayerFacingPerfSettingsPresetButtonsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function PlayerFacingPerfSettingsPresetButtonsWidget.PlayerFacingPerfSettingsPresetButtonsWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__FalseButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature(); // Function PlayerFacingPerfSettingsPresetButtonsWidget.PlayerFacingPerfSettingsPresetButtonsWidget_C.BndEvt__FalseButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__LowButton_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature(); // Function PlayerFacingPerfSettingsPresetButtonsWidget.PlayerFacingPerfSettingsPresetButtonsWidget_C.BndEvt__LowButton_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__OptionShowBothButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function PlayerFacingPerfSettingsPresetButtonsWidget.PlayerFacingPerfSettingsPresetButtonsWidget_C.BndEvt__OptionShowBothButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function PlayerFacingPerfSettingsPresetButtonsWidget.PlayerFacingPerfSettingsPresetButtonsWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function PlayerFacingPerfSettingsPresetButtonsWidget.PlayerFacingPerfSettingsPresetButtonsWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void SaveSetting(); // Function PlayerFacingPerfSettingsPresetButtonsWidget.PlayerFacingPerfSettingsPresetButtonsWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PlayerFacingPerfSettingsPresetButtonsWidget(int32_t EntryPoint); // Function PlayerFacingPerfSettingsPresetButtonsWidget.PlayerFacingPerfSettingsPresetButtonsWidget_C.ExecuteUbergraph_PlayerFacingPerfSettingsPresetButtonsWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void GetActivePreset__DelegateSignature(); // Function PlayerFacingPerfSettingsPresetButtonsWidget.PlayerFacingPerfSettingsPresetButtonsWidget_C.GetActivePreset__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

