// WidgetBlueprintGeneratedClass PremierEOG_PointsEarned.PremierEOG_PointsEarned_C
// Size: 0x4f8 (Inherited: 0x320)
struct UPremierEOG_PointsEarned_C : UPremierEOG_PointsEarned_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* Ceremony; // 0x328(0x08)
	struct UImage* BG; // 0x330(0x08)
	struct UVerticalBox* ErrorBox; // 0x338(0x08)
	struct UImage* LoadingAnimation; // 0x340(0x08)
	struct UVerticalBox* LoadingBox; // 0x348(0x08)
	struct UVerticalBox* PointsEarnedBox; // 0x350(0x08)
	struct UWidgetSwitcher* PointsEarnedSwitcher; // 0x358(0x08)
	struct UTextBlock* PointsEarnedText; // 0x360(0x08)
	struct UProgressBar* PointsProgressBar; // 0x368(0x08)
	struct UTextBlock* PointsTotalText; // 0x370(0x08)
	struct UTextBlock* PointsTotalVSQualificationText; // 0x378(0x08)
	struct UTextBlock* Score_L; // 0x380(0x08)
	struct UTextBlock* Score_R; // 0x388(0x08)
	struct UTournamentsTeamCustomization_C* TeamCustomization; // 0x390(0x08)
	struct UTextBlock* TeamName; // 0x398(0x08)
	struct UTextBlock* TeamTag; // 0x3a0(0x08)
	struct UTextBlock* VictoryText; // 0x3a8(0x08)
	struct FString PremierRosterId; // 0x3b0(0x10)
	struct FString MatchID; // 0x3c0(0x10)
	int64_t PointsEarned; // 0x3d0(0x08)
	int64_t PointsAfter; // 0x3d8(0x08)
	int64_t PointsBefore; // 0x3e0(0x08)
	struct FName WaitingForRosterMatchHistoryDelayConfig; // 0x3e8(0x0c)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct UWidget* LoadingActiveWidget; // 0x3f8(0x08)
	struct UWidget* PointsActiveWidget; // 0x400(0x08)
	struct UWidget* ErrorActiveWidget; // 0x408(0x08)
	bool bLeftTeamWon; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct TMap<int32_t, struct FTeamDetailsDTO> FaceoffTeams; // 0x418(0x50)
	int32_t Default Division; // 0x468(0x04)
	struct FLinearColor PreQualificationColor; // 0x46c(0x10)
	struct FLinearColor PostQualificationColor; // 0x47c(0x10)
	bool Animating Progress; // 0x48c(0x01)
	char pad_48D[0x3]; // 0x48d(0x03)
	double CurrentProgress; // 0x490(0x08)
	int32_t PointsRequiredForQualification; // 0x498(0x04)
	char pad_49C[0x4]; // 0x49c(0x04)
	struct FDateTime Animating Since; // 0x4a0(0x08)
	struct FDateTime Animating Until; // 0x4a8(0x08)
	double ProgressAnimationDuration; // 0x4b0(0x08)
	double DelayPointsAnimationTimespan; // 0x4b8(0x08)
	bool bTriggersQualification; // 0x4c0(0x01)
	char pad_4C1[0x7]; // 0x4c1(0x07)
	struct FMulticastInlineDelegate Qualification Triggered; // 0x4c8(0x10)
	bool isOnWinningTeam; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct FMulticastInlineDelegate NewQualificationProgressComplete; // 0x4e0(0x10)
	struct UPremierMatchModel* CurrentMatchModel; // 0x4f0(0x08)

	void DetermineIfNewlyQualified(); // Function PremierEOG_PointsEarned.PremierEOG_PointsEarned_C.DetermineIfNewlyQualified // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DEBUG_SetPoints(); // Function PremierEOG_PointsEarned.PremierEOG_PointsEarned_C.DEBUG_SetPoints // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Progress(double New Progress); // Function PremierEOG_PointsEarned.PremierEOG_PointsEarned_C.Set Progress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Tick Progress Animation(); // Function PremierEOG_PointsEarned.PremierEOG_PointsEarned_C.Tick Progress Animation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Animate Progress(); // Function PremierEOG_PointsEarned.PremierEOG_PointsEarned_C.Animate Progress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Display Points(); // Function PremierEOG_PointsEarned.PremierEOG_PointsEarned_C.Display Points // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetLeftAndRightScores(struct FProcessedMatchDetails Processed Match Details); // Function PremierEOG_PointsEarned.PremierEOG_PointsEarned_C.GetLeftAndRightScores // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TriggerCeremony(); // Function PremierEOG_PointsEarned.PremierEOG_PointsEarned_C.TriggerCeremony // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitData(struct FProcessedMatchDetails ProcessedMatchDetails, struct UPremierRosterViewModel* PremierRosterViewModel, struct UPremierMatchModel* PremierMatchModel); // Function PremierEOG_PointsEarned.PremierEOG_PointsEarned_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function PremierEOG_PointsEarned.PremierEOG_PointsEarned_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function PremierEOG_PointsEarned.PremierEOG_PointsEarned_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Error(); // Function PremierEOG_PointsEarned.PremierEOG_PointsEarned_C.Error // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PremierEOG_PointsEarned(int32_t EntryPoint); // Function PremierEOG_PointsEarned.PremierEOG_PointsEarned_C.ExecuteUbergraph_PremierEOG_PointsEarned // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void NewQualificationProgressComplete__DelegateSignature(); // Function PremierEOG_PointsEarned.PremierEOG_PointsEarned_C.NewQualificationProgressComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Qualification Triggered__DelegateSignature(bool Newly Qualified); // Function PremierEOG_PointsEarned.PremierEOG_PointsEarned_C.Qualification Triggered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

