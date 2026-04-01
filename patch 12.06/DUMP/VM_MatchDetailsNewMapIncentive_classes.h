// BlueprintGeneratedClass VM_MatchDetailsNewMapIncentive.VM_MatchDetailsNewMapIncentive_C
// Size: 0xf9 (Inherited: 0x90)
struct UVM_MatchDetailsNewMapIncentive_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FText Map; // 0x98(0x18)
	struct FMulticastInlineDelegate OnMapUpdated; // 0xb0(0x10)
	struct UMatchDetailsViewModel* ProcessedMatchDetailsModel; // 0xc0(0x08)
	struct FString MatchID; // 0xc8(0x10)
	struct FString Subject; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnLoadingUpdated; // 0xe8(0x10)
	bool IsLoading; // 0xf8(0x01)

	void HandleMatchDetailsLoadSuccess(struct FMatchDetailsDTO& MatchDetails); // Function VM_MatchDetailsNewMapIncentive.VM_MatchDetailsNewMapIncentive_C.HandleMatchDetailsLoadSuccess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMap(struct FText Map); // Function VM_MatchDetailsNewMapIncentive.VM_MatchDetailsNewMapIncentive_C.SetMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleMatchDetailsContentLoaded(); // Function VM_MatchDetailsNewMapIncentive.VM_MatchDetailsNewMapIncentive_C.HandleMatchDetailsContentLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(struct FString MatchID); // Function VM_MatchDetailsNewMapIncentive.VM_MatchDetailsNewMapIncentive_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMatchID(struct FString MatchID); // Function VM_MatchDetailsNewMapIncentive.VM_MatchDetailsNewMapIncentive_C.SetMatchID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsLoading(bool IsLoading); // Function VM_MatchDetailsNewMapIncentive.VM_MatchDetailsNewMapIncentive_C.SetIsLoading // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void LoadMatchDetails(); // Function VM_MatchDetailsNewMapIncentive.VM_MatchDetailsNewMapIncentive_C.LoadMatchDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleLoadMatchDetailsLoadError(); // Function VM_MatchDetailsNewMapIncentive.VM_MatchDetailsNewMapIncentive_C.HandleLoadMatchDetailsLoadError // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_MatchDetailsNewMapIncentive(int32_t EntryPoint); // Function VM_MatchDetailsNewMapIncentive.VM_MatchDetailsNewMapIncentive_C.ExecuteUbergraph_VM_MatchDetailsNewMapIncentive // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnLoadingUpdated__DelegateSignature(bool IsLoading); // Function VM_MatchDetailsNewMapIncentive.VM_MatchDetailsNewMapIncentive_C.OnLoadingUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMapUpdated__DelegateSignature(struct FText Map); // Function VM_MatchDetailsNewMapIncentive.VM_MatchDetailsNewMapIncentive_C.OnMapUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

