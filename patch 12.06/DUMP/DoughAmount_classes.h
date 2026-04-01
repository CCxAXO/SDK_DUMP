// WidgetBlueprintGeneratedClass DoughAmount.DoughAmount_C
// Size: 0x344 (Inherited: 0x318)
struct UDoughAmount_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAresTextBlock* DoughAmount; // 0x320(0x08)
	struct UImage* DoughIcon; // 0x328(0x08)
	struct FSlateColor Color; // 0x330(0x14)

	void Set Amount(int32_t Amount); // Function DoughAmount.DoughAmount_C.Set Amount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function DoughAmount.DoughAmount_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function DoughAmount.DoughAmount_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void On Currency Loaded(struct UCurrencyHandle* CurrencyHandle); // Function DoughAmount.DoughAmount_C.On Currency Loaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_DoughAmount(int32_t EntryPoint); // Function DoughAmount.DoughAmount_C.ExecuteUbergraph_DoughAmount // (Final|UbergraphFunction) // @ game+0x1b42740
};

