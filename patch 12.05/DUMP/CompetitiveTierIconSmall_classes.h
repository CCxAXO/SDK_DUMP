// WidgetBlueprintGeneratedClass CompetitiveTierIconSmall.CompetitiveTierIconSmall_C
// Size: 0x32d (Inherited: 0x318)
struct UCompetitiveTierIconSmall_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* TierIcon; // 0x320(0x08)
	int32_t Tier; // 0x328(0x04)
	bool ShowTooltip; // 0x32c(0x01)

	void ApplyCompetitiveTierData(struct FCompetitiveTierData TierData); // Function CompetitiveTierIconSmall.CompetitiveTierIconSmall_C.ApplyCompetitiveTierData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTier(int32_t Tier); // Function CompetitiveTierIconSmall.CompetitiveTierIconSmall_C.SetTier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function CompetitiveTierIconSmall.CompetitiveTierIconSmall_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetTierForSeason(int32_t Tier, struct FGuid SeasonID); // Function CompetitiveTierIconSmall.CompetitiveTierIconSmall_C.SetTierForSeason // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTierForCompetitiveSeason(int32_t Tier, struct UCompetitiveSeasonDataAsset* CompetitiveSeason); // Function CompetitiveTierIconSmall.CompetitiveTierIconSmall_C.SetTierForCompetitiveSeason // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CompetitiveTierIconSmall(int32_t EntryPoint); // Function CompetitiveTierIconSmall.CompetitiveTierIconSmall_C.ExecuteUbergraph_CompetitiveTierIconSmall // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

