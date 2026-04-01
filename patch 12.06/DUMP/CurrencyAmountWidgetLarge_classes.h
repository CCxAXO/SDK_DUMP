// WidgetBlueprintGeneratedClass CurrencyAmountWidgetLarge.CurrencyAmountWidgetLarge_C
// Size: 0x345 (Inherited: 0x318)
struct UCurrencyAmountWidgetLarge_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* AmountText; // 0x320(0x08)
	struct UImage* CurrencyIcon; // 0x328(0x08)
	struct FSlateColor TextColor; // 0x330(0x14)
	bool DisplayTooltip; // 0x344(0x01)

	void UpdateAmountAndClearIcon(int32_t Amount); // Function CurrencyAmountWidgetLarge.CurrencyAmountWidgetLarge_C.UpdateAmountAndClearIcon // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCurrencyByID(struct FGuid CurrencyID, int32_t Amount); // Function CurrencyAmountWidgetLarge.CurrencyAmountWidgetLarge_C.SetCurrencyByID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCurrencyLoaded(struct UCurrencyHandle* CurrencyHandle); // Function CurrencyAmountWidgetLarge.CurrencyAmountWidgetLarge_C.OnCurrencyLoaded // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCurrency(struct UCurrencyDataAsset* Currency, int32_t Amount); // Function CurrencyAmountWidgetLarge.CurrencyAmountWidgetLarge_C.SetCurrency // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function CurrencyAmountWidgetLarge.CurrencyAmountWidgetLarge_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CurrencyAmountWidgetLarge(int32_t EntryPoint); // Function CurrencyAmountWidgetLarge.CurrencyAmountWidgetLarge_C.ExecuteUbergraph_CurrencyAmountWidgetLarge // (Final|UbergraphFunction) // @ game+0x1b42740
};

