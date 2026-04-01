// WidgetBlueprintGeneratedClass PurchaseButtonV2.PurchaseButtonV2_C
// Size: 0x3e8 (Inherited: 0x318)
struct UPurchaseButtonV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCurrencyAmountWidget_C* CurrencyAmountWidget; // 0x320(0x08)
	struct USizeBox* DiscountInfo; // 0x328(0x08)
	struct UTextBlock* DiscountPercentLabel; // 0x330(0x08)
	struct UCurrencyAmountWidget_C* OldCurrencyAmountWidget; // 0x338(0x08)
	struct USharedButtonMaster_C* SharedButtonMaster; // 0x340(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x348(0x10)
	struct UStoreOffer* Offer; // 0x358(0x08)
	struct FMulticastInlineDelegate OnHovered; // 0x360(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x370(0x10)
	double HoverNoise; // 0x380(0x08)
	bool hoveranimdirection; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct FText ButtonLableText; // 0x390(0x18)
	struct FString TelemetryActionTarget; // 0x3a8(0x10)
	bool Send Telemetry; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
	double DiscountPercent; // 0x3c0(0x08)
	int32_t DiscountedPrice; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct FText DiscountPercentText; // 0x3d0(0x18)

	void Update Bundle Purchase Button(bool IsOwned); // Function PurchaseButtonV2.PurchaseButtonV2_C.Update Bundle Purchase Button // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDiscountLabels(); // Function PurchaseButtonV2.PurchaseButtonV2_C.SetDiscountLabels // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetButtonBottomLabel(); // Function PurchaseButtonV2.PurchaseButtonV2_C.SetButtonBottomLabel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTelemetryTargets(bool Send Telemetry, struct FString Telemetry Action Target); // Function PurchaseButtonV2.PurchaseButtonV2_C.SetTelemetryTargets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetUnavailable(); // Function PurchaseButtonV2.PurchaseButtonV2_C.SetUnavailable // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetButtonLabel(struct UCurrencyDataAsset* CurrencyDataAsset, int32_t InputCurrencyAmount); // Function PurchaseButtonV2.PurchaseButtonV2_C.SetButtonLabel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetOffer(struct UStoreOffer* Offer, int32_t DiscountedPrice, struct FText DiscountPercentText); // Function PurchaseButtonV2.PurchaseButtonV2_C.SetOffer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(); // Function PurchaseButtonV2.PurchaseButtonV2_C.BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function PurchaseButtonV2.PurchaseButtonV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function PurchaseButtonV2.PurchaseButtonV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PurchaseButtonV2(int32_t EntryPoint); // Function PurchaseButtonV2.PurchaseButtonV2_C.ExecuteUbergraph_PurchaseButtonV2 // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnUnHovered__DelegateSignature(); // Function PurchaseButtonV2.PurchaseButtonV2_C.OnUnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnHovered__DelegateSignature(); // Function PurchaseButtonV2.PurchaseButtonV2_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnClicked__DelegateSignature(); // Function PurchaseButtonV2.PurchaseButtonV2_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

