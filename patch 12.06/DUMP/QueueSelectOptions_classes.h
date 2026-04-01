// WidgetBlueprintGeneratedClass QueueSelectOptions.QueueSelectOptions_C
// Size: 0x368 (Inherited: 0x318)
struct UQueueSelectOptions_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USharedComboBox_C* QueueSelectDropdown; // 0x320(0x08)
	struct FMulticastInlineDelegate SelectionChanged; // 0x328(0x10)
	struct FString AllModesOptionID; // 0x338(0x10)
	struct FString CustomGameQueueID; // 0x348(0x10)
	struct TArray<struct FString> QueueIDs; // 0x358(0x10)

	void Get Selected Queues(struct FString& Queue ID); // Function QueueSelectOptions.QueueSelectOptions_C.Get Selected Queues // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function QueueSelectOptions.QueueSelectOptions_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnItemSelection(struct FString Item); // Function QueueSelectOptions.QueueSelectOptions_C.OnItemSelection // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MatchmakingQueuesLoaded(struct FMatchmakingQueueHandles& MatchmakingQueueHandles); // Function QueueSelectOptions.QueueSelectOptions_C.MatchmakingQueuesLoaded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_QueueSelectOptions(int32_t EntryPoint); // Function QueueSelectOptions.QueueSelectOptions_C.ExecuteUbergraph_QueueSelectOptions // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void SelectionChanged__DelegateSignature(); // Function QueueSelectOptions.QueueSelectOptions_C.SelectionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

