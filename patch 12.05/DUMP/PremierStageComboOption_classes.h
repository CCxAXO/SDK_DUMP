// WidgetBlueprintGeneratedClass PremierStageComboOption.PremierStageComboOption_C
// Size: 0x348 (Inherited: 0x318)
struct UPremierStageComboOption_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UGenericTextTooltipContainer_C* GenericTextTooltipContainer; // 0x320(0x08)
	struct UTextBlock* StageName; // 0x328(0x08)
	struct FText StageNameText; // 0x330(0x18)

	void PreConstruct(bool IsDesignTime); // Function PremierStageComboOption.PremierStageComboOption_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Initialize Option(struct FText StageText, bool Is Combo Button); // Function PremierStageComboOption.PremierStageComboOption_C.Initialize Option // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PremierStageComboOption(int32_t EntryPoint); // Function PremierStageComboOption.PremierStageComboOption_C.ExecuteUbergraph_PremierStageComboOption // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

