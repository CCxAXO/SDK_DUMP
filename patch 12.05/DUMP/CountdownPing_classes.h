// BlueprintGeneratedClass CountdownPing.CountdownPing_C
// Size: 0x7f8 (Inherited: 0x7d0)
struct ACountdownPing_C : ABasePing_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct UCountdownPingTextWidget_C* Widget; // 0x7d8(0x08)
	struct FTimerHandle TimerHandle; // 0x7e0(0x08)
	int32_t TotalCountdownSecs; // 0x7e8(0x04)
	int32_t TimerEventCount; // 0x7ec(0x04)
	struct UAkAudioEvent* CountdownAudioEvent; // 0x7f0(0x08)

	void RemoveOtherPingsOfType(); // Function CountdownPing.CountdownPing_C.RemoveOtherPingsOfType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function CountdownPing.CountdownPing_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnTimer(); // Function CountdownPing.CountdownPing_C.OnTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ResetEffect(); // Function CountdownPing.CountdownPing_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CountdownPing(int32_t EntryPoint); // Function CountdownPing.CountdownPing_C.ExecuteUbergraph_CountdownPing // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

