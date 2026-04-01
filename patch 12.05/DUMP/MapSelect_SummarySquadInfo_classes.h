// WidgetBlueprintGeneratedClass MapSelect_SummarySquadInfo.MapSelect_SummarySquadInfo_C
// Size: 0x3f8 (Inherited: 0x3d0)
struct UMapSelect_SummarySquadInfo_C : UMapSelect_SquadInfoBase_C {
	struct UImage* BackgroundFill; // 0x3d0(0x08)
	struct UImage* SideColorImage; // 0x3d8(0x08)
	struct UTextBlock* SideText; // 0x3e0(0x08)
	struct UTextBlock* SquadNameText; // 0x3e8(0x08)
	struct UTextBlock* SquadTagText; // 0x3f0(0x08)

	void SetSide(enum class EPregameTeamID Side); // Function MapSelect_SummarySquadInfo.MapSelect_SummarySquadInfo_C.SetSide // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(); // Function MapSelect_SummarySquadInfo.MapSelect_SummarySquadInfo_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

