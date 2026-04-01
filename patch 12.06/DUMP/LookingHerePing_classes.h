// BlueprintGeneratedClass LookingHerePing.LookingHerePing_C
// Size: 0x818 (Inherited: 0x7e0)
struct ALookingHerePing_C : ABasePing_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7e0(0x08)
	struct FLinearColor Timeline_0_0_Color_8B92B84B4C040F0DF99D98B85D275FF9; // 0x7e8(0x10)
	enum class ETimelineDirection Timeline_0_0__Direction_8B92B84B4C040F0DF99D98B85D275FF9; // 0x7f8(0x01)
	char pad_7F9[0x7]; // 0x7f9(0x07)
	struct UTimelineComponent* Timeline_0_1; // 0x800(0x08)
	bool isTimerActive; // 0x808(0x01)
	char pad_809[0x7]; // 0x809(0x07)
	struct FTimerHandle activeTimerHandle; // 0x810(0x08)

	void RemoveOtherPingsOfType(); // Function LookingHerePing.LookingHerePing_C.RemoveOtherPingsOfType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Timeline_0_0__FinishedFunc(); // Function LookingHerePing.LookingHerePing_C.Timeline_0_0__FinishedFunc // (BlueprintEvent) // @ game+0x1b42740
	void Timeline_0_0__UpdateFunc(); // Function LookingHerePing.LookingHerePing_C.Timeline_0_0__UpdateFunc // (BlueprintEvent) // @ game+0x1b42740
	void ReceiveTick(float DeltaSeconds); // Function LookingHerePing.LookingHerePing_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void playerNoLongerWatching(); // Function LookingHerePing.LookingHerePing_C.playerNoLongerWatching // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_LookingHerePing(int32_t EntryPoint); // Function LookingHerePing.LookingHerePing_C.ExecuteUbergraph_LookingHerePing // (Final|UbergraphFunction) // @ game+0x1b42740
};

