// WidgetBlueprintGeneratedClass SeasonComboOption.SeasonComboOption_C
// Size: 0x383 (Inherited: 0x318)
struct USeasonComboOption_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* ActTextWidget; // 0x320(0x08)
	struct UHorizontalBox* ComboButtonBox; // 0x328(0x08)
	struct UImage* DisabledImage; // 0x330(0x08)
	struct UTextBlock* EpisodeTextWidget; // 0x338(0x08)
	struct UGenericTextTooltipContainer_C* GenericTextTooltipContainer; // 0x340(0x08)
	struct UTextBlock* SlashesText; // 0x348(0x08)
	struct FText EpisodeText; // 0x350(0x18)
	struct FText ActText; // 0x368(0x18)
	bool Selected; // 0x380(0x01)
	bool Enabled; // 0x381(0x01)
	bool IsComboButton; // 0x382(0x01)

	void PreConstruct(bool IsDesignTime); // Function SeasonComboOption.SeasonComboOption_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void InitializeOption(struct FText EpisodeText, struct FText ActText, bool Selected, bool Enabled, bool IsComboButton); // Function SeasonComboOption.SeasonComboOption_C.InitializeOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SeasonComboOption(int32_t EntryPoint); // Function SeasonComboOption.SeasonComboOption_C.ExecuteUbergraph_SeasonComboOption // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

