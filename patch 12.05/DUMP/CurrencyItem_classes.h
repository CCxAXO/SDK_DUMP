// WidgetBlueprintGeneratedClass CurrencyItem.CurrencyItem_C
// Size: 0x33c (Inherited: 0x318)
struct UCurrencyItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* Amount; // 0x320(0x08)
	struct UImage* Icon; // 0x328(0x08)
	struct UCurrencyDataAsset* CurrencyDataAsset; // 0x330(0x08)
	int32_t Quantity; // 0x338(0x04)

	void OnHandleLoaded(struct UCurrencyHandle* Handle); // Function CurrencyItem.CurrencyItem_C.OnHandleLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCurrency(struct UCurrencyDataAsset* DataAsset, int32_t Quantity); // Function CurrencyItem.CurrencyItem_C.SetCurrency // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function CurrencyItem.CurrencyItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CurrencyItem(int32_t EntryPoint); // Function CurrencyItem.CurrencyItem_C.ExecuteUbergraph_CurrencyItem // (Final|UbergraphFunction) // @ game+0x1af5410
};

