// WidgetBlueprintGeneratedClass DailyRewardsProgress.DailyRewardsProgress_C
// Size: 0x340 (Inherited: 0x318)
struct UDailyRewardsProgress_C : UDailyRewardsProgressBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* RevealProgress; // 0x320(0x08)
	struct UDailyRewardsMilestonesEOG_C* DailyRewardsMilestonesEOG; // 0x328(0x08)
	struct UDailyRewardsProgressGained_C* DailyRewardsProgressGained; // 0x330(0x08)
	struct UDailyRewardsProcessedMatchModel* Match; // 0x338(0x08)

	void Should Show Breakdown(bool& ShouldShowBreakdown); // Function DailyRewardsProgress.DailyRewardsProgress_C.Should Show Breakdown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Init(struct UDailyRewardsProcessedMatchModel* Match); // Function DailyRewardsProgress.DailyRewardsProgress_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Calculate Milestones Gained(int32_t& MilestonesGained); // Function DailyRewardsProgress.DailyRewardsProgress_C.Calculate Milestones Gained // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Animate Progress(); // Function DailyRewardsProgress.DailyRewardsProgress_C.Animate Progress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Show End State(); // Function DailyRewardsProgress.DailyRewardsProgress_C.Show End State // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Reset(); // Function DailyRewardsProgress.DailyRewardsProgress_C.Reset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Populate(int32_t Progress, int32_t XPGained, int32_t DoughGained, int32_t BonusesApplied); // Function DailyRewardsProgress.DailyRewardsProgress_C.Populate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function DailyRewardsProgress.DailyRewardsProgress_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_DailyRewardsProgress(int32_t EntryPoint); // Function DailyRewardsProgress.DailyRewardsProgress_C.ExecuteUbergraph_DailyRewardsProgress // (Final|UbergraphFunction) // @ game+0x1af5410
};

