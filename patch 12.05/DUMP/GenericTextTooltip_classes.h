// WidgetBlueprintGeneratedClass GenericTextTooltip.GenericTextTooltip_C
// Size: 0x350 (Inherited: 0x318)
struct UGenericTextTooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UGenericTooltipWrapper_C* GenericTooltipWrapper; // 0x320(0x08)
	struct UTextBlock* TooltipTextBlock; // 0x328(0x08)
	struct FText TooltipTextContent; // 0x330(0x18)
	double AutoWrapWidth; // 0x348(0x08)

	void Fade(double Delay); // Function GenericTextTooltip.GenericTextTooltip_C.Fade // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetText(struct FText NewContent); // Function GenericTextTooltip.GenericTextTooltip_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayOutroAnimation(); // Function GenericTextTooltip.GenericTextTooltip_C.PlayOutroAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function GenericTextTooltip.GenericTextTooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void FadeEvent(); // Function GenericTextTooltip.GenericTextTooltip_C.FadeEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_GenericTextTooltip(int32_t EntryPoint); // Function GenericTextTooltip.GenericTextTooltip_C.ExecuteUbergraph_GenericTextTooltip // (Final|UbergraphFunction) // @ game+0x1af5410
};

