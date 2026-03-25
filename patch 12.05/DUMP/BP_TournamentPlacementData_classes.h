// BlueprintGeneratedClass BP_TournamentPlacementData.BP_TournamentPlacementData_C
// Size: 0x42 (Inherited: 0x30)
struct UBP_TournamentPlacementData_C : UObject {
	struct UEsportsMatchupViewModelV2* MatchupViewModelV2; // 0x30(0x08)
	struct UWBP_Panel_TournamentAdvance_C* TournamentAdvancementWidget; // 0x38(0x08)
	enum class E2024VCTEvent event; // 0x40(0x01)
	bool bTopTeam; // 0x41(0x01)

	void Init(struct UEsportsMatchupViewModelV2* InMatchupViewModelV2, struct UWBP_Panel_TournamentAdvance_C* InTournamentAdvancementWidget, enum class E2024VCTEvent InEvent, bool bInTopTeam); // Function BP_TournamentPlacementData.BP_TournamentPlacementData_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

