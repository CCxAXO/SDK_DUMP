// WidgetBlueprintGeneratedClass Esports_Bracket_RoundRobinScore.Esports_Bracket_RoundRobinScore_C
// Size: 0x460 (Inherited: 0x3e0)
struct UEsports_Bracket_RoundRobinScore_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UOverlay* AdvancementMessageBlock; // 0x3e8(0x08)
	struct UHorizontalBox* HorizontalBox_5; // 0x3f0(0x08)
	struct UImage* Image_TeamLogo; // 0x3f8(0x08)
	struct UScaleBox* SB_TeamName; // 0x400(0x08)
	struct UAresCommonText* T_TeamCode; // 0x408(0x08)
	struct UAresCommonText* T_TeamTag; // 0x410(0x08)
	struct UAresCommonText* Text_AdvancesTo; // 0x418(0x08)
	struct UAresCommonText* Text_ToStage; // 0x420(0x08)
	struct UVerticalBox* VBox_Record; // 0x428(0x08)
	struct UTextBlock* WinsLossesText; // 0x430(0x08)
	struct UWidgetSwitcher* WS_LogoNameWrap; // 0x438(0x08)
	bool ShouldShowAdvancementMessage; // 0x440(0x01)
	char pad_441[0x3]; // 0x441(0x03)
	int32_t TeamWins; // 0x444(0x04)
	int32_t TeamLosses; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct UEsportsTeamViewModel* TeamViewModel; // 0x450(0x08)
	struct UEsportsMatchupTeamViewModel* MatchupTeamViewModel; // 0x458(0x08)

	void SetAdvancingStage(struct FString AdvancingStage); // Function Esports_Bracket_RoundRobinScore.Esports_Bracket_RoundRobinScore_C.SetAdvancingStage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTeamLossesUpdated(int32_t UpdatedMatchLosses); // Function Esports_Bracket_RoundRobinScore.Esports_Bracket_RoundRobinScore_C.OnTeamLossesUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTeamWinsUpdated(int32_t UpdatedMatchWins); // Function Esports_Bracket_RoundRobinScore.Esports_Bracket_RoundRobinScore_C.OnTeamWinsUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTeamLogoUpdated(struct UTexture2D* TeamLogoTexture); // Function Esports_Bracket_RoundRobinScore.Esports_Bracket_RoundRobinScore_C.OnTeamLogoUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTeamNameUpdated(struct FString TeamName); // Function Esports_Bracket_RoundRobinScore.Esports_Bracket_RoundRobinScore_C.OnTeamNameUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTeamCodeUpdated(struct FString TeamCode); // Function Esports_Bracket_RoundRobinScore.Esports_Bracket_RoundRobinScore_C.OnTeamCodeUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindOrUnbindFromViewModel(bool Bind); // Function Esports_Bracket_RoundRobinScore.Esports_Bracket_RoundRobinScore_C.BindOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init with Team View Model(struct UEsportsMatchupTeamViewModel* ValidMatchupTeamViewModel); // Function Esports_Bracket_RoundRobinScore.Esports_Bracket_RoundRobinScore_C.Init with Team View Model // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetAdvancementMessageVisibility(bool Visible); // Function Esports_Bracket_RoundRobinScore.Esports_Bracket_RoundRobinScore_C.SetAdvancementMessageVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function Esports_Bracket_RoundRobinScore.Esports_Bracket_RoundRobinScore_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function Esports_Bracket_RoundRobinScore.Esports_Bracket_RoundRobinScore_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Esports_Bracket_RoundRobinScore.Esports_Bracket_RoundRobinScore_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function Esports_Bracket_RoundRobinScore.Esports_Bracket_RoundRobinScore_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function Esports_Bracket_RoundRobinScore.Esports_Bracket_RoundRobinScore_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Esports_Bracket_RoundRobinScore(int32_t EntryPoint); // Function Esports_Bracket_RoundRobinScore.Esports_Bracket_RoundRobinScore_C.ExecuteUbergraph_Esports_Bracket_RoundRobinScore // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

