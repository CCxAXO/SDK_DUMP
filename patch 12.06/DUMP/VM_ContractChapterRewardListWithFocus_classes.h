// BlueprintGeneratedClass VM_ContractChapterRewardListWithFocus.VM_ContractChapterRewardListWithFocus_C
// Size: 0x118 (Inherited: 0x90)
struct UVM_ContractChapterRewardListWithFocus_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct TArray<struct UContractLevelViewModel*> LevelList; // 0x98(0x10)
	struct TArray<struct UFreeChapterEarnableItem*> FreeChapterEarnableItems; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnLevelListChanged; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnFreeEarnableItemsChanged; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnOverrideLevelFocus; // 0xd8(0x10)
	bool ShouldFocusEndOfList; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct FMulticastInlineDelegate OnOverrideFreeRewardFocus; // 0xf0(0x10)
	struct UContractLevelViewModel* DesiredFocusLevel; // 0x100(0x08)
	int32_t NoFocusedElementIndex; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct UFreeChapterEarnableItem* DesiredFocusFreeReward; // 0x110(0x08)

	void SetDesiredFocusTarget(struct FWildcard FocusTargetWildcard, struct UContractLevelViewModel* DefaultCurrentLevelFocus); // Function VM_ContractChapterRewardListWithFocus.VM_ContractChapterRewardListWithFocus_C.SetDesiredFocusTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ArraysDiffer?(struct TArray<struct UObject*>& Array1, struct TArray<struct UObject*>& Array2, bool& Differ); // Function VM_ContractChapterRewardListWithFocus.VM_ContractChapterRewardListWithFocus_C.ArraysDiffer? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ResetFocusVariables(bool ShouldResetFocusOverrides); // Function VM_ContractChapterRewardListWithFocus.VM_ContractChapterRewardListWithFocus_C.ResetFocusVariables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DetermineFreeRewardFocus(int32_t& FreeRewardFocusIndex, bool& ShouldResetFocusOverrides); // Function VM_ContractChapterRewardListWithFocus.VM_ContractChapterRewardListWithFocus_C.DetermineFreeRewardFocus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DetermineLevelFocus(int32_t& LevelFocusIndex, bool& ShouldResetFocusOverrides); // Function VM_ContractChapterRewardListWithFocus.VM_ContractChapterRewardListWithFocus_C.DetermineLevelFocus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Free Earnable Items(struct TArray<struct UFreeChapterEarnableItem*>& EarnableItems, bool& ShouldResetFocusOverrides); // Function VM_ContractChapterRewardListWithFocus.VM_ContractChapterRewardListWithFocus_C.Set Free Earnable Items // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetLevelList(struct TArray<struct UContractLevelViewModel*>& Levels, bool& ShouldResetFocusOverrides); // Function VM_ContractChapterRewardListWithFocus.VM_ContractChapterRewardListWithFocus_C.SetLevelList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromContractChapterModel(struct UContractChapterViewModel* Chapter Model); // Function VM_ContractChapterRewardListWithFocus.VM_ContractChapterRewardListWithFocus_C.InitFromContractChapterModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_ContractChapterRewardListWithFocus.VM_ContractChapterRewardListWithFocus_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Reset(); // Function VM_ContractChapterRewardListWithFocus.VM_ContractChapterRewardListWithFocus_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_ContractChapterRewardListWithFocus(int32_t EntryPoint); // Function VM_ContractChapterRewardListWithFocus.VM_ContractChapterRewardListWithFocus_C.ExecuteUbergraph_VM_ContractChapterRewardListWithFocus // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnOverrideFreeRewardFocus__DelegateSignature(); // Function VM_ContractChapterRewardListWithFocus.VM_ContractChapterRewardListWithFocus_C.OnOverrideFreeRewardFocus__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOverrideLevelFocus__DelegateSignature(); // Function VM_ContractChapterRewardListWithFocus.VM_ContractChapterRewardListWithFocus_C.OnOverrideLevelFocus__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnFreeEarnableItemsChanged__DelegateSignature(struct TArray<struct UFreeChapterEarnableItem*>& FreeEarnableItems, int32_t FreeRewardFocusIndex); // Function VM_ContractChapterRewardListWithFocus.VM_ContractChapterRewardListWithFocus_C.OnFreeEarnableItemsChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLevelListChanged__DelegateSignature(struct TArray<struct UContractLevelViewModel*>& Levels, int32_t FocusedIndex); // Function VM_ContractChapterRewardListWithFocus.VM_ContractChapterRewardListWithFocus_C.OnLevelListChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

