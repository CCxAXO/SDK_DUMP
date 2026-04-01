// WidgetBlueprintGeneratedClass CharacterSelectTeamStateV2.CharacterSelectTeamStateV2_C
// Size: 0x368 (Inherited: 0x320)
struct UCharacterSelectTeamStateV2_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UCharacterSelectPlayerStateV2_C* Player1; // 0x328(0x08)
	struct UCharacterSelectPlayerStateV2_C* Player2; // 0x330(0x08)
	struct UCharacterSelectPlayerStateV2_C* Player3; // 0x338(0x08)
	struct UCharacterSelectPlayerStateV2_C* Player4; // 0x340(0x08)
	struct UCharacterSelectPlayerStateV2_C* Player5; // 0x348(0x08)
	struct TArray<struct UCharacterSelectPlayerStateV2_C*> PlayerWidgets; // 0x350(0x10)
	struct UPregameTeamModel* TeamModel; // 0x360(0x08)

	void UpdatePlayers(); // Function CharacterSelectTeamStateV2.CharacterSelectTeamStateV2_C.UpdatePlayers // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePlayerAddedOrRemoved(struct UPregamePlayerModel* AddedPlayer); // Function CharacterSelectTeamStateV2.CharacterSelectTeamStateV2_C.HandlePlayerAddedOrRemoved // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(struct UPregameTeamModel* TeamModel, struct UPregameViewController* PregameViewController); // Function CharacterSelectTeamStateV2.CharacterSelectTeamStateV2_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function CharacterSelectTeamStateV2.CharacterSelectTeamStateV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CharacterSelectTeamStateV2(int32_t EntryPoint); // Function CharacterSelectTeamStateV2.CharacterSelectTeamStateV2_C.ExecuteUbergraph_CharacterSelectTeamStateV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

