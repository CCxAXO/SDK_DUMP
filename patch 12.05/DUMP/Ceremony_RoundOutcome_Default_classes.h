// WidgetBlueprintGeneratedClass Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C
// Size: 0x42f (Inherited: 0x322)
struct UCeremony_RoundOutcome_Default_C : UBaseAnnouncementWidget_C {
	char pad_322[0x6]; // 0x322(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* Intro_fixed; // 0x330(0x08)
	struct UWidgetAnimation* Outro; // 0x338(0x08)
	struct UImage* AttackingIcon; // 0x340(0x08)
	struct UImage* BannerBG; // 0x348(0x08)
	struct UImage* BottomLine; // 0x350(0x08)
	struct UImage* DefendingIcon; // 0x358(0x08)
	struct UImage* EndCapBL; // 0x360(0x08)
	struct UImage* EndCapBR; // 0x368(0x08)
	struct UImage* EndCapTL; // 0x370(0x08)
	struct UImage* EndCapTR; // 0x378(0x08)
	struct UImage* Ether; // 0x380(0x08)
	struct UImage* glitchtexture; // 0x388(0x08)
	struct UTextBlock* PlayerTeamWonTextLOST; // 0x390(0x08)
	struct UTextBlock* RoundNumberText; // 0x398(0x08)
	struct UTextBlock* RoundOutcomeText; // 0x3a0(0x08)
	struct UImage* TopLine; // 0x3a8(0x08)
	struct UTextBlock* WipeText; // 0x3b0(0x08)
	struct UImage* WonElementGlow; // 0x3b8(0x08)
	bool PlayerTeamWon; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct AShooterPlayerState* PlayerState; // 0x3c8(0x08)
	enum class EAresRoundOutcome RoundOutcome; // 0x3d0(0x01)
	char pad_3D1[0x3]; // 0x3d1(0x03)
	int32_t CurrentRoundNumber; // 0x3d4(0x04)
	struct UCoordinatedHUDModel* HUDModel; // 0x3d8(0x08)
	bool HasStartedAnimation; // 0x3e0(0x01)
	char pad_3E1[0x3]; // 0x3e1(0x03)
	struct FLinearColor AllyColorGlow; // 0x3e4(0x10)
	struct FLinearColor EnemyColorGlow; // 0x3f4(0x10)
	struct FSlateColor EnemyColorWipe; // 0x404(0x14)
	struct FSlateColor AllyColorWipe; // 0x418(0x14)
	bool AttackingTeamWiped; // 0x42c(0x01)
	bool DefendingTeamWiped; // 0x42d(0x01)
	enum class EAresBombStates BombState; // 0x42e(0x01)

	void SetCeremonyTextFields(); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.SetCeremonyTextFields // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetWinnerColor(struct FLinearColor& Glow, struct FSlateColor& Wipe); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.GetWinnerColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AreWinnersAlliedWithDefenders(enum class EAresAlliance& WinnerDefenderAlliance); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.AreWinnersAlliedWithDefenders // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FText Get_RoundOutcome(); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.Get_RoundOutcome // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	struct FText Get_RoundNumber(); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.Get_RoundNumber // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	struct FText Get_PlayerTeamWon(); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.Get_PlayerTeamWon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetRoundOutcomeInfo(bool PlayerTeamWon, int32_t CurrentRoundNumber, enum class EAresRoundOutcome RoundOutcome); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.GetRoundOutcomeInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAnimatingOut(); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.OnAnimatingOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAnimatingIn(); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.OnAnimatingIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnViewTargetChanged_Event(struct AActor* NewViewTarget); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.OnViewTargetChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Ceremony_RoundOutcome_Default(int32_t EntryPoint); // Function Ceremony_RoundOutcome_Default.Ceremony_RoundOutcome_Default_C.ExecuteUbergraph_Ceremony_RoundOutcome_Default // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

