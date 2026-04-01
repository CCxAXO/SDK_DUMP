// WidgetBlueprintGeneratedClass SpectatePartyMemberListV2.SpectatePartyMemberListV2_C
// Size: 0x424 (Inherited: 0x318)
struct USpectatePartyMemberListV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Intro; // 0x320(0x08)
	struct UPlayScreenSpectateMemberListing_C* PlayScreenSpectateMemberListing1; // 0x328(0x08)
	struct UPlayScreenSpectateMemberListing_C* PlayScreenSpectateMemberListing10; // 0x330(0x08)
	struct UPlayScreenSpectateMemberListing_C* PlayScreenSpectateMemberListing11; // 0x338(0x08)
	struct UPlayScreenSpectateMemberListing_C* PlayScreenSpectateMemberListing12; // 0x340(0x08)
	struct UPlayScreenSpectateMemberListing_C* PlayScreenSpectateMemberListing2; // 0x348(0x08)
	struct UPlayScreenSpectateMemberListing_C* PlayScreenSpectateMemberListing3; // 0x350(0x08)
	struct UPlayScreenSpectateMemberListing_C* PlayScreenSpectateMemberListing4; // 0x358(0x08)
	struct UPlayScreenSpectateMemberListing_C* PlayScreenSpectateMemberListing5; // 0x360(0x08)
	struct UPlayScreenSpectateMemberListing_C* PlayScreenSpectateMemberListing6; // 0x368(0x08)
	struct UPlayScreenSpectateMemberListing_C* PlayScreenSpectateMemberListing7; // 0x370(0x08)
	struct UPlayScreenSpectateMemberListing_C* PlayScreenSpectateMemberListing8; // 0x378(0x08)
	struct UPlayScreenSpectateMemberListing_C* PlayScreenSpectateMemberListing9; // 0x380(0x08)
	struct UPartyViewController* ViewController; // 0x388(0x08)
	struct UPartyModel* Model; // 0x390(0x08)
	struct TMap<struct UPartyPlayerModel*, struct UPlayScreenSpectateMemberListing_C*> PlayerToWidgetMap; // 0x398(0x50)
	struct TArray<struct UPlayScreenSpectateMemberListing_C*> AllPlayerWidgets; // 0x3e8(0x10)
	struct FName PartyObserversEnabledConfig; // 0x3f8(0x0c)
	struct FName PartyTournamentModeObserversConfig; // 0x404(0x0c)
	struct TArray<struct UPlayScreenSpectateMemberListing_C*> EnabledPlayerWidgets; // 0x410(0x10)
	int32_t MaxDesiredRows; // 0x420(0x04)

	void UpdateEnabledSlots(bool TournamentModeEnabled); // Function SpectatePartyMemberListV2.SpectatePartyMemberListV2_C.UpdateEnabledSlots // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetEnabledObserverSlot(struct UPlayScreenSpectateMemberListing_C* Widget, bool Enabled); // Function SpectatePartyMemberListV2.SpectatePartyMemberListV2_C.SetEnabledObserverSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RemovePlayer(struct UPartyPlayerModel* PlayerToRemove); // Function SpectatePartyMemberListV2.SpectatePartyMemberListV2_C.RemovePlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitPartyState(); // Function SpectatePartyMemberListV2.SpectatePartyMemberListV2_C.InitPartyState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddPlayer(struct UPartyPlayerModel* player model); // Function SpectatePartyMemberListV2.SpectatePartyMemberListV2_C.AddPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function SpectatePartyMemberListV2.SpectatePartyMemberListV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Init(); // Function SpectatePartyMemberListV2.SpectatePartyMemberListV2_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerAddedToSpectate(struct UPartyPlayerModel* Player); // Function SpectatePartyMemberListV2.SpectatePartyMemberListV2_C.OnPlayerAddedToSpectate // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerRemovedFromSpectate(struct UPartyPlayerModel* Player); // Function SpectatePartyMemberListV2.SpectatePartyMemberListV2_C.OnPlayerRemovedFromSpectate // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTournamentModeChanged(bool TournamentModeEnabled); // Function SpectatePartyMemberListV2.SpectatePartyMemberListV2_C.OnTournamentModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GameRuleBoolChanged(enum class EGameRuleBoolName GameRuleName, bool bEnabled); // Function SpectatePartyMemberListV2.SpectatePartyMemberListV2_C.GameRuleBoolChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SpectatePartyMemberListV2(int32_t EntryPoint); // Function SpectatePartyMemberListV2.SpectatePartyMemberListV2_C.ExecuteUbergraph_SpectatePartyMemberListV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

