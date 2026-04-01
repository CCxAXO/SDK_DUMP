// WidgetBlueprintGeneratedClass PremierLeaderboardSelectors.PremierLeaderboardSelectors_C
// Size: 0x429 (Inherited: 0x318)
struct UPremierLeaderboardSelectors_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UPremierConferenceDropdown_C* PremierConferenceDropdown; // 0x320(0x08)
	struct UPremierDivisionDropdown_C* PremierDivisionDropdown; // 0x328(0x08)
	struct UPremierSeasonDropdown_C* PremierSeasonDropdown; // 0x330(0x08)
	struct TMap<struct FString, struct FPremierDivisionData> DivisionNameToDataMap; // 0x338(0x50)
	struct UPremierSeasonModelOld* SelectedSeasonModel; // 0x388(0x08)
	struct FGuid SelectedSeasonID; // 0x390(0x10)
	struct UPremierConferenceModelOld* SelectedConferenceModel; // 0x3a0(0x08)
	struct FGuid SelectedConferenceID; // 0x3a8(0x10)
	struct FPremierDivisionData SelectedDivision; // 0x3b8(0x60)
	struct FMulticastInlineDelegate NewSelection; // 0x418(0x10)
	bool Initializing; // 0x428(0x01)

	void CallNewSelection(); // Function PremierLeaderboardSelectors.PremierLeaderboardSelectors_C.CallNewSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetInitialSelections(); // Function PremierLeaderboardSelectors.PremierLeaderboardSelectors_C.SetInitialSelections // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(); // Function PremierLeaderboardSelectors.PremierLeaderboardSelectors_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleNewConferenceSelected(struct UPremierConferenceModelOld* SelectedConferenceModel); // Function PremierLeaderboardSelectors.PremierLeaderboardSelectors_C.HandleNewConferenceSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleNewDivisionSelected(struct FPremierDivisionData SelectedDivisionData); // Function PremierLeaderboardSelectors.PremierLeaderboardSelectors_C.HandleNewDivisionSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetCurrentRosterDivision(int32_t& Division); // Function PremierLeaderboardSelectors.PremierLeaderboardSelectors_C.GetCurrentRosterDivision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetCurrentRosterConferenceID(struct FGuid& ConferenceID); // Function PremierLeaderboardSelectors.PremierLeaderboardSelectors_C.GetCurrentRosterConferenceID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void HandleNewSeasonSelected(struct UPremierSeasonModelOld* SelectedSeasonModel); // Function PremierLeaderboardSelectors.PremierLeaderboardSelectors_C.HandleNewSeasonSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function PremierLeaderboardSelectors.PremierLeaderboardSelectors_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PremierLeaderboardSelectors(int32_t EntryPoint); // Function PremierLeaderboardSelectors.PremierLeaderboardSelectors_C.ExecuteUbergraph_PremierLeaderboardSelectors // (Final|UbergraphFunction) // @ game+0x1b42740
	void NewSelection__DelegateSignature(struct FGuid SeasonID, struct UPremierSeasonModelOld* SeasonModel, struct FGuid ConferenceID, struct UPremierConferenceModelOld* ConferenceModel, struct FPremierDivisionData Division); // Function PremierLeaderboardSelectors.PremierLeaderboardSelectors_C.NewSelection__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

