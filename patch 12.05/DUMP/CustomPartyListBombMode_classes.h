// WidgetBlueprintGeneratedClass CustomPartyListBombMode.CustomPartyListBombMode_C
// Size: 0x390 (Inherited: 0x318)
struct UCustomPartyListBombMode_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* AttackerBar; // 0x320(0x08)
	struct UDefendPartyMemberListV2_C* AttackerMemberList; // 0x328(0x08)
	struct UOverlay* AttackerOverlay; // 0x330(0x08)
	struct UTextBlock* AttackersText; // 0x338(0x08)
	struct UImage* DefenderBar; // 0x340(0x08)
	struct UDefendPartyMemberListV2_C* DefenderMemberList; // 0x348(0x08)
	struct UOverlay* DefenderOverlay; // 0x350(0x08)
	struct UTextBlock* DefendersText; // 0x358(0x08)
	struct UImage* FFABar; // 0x360(0x08)
	struct UOverlay* FFAOverlay; // 0x368(0x08)
	struct UTextBlock* FFAText; // 0x370(0x08)
	struct UPartyModel* PartyModel; // 0x378(0x08)
	struct UPartyViewController* PartyViewController; // 0x380(0x08)
	struct UGameModeDataAsset* GameMode; // 0x388(0x08)

	void IsModeFFA(struct UGameModeDataAsset* Mode, bool& IsFFA); // Function CustomPartyListBombMode.CustomPartyListBombMode_C.IsModeFFA // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void OnMyTeamChanged(enum class ECustomGameTeam Team); // Function CustomPartyListBombMode.CustomPartyListBombMode_C.OnMyTeamChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPlayerTeamChange(struct UPartyPlayerModel* Player); // Function CustomPartyListBombMode.CustomPartyListBombMode_C.OnPlayerTeamChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateTeamAndFlags(); // Function CustomPartyListBombMode.CustomPartyListBombMode_C.UpdateTeamAndFlags // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function CustomPartyListBombMode.CustomPartyListBombMode_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Init(struct UCustomGameUIFacade_C* Facade); // Function CustomPartyListBombMode.CustomPartyListBombMode_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromParty(); // Function CustomPartyListBombMode.CustomPartyListBombMode_C.UnbindFromParty // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnModeChanged(struct FString NewValue); // Function CustomPartyListBombMode.CustomPartyListBombMode_C.OnModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CustomPartyListBombMode(int32_t EntryPoint); // Function CustomPartyListBombMode.CustomPartyListBombMode_C.ExecuteUbergraph_CustomPartyListBombMode // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

