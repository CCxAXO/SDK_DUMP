// WidgetBlueprintGeneratedClass AudioVOAmountDropdownSettingsWidget.AudioVOAmountDropdownSettingsWidget_C
// Size: 0x3b0 (Inherited: 0x320)
struct UAudioVOAmountDropdownSettingsWidget_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UTextBlock* DisplayNameText; // 0x330(0x08)
	struct UImage* Image_1; // 0x338(0x08)
	struct UComboBoxString* VOAmountDropdown; // 0x340(0x08)
	struct FText DisplayText; // 0x348(0x18)
	struct FText DisplayTooltip; // 0x360(0x18)
	enum class EAresIntSettingName VOAmount; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct UObject* VOAmountRoamingSetting; // 0x380(0x08)
	bool IsInitialized; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct TArray<struct FString> Items; // 0x390(0x10)
	struct FString Default; // 0x3a0(0x10)

	void SetAudioVOAmountGameplaySettings(); // Function AudioVOAmountDropdownSettingsWidget.AudioVOAmountDropdownSettingsWidget_C.SetAudioVOAmountGameplaySettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetAudioVOAmountMasterSettings(); // Function AudioVOAmountDropdownSettingsWidget.AudioVOAmountDropdownSettingsWidget_C.SetAudioVOAmountMasterSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetStaticText(); // Function AudioVOAmountDropdownSettingsWidget.AudioVOAmountDropdownSettingsWidget_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function AudioVOAmountDropdownSettingsWidget.AudioVOAmountDropdownSettingsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function AudioVOAmountDropdownSettingsWidget.AudioVOAmountDropdownSettingsWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function AudioVOAmountDropdownSettingsWidget.AudioVOAmountDropdownSettingsWidget_C.BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AudioVOAmountDropdownSettingsWidget(int32_t EntryPoint); // Function AudioVOAmountDropdownSettingsWidget.AudioVOAmountDropdownSettingsWidget_C.ExecuteUbergraph_AudioVOAmountDropdownSettingsWidget // (Final|UbergraphFunction) // @ game+0x1b42740
};

