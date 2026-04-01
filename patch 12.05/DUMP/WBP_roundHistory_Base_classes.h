// WidgetBlueprintGeneratedClass WBP_roundHistory_Base.WBP_roundHistory_Base_C
// Size: 0x410 (Inherited: 0x320)
struct UWBP_roundHistory_Base_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct TArray<struct UWBP_ScoreboardRound_Base_C*> roundResultWidgets; // 0x328(0x10)
	struct TMap<enum class EAresRoundOutcome, struct UTexture*> RoundLossIcons; // 0x338(0x50)
	struct TMap<enum class EAresRoundOutcome, struct UTexture*> RoundWinIcons; // 0x388(0x50)
	int32_t CurrentRoundBorderIndex; // 0x3d8(0x04)
	bool HasGeneratedWidgets; // 0x3dc(0x01)
	char pad_3DD[0x3]; // 0x3dd(0x03)
	struct FName ForcedAllyTeamName; // 0x3e0(0x0c)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct UHorizontalBox* roundBackgroundHBox; // 0x3f0(0x08)
	struct UWBP_roundHistoryCurrentRoundBorder_Base_C* roundHistoryCurrentRoundBorder; // 0x3f8(0x08)
	struct UWBP_ScoreboardRound_Base_C* ScoreboardRoundClass; // 0x400(0x08)
	struct UTexture2D* DefaultRoundIcon; // 0x408(0x08)

	void SetBottomWinIcon(struct UWBP_ScoreboardRound_Base_C* RoundWidget); // Function WBP_roundHistory_Base.WBP_roundHistory_Base_C.SetBottomWinIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTopWinIcon(struct UWBP_ScoreboardRound_Base_C* RoundWidget); // Function WBP_roundHistory_Base.WBP_roundHistory_Base_C.SetTopWinIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetNumberOfSides(int32_t& MaxSides); // Function WBP_roundHistory_Base.WBP_roundHistory_Base_C.GetNumberOfSides // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetRoundResults(struct TArray<struct FAresRoundResult>& RoundResults); // Function WBP_roundHistory_Base.WBP_roundHistory_Base_C.GetRoundResults // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetOutcomeIcon(struct FAresRoundResult RoundResult, struct UTexture*& IconTX); // Function WBP_roundHistory_Base.WBP_roundHistory_Base_C.GetOutcomeIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GenerateInitialWidgets(bool ForceRegenerate); // Function WBP_roundHistory_Base.WBP_roundHistory_Base_C.GenerateInitialWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateRoundResults(int32_t AllyScore, int32_t EnemyScore); // Function WBP_roundHistory_Base.WBP_roundHistory_Base_C.UpdateRoundResults // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_roundHistory_Base.WBP_roundHistory_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnOvertimeRulesSet(); // Function WBP_roundHistory_Base.WBP_roundHistory_Base_C.OnOvertimeRulesSet // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_roundHistory_Base.WBP_roundHistory_Base_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_roundHistory_Base(int32_t EntryPoint); // Function WBP_roundHistory_Base.WBP_roundHistory_Base_C.ExecuteUbergraph_WBP_roundHistory_Base // (Final|UbergraphFunction) // @ game+0x1af5410
};

