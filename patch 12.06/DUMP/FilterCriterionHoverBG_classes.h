// WidgetBlueprintGeneratedClass FilterCriterionHoverBG.FilterCriterionHoverBG_C
// Size: 0x338 (Inherited: 0x320)
struct UFilterCriterionHoverBG_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* hover; // 0x328(0x08)
	struct UImage* HoverImage; // 0x330(0x08)

	void Construct(); // Function FilterCriterionHoverBG.FilterCriterionHoverBG_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnHoverState(); // Function FilterCriterionHoverBG.FilterCriterionHoverBG_C.OnHoverState // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnUnHoverState(); // Function FilterCriterionHoverBG.FilterCriterionHoverBG_C.OnUnHoverState // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FilterCriterionHoverBG(int32_t EntryPoint); // Function FilterCriterionHoverBG.FilterCriterionHoverBG_C.ExecuteUbergraph_FilterCriterionHoverBG // (Final|UbergraphFunction) // @ game+0x1b42740
};

