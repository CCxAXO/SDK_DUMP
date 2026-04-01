// WidgetBlueprintGeneratedClass AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C
// Size: 0x3bc (Inherited: 0x338)
struct UAudioSettingSelector_Gamepad_C : UBaseSettingsWidgetGamepad {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UImage* Background; // 0x340(0x08)
	struct UTextBlock* CurrentAudioChannelsTextBlock; // 0x348(0x08)
	struct UTextBlock* DisplayNameText; // 0x350(0x08)
	struct UImage* Image_1; // 0x358(0x08)
	struct UComboBoxString* SettingDropdown; // 0x360(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x368(0x08)
	bool IsInitialized; // 0x370(0x01)
	enum class EAresIntSettingName SettingName; // 0x371(0x01)
	char pad_372[0x6]; // 0x372(0x06)
	struct TArray<struct FAudioSetting> SettingValues; // 0x378(0x10)
	struct FText DisplayText; // 0x388(0x18)
	struct FText DisplayTooltip; // 0x3a0(0x18)
	int32_t ValueToSave; // 0x3b8(0x04)

	void SetupHRTFCheckbox(); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.SetupHRTFCheckbox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool ShouldDisplay(); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetStaticText(); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetDirectoryForDisplayName(struct FText DisplayName, struct FString& Directory); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.GetDirectoryForDisplayName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetDisplayNameForDirectory(struct FString Directory, struct FText& DisplayName); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.GetDisplayNameForDirectory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetLanguageFromDirectory(struct FString Directory); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.GetLanguageFromDirectory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void SaveSetting(); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SetupCurrentAudioChannelsTextBlock(); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.SetupCurrentAudioChannelsTextBlock // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AudioSettingSelector_Gamepad(int32_t EntryPoint); // Function AudioSettingSelector_Gamepad.AudioSettingSelector_Gamepad_C.ExecuteUbergraph_AudioSettingSelector_Gamepad // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

