// WidgetBlueprintGeneratedClass WBP_Panel_EsportsEventButton.WBP_Panel_EsportsEventButton_C
// Size: 0x3f0 (Inherited: 0x3e0)
struct UWBP_Panel_EsportsEventButton_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_Button_EsportsEvent_C* WBP_Button_EsportsEvent; // 0x3e8(0x08)

	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_EsportsEventButton.WBP_Panel_EsportsEventButton_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void InitializeButtonWithEvent(enum class E2024VCTEvent InEvent); // Function WBP_Panel_EsportsEventButton.WBP_Panel_EsportsEventButton_C.InitializeButtonWithEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHitTest(bool IsEnabled); // Function WBP_Panel_EsportsEventButton.WBP_Panel_EsportsEventButton_C.SetHitTest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_EsportsEventButton.WBP_Panel_EsportsEventButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_EsportsEventButton_WBP_Button_EsportsEvent_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_EsportsEventButton.WBP_Panel_EsportsEventButton_C.BndEvt__WBP_Panel_EsportsEventButton_WBP_Button_EsportsEvent_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_EsportsEventButton_WBP_Button_EsportsEvent_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_EsportsEventButton.WBP_Panel_EsportsEventButton_C.BndEvt__WBP_Panel_EsportsEventButton_WBP_Button_EsportsEvent_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_EsportsEventButton(int32_t EntryPoint); // Function WBP_Panel_EsportsEventButton.WBP_Panel_EsportsEventButton_C.ExecuteUbergraph_WBP_Panel_EsportsEventButton // (Final|UbergraphFunction) // @ game+0x1af5410
};

