// WidgetBlueprintGeneratedClass SummaryAwardBestRound.SummaryAwardBestRound_C
// Size: 0x360 (Inherited: 0x318)
struct USummaryAwardBestRound_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UButton* Button_35; // 0x320(0x08)
	struct UImage* PlayerHighlight_bg; // 0x328(0x08)
	struct UTextBlock* PlayerHighlightCount1; // 0x330(0x08)
	struct UImage* PlayerHighlightImage1; // 0x338(0x08)
	struct UVerticalBox* VerticalBox_4; // 0x340(0x08)
	int32_t BestRound; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct FMulticastInlineDelegate OnButtonClicked; // 0x350(0x10)

	void Construct(); // Function SummaryAwardBestRound.SummaryAwardBestRound_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Button_34_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SummaryAwardBestRound.SummaryAwardBestRound_C.BndEvt__Button_34_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Button_34_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function SummaryAwardBestRound.SummaryAwardBestRound_C.BndEvt__Button_34_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Button_34_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function SummaryAwardBestRound.SummaryAwardBestRound_C.BndEvt__Button_34_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SummaryAwardBestRound(int32_t EntryPoint); // Function SummaryAwardBestRound.SummaryAwardBestRound_C.ExecuteUbergraph_SummaryAwardBestRound // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnButtonClicked__DelegateSignature(); // Function SummaryAwardBestRound.SummaryAwardBestRound_C.OnButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

