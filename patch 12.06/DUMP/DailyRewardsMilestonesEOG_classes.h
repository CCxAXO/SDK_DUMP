// WidgetBlueprintGeneratedClass DailyRewardsMilestonesEOG.DailyRewardsMilestonesEOG_C
// Size: 0x358 (Inherited: 0x318)
struct UDailyRewardsMilestonesEOG_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHorizontalBox* MilestonesBox; // 0x320(0x08)
	int32_t Progress; // 0x328(0x04)
	int32_t MilestoneIndex; // 0x32c(0x04)
	struct TArray<bool> BonusState; // 0x330(0x10)
	struct UTexture2D* ConnectorTexture; // 0x340(0x08)
	struct FMargin ConnectorPadding; // 0x348(0x10)

	void AddConnectorImage(); // Function DailyRewardsMilestonesEOG.DailyRewardsMilestonesEOG_C.AddConnectorImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddMilestone(int32_t Index, int32_t Progress, bool IsDisabled); // Function DailyRewardsMilestonesEOG.DailyRewardsMilestonesEOG_C.AddMilestone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetProgress(int32_t Progress, struct TArray<bool>& BonusState); // Function DailyRewardsMilestonesEOG.DailyRewardsMilestonesEOG_C.SetProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function DailyRewardsMilestonesEOG.DailyRewardsMilestonesEOG_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_DailyRewardsMilestonesEOG(int32_t EntryPoint); // Function DailyRewardsMilestonesEOG.DailyRewardsMilestonesEOG_C.ExecuteUbergraph_DailyRewardsMilestonesEOG // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

