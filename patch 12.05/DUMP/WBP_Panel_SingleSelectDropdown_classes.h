// WidgetBlueprintGeneratedClass WBP_Panel_SingleSelectDropdown.WBP_Panel_SingleSelectDropdown_C
// Size: 0x488 (Inherited: 0x3e0)
struct UWBP_Panel_SingleSelectDropdown_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresInputSwitcher* AresInputSwitcher_27; // 0x3e8(0x08)
	struct UOverlay* ConsoleButton; // 0x3f0(0x08)
	struct USizeBox* PanelSizeBox; // 0x3f8(0x08)
	struct USharedComboBox_C* PCSelectButton; // 0x400(0x08)
	struct USingleSelectViewModel* SingleSelectVM; // 0x408(0x08)
	struct FMulticastInlineDelegate OnItemSelected; // 0x410(0x10)
	bool DefaultSelectFirstOption; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct FText DescriptorText; // 0x428(0x18)
	struct UCommonButtonStyle* ConsoleButtonStyle; // 0x440(0x08)
	struct UWBP_Button_OpenSingleSelect_C* ConsoleSelectButton; // 0x448(0x08)
	struct FText SelectSideScreenTitleText; // 0x450(0x18)
	struct FText ConsoleDescriptorText; // 0x468(0x18)
	double HeightOverride; // 0x480(0x08)

	void SetSelectedOption(struct FText Option Text); // Function WBP_Panel_SingleSelectDropdown.WBP_Panel_SingleSelectDropdown_C.SetSelectedOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindConsoleButton(bool bBind); // Function WBP_Panel_SingleSelectDropdown.WBP_Panel_SingleSelectDropdown_C.BindConsoleButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitConsoleButton(); // Function WBP_Panel_SingleSelectDropdown.WBP_Panel_SingleSelectDropdown_C.InitConsoleButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitPanelHeight(); // Function WBP_Panel_SingleSelectDropdown.WBP_Panel_SingleSelectDropdown_C.InitPanelHeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleSelectedItemChanged(struct USingleSelectListOption* SelectedListOption); // Function WBP_Panel_SingleSelectDropdown.WBP_Panel_SingleSelectDropdown_C.HandleSelectedItemChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleConsoleButtonClicked(struct UCommonButtonBase* Button); // Function WBP_Panel_SingleSelectDropdown.WBP_Panel_SingleSelectDropdown_C.HandleConsoleButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleAvailableItemsChanged(struct TArray<struct USingleSelectListOption*>& AvailableListOptions); // Function WBP_Panel_SingleSelectDropdown.WBP_Panel_SingleSelectDropdown_C.HandleAvailableItemsChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindViewModel(bool bBind); // Function WBP_Panel_SingleSelectDropdown.WBP_Panel_SingleSelectDropdown_C.BindViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModel(); // Function WBP_Panel_SingleSelectDropdown.WBP_Panel_SingleSelectDropdown_C.InitViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetListOptions(struct TArray<struct USingleSelectListOption*>& SingleSelectListOptions); // Function WBP_Panel_SingleSelectDropdown.WBP_Panel_SingleSelectDropdown_C.SetListOptions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetOptions(struct TArray<struct FText>& OptionTextList); // Function WBP_Panel_SingleSelectDropdown.WBP_Panel_SingleSelectDropdown_C.SetOptions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddOption(struct FText OptionText); // Function WBP_Panel_SingleSelectDropdown.WBP_Panel_SingleSelectDropdown_C.AddOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_SingleSelectDropdown.WBP_Panel_SingleSelectDropdown_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_SingleSelectDropdown.WBP_Panel_SingleSelectDropdown_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_SingleSelectDropdown_SharedComboBox_K2Node_ComponentBoundEvent_1_OnItemSelected__DelegateSignature(struct FString Item); // Function WBP_Panel_SingleSelectDropdown.WBP_Panel_SingleSelectDropdown_C.BndEvt__WBP_Panel_SingleSelectDropdown_SharedComboBox_K2Node_ComponentBoundEvent_1_OnItemSelected__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_SingleSelectDropdown.WBP_Panel_SingleSelectDropdown_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_SingleSelectDropdown(int32_t EntryPoint); // Function WBP_Panel_SingleSelectDropdown.WBP_Panel_SingleSelectDropdown_C.ExecuteUbergraph_WBP_Panel_SingleSelectDropdown // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnItemSelected__DelegateSignature(struct USingleSelectListOption* SelectedItem); // Function WBP_Panel_SingleSelectDropdown.WBP_Panel_SingleSelectDropdown_C.OnItemSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

