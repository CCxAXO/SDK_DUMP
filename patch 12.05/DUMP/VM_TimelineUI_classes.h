// BlueprintGeneratedClass VM_TimelineUI.VM_TimelineUI_C
// Size: 0x2ba (Inherited: 0x2b0)
struct UVM_TimelineUI_C : UTimelineUIViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	bool Is Playing; // 0x2b8(0x01)
	bool TimeJumpCanPlayAudio; // 0x2b9(0x01)

	void GetReplayPlaybackSpeedFromIndex(int32_t PlaybackSpeedIndex, double& ReplayPlaybackSpeed); // Function VM_TimelineUI.VM_TimelineUI_C.GetReplayPlaybackSpeedFromIndex // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetTargetReplayPlaybackSpeed(double& ReplayPlaybackSpeed); // Function VM_TimelineUI.VM_TimelineUI_C.GetTargetReplayPlaybackSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelCreated(); // Function VM_TimelineUI.VM_TimelineUI_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void HandleIsPlayingChanged(bool bIsPlaying); // Function VM_TimelineUI.VM_TimelineUI_C.HandleIsPlayingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleOnPlaybackSpeedIndexChanged(int32_t PlaybackSpeedIndex); // Function VM_TimelineUI.VM_TimelineUI_C.HandleOnPlaybackSpeedIndexChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTimeDilationCatchupStarted(float EndTimeDest); // Function VM_TimelineUI.VM_TimelineUI_C.OnTimeDilationCatchupStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTimeDilationCatchupFinished(bool bWasSuccessful); // Function VM_TimelineUI.VM_TimelineUI_C.OnTimeDilationCatchupFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnGameStateSet(struct UObject* TargetObject, struct AGameStateBase* GameState); // Function VM_TimelineUI.VM_TimelineUI_C.OnGameStateSet // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_TimelineUI(int32_t EntryPoint); // Function VM_TimelineUI.VM_TimelineUI_C.ExecuteUbergraph_VM_TimelineUI // (Final|UbergraphFunction) // @ game+0x1af5410
};

