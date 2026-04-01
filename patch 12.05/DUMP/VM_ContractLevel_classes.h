// BlueprintGeneratedClass VM_ContractLevel.VM_ContractLevel_C
// Size: 0x1f8 (Inherited: 0x90)
struct UVM_ContractLevel_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	bool IsRewardPremium; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct URewardModel* Reward Model; // 0xa0(0x08)
	int32_t XP To Go; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FText LevelFractionText; // 0xb0(0x18)
	struct FText LevelText; // 0xc8(0x18)
	double LevelProgress; // 0xe0(0x08)
	struct FMulticastInlineDelegate OnLevelTextChanged; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnLevelProgressChanged; // 0xf8(0x10)
	int32_t CurrentXP; // 0x108(0x04)
	int32_t LevelNumber; // 0x10c(0x04)
	int32_t NumLevels; // 0x110(0x04)
	int32_t NumLevelsExcludingEpilogue; // 0x114(0x04)
	struct FMulticastInlineDelegate OnRewardModelChanged; // 0x118(0x10)
	struct FMulticastInlineDelegate OnIsRewardPremiumChanged; // 0x128(0x10)
	struct FMulticastInlineDelegate OnLevelFractionTextChanged; // 0x138(0x10)
	struct FMulticastInlineDelegate OnXPToGoChanged; // 0x148(0x10)
	struct UContractViewModel* ContractModel; // 0x158(0x08)
	int32_t XP To Complete; // 0x160(0x04)
	bool IsLevelCompleted; // 0x164(0x01)
	bool IsCurrentLevel; // 0x165(0x01)
	char pad_166[0x2]; // 0x166(0x02)
	struct UContractLevelViewModel* LevelModel; // 0x168(0x08)
	struct UContractChapterViewModel* ChapterModel; // 0x170(0x08)
	struct FMulticastInlineDelegate OnXPToCompleteChanged; // 0x178(0x10)
	struct FText LevelProgressText; // 0x188(0x18)
	struct FMulticastInlineDelegate OnLevelProgressTextChanged; // 0x1a0(0x10)
	struct TArray<struct UEarnableItem*> ItemsEarnedOnCompletion; // 0x1b0(0x10)
	struct FMulticastInlineDelegate OnItemsEarnedOnCompletionChanged; // 0x1c0(0x10)
	struct TArray<struct UEarnableItem*> ItemsEarnableOnCompletion; // 0x1d0(0x10)
	int32_t Dough Purchase Cost; // 0x1e0(0x04)
	char pad_1E4[0x4]; // 0x1e4(0x04)
	struct FMulticastInlineDelegate OnDoughPurchaseCostChanged; // 0x1e8(0x10)

	void Set Dough Purchase Cost(int32_t Dough Purchase Cost); // Function VM_ContractLevel.VM_ContractLevel_C.Set Dough Purchase Cost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsRewardPremium(bool IsRewardPremium); // Function VM_ContractLevel.VM_ContractLevel_C.SetIsRewardPremium // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeItemsEarnedOnCompletion(struct UContractLevelViewModel* LevelModel); // Function VM_ContractLevel.VM_ContractLevel_C.InitializeItemsEarnedOnCompletion // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DetermineItemsEarnedOnCompletion(enum class EEarnedStatus EarnedStatus); // Function VM_ContractLevel.VM_ContractLevel_C.DetermineItemsEarnedOnCompletion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToEarnableItemStatusChanges(struct TArray<struct UEarnableItem*>& EarnableItems); // Function VM_ContractLevel.VM_ContractLevel_C.BindToEarnableItemStatusChanges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateItemsEarnedFromEarnableItems(struct TArray<struct UEarnableItem*>& EarnableItems); // Function VM_ContractLevel.VM_ContractLevel_C.UpdateItemsEarnedFromEarnableItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetLevelProgressText(struct FText NewProgressText); // Function VM_ContractLevel.VM_ContractLevel_C.SetLevelProgressText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateLevelProgressText(); // Function VM_ContractLevel.VM_ContractLevel_C.UpdateLevelProgressText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetXPToComplete(int32_t XP To Complete); // Function VM_ContractLevel.VM_ContractLevel_C.SetXPToComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromContractLevelIndex(int32_t LevelIndex); // Function VM_ContractLevel.VM_ContractLevel_C.InitFromContractLevelIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetContractModel(struct UContractViewModel* NewContractModel); // Function VM_ContractLevel.VM_ContractLevel_C.SetContractModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsCurrentLevel(bool NewIsCurrentLevel); // Function VM_ContractLevel.VM_ContractLevel_C.SetIsCurrentLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsLevelCompleted(bool NewIsLevelCompleted); // Function VM_ContractLevel.VM_ContractLevel_C.SetIsLevelCompleted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateLevelFractionText(); // Function VM_ContractLevel.VM_ContractLevel_C.UpdateLevelFractionText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetRewardModel(struct URewardModel* New Reward Model); // Function VM_ContractLevel.VM_ContractLevel_C.SetRewardModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindLevelModelEvents(bool Bind); // Function VM_ContractLevel.VM_ContractLevel_C.BindLevelModelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateNumLevelsExcludingEpilogue(int32_t NumLevelsExcludingEpilogue); // Function VM_ContractLevel.VM_ContractLevel_C.UpdateNumLevelsExcludingEpilogue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateNumLevels(int32_t NumLevels); // Function VM_ContractLevel.VM_ContractLevel_C.UpdateNumLevels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateCurrentXP(int32_t CurrentXP); // Function VM_ContractLevel.VM_ContractLevel_C.UpdateCurrentXP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateLevelProgress(); // Function VM_ContractLevel.VM_ContractLevel_C.UpdateLevelProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetLevelProgress(double LevelProgress); // Function VM_ContractLevel.VM_ContractLevel_C.SetLevelProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set XPToGo(int32_t XP To Go); // Function VM_ContractLevel.VM_ContractLevel_C.Set XPToGo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetLevelFractionText(struct FText LevelFractionText); // Function VM_ContractLevel.VM_ContractLevel_C.SetLevelFractionText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetLevelText(struct FText LevelText); // Function VM_ContractLevel.VM_ContractLevel_C.SetLevelText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromContractLevelModel(struct UContractLevelViewModel* NewLevelModel); // Function VM_ContractLevel.VM_ContractLevel_C.InitFromContractLevelModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update XP To Go(); // Function VM_ContractLevel.VM_ContractLevel_C.Update XP To Go // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateLevelText(); // Function VM_ContractLevel.VM_ContractLevel_C.UpdateLevelText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshBroadcast(); // Function VM_ContractLevel.VM_ContractLevel_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Reset(); // Function VM_ContractLevel.VM_ContractLevel_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_ContractLevel(int32_t EntryPoint); // Function VM_ContractLevel.VM_ContractLevel_C.ExecuteUbergraph_VM_ContractLevel // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnDoughPurchaseCostChanged__DelegateSignature(int32_t DoughPurchaseCost); // Function VM_ContractLevel.VM_ContractLevel_C.OnDoughPurchaseCostChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnItemsEarnedOnCompletionChanged__DelegateSignature(struct TArray<struct UEarnableItem*>& ItemsEarned); // Function VM_ContractLevel.VM_ContractLevel_C.OnItemsEarnedOnCompletionChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLevelProgressTextChanged__DelegateSignature(struct FText LevelProgressText); // Function VM_ContractLevel.VM_ContractLevel_C.OnLevelProgressTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnXPToCompleteChanged__DelegateSignature(int32_t XP To Complete); // Function VM_ContractLevel.VM_ContractLevel_C.OnXPToCompleteChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnXPToGoChanged__DelegateSignature(int32_t XP To Go); // Function VM_ContractLevel.VM_ContractLevel_C.OnXPToGoChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLevelFractionTextChanged__DelegateSignature(struct FText LevelFractionText); // Function VM_ContractLevel.VM_ContractLevel_C.OnLevelFractionTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsRewardPremiumChanged__DelegateSignature(bool IsRewardPremium); // Function VM_ContractLevel.VM_ContractLevel_C.OnIsRewardPremiumChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRewardModelChanged__DelegateSignature(struct URewardModel* Reward Model); // Function VM_ContractLevel.VM_ContractLevel_C.OnRewardModelChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLevelProgressChanged__DelegateSignature(double LevelProgress); // Function VM_ContractLevel.VM_ContractLevel_C.OnLevelProgressChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLevelTextChanged__DelegateSignature(struct FText LevelText); // Function VM_ContractLevel.VM_ContractLevel_C.OnLevelTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

