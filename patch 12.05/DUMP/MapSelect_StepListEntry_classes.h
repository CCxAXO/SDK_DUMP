// WidgetBlueprintGeneratedClass MapSelect_StepListEntry.MapSelect_StepListEntry_C
// Size: 0x431 (Inherited: 0x318)
struct UMapSelect_StepListEntry_C : UUserWidget {
	struct UWidgetAnimation* SetComplete; // 0x318(0x08)
	struct UWidgetAnimation* SetActive; // 0x320(0x08)
	struct UImage* IMG_BgColor; // 0x328(0x08)
	struct UImage* IMG_StepLineCompleted; // 0x330(0x08)
	struct UImage* lineGold; // 0x338(0x08)
	struct UImage* lineGreen; // 0x340(0x08)
	struct UOverlay* O_StepLineCurrent; // 0x348(0x08)
	struct USizeBox* SB_StepTrack; // 0x350(0x08)
	struct USpacer* Spacer_StepGap; // 0x358(0x08)
	struct UTextBlock* TB_ActionText; // 0x360(0x08)
	struct UTextBlock* TB_StepNumber; // 0x368(0x08)
	struct UTextBlock* TB_TeamName; // 0x370(0x08)
	struct UVerticalBox* VB_StepDisplays; // 0x378(0x08)
	struct UVerticalBox* VB_StepLineUpcoming; // 0x380(0x08)
	struct UWidgetSwitcher* WS_RightStepLine; // 0x388(0x08)
	int32_t StepNum; // 0x390(0x04)
	int32_t NumActions; // 0x394(0x04)
	int32_t MapsPicked; // 0x398(0x04)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct FTournamentRosterInfo Roster; // 0x3a0(0x80)
	bool bIsYourTeam; // 0x420(0x01)
	bool bIsActive; // 0x421(0x01)
	bool bIsCompleted; // 0x422(0x01)
	char pad_423[0x5]; // 0x423(0x05)
	struct UMapSelect_StepListEntryMap_C* MapSelect_StepEntry; // 0x428(0x08)
	bool isLastStep; // 0x430(0x01)

	void SetRoster(struct FTournamentRosterInfo NewRoster); // Function MapSelect_StepListEntry.MapSelect_StepListEntry_C.SetRoster // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetMapChosen(struct UMapUIData* Map, bool bBanned); // Function MapSelect_StepListEntry.MapSelect_StepListEntry_C.SetMapChosen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCompleted(); // Function MapSelect_StepListEntry.MapSelect_StepListEntry_C.SetCompleted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCurrentlyActive(); // Function MapSelect_StepListEntry.MapSelect_StepListEntry_C.SetCurrentlyActive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(int32_t InStepNum, struct FTournamentRosterInfo InRoster, enum class EStepType InStepType, int32_t NumActions, bool InYourTeam, bool isLastStep); // Function MapSelect_StepListEntry.MapSelect_StepListEntry_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FText GetTeamText(); // Function MapSelect_StepListEntry.MapSelect_StepListEntry_C.GetTeamText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
};

