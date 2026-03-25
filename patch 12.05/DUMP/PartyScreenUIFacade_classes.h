// BlueprintGeneratedClass PartyScreenUIFacade.PartyScreenUIFacade_C
// Size: 0x69 (Inherited: 0x38)
struct UPartyScreenUIFacade_C : UObjectWithWorldContext {
	struct UFixedSlotMapToListModel* PartySlotListModel; // 0x38(0x08)
	int32_t SlotCount; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TScriptInterface<IUnorderedMapModel> PartyMemberMapModel; // 0x48(0x10)
	struct UPartyModel* PartyModel; // 0x58(0x08)
	struct UPartyMemberMapModelAudioPlayer_C* PartyMemberAudioPlayer; // 0x60(0x08)
	bool ScreenActive; // 0x68(0x01)

	void HandleScreenActiveChanged(); // Function PartyScreenUIFacade.PartyScreenUIFacade_C.HandleScreenActiveChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetScreenActive(bool NewValue); // Function PartyScreenUIFacade.PartyScreenUIFacade_C.SetScreenActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct TScriptInterface<IOrderedListModel> GetPartyMemberListModel(); // Function PartyScreenUIFacade.PartyScreenUIFacade_C.GetPartyMemberListModel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void UpdatePartyMemberMapModel(); // Function PartyScreenUIFacade.PartyScreenUIFacade_C.UpdatePartyMemberMapModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPartyModel(struct UPartyModel* NewValue); // Function PartyScreenUIFacade.PartyScreenUIFacade_C.SetPartyModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPartyMemberMapModel(struct TScriptInterface<IUnorderedMapModel> NewValue); // Function PartyScreenUIFacade.PartyScreenUIFacade_C.SetPartyMemberMapModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FIndexRange DeterminePlayerSlot(struct FWildcard& Item); // Function PartyScreenUIFacade.PartyScreenUIFacade_C.DeterminePlayerSlot // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(); // Function PartyScreenUIFacade.PartyScreenUIFacade_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

