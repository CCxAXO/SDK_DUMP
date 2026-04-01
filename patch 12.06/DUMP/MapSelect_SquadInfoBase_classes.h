// WidgetBlueprintGeneratedClass MapSelect_SquadInfoBase.MapSelect_SquadInfoBase_C
// Size: 0x3d0 (Inherited: 0x318)
struct UMapSelect_SquadInfoBase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	bool bIsYourTeam; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct FTournamentRosterInfo Roster; // 0x328(0x80)
	struct UTextBlock* SquadName; // 0x3a8(0x08)
	struct UTextBlock* SquadTag; // 0x3b0(0x08)
	struct UTournamentsTeamCustomization_C* TeamCustomization; // 0x3b8(0x08)
	struct TArray<struct UWidget*> FlippedWidgets; // 0x3c0(0x10)

	void set Roster(struct FTournamentRosterInfo In Roster); // Function MapSelect_SquadInfoBase.MapSelect_SquadInfoBase_C.set Roster // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(); // Function MapSelect_SquadInfoBase.MapSelect_SquadInfoBase_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function MapSelect_SquadInfoBase.MapSelect_SquadInfoBase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function MapSelect_SquadInfoBase.MapSelect_SquadInfoBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MapSelect_SquadInfoBase(int32_t EntryPoint); // Function MapSelect_SquadInfoBase.MapSelect_SquadInfoBase_C.ExecuteUbergraph_MapSelect_SquadInfoBase // (Final|UbergraphFunction) // @ game+0x1b42740
};

