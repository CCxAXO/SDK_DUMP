// WidgetBlueprintGeneratedClass PremierRosterNameWidget.PremierRosterNameWidget_C
// Size: 0x380 (Inherited: 0x318)
struct UPremierRosterNameWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAresTextBlock* RosterNameText; // 0x320(0x08)
	struct UAresTextBlock* RosterTagText; // 0x328(0x08)
	struct FSlateColor DefaultNameColor; // 0x330(0x14)
	struct FSlateColor DefaultTagColor; // 0x344(0x14)
	struct FSlateColor TeamHighlightedNameColor; // 0x358(0x14)
	struct FSlateColor TeamHighlightedTagColor; // 0x36c(0x14)

	void SetHighlight(bool IsDefault); // Function PremierRosterNameWidget.PremierRosterNameWidget_C.SetHighlight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Roster Name(struct FString NewRosterName, struct FString NewRosterTag); // Function PremierRosterNameWidget.PremierRosterNameWidget_C.Set Roster Name // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function PremierRosterNameWidget.PremierRosterNameWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PremierRosterNameWidget(int32_t EntryPoint); // Function PremierRosterNameWidget.PremierRosterNameWidget_C.ExecuteUbergraph_PremierRosterNameWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};

