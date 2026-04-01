// BlueprintGeneratedClass LookingHerePing.LookingHerePing_C
// Size: 0x808 (Inherited: 0x7d0)
struct ALookingHerePing_C : ABasePing_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct FLinearColor Timeline_0_0_Color_8B92B84B4C040F0DF99D98B85D275FF9; // 0x7d8(0x10)
	enum class ETimelineDirection Timeline_0_0__Direction_8B92B84B4C040F0DF99D98B85D275FF9; // 0x7e8(0x01)
	char pad_7E9[0x7]; // 0x7e9(0x07)
	struct UTimelineComponent* Timeline_0_1; // 0x7f0(0x08)
	bool isTimerActive; // 0x7f8(0x01)
	char pad_7F9[0x7]; // 0x7f9(0x07)
	struct FTimerHandle activeTimerHandle; // 0x800(0x08)

	void RemoveOtherPingsOfType(); // Function LookingHerePing.LookingHerePing_C.RemoveOtherPingsOfType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Timeline_0_0__FinishedFunc(); // Function LookingHerePing.LookingHerePing_C.Timeline_0_0__FinishedFunc // (BlueprintEvent) // @ game+0x1af5410
	void Timeline_0_0__UpdateFunc(); // Function LookingHerePing.LookingHerePing_C.Timeline_0_0__UpdateFunc // (BlueprintEvent) // @ game+0x1af5410
	void ReceiveTick(float DeltaSeconds); // Function LookingHerePing.LookingHerePing_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void playerNoLongerWatching(); // Function LookingHerePing.LookingHerePing_C.playerNoLongerWatching // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_LookingHerePing(int32_t EntryPoint); // Function LookingHerePing.LookingHerePing_C.ExecuteUbergraph_LookingHerePing // (Final|UbergraphFunction) // @ game+0x1af5410
};

