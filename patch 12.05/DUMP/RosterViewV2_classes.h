// WidgetBlueprintGeneratedClass RosterViewV2.RosterViewV2_C
// Size: 0x378 (Inherited: 0x318)
struct URosterViewV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct URosterListEntryV2_C* RosterListEntryV2_2; // 0x320(0x08)
	struct URosterListEntryV2_C* RosterListEntryV2_3; // 0x328(0x08)
	struct URosterListEntryV2_C* RosterListEntryV2_4; // 0x330(0x08)
	struct URosterListEntryV2_C* RosterListEntryV2_5; // 0x338(0x08)
	struct URosterListEntryV2_C* RosterListEntryV2_6; // 0x340(0x08)
	struct URosterListEntryV2_C* RosterListEntryV2_7; // 0x348(0x08)
	struct URosterListEntryV2_C* RosterListEntryV2_8; // 0x350(0x08)
	struct TArray<None> RosterListEntries; // 0x358(0x10)
	struct UPremierRosterVM* RosterVM; // 0x368(0x08)
	struct UPremierRosterListFunctionsVM* RosterFunctionsVM; // 0x370(0x08)

	void Refresh Roster Restrictions(); // Function RosterViewV2.RosterViewV2_C.Refresh Roster Restrictions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Sort Roster List by Role(struct UObject* Left, struct UObject* Right, bool& bIsLeftLessThanRight); // Function RosterViewV2.RosterViewV2_C.Sort Roster List by Role // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Build Roster List Entries(); // Function RosterViewV2.RosterViewV2_C.Build Roster List Entries // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(); // Function RosterViewV2.RosterViewV2_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Populate List(); // Function RosterViewV2.RosterViewV2_C.Populate List // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function RosterViewV2.RosterViewV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function RosterViewV2.RosterViewV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnRosterModelUpdate(); // Function RosterViewV2.RosterViewV2_C.OnRosterModelUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializedWithModel(); // Function RosterViewV2.RosterViewV2_C.InitializedWithModel // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRemovePlayerEvent(struct FString Subject); // Function RosterViewV2.RosterViewV2_C.OnRemovePlayerEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTransferOwnershipEvent(struct FString Subject, struct FString Game Name, struct FString Tag Line); // Function RosterViewV2.RosterViewV2_C.OnTransferOwnershipEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Premier Eligibility Error(); // Function RosterViewV2.RosterViewV2_C.Premier Eligibility Error // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Premier Roster Restrictions Response(struct FPremierRosterRestrictions& PremierRosterRestrictions); // Function RosterViewV2.RosterViewV2_C.Premier Roster Restrictions Response // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CustomEvent(); // Function RosterViewV2.RosterViewV2_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CustomEvent_1(struct FString ReasonStringInDebugOnly); // Function RosterViewV2.RosterViewV2_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Restrictions Updated(); // Function RosterViewV2.RosterViewV2_C.Restrictions Updated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_RosterViewV2(int32_t EntryPoint); // Function RosterViewV2.RosterViewV2_C.ExecuteUbergraph_RosterViewV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

