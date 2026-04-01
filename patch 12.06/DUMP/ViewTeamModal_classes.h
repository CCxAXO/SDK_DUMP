// WidgetBlueprintGeneratedClass ViewTeamModal.ViewTeamModal_C
// Size: 0x3c8 (Inherited: 0x318)
struct UViewTeamModal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Borderline1; // 0x320(0x08)
	struct UImage* Borderline1_2; // 0x328(0x08)
	struct UViewTeamStatEntry_C* ConferenceStat; // 0x330(0x08)
	struct UViewTeamStatEntry_C* DivisionStat; // 0x338(0x08)
	struct UImage* IMGPremierBG; // 0x340(0x08)
	struct UImage* Loader; // 0x348(0x08)
	struct UWidgetSwitcher* LoadingSwitcher; // 0x350(0x08)
	struct UTextBlock* NumberOfMembers; // 0x358(0x08)
	struct UViewTeamStatEntry_C* PremierScoreStat; // 0x360(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x368(0x08)
	struct UTournamentsTeamDisplay_C* TournamentsTeamDisplay; // 0x370(0x08)
	struct UViewTeamRosterEntry_C* ViewTeamRosterEntry1; // 0x378(0x08)
	struct UViewTeamRosterEntry_C* ViewTeamRosterEntry2; // 0x380(0x08)
	struct UViewTeamRosterEntry_C* ViewTeamRosterEntry3; // 0x388(0x08)
	struct UViewTeamRosterEntry_C* ViewTeamRosterEntry4; // 0x390(0x08)
	struct UViewTeamRosterEntry_C* ViewTeamRosterEntry5; // 0x398(0x08)
	struct UViewTeamRosterEntry_C* ViewTeamRosterEntry6; // 0x3a0(0x08)
	struct UViewTeamRosterEntry_C* ViewTeamRosterEntry7; // 0x3a8(0x08)
	struct TArray<struct UViewTeamRosterEntry_C*> ViewTeamRosterEntryArray; // 0x3b0(0x10)
	struct UPremierRosterModelV2* PremierRosterModelV2; // 0x3c0(0x08)

	void IsRosterModelValid(bool& IsValid); // Function ViewTeamModal.ViewTeamModal_C.IsRosterModelValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateTeamInfoStats(); // Function ViewTeamModal.ViewTeamModal_C.UpdateTeamInfoStats // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateTeamInfoCustomization(); // Function ViewTeamModal.ViewTeamModal_C.UpdateTeamInfoCustomization // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PopulateRosterMemberEntries(); // Function ViewTeamModal.ViewTeamModal_C.PopulateRosterMemberEntries // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function ViewTeamModal.ViewTeamModal_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function ViewTeamModal.ViewTeamModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Init(struct FString RosterID); // Function ViewTeamModal.ViewTeamModal_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnFetchSuccess(struct UPremierRosterModelV2* PremierRosterModelV2); // Function ViewTeamModal.ViewTeamModal_C.OnFetchSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnFetchError(); // Function ViewTeamModal.ViewTeamModal_C.OnFetchError // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ViewTeamModal_SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature(); // Function ViewTeamModal.ViewTeamModal_C.BndEvt__ViewTeamModal_SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ViewTeamModal(int32_t EntryPoint); // Function ViewTeamModal.ViewTeamModal_C.ExecuteUbergraph_ViewTeamModal // (Final|UbergraphFunction) // @ game+0x1b42740
};

