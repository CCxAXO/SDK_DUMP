// WidgetBlueprintGeneratedClass Esports_BracketTeamPanel.Esports_BracketTeamPanel_C
// Size: 0x479 (Inherited: 0x3e0)
struct UEsports_BracketTeamPanel_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* CT_TeamCode; // 0x3e8(0x08)
	struct UAresCommonText* CT_TournamentScore; // 0x3f0(0x08)
	struct UOverlay* Dots; // 0x3f8(0x08)
	struct UImage* Image; // 0x400(0x08)
	struct UImage* Image_96; // 0x408(0x08)
	struct UImage* ImageScoreBoxColor; // 0x410(0x08)
	struct UImage* IMG_BG; // 0x418(0x08)
	struct UImage* IMG_Border; // 0x420(0x08)
	struct UImage* IMG_TeamLogo; // 0x428(0x08)
	struct UOverlay* O_Scoreboxflipbox; // 0x430(0x08)
	struct UOverlay* O_WS_TournamentEntryWrap; // 0x438(0x08)
	struct USizeBox* SB_MainWrap; // 0x440(0x08)
	struct UHorizontalBox* TeamInfoWrapper; // 0x448(0x08)
	struct UWidgetSwitcher* WS_stateSwitcher; // 0x450(0x08)
	bool isAnimExitPending; // 0x458(0x01)
	bool IsHovering; // 0x459(0x01)
	char pad_45A[0x6]; // 0x45a(0x06)
	struct UTexture* TBDlogo; // 0x460(0x08)
	bool isTeamCardAtBottom; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	struct UEsportsMatchupTeamViewModel* TeamViewModel; // 0x470(0x08)
	enum class EBracketType BracketType; // 0x478(0x01)

	void StypeBracketEntry(enum class EMatchupTeamState TeamState); // Function Esports_BracketTeamPanel.Esports_BracketTeamPanel_C.StypeBracketEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTeamState(enum class EMatchupTeamState State); // Function Esports_BracketTeamPanel.Esports_BracketTeamPanel_C.SetTeamState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTeamLogo(struct UTexture2D* InTeamLogo); // Function Esports_BracketTeamPanel.Esports_BracketTeamPanel_C.SetTeamLogo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTeamCode(struct FString InCode); // Function Esports_BracketTeamPanel.Esports_BracketTeamPanel_C.SetTeamCode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetGameWins(int32_t GameWins); // Function Esports_BracketTeamPanel.Esports_BracketTeamPanel_C.SetGameWins // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Style Bottom Team Score(); // Function Esports_BracketTeamPanel.Esports_BracketTeamPanel_C.Style Bottom Team Score // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StyleBracketEntryElimination(enum class EMatchupTeamState TeamState); // Function Esports_BracketTeamPanel.Esports_BracketTeamPanel_C.StyleBracketEntryElimination // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StyleBracketEntrySwiss(enum class EMatchupTeamState TeamState); // Function Esports_BracketTeamPanel.Esports_BracketTeamPanel_C.StyleBracketEntrySwiss // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Toggle Team Name Visibility(bool Should Show Name); // Function Esports_BracketTeamPanel.Esports_BracketTeamPanel_C.Toggle Team Name Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToOrUnbindFromViewModel(bool Bind); // Function Esports_BracketTeamPanel.Esports_BracketTeamPanel_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitWithViewModel(struct UEsportsMatchupTeamViewModel* InTeamViewModel, enum class EBracketType BracketType); // Function Esports_BracketTeamPanel.Esports_BracketTeamPanel_C.InitWithViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function Esports_BracketTeamPanel.Esports_BracketTeamPanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Esports_BracketTeamPanel.Esports_BracketTeamPanel_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function Esports_BracketTeamPanel.Esports_BracketTeamPanel_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function Esports_BracketTeamPanel.Esports_BracketTeamPanel_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Esports_BracketTeamPanel(int32_t EntryPoint); // Function Esports_BracketTeamPanel.Esports_BracketTeamPanel_C.ExecuteUbergraph_Esports_BracketTeamPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

