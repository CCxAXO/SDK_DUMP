// WidgetBlueprintGeneratedClass DailyRewardsMilestoneWithTooltip.DailyRewardsMilestoneWithTooltip_C
// Size: 0x346 (Inherited: 0x318)
struct UDailyRewardsMilestoneWithTooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* DiamondMaterialAnimation; // 0x320(0x08)
	struct UImage* DiamondMaterial; // 0x328(0x08)
	struct USharedButtonWithPopout_C* SharedButtonWithPopout; // 0x330(0x08)
	int32_t MilestoneNumber; // 0x338(0x04)
	bool HasBonus; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	int32_t Progress; // 0x340(0x04)
	bool IsDisabled; // 0x344(0x01)
	bool ShowTooltip; // 0x345(0x01)

	void SetShowTooltip(bool ShowTooltip); // Function DailyRewardsMilestoneWithTooltip.DailyRewardsMilestoneWithTooltip_C.SetShowTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMilestone(int32_t MilestoneNumber, int32_t Progress, bool IsDisabled); // Function DailyRewardsMilestoneWithTooltip.DailyRewardsMilestoneWithTooltip_C.SetMilestone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetDailyRewardsMilestoneWithoutTooltip(struct UDailyRewardsMilestoneWithoutTooltip_C*& Widget); // Function DailyRewardsMilestoneWithTooltip.DailyRewardsMilestoneWithTooltip_C.GetDailyRewardsMilestoneWithoutTooltip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function DailyRewardsMilestoneWithTooltip.DailyRewardsMilestoneWithTooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function DailyRewardsMilestoneWithTooltip.DailyRewardsMilestoneWithTooltip_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function DailyRewardsMilestoneWithTooltip.DailyRewardsMilestoneWithTooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_DailyRewardsMilestoneWithTooltip(int32_t EntryPoint); // Function DailyRewardsMilestoneWithTooltip.DailyRewardsMilestoneWithTooltip_C.ExecuteUbergraph_DailyRewardsMilestoneWithTooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

