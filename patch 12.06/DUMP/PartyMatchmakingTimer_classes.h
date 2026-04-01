// WidgetBlueprintGeneratedClass PartyMatchmakingTimer.PartyMatchmakingTimer_C
// Size: 0x340 (Inherited: 0x318)
struct UPartyMatchmakingTimer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* TimeText; // 0x320(0x08)
	struct FTimerHandle Timer; // 0x328(0x08)
	struct UPartyModel* Model; // 0x330(0x08)
	struct FDateTime Time; // 0x338(0x08)

	void SetModel(struct UPartyModel* NewParam); // Function PartyMatchmakingTimer.PartyMatchmakingTimer_C.SetModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateView(); // Function PartyMatchmakingTimer.PartyMatchmakingTimer_C.UpdateView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMatchmakingChanged(bool NewValue); // Function PartyMatchmakingTimer.PartyMatchmakingTimer_C.OnMatchmakingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTimerTick(); // Function PartyMatchmakingTimer.PartyMatchmakingTimer_C.OnTimerTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(); // Function PartyMatchmakingTimer.PartyMatchmakingTimer_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function PartyMatchmakingTimer.PartyMatchmakingTimer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PartyMatchmakingTimer(int32_t EntryPoint); // Function PartyMatchmakingTimer.PartyMatchmakingTimer_C.ExecuteUbergraph_PartyMatchmakingTimer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

