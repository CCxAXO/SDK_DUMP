// WidgetBlueprintGeneratedClass SpecialXPProgress.SpecialXPProgress_C
// Size: 0x388 (Inherited: 0x318)
struct USpecialXPProgress_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* Description; // 0x320(0x08)
	struct UImage* Icon; // 0x328(0x08)
	struct UTextBlock* Multiplier; // 0x330(0x08)
	struct UTextBlock* Title; // 0x338(0x08)
	struct FText TitleText; // 0x340(0x18)
	struct FText DescriptionText; // 0x358(0x18)
	struct UTexture2D* IconImage; // 0x370(0x08)
	struct FMargin IconSpacing; // 0x378(0x10)

	void SetIcon(struct UTexture2D* Icon); // Function SpecialXPProgress.SpecialXPProgress_C.SetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetText(struct FText Title, struct FText Description); // Function SpecialXPProgress.SpecialXPProgress_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Populate(int32_t Percentage); // Function SpecialXPProgress.SpecialXPProgress_C.Populate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function SpecialXPProgress.SpecialXPProgress_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SpecialXPProgress(int32_t EntryPoint); // Function SpecialXPProgress.SpecialXPProgress_C.ExecuteUbergraph_SpecialXPProgress // (Final|UbergraphFunction) // @ game+0x1b42740
};

