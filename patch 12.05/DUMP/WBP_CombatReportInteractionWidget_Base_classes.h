// WidgetBlueprintGeneratedClass WBP_CombatReportInteractionWidget_Base.WBP_CombatReportInteractionWidget_Base_C
// Size: 0x324 (Inherited: 0x318)
struct UWBP_CombatReportInteractionWidget_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	int32_t PlayerNameMaxLength; // 0x320(0x04)

	void Shorten Player Name(struct FString PlayerName, struct FString& ShortPlayerName); // Function WBP_CombatReportInteractionWidget_Base.WBP_CombatReportInteractionWidget_Base_C.Shorten Player Name // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetInteractionData(struct FParticipantInteractions InData); // Function WBP_CombatReportInteractionWidget_Base.WBP_CombatReportInteractionWidget_Base_C.SetInteractionData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_CombatReportInteractionWidget_Base(int32_t EntryPoint); // Function WBP_CombatReportInteractionWidget_Base.WBP_CombatReportInteractionWidget_Base_C.ExecuteUbergraph_WBP_CombatReportInteractionWidget_Base // (Final|UbergraphFunction) // @ game+0x1af5410
};

