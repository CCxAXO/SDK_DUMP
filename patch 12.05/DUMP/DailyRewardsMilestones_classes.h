// WidgetBlueprintGeneratedClass DailyRewardsMilestones.DailyRewardsMilestones_C
// Size: 0x358 (Inherited: 0x318)
struct UDailyRewardsMilestones_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHorizontalBox* DynamicMilestonesBox; // 0x320(0x08)
	struct TArray<struct UDailyRewardsMilestoneModel*> Milestones; // 0x328(0x10)
	bool IsNextEnabled; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	int32_t BonusMilestonesPending; // 0x33c(0x04)
	struct UTexture2D* ConnectorTexture; // 0x340(0x08)
	struct FMargin ConnectorPadding; // 0x348(0x10)

	void Add Milestone(bool HasBonus, int32_t MilestoneNumber, int32_t Progress, bool IsDisabled); // Function DailyRewardsMilestones.DailyRewardsMilestones_C.Add Milestone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddConnectorImage(); // Function DailyRewardsMilestones.DailyRewardsMilestones_C.AddConnectorImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitMilestone(int32_t& LoopIndex, int32_t Progress, struct UDailyRewardsMilestoneModel*& Milestone); // Function DailyRewardsMilestones.DailyRewardsMilestones_C.InitMilestone // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(); // Function DailyRewardsMilestones.DailyRewardsMilestones_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function DailyRewardsMilestones.DailyRewardsMilestones_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function DailyRewardsMilestones.DailyRewardsMilestones_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_DailyRewardsMilestones(int32_t EntryPoint); // Function DailyRewardsMilestones.DailyRewardsMilestones_C.ExecuteUbergraph_DailyRewardsMilestones // (Final|UbergraphFunction) // @ game+0x1af5410
};

