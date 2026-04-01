// WidgetBlueprintGeneratedClass DailyRewardsMilestoneWithoutTooltip.DailyRewardsMilestoneWithoutTooltip_C
// Size: 0x362 (Inherited: 0x318)
struct UDailyRewardsMilestoneWithoutTooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USizeBox* Diamond00Disabled; // 0x320(0x08)
	struct USizeBox* Diamond00Next; // 0x328(0x08)
	struct UTextBlock* MilestoneDisabled; // 0x330(0x08)
	struct UWidgetSwitcher* MilestoneNumberSwitcher; // 0x338(0x08)
	struct UTextBlock* MilestoneRegular; // 0x340(0x08)
	struct UWidgetSwitcher* ProgressSwitcher; // 0x348(0x08)
	struct UWidgetSwitcher* ZeroProgressSwitcher; // 0x350(0x08)
	int32_t MilestoneNumber; // 0x358(0x04)
	int32_t Progress; // 0x35c(0x04)
	bool IsDisabled; // 0x360(0x01)
	bool DesignTimeHardcoded; // 0x361(0x01)

	void Set Milestone Number(); // Function DailyRewardsMilestoneWithoutTooltip.DailyRewardsMilestoneWithoutTooltip_C.Set Milestone Number // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Progress(); // Function DailyRewardsMilestoneWithoutTooltip.DailyRewardsMilestoneWithoutTooltip_C.Set Progress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Milestone(int32_t MilestoneNumber, int32_t Progress, bool Is Disabled); // Function DailyRewardsMilestoneWithoutTooltip.DailyRewardsMilestoneWithoutTooltip_C.Update Milestone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function DailyRewardsMilestoneWithoutTooltip.DailyRewardsMilestoneWithoutTooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_DailyRewardsMilestoneWithoutTooltip(int32_t EntryPoint); // Function DailyRewardsMilestoneWithoutTooltip.DailyRewardsMilestoneWithoutTooltip_C.ExecuteUbergraph_DailyRewardsMilestoneWithoutTooltip // (Final|UbergraphFunction) // @ game+0x1b42740
};

