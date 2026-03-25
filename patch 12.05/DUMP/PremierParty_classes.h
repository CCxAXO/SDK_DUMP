// WidgetBlueprintGeneratedClass PremierParty.PremierParty_C
// Size: 0x3d0 (Inherited: 0x318)
struct UPremierParty_C : UPremierParty_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Intro; // 0x320(0x08)
	struct UDynamicConfigSwitcher_C* DebugEventSelector_ConfigSwitcher; // 0x328(0x08)
	struct UOverlay* EventBanners; // 0x330(0x08)
	struct UHorizontalBox* HorizListContainer; // 0x338(0x08)
	struct UImage* Img_PremierFogLight; // 0x340(0x08)
	struct UImage* Img_TournamentBG; // 0x348(0x08)
	struct UImage* IMG_WIP; // 0x350(0x08)
	struct UPartyAccessibilitySettings_PC_C* PartyAccessibilitySettings_PC; // 0x358(0x08)
	struct UPlayScreenPartyMemberListingV2_PC_C* PlayScreenPartyMemberListing1; // 0x360(0x08)
	struct UPlayScreenPartyMemberListingV2_PC_C* PlayScreenPartyMemberListing2; // 0x368(0x08)
	struct UPlayScreenPartyMemberListingV2_PC_C* PlayScreenPartyMemberListing4; // 0x370(0x08)
	struct UPlayScreenPartyMemberListingV2_PC_C* PlayScreenPartyMemberListing5; // 0x378(0x08)
	struct UPremierEventNotification_C* PremierEventNotification; // 0x380(0x08)
	struct UQueueRestrictionIndicator_C* QueueRestrictionIndicator; // 0x388(0x08)
	struct UPlayScreenPartyMemberListingV2_PC_C* SelfPartyMemberWidget; // 0x390(0x08)
	struct UPartyModel* PartyModel; // 0x398(0x08)
	struct UPartyViewController* PartyViewController; // 0x3a0(0x08)
	struct UPartyScreenUIFacade_C* PartyFacade; // 0x3a8(0x08)
	struct UPreconstructedWidgetListModelMediator* PartyListMediator; // 0x3b0(0x08)
	struct UUserWidget* PartyInvitePanel; // 0x3b8(0x08)
	struct TArray<None> PlayerWidgets; // 0x3c0(0x10)

	void SequenceEvent__ENTRYPOINTPremierParty_1(); // Function PremierParty.PremierParty_C.SequenceEvent__ENTRYPOINTPremierParty_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent__ENTRYPOINTPremierParty(); // Function PremierParty.PremierParty_C.SequenceEvent__ENTRYPOINTPremierParty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(); // Function PremierParty.PremierParty_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitPartyState(); // Function PremierParty.PremierParty_C.InitPartyState // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OpenInvitePanel(); // Function PremierParty.PremierParty_C.OpenInvitePanel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePartyMemberActivated(struct UPartyPlayerModel* PartyPlayer, enum class PartyPlayerAction Action); // Function PremierParty.PremierParty_C.HandlePartyMemberActivated // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePartyMemberListItemActivated(struct UPreconstructedWidgetListModelMediator* Source, struct FListItemDisplayEntryActivatedEventData EventData); // Function PremierParty.PremierParty_C.HandlePartyMemberListItemActivated // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPartyListModel(struct TScriptInterface<IOrderedListModel> NewValue); // Function PremierParty.PremierParty_C.SetPartyListModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitPartyListMediator(); // Function PremierParty.PremierParty_C.InitPartyListMediator // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFacade(); // Function PremierParty.PremierParty_C.InitFacade // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitEventBanner(); // Function PremierParty.PremierParty_C.InitEventBanner // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent_2(); // Function PremierParty.PremierParty_C.SequenceEvent_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent_1(); // Function PremierParty.PremierParty_C.SequenceEvent_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayIntroAnimation(); // Function PremierParty.PremierParty_C.PlayIntroAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function PremierParty.PremierParty_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function PremierParty.PremierParty_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function PremierParty.PremierParty_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PremierParty(int32_t EntryPoint); // Function PremierParty.PremierParty_C.ExecuteUbergraph_PremierParty // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

