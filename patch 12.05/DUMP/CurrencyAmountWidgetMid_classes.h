// WidgetBlueprintGeneratedClass CurrencyAmountWidgetMid.CurrencyAmountWidgetMid_C
// Size: 0x345 (Inherited: 0x318)
struct UCurrencyAmountWidgetMid_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* AmountText; // 0x320(0x08)
	struct UImage* CurrencyIcon; // 0x328(0x08)
	struct FSlateColor TextColor; // 0x330(0x14)
	bool DisplayTooltip; // 0x344(0x01)

	void UpdateAmountAndClearIcon(int32_t Amount); // Function CurrencyAmountWidgetMid.CurrencyAmountWidgetMid_C.UpdateAmountAndClearIcon // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCurrencyByID(struct FGuid CurrencyID, int32_t Amount); // Function CurrencyAmountWidgetMid.CurrencyAmountWidgetMid_C.SetCurrencyByID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCurrencyLoaded(struct UCurrencyHandle* CurrencyHandle); // Function CurrencyAmountWidgetMid.CurrencyAmountWidgetMid_C.OnCurrencyLoaded // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCurrency(struct UCurrencyDataAsset* Currency, int32_t Amount); // Function CurrencyAmountWidgetMid.CurrencyAmountWidgetMid_C.SetCurrency // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function CurrencyAmountWidgetMid.CurrencyAmountWidgetMid_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CurrencyAmountWidgetMid(int32_t EntryPoint); // Function CurrencyAmountWidgetMid.CurrencyAmountWidgetMid_C.ExecuteUbergraph_CurrencyAmountWidgetMid // (Final|UbergraphFunction) // @ game+0x1af5410
};

