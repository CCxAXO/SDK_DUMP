// WidgetBlueprintGeneratedClass WBP_scoreAndHistory_Base.WBP_scoreAndHistory_Base_C
// Size: 0x398 (Inherited: 0x318)
struct UWBP_scoreAndHistory_Base_C : UScoreAndHistoryOverlay {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct FText allyObjectiveText; // 0x320(0x18)
	struct FText enemyObjectiveText; // 0x338(0x18)
	struct UWBP_roundHistory_Base_C* roundHistoryBase; // 0x350(0x08)
	struct UTextBlock* AllyScore; // 0x358(0x08)
	struct UTextBlock* EnemyScore; // 0x360(0x08)
	struct UTextBlock* allyObjective; // 0x368(0x08)
	struct UTextBlock* enemyObjective; // 0x370(0x08)
	struct FLinearColor attackerColor; // 0x378(0x10)
	struct FLinearColor DefenderColor; // 0x388(0x10)

	void MakeScoreLocal(int32_t AllyScoreInteger, int32_t EnemyScoreInteger); // Function WBP_scoreAndHistory_Base.WBP_scoreAndHistory_Base_C.MakeScoreLocal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MakeScore(int32_t AllyScore, int32_t EnemyScore); // Function WBP_scoreAndHistory_Base.WBP_scoreAndHistory_Base_C.MakeScore // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateRoundResults(int32_t AllyScore, int32_t EnemyScore); // Function WBP_scoreAndHistory_Base.WBP_scoreAndHistory_Base_C.UpdateRoundResults // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_scoreAndHistory_Base(int32_t EntryPoint); // Function WBP_scoreAndHistory_Base.WBP_scoreAndHistory_Base_C.ExecuteUbergraph_WBP_scoreAndHistory_Base // (Final|UbergraphFunction) // @ game+0x1b42740
};

