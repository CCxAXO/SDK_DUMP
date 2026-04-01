// WidgetBlueprintGeneratedClass GenericTooltipWrapper.GenericTooltipWrapper_C
// Size: 0x368 (Inherited: 0x318)
struct UGenericTooltipWrapper_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Fade; // 0x320(0x08)
	struct UWidgetAnimation* Intro; // 0x328(0x08)
	struct UBackgroundBlur* BackgroundBlur_173; // 0x330(0x08)
	struct UNamedSlot* content; // 0x338(0x08)
	struct FString Subject; // 0x340(0x10)
	struct FText DisplayName; // 0x350(0x18)

	void PlayOutroAnimation(); // Function GenericTooltipWrapper.GenericTooltipWrapper_C.PlayOutroAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function GenericTooltipWrapper.GenericTooltipWrapper_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_GenericTooltipWrapper(int32_t EntryPoint); // Function GenericTooltipWrapper.GenericTooltipWrapper_C.ExecuteUbergraph_GenericTooltipWrapper // (Final|UbergraphFunction) // @ game+0x1af5410
};

