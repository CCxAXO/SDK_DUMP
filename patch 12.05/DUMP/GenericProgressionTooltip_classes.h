// WidgetBlueprintGeneratedClass GenericProgressionTooltip.GenericProgressionTooltip_C
// Size: 0x359 (Inherited: 0x318)
struct UGenericProgressionTooltip_C : UUserWidget {
	struct UImage* BodyBG_2; // 0x318(0x08)
	struct URichTextBlock* BodyRichText; // 0x320(0x08)
	struct UImage* ContentBG; // 0x328(0x08)
	struct UImage* HeaderBG_2; // 0x330(0x08)
	struct UOverlay* HeaderOverlay; // 0x338(0x08)
	struct URichTextBlock* HeaderRichText; // 0x340(0x08)
	struct UOverlay* Overlay_2; // 0x348(0x08)
	struct USizeBox* SizeBox_2; // 0x350(0x08)
	bool ShouldCenter; // 0x358(0x01)

	void Set Body(struct UImage* Background, struct FText Text); // Function GenericProgressionTooltip.GenericProgressionTooltip_C.Set Body // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Header(struct UImage* Background, struct FText Text); // Function GenericProgressionTooltip.GenericProgressionTooltip_C.Set Header // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

