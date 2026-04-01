// WidgetBlueprintGeneratedClass WBP_Panel_BTE_Banner_EOG.WBP_Panel_BTE_Banner_EOG_C
// Size: 0x1b60 (Inherited: 0x1b20)
struct UWBP_Panel_BTE_Banner_EOG_C : UWBP_Panel_AbstractBTEBanner_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b20(0x08)
	struct UImage* Image; // 0x1b28(0x08)
	struct UWBP_Panel_EOGBannerDetails_C* WBP_Panel_EOGBannerDetails; // 0x1b30(0x08)
	struct UImage* WhitePanel; // 0x1b38(0x08)
	struct UVM_BTEMilestone_C* BTE Milestone VM; // 0x1b40(0x08)
	double PCRewardsMaxDesiredWidth; // 0x1b48(0x08)
	double ConsoleRewardsWidthOverride; // 0x1b50(0x08)
	double ConsoleRewardsHeightOverride; // 0x1b58(0x08)

	void Handle On Should Show On BTE Changed(bool ShouldShow); // Function WBP_Panel_BTE_Banner_EOG.WBP_Panel_BTE_Banner_EOG_C.Handle On Should Show On BTE Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle On Match Result Active Milestone After Changed(int32_t MatchResultActiveMilestoneAfter); // Function WBP_Panel_BTE_Banner_EOG.WBP_Panel_BTE_Banner_EOG_C.Handle On Match Result Active Milestone After Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle On Match Result Active Milestone Before Changed(int32_t MatchResultActiveMilestoneIndexBefore); // Function WBP_Panel_BTE_Banner_EOG.WBP_Panel_BTE_Banner_EOG_C.Handle On Match Result Active Milestone Before Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle On Earnable Rewards Changed(struct TArray<struct UBTEEarnableItem*>& EarnableRewards); // Function WBP_Panel_BTE_Banner_EOG.WBP_Panel_BTE_Banner_EOG_C.Handle On Earnable Rewards Changed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle On Title Changed(struct FText Title); // Function WBP_Panel_BTE_Banner_EOG.WBP_Panel_BTE_Banner_EOG_C.Handle On Title Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Bind Events(bool Bind); // Function WBP_Panel_BTE_Banner_EOG.WBP_Panel_BTE_Banner_EOG_C.Bind Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Milestone View Model(struct UVM_BTEMilestone_C* BTE Milestone VM); // Function WBP_Panel_BTE_Banner_EOG.WBP_Panel_BTE_Banner_EOG_C.Set Milestone View Model // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init View Models(); // Function WBP_Panel_BTE_Banner_EOG.WBP_Panel_BTE_Banner_EOG_C.Init View Models // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Match ID(struct FGuid Match ID); // Function WBP_Panel_BTE_Banner_EOG.WBP_Panel_BTE_Banner_EOG_C.Set Match ID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle On Display Name All Caps Changed(struct FText DisplayNameAllCaps); // Function WBP_Panel_BTE_Banner_EOG.WBP_Panel_BTE_Banner_EOG_C.Handle On Display Name All Caps Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_BTE_Banner_EOG.WBP_Panel_BTE_Banner_EOG_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_BTE_Banner_EOG(int32_t EntryPoint); // Function WBP_Panel_BTE_Banner_EOG.WBP_Panel_BTE_Banner_EOG_C.ExecuteUbergraph_WBP_Panel_BTE_Banner_EOG // (Final|UbergraphFunction) // @ game+0x1af5410
};

