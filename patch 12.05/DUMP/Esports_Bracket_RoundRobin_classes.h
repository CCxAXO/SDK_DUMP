// WidgetBlueprintGeneratedClass Esports_Bracket_RoundRobin.Esports_Bracket_RoundRobin_C
// Size: 0x448 (Inherited: 0x3e0)
struct UEsports_Bracket_RoundRobin_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* Image; // 0x3e8(0x08)
	struct UImage* Image_2; // 0x3f0(0x08)
	struct UImage* Image_150; // 0x3f8(0x08)
	struct UEsports_Bracket_RoundRobinScore_C* RoundRobinAdvancingTeam; // 0x400(0x08)
	struct UCanvasPanel* RR_CanvasPanel; // 0x408(0x08)
	struct UEsports_BracketMatchup_C* RRMatchup1; // 0x410(0x08)
	struct UEsports_BracketMatchup_C* RRMatchup2; // 0x418(0x08)
	struct UEsports_BracketMatchup_C* RRMatchup3; // 0x420(0x08)
	struct UEsports_Bracket_RoundRobinScore_C* RRStanding1; // 0x428(0x08)
	struct UEsports_Bracket_RoundRobinScore_C* RRStanding2; // 0x430(0x08)
	struct UEsports_Bracket_RoundRobinScore_C* RRStanding3; // 0x438(0x08)
	struct UEsportsRoundRobinViewModel* RoundRobinViewModel; // 0x440(0x08)

	void SetAdvancingStage(struct FString AdvancingStage); // Function Esports_Bracket_RoundRobin.Esports_Bracket_RoundRobin_C.SetAdvancingStage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateMatchupTooltip(struct UEsports_BracketMatchup_C* MatchupWidget); // Function Esports_Bracket_RoundRobin.Esports_Bracket_RoundRobin_C.CreateMatchupTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitTeamsAndMatchups(); // Function Esports_Bracket_RoundRobin.Esports_Bracket_RoundRobin_C.InitTeamsAndMatchups // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init Matchups(); // Function Esports_Bracket_RoundRobin.Esports_Bracket_RoundRobin_C.Init Matchups // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init Teams(); // Function Esports_Bracket_RoundRobin.Esports_Bracket_RoundRobin_C.Init Teams // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayAdvancingTeam(struct UEsportsMatchupTeamViewModel* AdvancingMatchupTeamVM); // Function Esports_Bracket_RoundRobin.Esports_Bracket_RoundRobin_C.DisplayAdvancingTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitWithViewModel(struct UEsportsRoundRobinViewModel* RoundRobinViewModel); // Function Esports_Bracket_RoundRobin.Esports_Bracket_RoundRobin_C.InitWithViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindOrUnbindFromViewModel(bool Bind); // Function Esports_Bracket_RoundRobin.Esports_Bracket_RoundRobin_C.BindOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function Esports_Bracket_RoundRobin.Esports_Bracket_RoundRobin_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function Esports_Bracket_RoundRobin.Esports_Bracket_RoundRobin_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function Esports_Bracket_RoundRobin.Esports_Bracket_RoundRobin_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Esports_Bracket_RoundRobin(int32_t EntryPoint); // Function Esports_Bracket_RoundRobin.Esports_Bracket_RoundRobin_C.ExecuteUbergraph_Esports_Bracket_RoundRobin // (Final|UbergraphFunction) // @ game+0x1af5410
};

