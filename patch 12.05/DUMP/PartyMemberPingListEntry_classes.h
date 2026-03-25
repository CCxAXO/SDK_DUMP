// WidgetBlueprintGeneratedClass PartyMemberPingListEntry.PartyMemberPingListEntry_C
// Size: 0x340 (Inherited: 0x318)
struct UPartyMemberPingListEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAresCommonRichText* GamePodText; // 0x320(0x08)
	struct UImage* PingIcon; // 0x328(0x08)
	struct UAresCommonText* PingText; // 0x330(0x08)
	struct UMaterialInstanceDynamic* DMIPing; // 0x338(0x08)

	void TryInit(struct FPingInfo& PingInfo, bool& Succeed); // Function PartyMemberPingListEntry.PartyMemberPingListEntry_C.TryInit // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function PartyMemberPingListEntry.PartyMemberPingListEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function PartyMemberPingListEntry.PartyMemberPingListEntry_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PartyMemberPingListEntry(int32_t EntryPoint); // Function PartyMemberPingListEntry.PartyMemberPingListEntry_C.ExecuteUbergraph_PartyMemberPingListEntry // (Final|UbergraphFunction) // @ game+0x1af5410
};

