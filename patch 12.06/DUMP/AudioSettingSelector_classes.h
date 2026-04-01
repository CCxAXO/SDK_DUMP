// WidgetBlueprintGeneratedClass AudioSettingSelector.AudioSettingSelector_C
// Size: 0x3a4 (Inherited: 0x320)
struct UAudioSettingSelector_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UTextBlock* CurrentAudioChannelsTextBlock; // 0x330(0x08)
	struct UTextBlock* DisplayNameText; // 0x338(0x08)
	struct UImage* Image_1; // 0x340(0x08)
	struct UComboBoxString* SettingDropdown; // 0x348(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x350(0x08)
	bool IsInitialized; // 0x358(0x01)
	enum class EAresIntSettingName SettingName; // 0x359(0x01)
	char pad_35A[0x6]; // 0x35a(0x06)
	struct TArray<struct FAudioSetting> SettingValues; // 0x360(0x10)
	struct FText DisplayText; // 0x370(0x18)
	struct FText DisplayTooltip; // 0x388(0x18)
	int32_t ValueToSave; // 0x3a0(0x04)

	void SetupHRTFCheckbox(); // Function AudioSettingSelector.AudioSettingSelector_C.SetupHRTFCheckbox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool ShouldDisplay(); // Function AudioSettingSelector.AudioSettingSelector_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetStaticText(); // Function AudioSettingSelector.AudioSettingSelector_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetDirectoryForDisplayName(struct FText DisplayName, struct FString& Directory); // Function AudioSettingSelector.AudioSettingSelector_C.GetDirectoryForDisplayName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetDisplayNameForDirectory(struct FString Directory, struct FText& DisplayName); // Function AudioSettingSelector.AudioSettingSelector_C.GetDisplayNameForDirectory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetLanguageFromDirectory(struct FString Directory); // Function AudioSettingSelector.AudioSettingSelector_C.GetLanguageFromDirectory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function AudioSettingSelector.AudioSettingSelector_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function AudioSettingSelector.AudioSettingSelector_C.BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void SaveSetting(); // Function AudioSettingSelector.AudioSettingSelector_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetupCurrentAudioChannelsTextBlock(); // Function AudioSettingSelector.AudioSettingSelector_C.SetupCurrentAudioChannelsTextBlock // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AudioSettingSelector(int32_t EntryPoint); // Function AudioSettingSelector.AudioSettingSelector_C.ExecuteUbergraph_AudioSettingSelector // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

