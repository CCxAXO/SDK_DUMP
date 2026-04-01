// WidgetBlueprintGeneratedClass PremierEOG_FaceoffResults.PremierEOG_FaceoffResults_C
// Size: 0x3f8 (Inherited: 0x318)
struct UPremierEOG_FaceoffResults_C : UPremierEOG_FaceoffResults_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Transition; // 0x320(0x08)
	struct UWidgetAnimation* RightWin; // 0x328(0x08)
	struct UWidgetAnimation* LeftWin; // 0x330(0x08)
	struct UImage* BG; // 0x338(0x08)
	struct UTextBlock* MatchInfo_Text; // 0x340(0x08)
	struct UImage* P_Logo; // 0x348(0x08)
	struct UTextBlock* Score_L; // 0x350(0x08)
	struct UTextBlock* Score_R; // 0x358(0x08)
	struct UTextBlock* Side_L; // 0x360(0x08)
	struct UTextBlock* Side_R; // 0x368(0x08)
	struct UTournamentsTeamCustomization_C* TeamCustomization_L; // 0x370(0x08)
	struct UTournamentsTeamCustomization_C* TeamCustomization_R; // 0x378(0x08)
	struct UTextBlock* TeamName_L; // 0x380(0x08)
	struct UTextBlock* TeamName_R; // 0x388(0x08)
	struct UTextBlock* TeamTag_L; // 0x390(0x08)
	struct UTextBlock* TeamTag_R; // 0x398(0x08)
	bool LeftTeamWon; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct TMap<int32_t, struct FTeamDetailsDTO> FaceoffTeams; // 0x3a8(0x50)

	void SequenceEvent__ENTRYPOINTPremierEOG_FaceoffResults_2(); // Function PremierEOG_FaceoffResults.PremierEOG_FaceoffResults_C.SequenceEvent__ENTRYPOINTPremierEOG_FaceoffResults_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SequenceEvent__ENTRYPOINTPremierEOG_FaceoffResults_1(); // Function PremierEOG_FaceoffResults.PremierEOG_FaceoffResults_C.SequenceEvent__ENTRYPOINTPremierEOG_FaceoffResults_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SequenceEvent__ENTRYPOINTPremierEOG_FaceoffResults(); // Function PremierEOG_FaceoffResults.PremierEOG_FaceoffResults_C.SequenceEvent__ENTRYPOINTPremierEOG_FaceoffResults // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TriggerCeremony(); // Function PremierEOG_FaceoffResults.PremierEOG_FaceoffResults_C.TriggerCeremony // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitData(struct FProcessedMatchDetails ProcessedMatchDetails); // Function PremierEOG_FaceoffResults.PremierEOG_FaceoffResults_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function PremierEOG_FaceoffResults.PremierEOG_FaceoffResults_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void playtransition(); // Function PremierEOG_FaceoffResults.PremierEOG_FaceoffResults_C.playtransition // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void playwipe(); // Function PremierEOG_FaceoffResults.PremierEOG_FaceoffResults_C.playwipe // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void WidgetAnimationEvt_Transition_K2Node_WidgetAnimationEvent_2(); // Function PremierEOG_FaceoffResults.PremierEOG_FaceoffResults_C.WidgetAnimationEvt_Transition_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x1b42740
	void PlayLeftWinSFX(); // Function PremierEOG_FaceoffResults.PremierEOG_FaceoffResults_C.PlayLeftWinSFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayRightWinSFX(); // Function PremierEOG_FaceoffResults.PremierEOG_FaceoffResults_C.PlayRightWinSFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayTransitionSFX(); // Function PremierEOG_FaceoffResults.PremierEOG_FaceoffResults_C.PlayTransitionSFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PremierEOG_FaceoffResults(int32_t EntryPoint); // Function PremierEOG_FaceoffResults.PremierEOG_FaceoffResults_C.ExecuteUbergraph_PremierEOG_FaceoffResults // (Final|UbergraphFunction) // @ game+0x1b42740
};

