// WidgetBlueprintGeneratedClass QueueRestrictedTimer.QueueRestrictedTimer_C
// Size: 0x340 (Inherited: 0x320)
struct UQueueRestrictedTimer_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UTextBlock* TimerText; // 0x328(0x08)
	int32_t TextSize; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct FTimerHandle TimerHandle; // 0x338(0x08)

	void UpdateTimeText(); // Function QueueRestrictedTimer.QueueRestrictedTimer_C.UpdateTimeText // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function QueueRestrictedTimer.QueueRestrictedTimer_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Init(struct UPartyModel* Model); // Function QueueRestrictedTimer.QueueRestrictedTimer_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnQueueRestriction(bool NewValue); // Function QueueRestrictedTimer.QueueRestrictedTimer_C.OnQueueRestriction // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_QueueRestrictedTimer(int32_t EntryPoint); // Function QueueRestrictedTimer.QueueRestrictedTimer_C.ExecuteUbergraph_QueueRestrictedTimer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

