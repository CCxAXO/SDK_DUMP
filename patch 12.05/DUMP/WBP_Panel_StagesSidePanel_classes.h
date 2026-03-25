// WidgetBlueprintGeneratedClass WBP_Panel_StagesSidePanel.WBP_Panel_StagesSidePanel_C
// Size: 0x398 (Inherited: 0x318)
struct UWBP_Panel_StagesSidePanel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetSwitcher* PlatformWidgetSwitcher_Groups; // 0x320(0x08)
	struct UWidgetSwitcher* PlatformWidgetSwitcher_Playoffs; // 0x328(0x08)
	struct USizeBox* SizeBox_Arrow; // 0x330(0x08)
	struct USizeBox* SizeBox_Groups; // 0x338(0x08)
	struct USizeBox* SizeBox_Playoffs; // 0x340(0x08)
	struct UWBP_Panel_PickemPickBlock_C* WBP_Panel_StageInfo_Groups; // 0x348(0x08)
	struct UWBP_Panel_PickemPickBlock_Console_C* WBP_Panel_StageInfo_Groups_Console; // 0x350(0x08)
	struct UWBP_Panel_PickemPickBlock_C* WBP_Panel_StageInfo_Playoffs; // 0x358(0x08)
	struct UWBP_Panel_PickemPickBlock_Console_C* WBP_Panel_StageInfo_Playoffs_Console; // 0x360(0x08)
	struct FName ObservedTournamentConfigName; // 0x368(0x0c)
	char pad_374[0x4]; // 0x374(0x04)
	struct FString TournamentSlug; // 0x378(0x10)
	struct FString TournamentID; // 0x388(0x10)

	void InitPickemEventVMsForPickBlocks(); // Function WBP_Panel_StagesSidePanel.WBP_Panel_StagesSidePanel_C.InitPickemEventVMsForPickBlocks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StyleSingularPickBlock(bool bIsEmpty); // Function WBP_Panel_StagesSidePanel.WBP_Panel_StagesSidePanel_C.StyleSingularPickBlock // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeWithPickBlocks(struct UPickemBlockModel* GroupsPickBlock, struct UPickemBlockModel* PlayoffsPickBlock); // Function WBP_Panel_StagesSidePanel.WBP_Panel_StagesSidePanel_C.InitializeWithPickBlocks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_StagesSidePanel.WBP_Panel_StagesSidePanel_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_StagesSidePanel(int32_t EntryPoint); // Function WBP_Panel_StagesSidePanel.WBP_Panel_StagesSidePanel_C.ExecuteUbergraph_WBP_Panel_StagesSidePanel // (Final|UbergraphFunction) // @ game+0x1af5410
};

