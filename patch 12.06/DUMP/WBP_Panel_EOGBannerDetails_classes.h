// WidgetBlueprintGeneratedClass WBP_Panel_EOGBannerDetails.WBP_Panel_EOGBannerDetails_C
// Size: 0x51d (Inherited: 0x3e0)
struct UWBP_Panel_EOGBannerDetails_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresWidgetSwitcher* AresWidgetSwitcher_Rewards; // 0x3e8(0x08)
	struct UVerticalBox* ContractProgress; // 0x3f0(0x08)
	struct USizeBox* HorizontalMultipleRewards; // 0x3f8(0x08)
	struct UWBP_List_Base_C* HorizontalMultipleRewardTileView; // 0x400(0x08)
	struct USizeBox* HorizontalRewardBox; // 0x408(0x08)
	struct UHorizontalBox* HorizontalRewards; // 0x410(0x08)
	struct USizeBox* ProgressBarSizeBox; // 0x418(0x08)
	struct UAresCommonText* SubText; // 0x420(0x08)
	struct UAresCommonText* Text_Eyebrow; // 0x428(0x08)
	struct UAresCommonText* Text_Title; // 0x430(0x08)
	struct UWBP_Panel_EOGItemDisplay_C* VerticalContentItemDisplay; // 0x438(0x08)
	struct UOverlay* VerticalMultipleRewardsOverlay; // 0x440(0x08)
	struct UWBP_List_Base_C* VerticalMultipleRewardTileView; // 0x448(0x08)
	struct UOverlay* VerticalRewardOverlay; // 0x450(0x08)
	struct UOverlay* VerticalRewards; // 0x458(0x08)
	struct UWBP_Panel_EOGItemDisplay_C* WBP_Panel_EOGContentItemDisplay; // 0x460(0x08)
	struct UWBP_ProgressBar_MilestoneSegmented_C* WBP_ProgressBar_MilestoneSegmented; // 0x468(0x08)
	struct UAresCommonText* XpText; // 0x470(0x08)
	struct FText EyebrowText; // 0x478(0x18)
	struct FDateTime AnimatingSince; // 0x490(0x08)
	struct FDateTime AnimatingUntil; // 0x498(0x08)
	struct FDateTime PauseStartTime; // 0x4a0(0x08)
	bool IsAnimating; // 0x4a8(0x01)
	bool IsAnimationPaused; // 0x4a9(0x01)
	char pad_4AA[0x2]; // 0x4aa(0x02)
	struct FMargin ProgressBarMargin; // 0x4ac(0x10)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	double ProgressBarHeight; // 0x4c0(0x08)
	bool HasMilestones; // 0x4c8(0x01)
	char pad_4C9[0x7]; // 0x4c9(0x07)
	struct FMulticastInlineDelegate OnMaxXPReached; // 0x4d0(0x10)
	bool IsHorizontalRewardAlignment; // 0x4e0(0x01)
	char pad_4E1[0x3]; // 0x4e1(0x03)
	int32_t NumEarnableItems; // 0x4e4(0x04)
	int32_t DebugNumEarnableItems; // 0x4e8(0x04)
	struct FMargin HorizontalContractProgressMargin; // 0x4ec(0x10)
	struct FMargin VerticalContractProgressMargin; // 0x4fc(0x10)
	struct FMargin FillProgressMargin; // 0x50c(0x10)
	bool FillProgressContent; // 0x51c(0x01)

	void SetIsHorizontalRewardAlignment(bool InIsHorizontalRewardAlignment); // Function WBP_Panel_EOGBannerDetails.WBP_Panel_EOGBannerDetails_C.SetIsHorizontalRewardAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateContractProgressAlignment(bool InIsHorizontalRewardAlignment); // Function WBP_Panel_EOGBannerDetails.WBP_Panel_EOGBannerDetails_C.UpdateContractProgressAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateRewardAlignment(bool IsDesignTime); // Function WBP_Panel_EOGBannerDetails.WBP_Panel_EOGBannerDetails_C.UpdateRewardAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateEarnedItems(struct TArray<struct UEarnableItem*>& EarnableItems); // Function WBP_Panel_EOGBannerDetails.WBP_Panel_EOGBannerDetails_C.UpdateEarnedItems // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool IsAnimationRunning(); // Function WBP_Panel_EOGBannerDetails.WBP_Panel_EOGBannerDetails_C.IsAnimationRunning // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateProgressBarAnimationState(); // Function WBP_Panel_EOGBannerDetails.WBP_Panel_EOGBannerDetails_C.UpdateProgressBarAnimationState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Unpause Animation(); // Function WBP_Panel_EOGBannerDetails.WBP_Panel_EOGBannerDetails_C.Unpause Animation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Pause Animation(); // Function WBP_Panel_EOGBannerDetails.WBP_Panel_EOGBannerDetails_C.Pause Animation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TickXPAnimation(int32_t XP Before, int32_t XP After, int32_t Max XP); // Function WBP_Panel_EOGBannerDetails.WBP_Panel_EOGBannerDetails_C.TickXPAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Animate(struct FTimespan Duration); // Function WBP_Panel_EOGBannerDetails.WBP_Panel_EOGBannerDetails_C.Animate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateSubText(struct FText Tier Text); // Function WBP_Panel_EOGBannerDetails.WBP_Panel_EOGBannerDetails_C.UpdateSubText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateXpText(int32_t CurrentXP, int32_t MaxXP, bool HasValidData); // Function WBP_Panel_EOGBannerDetails.WBP_Panel_EOGBannerDetails_C.UpdateXpText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateProgress(double Progress Before, double Progress After); // Function WBP_Panel_EOGBannerDetails.WBP_Panel_EOGBannerDetails_C.UpdateProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateProgressTitle(struct FText ContractName); // Function WBP_Panel_EOGBannerDetails.WBP_Panel_EOGBannerDetails_C.UpdateProgressTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_EOGBannerDetails.WBP_Panel_EOGBannerDetails_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_EOGBannerDetails(int32_t EntryPoint); // Function WBP_Panel_EOGBannerDetails.WBP_Panel_EOGBannerDetails_C.ExecuteUbergraph_WBP_Panel_EOGBannerDetails // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnMaxXPReached__DelegateSignature(); // Function WBP_Panel_EOGBannerDetails.WBP_Panel_EOGBannerDetails_C.OnMaxXPReached__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

