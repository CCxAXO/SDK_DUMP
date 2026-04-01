// WidgetBlueprintGeneratedClass WBP_QRCodeWidget.WBP_QRCodeWidget_C
// Size: 0x5b0 (Inherited: 0x550)
struct UWBP_QRCodeWidget_C : UWBP_Screen_ConfirmationModal_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWBP_Button_Primary_C* Button_Dismiss; // 0x558(0x08)
	struct UAresCommonText* Description; // 0x560(0x08)
	struct UImage* HelperImage; // 0x568(0x08)
	struct UImage* HRBottom; // 0x570(0x08)
	struct UImage* HRTop; // 0x578(0x08)
	struct UImage* IMG_topHightlightGrad; // 0x580(0x08)
	struct UAresCommonText* Link; // 0x588(0x08)
	struct UImage* QRCode; // 0x590(0x08)
	struct UImage* QRCodeBackground; // 0x598(0x08)
	struct UAresCommonText* Subtitle; // 0x5a0(0x08)
	struct UAresCommonText* Title; // 0x5a8(0x08)

	void BindToConfirmationViewModel(bool Bind); // Function WBP_QRCodeWidget.WBP_QRCodeWidget_C.BindToConfirmationViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_QRCodeWidget.WBP_QRCodeWidget_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void OnQRCodeChanged(struct UTexture2D* QRCode); // Function WBP_QRCodeWidget.WBP_QRCodeWidget_C.OnQRCodeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLinkChanged(struct FString Link); // Function WBP_QRCodeWidget.WBP_QRCodeWidget_C.OnLinkChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDescriptionChanged(struct FText& Description); // Function WBP_QRCodeWidget.WBP_QRCodeWidget_C.OnDescriptionChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSubtitleChanged(struct FText& Subtitle); // Function WBP_QRCodeWidget.WBP_QRCodeWidget_C.OnSubtitleChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTitleChanged(struct FText& Title); // Function WBP_QRCodeWidget.WBP_QRCodeWidget_C.OnTitleChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToQRCodeViewModel(bool bBind, struct UQRCodeConfirmationModalViewModel* QRCodeVM); // Function WBP_QRCodeWidget.WBP_QRCodeWidget_C.BindToQRCodeViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_QRCodeWidget_Button_Dismiss_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_QRCodeWidget.WBP_QRCodeWidget_C.BndEvt__WBP_QRCodeWidget_Button_Dismiss_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_QRCodeWidget.WBP_QRCodeWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_QRCodeWidget(int32_t EntryPoint); // Function WBP_QRCodeWidget.WBP_QRCodeWidget_C.ExecuteUbergraph_WBP_QRCodeWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};

