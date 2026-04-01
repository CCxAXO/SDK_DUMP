// WidgetBlueprintGeneratedClass WBP_CombatReportHUDElement_Base.WBP_CombatReportHUDElement_Base_C
// Size: 0x34c (Inherited: 0x320)
struct UWBP_CombatReportHUDElement_Base_C : UCombatReportHUDElementBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x328(0x08)
	double UpdateCooldownDuration; // 0x330(0x08)
	double LastUpdateTime; // 0x338(0x08)
	struct FTimerHandle RetryTimer; // 0x340(0x08)
	int32_t CurrentCombatReportRoundNumber; // 0x348(0x04)

	void UpdateCombatReportRoundNumber(enum class EAresGamePhase GamePhase, int32_t GameRoundNumber); // Function WBP_CombatReportHUDElement_Base.WBP_CombatReportHUDElement_Base_C.UpdateCombatReportRoundNumber // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateCombatReport(bool Override Timer); // Function WBP_CombatReportHUDElement_Base.WBP_CombatReportHUDElement_Base_C.UpdateCombatReport // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function WBP_CombatReportHUDElement_Base.WBP_CombatReportHUDElement_Base_C.SetHUDModel // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RetryUpdateCombatReport(); // Function WBP_CombatReportHUDElement_Base.WBP_CombatReportHUDElement_Base_C.RetryUpdateCombatReport // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAliveStateChanged(bool NewValue); // Function WBP_CombatReportHUDElement_Base.WBP_CombatReportHUDElement_Base_C.OnAliveStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void EventUpdateCombatReport(); // Function WBP_CombatReportHUDElement_Base.WBP_CombatReportHUDElement_Base_C.EventUpdateCombatReport // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Event Update Combat Report(); // Function WBP_CombatReportHUDElement_Base.WBP_CombatReportHUDElement_Base_C.Event Update Combat Report // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Event Update Combat Report With Override(); // Function WBP_CombatReportHUDElement_Base.WBP_CombatReportHUDElement_Base_C.Event Update Combat Report With Override // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void EventCombatReportDirtied(); // Function WBP_CombatReportHUDElement_Base.WBP_CombatReportHUDElement_Base_C.EventCombatReportDirtied // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnGamePhaseChanged(enum class EAresGamePhase NewGamePhase, int32_t RoundNumberEnded); // Function WBP_CombatReportHUDElement_Base.WBP_CombatReportHUDElement_Base_C.OnGamePhaseChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnGameStateChanged(); // Function WBP_CombatReportHUDElement_Base.WBP_CombatReportHUDElement_Base_C.OnGameStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewTargetChanged(struct AActor* NewViewTarget); // Function WBP_CombatReportHUDElement_Base.WBP_CombatReportHUDElement_Base_C.OnViewTargetChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_CombatReportHUDElement_Base(int32_t EntryPoint); // Function WBP_CombatReportHUDElement_Base.WBP_CombatReportHUDElement_Base_C.ExecuteUbergraph_WBP_CombatReportHUDElement_Base // (Final|UbergraphFunction) // @ game+0x1af5410
};

