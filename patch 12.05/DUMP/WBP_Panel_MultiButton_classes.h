// WidgetBlueprintGeneratedClass WBP_Panel_MultiButton.WBP_Panel_MultiButton_C
// Size: 0x1b20 (Inherited: 0x1ae0)
struct UWBP_Panel_MultiButton_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UHorizontalBox* ButtonContainer; // 0x1ae8(0x08)
	struct UAresCommonButtonGroup* ButtonGroup; // 0x1af0(0x08)
	struct UAresCommonButton* ButtonClass; // 0x1af8(0x08)
	struct FMargin DefaultButtonPadding; // 0x1b00(0x10)
	struct FMulticastInlineDelegate OnMultiButtonClicked; // 0x1b10(0x10)

	void SetSelectedIndex(int32_t InIndex); // Function WBP_Panel_MultiButton.WBP_Panel_MultiButton_C.SetSelectedIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateButtonsFromTextOptions(struct TArray<struct FText>& InTextOptions); // Function WBP_Panel_MultiButton.WBP_Panel_MultiButton_C.CreateButtonsFromTextOptions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnButtonGroupMemberClicked(struct UCommonButtonBase* AssociatedButton, int32_t ButtonIndex); // Function WBP_Panel_MultiButton.WBP_Panel_MultiButton_C.OnButtonGroupMemberClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToButtonGroup(bool bShouldBind); // Function WBP_Panel_MultiButton.WBP_Panel_MultiButton_C.BindToButtonGroup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_MultiButton.WBP_Panel_MultiButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_MultiButton.WBP_Panel_MultiButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_MultiButton.WBP_Panel_MultiButton_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_MultiButton(int32_t EntryPoint); // Function WBP_Panel_MultiButton.WBP_Panel_MultiButton_C.ExecuteUbergraph_WBP_Panel_MultiButton // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnMultiButtonClicked__DelegateSignature(int32_t Button Index); // Function WBP_Panel_MultiButton.WBP_Panel_MultiButton_C.OnMultiButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

