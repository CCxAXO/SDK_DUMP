// WidgetBlueprintGeneratedClass WBP_Button_SelectBox_ComboButton.WBP_Button_SelectBox_ComboButton_C
// Size: 0x490 (Inherited: 0x3e0)
struct UWBP_Button_SelectBox_ComboButton_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresComboBox* AresComboBox; // 0x3e8(0x08)
	struct UWBP_Button_SelectBox_C* CachedButtonWidget; // 0x3f0(0x08)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x3f8(0x10)
	struct FText Text; // 0x408(0x18)
	struct FString CachedSelectedOption; // 0x420(0x10)
	int32_t SpacerRightWidth; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct UCommonButtonStyle* Style; // 0x438(0x08)
	struct TMap<struct FString, struct USharedComboOption_Convergence_C*> OptionsMap; // 0x440(0x50)

	void SetSelectedItemStyle(); // Function WBP_Button_SelectBox_ComboButton.WBP_Button_SelectBox_ComboButton_C.SetSelectedItemStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIcon(struct UTexture* InTexture); // Function WBP_Button_SelectBox_ComboButton.WBP_Button_SelectBox_ComboButton_C.SetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ToggleComboBox(struct UCommonButtonBase* Button); // Function WBP_Button_SelectBox_ComboButton.WBP_Button_SelectBox_ComboButton_C.ToggleComboBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* OnGenerateButtonItemWidget(struct FString Item); // Function WBP_Button_SelectBox_ComboButton.WBP_Button_SelectBox_ComboButton_C.OnGenerateButtonItemWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSelectedOption(struct FString InOption); // Function WBP_Button_SelectBox_ComboButton.WBP_Button_SelectBox_ComboButton_C.SetSelectedOption // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ClearOptions(); // Function WBP_Button_SelectBox_ComboButton.WBP_Button_SelectBox_ComboButton_C.ClearOptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RemoveOption(struct FString InOption, bool& OptionFound); // Function WBP_Button_SelectBox_ComboButton.WBP_Button_SelectBox_ComboButton_C.RemoveOption // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddOption(struct FString InOption); // Function WBP_Button_SelectBox_ComboButton.WBP_Button_SelectBox_ComboButton_C.AddOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* OnGenerateButtonWidget(struct FString Item); // Function WBP_Button_SelectBox_ComboButton.WBP_Button_SelectBox_ComboButton_C.OnGenerateButtonWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_SelectBox_ComboButton.WBP_Button_SelectBox_ComboButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Button_SelectBox_ComboButton_AresComboBox_57_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function WBP_Button_SelectBox_ComboButton.WBP_Button_SelectBox_ComboButton_C.BndEvt__WBP_Button_SelectBox_ComboButton_AresComboBox_57_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_SelectBox_ComboButton(int32_t EntryPoint); // Function WBP_Button_SelectBox_ComboButton.WBP_Button_SelectBox_ComboButton_C.ExecuteUbergraph_WBP_Button_SelectBox_ComboButton // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnSelectionChanged__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function WBP_Button_SelectBox_ComboButton.WBP_Button_SelectBox_ComboButton_C.OnSelectionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

