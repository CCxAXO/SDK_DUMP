// WidgetBlueprintGeneratedClass CommTreeOption.CommTreeOption_C
// Size: 0x350 (Inherited: 0x318)
struct UCommTreeOption_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* CommEnumText; // 0x320(0x08)
	struct UTextBlock* KeyText; // 0x328(0x08)
	struct UTextBlock* TextBlock_1; // 0x330(0x08)
	enum class NonVerbalCommTypesEnum CommEnumToShow; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	int32_t ArrayIndex; // 0x33c(0x04)
	struct FMulticastInlineDelegate Played; // 0x340(0x10)

	void Initialize(); // Function CommTreeOption.CommTreeOption_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CommTreeOption(int32_t EntryPoint); // Function CommTreeOption.CommTreeOption_C.ExecuteUbergraph_CommTreeOption // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void Played__DelegateSignature(); // Function CommTreeOption.CommTreeOption_C.Played__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

