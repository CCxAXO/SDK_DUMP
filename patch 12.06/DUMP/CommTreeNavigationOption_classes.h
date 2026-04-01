// WidgetBlueprintGeneratedClass CommTreeNavigationOption.CommTreeNavigationOption_C
// Size: 0x368 (Inherited: 0x318)
struct UCommTreeNavigationOption_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* CommEnumText; // 0x320(0x08)
	struct UTextBlock* KeyText; // 0x328(0x08)
	struct UTextBlock* TextBlock_1; // 0x330(0x08)
	struct FMulticastInlineDelegate Played; // 0x338(0x10)
	int32_t WidgetIndexToShow; // 0x348(0x04)
	int32_t PositionIndexInList; // 0x34c(0x04)
	struct FText NameOfTargetTree; // 0x350(0x18)

	void Initialize(); // Function CommTreeNavigationOption.CommTreeNavigationOption_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function CommTreeNavigationOption.CommTreeNavigationOption_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CommTreeNavigationOption(int32_t EntryPoint); // Function CommTreeNavigationOption.CommTreeNavigationOption_C.ExecuteUbergraph_CommTreeNavigationOption // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void Played__DelegateSignature(); // Function CommTreeNavigationOption.CommTreeNavigationOption_C.Played__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

