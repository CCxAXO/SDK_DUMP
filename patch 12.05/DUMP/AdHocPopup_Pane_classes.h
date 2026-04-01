// WidgetBlueprintGeneratedClass AdHocPopup_Pane.AdHocPopup_Pane_C
// Size: 0x380 (Inherited: 0x318)
struct UAdHocPopup_Pane_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* Description; // 0x320(0x08)
	struct UTextBlock* Subtitle; // 0x328(0x08)
	struct UTextBlock* Title; // 0x330(0x08)
	struct FText TitleText; // 0x338(0x18)
	struct FText SubtitleText; // 0x350(0x18)
	struct FText DescriptionText; // 0x368(0x18)

	void PreConstruct(bool IsDesignTime); // Function AdHocPopup_Pane.AdHocPopup_Pane_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AdHocPopup_Pane(int32_t EntryPoint); // Function AdHocPopup_Pane.AdHocPopup_Pane_C.ExecuteUbergraph_AdHocPopup_Pane // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

