// WidgetBlueprintGeneratedClass ProgressionSummaryDailyRewards.ProgressionSummaryDailyRewards_C
// Size: 0x348 (Inherited: 0x318)
struct UProgressionSummaryDailyRewards_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct URichTextBlock* CheckpointRewardsRichText; // 0x320(0x08)
	struct UProgressionSummaryHeader_C* Header; // 0x328(0x08)
	struct USizeBox* RewardsSizeBox; // 0x330(0x08)
	struct UDailyRewardsBase_C* DailyRewards; // 0x338(0x08)
	int32_t MilestoneXPAmount; // 0x340(0x04)
	int32_t MilestoneDoughAmount; // 0x344(0x04)

	void Init(); // Function ProgressionSummaryDailyRewards.ProgressionSummaryDailyRewards_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Milestone Rewards(); // Function ProgressionSummaryDailyRewards.ProgressionSummaryDailyRewards_C.Update Milestone Rewards // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Display Daily Rewards(); // Function ProgressionSummaryDailyRewards.ProgressionSummaryDailyRewards_C.Display Daily Rewards // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateCountdown(); // Function ProgressionSummaryDailyRewards.ProgressionSummaryDailyRewards_C.UpdateCountdown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function ProgressionSummaryDailyRewards.ProgressionSummaryDailyRewards_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function ProgressionSummaryDailyRewards.ProgressionSummaryDailyRewards_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function ProgressionSummaryDailyRewards.ProgressionSummaryDailyRewards_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ProgressionSummaryDailyRewards(int32_t EntryPoint); // Function ProgressionSummaryDailyRewards.ProgressionSummaryDailyRewards_C.ExecuteUbergraph_ProgressionSummaryDailyRewards // (Final|UbergraphFunction) // @ game+0x1b42740
};

