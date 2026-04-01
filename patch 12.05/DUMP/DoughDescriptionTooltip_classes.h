// WidgetBlueprintGeneratedClass DoughDescriptionTooltip.DoughDescriptionTooltip_C
// Size: 0x350 (Inherited: 0x318)
struct UDoughDescriptionTooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Delay; // 0x320(0x08)
	struct URichTextBlock* TooltipDescription; // 0x328(0x08)
	struct URichTextBlock* TooltipDescriptionParagraph2; // 0x330(0x08)
	struct FText Description; // 0x338(0x18)

	void PreConstruct(bool IsDesignTime); // Function DoughDescriptionTooltip.DoughDescriptionTooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function DoughDescriptionTooltip.DoughDescriptionTooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_DoughDescriptionTooltip(int32_t EntryPoint); // Function DoughDescriptionTooltip.DoughDescriptionTooltip_C.ExecuteUbergraph_DoughDescriptionTooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

