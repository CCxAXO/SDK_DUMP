// WidgetBlueprintGeneratedClass CurrencyAmountWidget.CurrencyAmountWidget_C
// Size: 0x3d4 (Inherited: 0x318)
struct UCurrencyAmountWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* HoverDough; // 0x320(0x08)
	struct UWidgetAnimation* hover; // 0x328(0x08)
	struct UTextBlock* AmountText; // 0x330(0x08)
	struct UImage* CurrencyIcon; // 0x338(0x08)
	struct UImage* CurrencyIconHoverBg; // 0x340(0x08)
	struct UImage* DoughHoverBg; // 0x348(0x08)
	struct UHorizontalBox* HorizontalBox_19; // 0x350(0x08)
	struct UTelemetryButton* TButton; // 0x358(0x08)
	struct FSlateColor TextColor; // 0x360(0x14)
	bool DisplayTooltip; // 0x374(0x01)
	enum class EHorizontalAlignment Alignment; // 0x375(0x01)
	bool Clickable; // 0x376(0x01)
	char pad_377[0x1]; // 0x377(0x01)
	struct FMulticastInlineDelegate OnClicked; // 0x378(0x10)
	bool SendTelemetry; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct FString Telemetry Action Target; // 0x390(0x10)
	bool ShouldSurfaceCap; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct UWidgetAnimation* ActiveAnimation; // 0x3a8(0x08)
	struct FSlateColor NegativeTextColor; // 0x3b0(0x14)
	struct FGuid NewVar_1; // 0x3c4(0x10)

	void SetClickable(bool Clickable); // Function CurrencyAmountWidget.CurrencyAmountWidget_C.SetClickable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateAmountAndClearIcon(int32_t Amount, struct FGuid& CurrencyID); // Function CurrencyAmountWidget.CurrencyAmountWidget_C.UpdateAmountAndClearIcon // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCurrencyByID(struct FGuid CurrencyID, int32_t Amount); // Function CurrencyAmountWidget.CurrencyAmountWidget_C.SetCurrencyByID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCurrencyLoaded(struct UCurrencyHandle* CurrencyHandle); // Function CurrencyAmountWidget.CurrencyAmountWidget_C.OnCurrencyLoaded // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCurrency(struct UCurrencyDataAsset* Currency, int32_t Amount); // Function CurrencyAmountWidget.CurrencyAmountWidget_C.SetCurrency // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function CurrencyAmountWidget.CurrencyAmountWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function CurrencyAmountWidget.CurrencyAmountWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleClick(); // Function CurrencyAmountWidget.CurrencyAmountWidget_C.HandleClick // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TelemetryButton_70_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function CurrencyAmountWidget.CurrencyAmountWidget_C.BndEvt__TelemetryButton_70_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function CurrencyAmountWidget.CurrencyAmountWidget_C.BndEvt__TButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CurrencyAmountWidget(int32_t EntryPoint); // Function CurrencyAmountWidget.CurrencyAmountWidget_C.ExecuteUbergraph_CurrencyAmountWidget // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnClicked__DelegateSignature(); // Function CurrencyAmountWidget.CurrencyAmountWidget_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

