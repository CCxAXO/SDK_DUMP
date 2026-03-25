// WidgetBlueprintGeneratedClass MapSelect_HeaderSquadInfo.MapSelect_HeaderSquadInfo_C
// Size: 0x401 (Inherited: 0x3d0)
struct UMapSelect_HeaderSquadInfo_C : UMapSelect_SquadInfoBase_C {
	struct UWidgetAnimation* SetActiveAnim; // 0x3d0(0x08)
	struct UImage* BackgroundFill; // 0x3d8(0x08)
	struct UImage* IMG_ColorBarThick; // 0x3e0(0x08)
	struct UImage* IMG_ColorBarThin; // 0x3e8(0x08)
	struct UTextBlock* SquadNameText; // 0x3f0(0x08)
	struct UTextBlock* SquadTagText; // 0x3f8(0x08)
	bool bIsActive; // 0x400(0x01)

	void set Roster(struct FTournamentRosterInfo In Roster); // Function MapSelect_HeaderSquadInfo.MapSelect_HeaderSquadInfo_C.set Roster // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(); // Function MapSelect_HeaderSquadInfo.MapSelect_HeaderSquadInfo_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetActive(bool bInIsActive); // Function MapSelect_HeaderSquadInfo.MapSelect_HeaderSquadInfo_C.SetActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

