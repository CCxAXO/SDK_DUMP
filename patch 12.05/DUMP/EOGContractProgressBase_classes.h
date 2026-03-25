// WidgetBlueprintGeneratedClass EOGContractProgressBase.EOGContractProgressBase_C
// Size: 0x3d8 (Inherited: 0x330)
struct UEOGContractProgressBase_C : UContractsScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UContractViewModel* ContractViewModel; // 0x338(0x08)
	struct UContractDeltaViewModel* ContractDelta; // 0x340(0x08)
	struct FDateTime AnimatingSince; // 0x348(0x08)
	struct FDateTime AnimatingUntil; // 0x350(0x08)
	bool IsAnimating; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct TMap<struct UAresBasePrimaryDataAsset*, int32_t> RewardAmounts; // 0x360(0x50)
	int32_t CurrentLevel; // 0x3b0(0x04)
	int32_t NextLevelRaw; // 0x3b4(0x04)
	struct FColor EventTextColor; // 0x3b8(0x04)
	struct FColor EventBGColor; // 0x3bc(0x04)
	struct TArray<struct UAresBasePrimaryDataAsset*> ContractRewards; // 0x3c0(0x10)
	bool bSkipRewardWidgetUpdate; // 0x3d0(0x01)
	bool bSkipCeremony; // 0x3d1(0x01)
	char pad_3D2[0x2]; // 0x3d2(0x02)
	int32_t DailyRewardsXP; // 0x3d4(0x04)

	void SetSkipCeremony(); // Function EOGContractProgressBase.EOGContractProgressBase_C.SetSkipCeremony // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateRewardWidgets(); // Function EOGContractProgressBase.EOGContractProgressBase_C.UpdateRewardWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetRewardWidgets(struct TArray<struct UWidget*>& RewardWidgets); // Function EOGContractProgressBase.EOGContractProgressBase_C.GetRewardWidgets // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void ClearRewardWidgets(); // Function EOGContractProgressBase.EOGContractProgressBase_C.ClearRewardWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetContractDisplayType(struct FText Type); // Function EOGContractProgressBase.EOGContractProgressBase_C.SetContractDisplayType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetContractDisplayName(struct FText Name); // Function EOGContractProgressBase.EOGContractProgressBase_C.SetContractDisplayName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetNextLevelText(bool IsCompleted, int32_t CurrentLevel, int32_t LevelsExcludingEpilogue, struct FText& Result); // Function EOGContractProgressBase.EOGContractProgressBase_C.GetNextLevelText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void ShowEndState(); // Function EOGContractProgressBase.EOGContractProgressBase_C.ShowEndState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayUnlockAnimations(int32_t CurrentLevel); // Function EOGContractProgressBase.EOGContractProgressBase_C.PlayUnlockAnimations // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Tick Animation(); // Function EOGContractProgressBase.EOGContractProgressBase_C.Tick Animation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddRewardWidget(struct UEOGContractReward_C* Widget); // Function EOGContractProgressBase.EOGContractProgressBase_C.AddRewardWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Create Reward Widgets(struct FBaseHandles& Handles); // Function EOGContractProgressBase.EOGContractProgressBase_C.Create Reward Widgets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void LoadRewardsData(); // Function EOGContractProgressBase.EOGContractProgressBase_C.LoadRewardsData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Reset(); // Function EOGContractProgressBase.EOGContractProgressBase_C.Reset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AnimateProgress(struct FTimespan Duration); // Function EOGContractProgressBase.EOGContractProgressBase_C.AnimateProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTotalXP(int32_t TotalXP); // Function EOGContractProgressBase.EOGContractProgressBase_C.SetTotalXP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(struct UContractViewModel* ContractViewModel, struct UContractDeltaViewModel* ContractDelta, int32_t DailyRewardsXP); // Function EOGContractProgressBase.EOGContractProgressBase_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function EOGContractProgressBase.EOGContractProgressBase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function EOGContractProgressBase.EOGContractProgressBase_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnContractHandleV2(struct UContractV2Handle* ContractHandle); // Function EOGContractProgressBase.EOGContractProgressBase_C.OnContractHandleV2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_EOGContractProgressBase(int32_t EntryPoint); // Function EOGContractProgressBase.EOGContractProgressBase_C.ExecuteUbergraph_EOGContractProgressBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

