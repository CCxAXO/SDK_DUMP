// WidgetBlueprintGeneratedClass WBP_CombatReportWidget_Base.WBP_CombatReportWidget_Base_C
// Size: 0x4e0 (Inherited: 0x4c8)
struct UWBP_CombatReportWidget_Base_C : UCombatReportContentWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c8(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x4d0(0x08)
	int32_t NextAvailableInteractionWidgetIndex; // 0x4d8(0x04)
	int32_t LastUsedReportIndex; // 0x4dc(0x04)

	void GetDefaultVisibility(enum class ESlateVisibility& Visibility); // Function WBP_CombatReportWidget_Base.WBP_CombatReportWidget_Base_C.GetDefaultVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void HasActiveInteractionWidget(bool& Result); // Function WBP_CombatReportWidget_Base.WBP_CombatReportWidget_Base_C.HasActiveInteractionWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	struct UWBP_CombatReportInteractionWidget_Base_C* CreateInteractionWidget(struct FParticipantInteractions In Interaction Data); // Function WBP_CombatReportWidget_Base.WBP_CombatReportWidget_Base_C.CreateInteractionWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddCharacterEntryToCombatReport(struct FCharacterCombatReport& Character Entry); // Function WBP_CombatReportWidget_Base.WBP_CombatReportWidget_Base_C.AddCharacterEntryToCombatReport // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateKilledBy(struct FRoundReports& RoundReport); // Function WBP_CombatReportWidget_Base.WBP_CombatReportWidget_Base_C.UpdateKilledBy // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ResetInteractionWidgets(); // Function WBP_CombatReportWidget_Base.WBP_CombatReportWidget_Base_C.ResetInteractionWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateAndDisplay Interaction Widget(struct FParticipantInteractions In Participant Interactions, struct UWBP_CombatReportInteractionWidget_Base_C*& Created); // Function WBP_CombatReportWidget_Base.WBP_CombatReportWidget_Base_C.UpdateAndDisplay Interaction Widget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SortParticipantArray(struct TArray<struct FParticipantInteractions>& Input, struct TArray<struct FParticipantInteractions>& Out); // Function WBP_CombatReportWidget_Base.WBP_CombatReportWidget_Base_C.SortParticipantArray // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CompareParticipants(struct FParticipantInteractions A, struct FParticipantInteractions B, bool& NewParam); // Function WBP_CombatReportWidget_Base.WBP_CombatReportWidget_Base_C.CompareParticipants // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCombatReports(struct FRoundReports& RoundReport); // Function WBP_CombatReportWidget_Base.WBP_CombatReportWidget_Base_C.SetCombatReports // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_CombatReportWidget_Base.WBP_CombatReportWidget_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function WBP_CombatReportWidget_Base.WBP_CombatReportWidget_Base_C.SetHUDModel // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_CombatReportWidget_Base.WBP_CombatReportWidget_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_CombatReportWidget_Base(int32_t EntryPoint); // Function WBP_CombatReportWidget_Base.WBP_CombatReportWidget_Base_C.ExecuteUbergraph_WBP_CombatReportWidget_Base // (Final|UbergraphFunction) // @ game+0x1b42740
};

