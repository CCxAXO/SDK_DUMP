// WidgetBlueprintGeneratedClass WBP_Panel_PriceBreakdownButton.WBP_Panel_PriceBreakdownButton_C
// Size: 0x1b00 (Inherited: 0x1ae0)
struct UWBP_Panel_PriceBreakdownButton_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWBP_Button_Primary_C* WBP_Button_Primary; // 0x1ae8(0x08)
	struct UVM_PriceBreakdownButton_C* VM_PriceBreakdownButton; // 0x1af0(0x08)
	struct UOfferDTO* OfferDTO; // 0x1af8(0x08)

	void Bind Events(bool Bind); // Function WBP_Panel_PriceBreakdownButton.WBP_Panel_PriceBreakdownButton_C.Bind Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Offer DTO(struct UOfferDTO* Offer DTO); // Function WBP_Panel_PriceBreakdownButton.WBP_Panel_PriceBreakdownButton_C.Set Offer DTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_Panel_PriceBreakdownButton.WBP_Panel_PriceBreakdownButton_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PriceBreakdownButton.WBP_Panel_PriceBreakdownButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_PurchaseConfirmButton_WBP_Button_Primary_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_PriceBreakdownButton.WBP_Panel_PriceBreakdownButton_C.BndEvt__WBP_Panel_PurchaseConfirmButton_WBP_Button_Primary_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_PriceBreakdownButton.WBP_Panel_PriceBreakdownButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_PriceBreakdownButton.WBP_Panel_PriceBreakdownButton_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PriceBreakdownButton(int32_t EntryPoint); // Function WBP_Panel_PriceBreakdownButton.WBP_Panel_PriceBreakdownButton_C.ExecuteUbergraph_WBP_Panel_PriceBreakdownButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

