// WidgetBlueprintGeneratedClass EOGContractProgressDefault.EOGContractProgressDefault_C
// Size: 0x450 (Inherited: 0x3d8)
struct UEOGContractProgressDefault_C : UEOGContractProgressBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UImage* BattlepassBGMaterial; // 0x3e0(0x08)
	struct UTextBlock* ContractName; // 0x3e8(0x08)
	struct UImage* CornerTextureBL; // 0x3f0(0x08)
	struct UImage* CornerTextureBR; // 0x3f8(0x08)
	struct UImage* CornerTextureTL; // 0x400(0x08)
	struct UImage* CornerTextureTR; // 0x408(0x08)
	struct UTextBlock* CurrentProgress; // 0x410(0x08)
	struct UWidgetSwitcher* EventIconSwitcher; // 0x418(0x08)
	struct UWidgetSwitcher* EventProgressBarSwitcher; // 0x420(0x08)
	struct UTextBlock* NextLevel; // 0x428(0x08)
	struct UProgressBar* ProgressBar_1; // 0x430(0x08)
	struct UVerticalBox* RewardsContainer; // 0x438(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x440(0x08)
	struct UTextBlock* Type; // 0x448(0x08)

	void GetRewardWidgets(struct TArray<struct UWidget*>& RewardWidgets); // Function EOGContractProgressDefault.EOGContractProgressDefault_C.GetRewardWidgets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void ClearRewardWidgets(); // Function EOGContractProgressDefault.EOGContractProgressDefault_C.ClearRewardWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetContractDisplayType(struct FText Type); // Function EOGContractProgressDefault.EOGContractProgressDefault_C.SetContractDisplayType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetContractDisplayName(struct FText Name); // Function EOGContractProgressDefault.EOGContractProgressDefault_C.SetContractDisplayName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddRewardWidget(struct UEOGContractReward_C* Widget); // Function EOGContractProgressDefault.EOGContractProgressDefault_C.AddRewardWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateEOGContractProgress(struct FText NextLevelText, int32_t CurrentXP, int32_t XPToNextLevel); // Function EOGContractProgressDefault.EOGContractProgressDefault_C.UpdateEOGContractProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTotalXP(int32_t TotalXP); // Function EOGContractProgressDefault.EOGContractProgressDefault_C.SetTotalXP // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function EOGContractProgressDefault.EOGContractProgressDefault_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_EOGContractProgressDefault(int32_t EntryPoint); // Function EOGContractProgressDefault.EOGContractProgressDefault_C.ExecuteUbergraph_EOGContractProgressDefault // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

