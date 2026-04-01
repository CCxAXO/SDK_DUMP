// WidgetBlueprintGeneratedClass PremierCrestProgress.PremierCrestProgress_C
// Size: 0x3c0 (Inherited: 0x318)
struct UPremierCrestProgress_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* ShowCrestState; // 0x320(0x08)
	struct UWidgetAnimation* ShowPremierScoreAndEarned; // 0x328(0x08)
	struct UWidgetAnimation* ShowCrestAndType; // 0x330(0x08)
	struct UTextBlock* CrestState; // 0x338(0x08)
	struct UTextBlock* FinalPremierPoints; // 0x340(0x08)
	struct UTextBlock* PointsEarned; // 0x348(0x08)
	struct UPremierCrest_C* PREMIERCREST; // 0x350(0x08)
	struct UTextBlock* PremierPointsLabel; // 0x358(0x08)
	struct UPremierMatchModel* PremierMatchModel; // 0x360(0x08)
	bool DataIsReady; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	double CurrentProgress; // 0x370(0x08)
	int32_t PointsRequiredToQualify; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct FString MatchID; // 0x380(0x10)
	struct UPremierRosterViewModel* PremierRosterViewModel; // 0x390(0x08)
	bool AnimatingProgress; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct FDateTime Animating Since; // 0x3a0(0x08)
	struct FDateTime Animating Until; // 0x3a8(0x08)
	double DelayPointsAnimationTimespan; // 0x3b0(0x08)
	double ProgressAnimationDuration; // 0x3b8(0x08)

	void ShowEndState(); // Function PremierCrestProgress.PremierCrestProgress_C.ShowEndState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AnimateProgress(); // Function PremierCrestProgress.PremierCrestProgress_C.AnimateProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TickProgressAnimation(); // Function PremierCrestProgress.PremierCrestProgress_C.TickProgressAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetStaticData(); // Function PremierCrestProgress.PremierCrestProgress_C.SetStaticData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init Premier Roster View Model(); // Function PremierCrestProgress.PremierCrestProgress_C.Init Premier Roster View Model // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetProgress(double NewProgress); // Function PremierCrestProgress.PremierCrestProgress_C.SetProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsAnimationRequired(int32_t MaxPoints, bool& AnimationRequired); // Function PremierCrestProgress.PremierCrestProgress_C.IsAnimationRequired // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Start Ceremony(); // Function PremierCrestProgress.PremierCrestProgress_C.Start Ceremony // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(bool ShouldShowCeremony); // Function PremierCrestProgress.PremierCrestProgress_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init PremierMatchModel(); // Function PremierCrestProgress.PremierCrestProgress_C.Init PremierMatchModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function PremierCrestProgress.PremierCrestProgress_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void WidgetAnimationEvt_ShowCrestAndType_K2Node_WidgetAnimationEvent_1(); // Function PremierCrestProgress.PremierCrestProgress_C.WidgetAnimationEvt_ShowCrestAndType_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PremierCrestProgress(int32_t EntryPoint); // Function PremierCrestProgress.PremierCrestProgress_C.ExecuteUbergraph_PremierCrestProgress // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

