// WidgetBlueprintGeneratedClass MapSelect_StepList.MapSelect_StepList_C
// Size: 0x32d (Inherited: 0x318)
struct UMapSelect_StepList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UVerticalBox* StepContainer; // 0x320(0x08)
	int32_t DebugItemCount; // 0x328(0x04)
	bool bInitialized; // 0x32c(0x01)

	void GetEntryForStep(int32_t Step, struct UMapSelect_StepListEntry_C*& Entry); // Function MapSelect_StepList.MapSelect_StepList_C.GetEntryForStep // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetActiveStep(int32_t Step); // Function MapSelect_StepList.MapSelect_StepList_C.SetActiveStep // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Reset(); // Function MapSelect_StepList.MapSelect_StepList_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddStep(struct FTournamentRosterInfo Roster, enum class EStepType InStepType, int32_t NumActions, bool InYourTeam, bool isLastStep, struct UMapSelect_StepListEntry_C*& Step); // Function MapSelect_StepList.MapSelect_StepList_C.AddStep // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetSteps(struct TArray<struct UMapSelect_StepListEntry_C*>& Steps); // Function MapSelect_StepList.MapSelect_StepList_C.GetSteps // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function MapSelect_StepList.MapSelect_StepList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function MapSelect_StepList.MapSelect_StepList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MapSelect_StepList(int32_t EntryPoint); // Function MapSelect_StepList.MapSelect_StepList_C.ExecuteUbergraph_MapSelect_StepList // (Final|UbergraphFunction) // @ game+0x1af5410
};

