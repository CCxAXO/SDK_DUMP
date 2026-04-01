// WidgetBlueprintGeneratedClass ViewTeamStatEntry.ViewTeamStatEntry_C
// Size: 0x354 (Inherited: 0x318)
struct UViewTeamStatEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* ConferenceIcon; // 0x320(0x08)
	struct UImage* DivisionIcon; // 0x328(0x08)
	struct UTextBlock* LabelText; // 0x330(0x08)
	struct UTextBlock* MainText; // 0x338(0x08)
	struct UImage* PremierIcon; // 0x340(0x08)
	struct UWidgetSwitcher* StatTypeSwitcher; // 0x348(0x08)
	int32_t StatType; // 0x350(0x04)

	void SetConference(struct UTexture2D* ConferenceTexture); // Function ViewTeamStatEntry.ViewTeamStatEntry_C.SetConference // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetDivision(struct UTexture2D* DivisionTexture); // Function ViewTeamStatEntry.ViewTeamStatEntry_C.SetDivision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMainText(struct FText MainText); // Function ViewTeamStatEntry.ViewTeamStatEntry_C.SetMainText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetStatType(int32_t StatType); // Function ViewTeamStatEntry.ViewTeamStatEntry_C.SetStatType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function ViewTeamStatEntry.ViewTeamStatEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ViewTeamStatEntry(int32_t EntryPoint); // Function ViewTeamStatEntry.ViewTeamStatEntry_C.ExecuteUbergraph_ViewTeamStatEntry // (Final|UbergraphFunction) // @ game+0x1b42740
};

