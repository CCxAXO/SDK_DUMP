// WidgetBlueprintGeneratedClass ViewTeamRosterEntry.ViewTeamRosterEntry_C
// Size: 0x361 (Inherited: 0x318)
struct UViewTeamRosterEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetSwitcher* EntrySwitcher; // 0x320(0x08)
	struct UImage* IMGEmptyBackground; // 0x328(0x08)
	struct UImage* MemberBackgroundImage; // 0x330(0x08)
	struct UOverlay* NoRoleIcon; // 0x338(0x08)
	struct UPlayerNameWidget_C* PlayerNameWidget; // 0x340(0x08)
	struct UWidgetSwitcher* RoleIconWidgetSwitcher; // 0x348(0x08)
	struct UImage* RosterCaptainIcon; // 0x350(0x08)
	struct UImage* RosterOwnerIcon; // 0x358(0x08)
	bool IsEmpty; // 0x360(0x01)

	void UpdateEntrySlot(struct UPremierRosterMemberModel* PremierRosterMemberModel); // Function ViewTeamRosterEntry.ViewTeamRosterEntry_C.UpdateEntrySlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function ViewTeamRosterEntry.ViewTeamRosterEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ViewTeamRosterEntry.ViewTeamRosterEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ViewTeamRosterEntry(int32_t EntryPoint); // Function ViewTeamRosterEntry.ViewTeamRosterEntry_C.ExecuteUbergraph_ViewTeamRosterEntry // (Final|UbergraphFunction) // @ game+0x1af5410
};

