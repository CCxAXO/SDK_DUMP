// WidgetBlueprintGeneratedClass PremierGameModeIcon.PremierGameModeIcon_C
// Size: 0x338 (Inherited: 0x318)
struct UPremierGameModeIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UMenuAnchor* MenuAnchor; // 0x320(0x08)
	struct UOverlay* Overlay; // 0x328(0x08)
	struct UImage* PremierIcon; // 0x330(0x08)

	struct UWidget* On Menu Anchor Get Menu Content(); // Function PremierGameModeIcon.PremierGameModeIcon_C.On Menu Anchor Get Menu Content // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function PremierGameModeIcon.PremierGameModeIcon_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function PremierGameModeIcon.PremierGameModeIcon_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PremierGameModeIcon(int32_t EntryPoint); // Function PremierGameModeIcon.PremierGameModeIcon_C.ExecuteUbergraph_PremierGameModeIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

