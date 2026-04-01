// WidgetBlueprintGeneratedClass InitFailure.InitFailure_C
// Size: 0x358 (Inherited: 0x318)
struct UInitFailure_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BackgrounTint; // 0x320(0x08)
	struct UTextBlock* ErrorCode; // 0x328(0x08)
	struct UTextBlock* ErrorText; // 0x330(0x08)
	struct UInitDirectConnect_C* InitDirectConnect; // 0x338(0x08)
	struct USharedButtonMaster_C* LogoutShared; // 0x340(0x08)
	struct USharedButtonMaster_C* QuitShared; // 0x348(0x08)
	struct UTextBlock* TickerText; // 0x350(0x08)

	void GetDirectConnectVisability(enum class ESlateVisibility& DirectConnectVisability); // Function InitFailure.InitFailure_C.GetDirectConnectVisability // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetTickerText(struct FText& TickerText); // Function InitFailure.InitFailure_C.GetTickerText // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateState(); // Function InitFailure.InitFailure_C.UpdateState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetErrorCodeText(struct FText& ErrorCodeText); // Function InitFailure.InitFailure_C.GetErrorCodeText // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetErrorText(struct FText& ErrorText); // Function InitFailure.InitFailure_C.GetErrorText // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void BndEvt__ShipQuitShared_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(); // Function InitFailure.InitFailure_C.BndEvt__ShipQuitShared_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ShipLogoutShared_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(); // Function InitFailure.InitFailure_C.BndEvt__ShipLogoutShared_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnSignoutAllowed(); // Function InitFailure.InitFailure_C.OnSignoutAllowed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSignoutNotAllowed(); // Function InitFailure.InitFailure_C.OnSignoutNotAllowed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Enable Console Virtual Cursor(enum class ESlateVisibility InVisibility); // Function InitFailure.InitFailure_C.Enable Console Virtual Cursor // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function InitFailure.InitFailure_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function InitFailure.InitFailure_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_InitFailure(int32_t EntryPoint); // Function InitFailure.InitFailure_C.ExecuteUbergraph_InitFailure // (Final|UbergraphFunction) // @ game+0x1b42740
};

