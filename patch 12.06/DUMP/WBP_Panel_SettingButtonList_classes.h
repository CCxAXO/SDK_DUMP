// WidgetBlueprintGeneratedClass WBP_Panel_SettingButtonList.WBP_Panel_SettingButtonList_C
// Size: 0x1bd8 (Inherited: 0x1b60)
struct UWBP_Panel_SettingButtonList_C : UAresSettingClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b60(0x08)
	struct UAresInputSwitcher* AresInputSwitcher; // 0x1b68(0x08)
	struct UHorizontalBox* HorizontalBox_PC; // 0x1b70(0x08)
	struct UWBP_Button_Basic_C* LeftArrow_Console; // 0x1b78(0x08)
	struct UAresButtonTextComponent* OptionsText; // 0x1b80(0x08)
	struct UNamedSlot* PCWidgetSlot; // 0x1b88(0x08)
	struct UWBP_Button_Basic_C* RightArrow_Console; // 0x1b90(0x08)
	struct UAresButtonTextComponent* SelectedIndexAndNumOfOptionsText; // 0x1b98(0x08)
	struct USizeBox* SizeBox; // 0x1ba0(0x08)
	struct UAresButtonTextComponent* Txt_Primary; // 0x1ba8(0x08)
	struct UWBP_SettingsEntryTemplate_C* WBP_SettingsEntryTemplate; // 0x1bb0(0x08)
	int32_t DropdownThreshold; // 0x1bb8(0x04)
	char pad_1BBC[0x4]; // 0x1bbc(0x04)
	struct UWBP_Panel_MultiButton_C* MultiButton; // 0x1bc0(0x08)
	struct TArray<struct FText> Texts; // 0x1bc8(0x10)

	void DetermineIndex(int32_t InIndex, int32_t& Index); // Function WBP_Panel_SettingButtonList.WBP_Panel_SettingButtonList_C.DetermineIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void OnMultiButtonClicked(struct UCommonButtonBase* AssociatedButton, int32_t ButtonIndex); // Function WBP_Panel_SettingButtonList.WBP_Panel_SettingButtonList_C.OnMultiButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeMultiButtonPanel(); // Function WBP_Panel_SettingButtonList.WBP_Panel_SettingButtonList_C.InitializeMultiButtonPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSettingIndexChanged(int32_t InSettingIndex); // Function WBP_Panel_SettingButtonList.WBP_Panel_SettingButtonList_C.OnSettingIndexChanged // (BlueprintEvent) // @ game+0x1b42740
	void OnOptionArrayChanged(struct TArray<struct FText>& Texts); // Function WBP_Panel_SettingButtonList.WBP_Panel_SettingButtonList_C.OnOptionArrayChanged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_SettingButtonList(int32_t EntryPoint); // Function WBP_Panel_SettingButtonList.WBP_Panel_SettingButtonList_C.ExecuteUbergraph_WBP_Panel_SettingButtonList // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

