// WidgetBlueprintGeneratedClass APPurchaseBrowser.AP_Purchase_Browser_C
// Size: 0x3d0 (Inherited: 0x318)
struct UAP_Purchase_Browser_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* hover; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UImage* BGok; // 0x330(0x08)
	struct UOverlay* BuyButtonOverlay; // 0x338(0x08)
	struct UButton* CloseButton; // 0x340(0x08)
	struct UOverlay* ExternalBrowserWindow; // 0x348(0x08)
	struct UCanvasPanel* InClientBrowserErrorPanel; // 0x350(0x08)
	struct UTextBlock* InClientBrowserErrorText; // 0x358(0x08)
	struct UTextBlock* LaunchURLError; // 0x360(0x08)
	struct UCanvasPanel* LoadingPanel; // 0x368(0x08)
	struct UOverlay* Overlay_476; // 0x370(0x08)
	struct UButton* PurchaseButton; // 0x378(0x08)
	struct UWidgetSwitcher* PurchaseButtonSwitcher; // 0x380(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x388(0x08)
	struct UWebBrowser* WebBrowserWindow; // 0x390(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x398(0x08)
	struct FString PaymentsURL; // 0x3a0(0x10)
	struct FTimerHandle LoadTimer; // 0x3b0(0x08)
	double LoadTimeout; // 0x3b8(0x08)
	struct FMulticastInlineDelegate OnClose; // 0x3c0(0x10)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function APPurchaseBrowser.AP_Purchase_Browser_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	bool HandleBackRequest(); // Function APPurchaseBrowser.AP_Purchase_Browser_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void closewindow(); // Function APPurchaseBrowser.AP_Purchase_Browser_C.closewindow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Display Riot Pay Error(); // Function APPurchaseBrowser.AP_Purchase_Browser_C.Display Riot Pay Error // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayTimeoutError(); // Function APPurchaseBrowser.AP_Purchase_Browser_C.DisplayTimeoutError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StopTimeoutTimer(); // Function APPurchaseBrowser.AP_Purchase_Browser_C.StopTimeoutTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayPurchaseError(struct FText Error Text); // Function APPurchaseBrowser.AP_Purchase_Browser_C.DisplayPurchaseError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayAPPurchase(bool AsPopup); // Function APPurchaseBrowser.AP_Purchase_Browser_C.DisplayAPPurchase // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Load URL(struct FString URL); // Function APPurchaseBrowser.AP_Purchase_Browser_C.Load URL // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function APPurchaseBrowser.AP_Purchase_Browser_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PurchaseBrowerTriedToOpenPopup(struct FString URL, struct FString Frame); // Function APPurchaseBrowser.AP_Purchase_Browser_C.PurchaseBrowerTriedToOpenPopup // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ReturnToStoreButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function APPurchaseBrowser.AP_Purchase_Browser_C.BndEvt__ReturnToStoreButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function APPurchaseBrowser.AP_Purchase_Browser_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function APPurchaseBrowser.AP_Purchase_Browser_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function APPurchaseBrowser.AP_Purchase_Browser_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function APPurchaseBrowser.AP_Purchase_Browser_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function APPurchaseBrowser.AP_Purchase_Browser_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Init from Nav Args(struct TMap<struct FName, struct FWildcard> InParameters); // Function APPurchaseBrowser.AP_Purchase_Browser_C.Init from Nav Args // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AP_Purchase_Browser(int32_t EntryPoint); // Function APPurchaseBrowser.AP_Purchase_Browser_C.ExecuteUbergraph_AP_Purchase_Browser // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnClose__DelegateSignature(); // Function APPurchaseBrowser.AP_Purchase_Browser_C.OnClose__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

