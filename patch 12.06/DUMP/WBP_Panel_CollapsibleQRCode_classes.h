// WidgetBlueprintGeneratedClass WBP_Panel_CollapsibleQRCode.WBP_Panel_CollapsibleQRCode_C
// Size: 0x450 (Inherited: 0x3e0)
struct UWBP_Panel_CollapsibleQRCode_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct USizeBox* ContentBox; // 0x3e8(0x08)
	struct UWBP_QRCodeStandaloneWidget_C* QRCode; // 0x3f0(0x08)
	struct UImage* TitleBackground; // 0x3f8(0x08)
	struct UWBP_Button_List_C* TitleButton; // 0x400(0x08)
	struct FText QRCodeURL; // 0x408(0x18)
	struct FText TitleText; // 0x420(0x18)
	bool StartCollapsed; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct FMulticastInlineDelegate OpenContent; // 0x440(0x10)

	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_CollapsibleQRCode.WBP_Panel_CollapsibleQRCode_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void CollapseContent(); // Function WBP_Panel_CollapsibleQRCode.WBP_Panel_CollapsibleQRCode_C.CollapseContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_CollapsibleQRCode.WBP_Panel_CollapsibleQRCode_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_CollapsibleQRCode.WBP_Panel_CollapsibleQRCode_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_CollapsibleQRCode_TitleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_CollapsibleQRCode.WBP_Panel_CollapsibleQRCode_C.BndEvt__WBP_Panel_CollapsibleQRCode_TitleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_CollapsibleQRCode_TitleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_CollapsibleQRCode.WBP_Panel_CollapsibleQRCode_C.BndEvt__WBP_Panel_CollapsibleQRCode_TitleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_CollapsibleQRCode(int32_t EntryPoint); // Function WBP_Panel_CollapsibleQRCode.WBP_Panel_CollapsibleQRCode_C.ExecuteUbergraph_WBP_Panel_CollapsibleQRCode // (Final|UbergraphFunction) // @ game+0x1b42740
	void OpenContent__DelegateSignature(); // Function WBP_Panel_CollapsibleQRCode.WBP_Panel_CollapsibleQRCode_C.OpenContent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

