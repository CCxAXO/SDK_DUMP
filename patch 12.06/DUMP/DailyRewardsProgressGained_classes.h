// WidgetBlueprintGeneratedClass DailyRewardsProgressGained.DailyRewardsProgressGained_C
// Size: 0x33c (Inherited: 0x318)
struct UDailyRewardsProgressGained_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UMatchDetailsProgressionRewards_C* MatchDetailsProgressionRewards; // 0x320(0x08)
	struct UAresTextBlock* RegimensGained; // 0x328(0x08)
	int32_t Milestones; // 0x330(0x04)
	int32_t XP; // 0x334(0x04)
	int32_t Dough; // 0x338(0x04)

	void UpdateKCEarned(int32_t KC); // Function DailyRewardsProgressGained.DailyRewardsProgressGained_C.UpdateKCEarned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateXPEarned(int32_t XP); // Function DailyRewardsProgressGained.DailyRewardsProgressGained_C.UpdateXPEarned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateCheckpointsEarned(int32_t numCheckpoints); // Function DailyRewardsProgressGained.DailyRewardsProgressGained_C.UpdateCheckpointsEarned // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Progress Gained(int32_t Milestones, int32_t XP, int32_t Dough); // Function DailyRewardsProgressGained.DailyRewardsProgressGained_C.Update Progress Gained // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function DailyRewardsProgressGained.DailyRewardsProgressGained_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function DailyRewardsProgressGained.DailyRewardsProgressGained_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_DailyRewardsProgressGained(int32_t EntryPoint); // Function DailyRewardsProgressGained.DailyRewardsProgressGained_C.ExecuteUbergraph_DailyRewardsProgressGained // (Final|UbergraphFunction) // @ game+0x1b42740
};

