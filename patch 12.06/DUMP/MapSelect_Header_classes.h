// WidgetBlueprintGeneratedClass MapSelect_Header.MapSelect_Header_C
// Size: 0x340 (Inherited: 0x318)
struct UMapSelect_Header_C : UUserWidget {
	struct UMapSelect_HeaderSquadInfo_C* EnemyBanner; // 0x318(0x08)
	struct UMapSelect_HeaderSquadInfo_C* TeamBanner; // 0x320(0x08)
	struct FText StateText; // 0x328(0x18)

	void SetUpStep(enum class EStepType StepType, bool IsYourTeam, int32_t NumActions); // Function MapSelect_Header.MapSelect_Header_C.SetUpStep // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(struct UPregameViewController* PregameViewController, struct FTournamentRosterInfo YourRosterInfo, struct FTournamentRosterInfo EnemyRosterInfo); // Function MapSelect_Header.MapSelect_Header_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

