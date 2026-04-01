// WidgetBlueprintGeneratedClass CompetitiveTierIconSmallV2.CompetitiveTierIconSmallV2_C
// Size: 0x338 (Inherited: 0x318)
struct UCompetitiveTierIconSmallV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCompetitiveTierIconSmall_C* CompetitiveTierIconSmall; // 0x320(0x08)
	struct UTextBlock* ProgressText; // 0x328(0x08)
	struct UImage* PromotionIcon; // 0x330(0x08)

	void SetTierFromMMRUpdate(struct FMMRMatchInfo MMRMatchInfo, struct UCompetitiveSeasonDataAsset* CompetitiveSeasonData); // Function CompetitiveTierIconSmallV2.CompetitiveTierIconSmallV2_C.SetTierFromMMRUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function CompetitiveTierIconSmallV2.CompetitiveTierIconSmallV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CompetitiveTierIconSmallV2(int32_t EntryPoint); // Function CompetitiveTierIconSmallV2.CompetitiveTierIconSmallV2_C.ExecuteUbergraph_CompetitiveTierIconSmallV2 // (Final|UbergraphFunction) // @ game+0x1af5410
};

