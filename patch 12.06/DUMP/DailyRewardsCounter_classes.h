// WidgetBlueprintGeneratedClass DailyRewardsCounter.DailyRewardsCounter_C
// Size: 0x34c (Inherited: 0x318)
struct UDailyRewardsCounter_C : UDailyRewardsCounter_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* hover; // 0x320(0x08)
	struct UTextBlock* CompletionText; // 0x328(0x08)
	struct UHorizontalBox* DailyBonusContainer; // 0x330(0x08)
	struct UImage* DailyBonusIcon; // 0x338(0x08)
	struct UImage* DailyBonusIconHoverBG2; // 0x340(0x08)
	int32_t CompletedMilestones; // 0x348(0x04)

	void Update Completed Milestones(); // Function DailyRewardsCounter.DailyRewardsCounter_C.Update Completed Milestones // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function DailyRewardsCounter.DailyRewardsCounter_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnDailyRewardsChanged(); // Function DailyRewardsCounter.DailyRewardsCounter_C.OnDailyRewardsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_DailyRewardsCounter(int32_t EntryPoint); // Function DailyRewardsCounter.DailyRewardsCounter_C.ExecuteUbergraph_DailyRewardsCounter // (Final|UbergraphFunction) // @ game+0x1b42740
};

