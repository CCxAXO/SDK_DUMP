// WidgetBlueprintGeneratedClass TournamentsLockInPhaseTimer.TournamentsLockInPhaseTimer_C
// Size: 0x348 (Inherited: 0x318)
struct UTournamentsLockInPhaseTimer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* TimerText; // 0x320(0x08)
	struct FTimespan TimeRemaining; // 0x328(0x08)
	struct FTimerHandle TimerHandle; // 0x330(0x08)
	struct FMulticastInlineDelegate LockInPhaseOver; // 0x338(0x10)

	void OnTimerTick(); // Function TournamentsLockInPhaseTimer.TournamentsLockInPhaseTimer_C.OnTimerTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(); // Function TournamentsLockInPhaseTimer.TournamentsLockInPhaseTimer_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnQueueConfigUpdated(); // Function TournamentsLockInPhaseTimer.TournamentsLockInPhaseTimer_C.OnQueueConfigUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TournamentsLockInPhaseTimer(int32_t EntryPoint); // Function TournamentsLockInPhaseTimer.TournamentsLockInPhaseTimer_C.ExecuteUbergraph_TournamentsLockInPhaseTimer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void LockInPhaseOver__DelegateSignature(); // Function TournamentsLockInPhaseTimer.TournamentsLockInPhaseTimer_C.LockInPhaseOver__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

