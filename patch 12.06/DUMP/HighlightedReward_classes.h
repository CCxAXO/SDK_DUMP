// WidgetBlueprintGeneratedClass HighlightedReward.HighlightedReward_C
// Size: 0x33c (Inherited: 0x318)
struct UHighlightedReward_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USquareRewardThumbnail_C* SquareRewardThumbnail; // 0x320(0x08)
	struct UUniversalCarouselBG_C* UniversalCarouselBG; // 0x328(0x08)
	struct UAresBasePrimaryDataAsset* DataAsset; // 0x330(0x08)
	int32_t Quantity; // 0x338(0x04)

	void PreConstruct(bool IsDesignTime); // Function HighlightedReward.HighlightedReward_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function HighlightedReward.HighlightedReward_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_HighlightedReward(int32_t EntryPoint); // Function HighlightedReward.HighlightedReward_C.ExecuteUbergraph_HighlightedReward // (Final|UbergraphFunction) // @ game+0x1b42740
};

