// WidgetBlueprintGeneratedClass RosterView.RosterView_C
// Size: 0x3c8 (Inherited: 0x318)
struct URosterView_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct URosterListEntry_C* RosterListEntry1; // 0x320(0x08)
	struct URosterListEntry_C* RosterListEntry2; // 0x328(0x08)
	struct URosterListEntry_C* RosterListEntry3; // 0x330(0x08)
	struct URosterListEntry_C* RosterListEntry4; // 0x338(0x08)
	struct URosterListEntry_C* RosterListEntry5; // 0x340(0x08)
	struct URosterListEntry_C* RosterListEntry6; // 0x348(0x08)
	struct URosterListEntry_C* RosterListEntry7; // 0x350(0x08)
	struct URosterModel* RosterModel; // 0x358(0x08)
	struct TArray<struct URosterListEntry_C*> RosterListEntries; // 0x360(0x10)
	struct UPremierRosterViewController* PremierRosterViewController; // 0x370(0x08)
	struct FPremierRosterRestrictions Premier Roster Restrictions; // 0x378(0x50)

	void Get Roster Restrictions(); // Function RosterView.RosterView_C.Get Roster Restrictions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Sort Roster List by Role(struct UObject* Left, struct UObject* Right, bool& bIsLeftLessThanRight); // Function RosterView.RosterView_C.Sort Roster List by Role // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Build Roster List Entries(); // Function RosterView.RosterView_C.Build Roster List Entries // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct URosterModel* RosterModel, struct UPremierRosterViewController* PremierRosterViewController, bool Hide RosterLocks); // Function RosterView.RosterView_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Populate List(); // Function RosterView.RosterView_C.Populate List // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function RosterView.RosterView_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function RosterView.RosterView_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnRosterModelUpdate(); // Function RosterView.RosterView_C.OnRosterModelUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializedWithModel(); // Function RosterView.RosterView_C.InitializedWithModel // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRemovePlayerEvent(struct FString Subject); // Function RosterView.RosterView_C.OnRemovePlayerEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTransferOwnershipEvent(struct FString Subject, struct FString Game Name, struct FString Tag Line); // Function RosterView.RosterView_C.OnTransferOwnershipEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Premier Eligibility Error(); // Function RosterView.RosterView_C.Premier Eligibility Error // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Premier Roster Restrictions Response(struct FPremierRosterRestrictions& PremierRosterRestrictions); // Function RosterView.RosterView_C.Premier Roster Restrictions Response // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_RosterView(int32_t EntryPoint); // Function RosterView.RosterView_C.ExecuteUbergraph_RosterView // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

