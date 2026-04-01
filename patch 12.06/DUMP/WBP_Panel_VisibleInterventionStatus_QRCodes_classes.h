// WidgetBlueprintGeneratedClass WBP_Panel_VisibleInterventionStatus_QRCodes.WBP_Panel_VisibleInterventionStatus_QRCodes_C
// Size: 0x4d0 (Inherited: 0x4a8)
struct UWBP_Panel_VisibleInterventionStatus_QRCodes_C : UAresCommonActivatableWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UWBP_Panel_CollapsibleQRCode_C* QRCodeCommunityPact; // 0x4b0(0x08)
	struct UWBP_Panel_CollapsibleQRCode_C* QRCodeFAQ; // 0x4b8(0x08)
	struct UWBP_Panel_CollapsibleQRCode_C* QRCodeToS; // 0x4c0(0x08)
	struct UWBP_Panel_CollapsibleQRCode_C* OpenQRCode; // 0x4c8(0x08)

	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_VisibleInterventionStatus_QRCodes.WBP_Panel_VisibleInterventionStatus_QRCodes_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void HandleOpenedContent(struct UWBP_Panel_CollapsibleQRCode_C*& OpenedContent); // Function WBP_Panel_VisibleInterventionStatus_QRCodes.WBP_Panel_VisibleInterventionStatus_QRCodes_C.HandleOpenedContent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_VisibleInterventionStatus_QRCodes.WBP_Panel_VisibleInterventionStatus_QRCodes_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_VisibleInterventionStatus_QRCodes_QRCodeFAQ_K2Node_ComponentBoundEvent_0_OpenContent__DelegateSignature(); // Function WBP_Panel_VisibleInterventionStatus_QRCodes.WBP_Panel_VisibleInterventionStatus_QRCodes_C.BndEvt__WBP_Panel_VisibleInterventionStatus_QRCodes_QRCodeFAQ_K2Node_ComponentBoundEvent_0_OpenContent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_VisibleInterventionStatus_QRCodes_QRCodeCoC_K2Node_ComponentBoundEvent_1_OpenContent__DelegateSignature(); // Function WBP_Panel_VisibleInterventionStatus_QRCodes.WBP_Panel_VisibleInterventionStatus_QRCodes_C.BndEvt__WBP_Panel_VisibleInterventionStatus_QRCodes_QRCodeCoC_K2Node_ComponentBoundEvent_1_OpenContent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_VisibleInterventionStatus_QRCodes_QRCodeToS_K2Node_ComponentBoundEvent_3_OpenContent__DelegateSignature(); // Function WBP_Panel_VisibleInterventionStatus_QRCodes.WBP_Panel_VisibleInterventionStatus_QRCodes_C.BndEvt__WBP_Panel_VisibleInterventionStatus_QRCodes_QRCodeToS_K2Node_ComponentBoundEvent_3_OpenContent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_VisibleInterventionStatus_QRCodes.WBP_Panel_VisibleInterventionStatus_QRCodes_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_VisibleInterventionStatus_QRCodes(int32_t EntryPoint); // Function WBP_Panel_VisibleInterventionStatus_QRCodes.WBP_Panel_VisibleInterventionStatus_QRCodes_C.ExecuteUbergraph_WBP_Panel_VisibleInterventionStatus_QRCodes // (Final|UbergraphFunction) // @ game+0x1b42740
};

