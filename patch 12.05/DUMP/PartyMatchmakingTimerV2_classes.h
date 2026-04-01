// WidgetBlueprintGeneratedClass PartyMatchmakingTimerV2.PartyMatchmakingTimerV2_C
// Size: 0x340 (Inherited: 0x318)
struct UPartyMatchmakingTimerV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* TimeText; // 0x320(0x08)
	struct FTimerHandle Timer; // 0x328(0x08)
	struct UPartyModel* Model; // 0x330(0x08)
	struct FDateTime Time; // 0x338(0x08)

	void SetModel(struct UPartyModel* NewParam); // Function PartyMatchmakingTimerV2.PartyMatchmakingTimerV2_C.SetModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateView(); // Function PartyMatchmakingTimerV2.PartyMatchmakingTimerV2_C.UpdateView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMatchmakingChanged(bool NewValue); // Function PartyMatchmakingTimerV2.PartyMatchmakingTimerV2_C.OnMatchmakingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTimerTick(); // Function PartyMatchmakingTimerV2.PartyMatchmakingTimerV2_C.OnTimerTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(); // Function PartyMatchmakingTimerV2.PartyMatchmakingTimerV2_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function PartyMatchmakingTimerV2.PartyMatchmakingTimerV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PartyMatchmakingTimerV2(int32_t EntryPoint); // Function PartyMatchmakingTimerV2.PartyMatchmakingTimerV2_C.ExecuteUbergraph_PartyMatchmakingTimerV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

