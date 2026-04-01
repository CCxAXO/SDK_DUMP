// WidgetBlueprintGeneratedClass WBP_TabbedBracketCell.WBP_TabbedBracketCell_C
// Size: 0x4e0 (Inherited: 0x3e0)
struct UWBP_TabbedBracketCell_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* BottomLeftExtention; // 0x3e8(0x08)
	struct UWBP_BracketLineAssembly_C* BracketLine1; // 0x3f0(0x08)
	struct UWBP_BracketLineAssembly_C* BracketLine2; // 0x3f8(0x08)
	struct UWBP_BracketLineAssembly_C* BracketLine3; // 0x400(0x08)
	struct UWBP_BracketLineAssembly_C* BracketLine4; // 0x408(0x08)
	struct UWidgetSwitcher* BracketSwither; // 0x410(0x08)
	struct UCanvasPanel* CanvasPanel_4; // 0x418(0x08)
	struct UHorizontalBox* HB_ROW1; // 0x420(0x08)
	struct UHorizontalBox* HB_ROW2; // 0x428(0x08)
	struct UImage* Image_53; // 0x430(0x08)
	struct UImage* Image_bg; // 0x438(0x08)
	struct UEsports_BracketMatchup_Small_C* MatchupA; // 0x440(0x08)
	struct UEsports_BracketMatchup_Small_C* MatchupB; // 0x448(0x08)
	struct UHorizontalBox* SwitchLowerAndUpperMessage; // 0x450(0x08)
	struct UAresCommonText* Text_BottomRight; // 0x458(0x08)
	struct UAresCommonText* Text_TopLeft; // 0x460(0x08)
	struct UImage* TopRightextention; // 0x468(0x08)
	struct UImage* VerticalLineBot; // 0x470(0x08)
	struct UImage* VerticalLineFull; // 0x478(0x08)
	struct UImage* VerticalLineUp; // 0x480(0x08)
	struct UWBP_Panel_TournamentAdvance_C* WBP_Panel_TournamentAdvance; // 0x488(0x08)
	struct FF_TabbedBracketCellConfig CellConfig; // 0x490(0x50)

	void UpdateMatchupIDs(); // Function WBP_TabbedBracketCell.WBP_TabbedBracketCell_C.UpdateMatchupIDs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetValidMatchupsWidgets(struct TArray<struct UWBP_BaseBracketMatchup_C*>& OutMatchupWidgets); // Function WBP_TabbedBracketCell.WBP_TabbedBracketCell_C.GetValidMatchupsWidgets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetConfig(struct FF_TabbedBracketCellConfig InCellConfig); // Function WBP_TabbedBracketCell.WBP_TabbedBracketCell_C.SetConfig // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateCell(); // Function WBP_TabbedBracketCell.WBP_TabbedBracketCell_C.UpdateCell // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Style Cell(); // Function WBP_TabbedBracketCell.WBP_TabbedBracketCell_C.Style Cell // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Cell Line Behavior(); // Function WBP_TabbedBracketCell.WBP_TabbedBracketCell_C.Set Cell Line Behavior // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Style Outgoing Line(); // Function WBP_TabbedBracketCell.WBP_TabbedBracketCell_C.Style Outgoing Line // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Style Incoming Line(); // Function WBP_TabbedBracketCell.WBP_TabbedBracketCell_C.Style Incoming Line // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_TabbedBracketCell.WBP_TabbedBracketCell_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_TabbedBracketCell(int32_t EntryPoint); // Function WBP_TabbedBracketCell.WBP_TabbedBracketCell_C.ExecuteUbergraph_WBP_TabbedBracketCell // (Final|UbergraphFunction) // @ game+0x1af5410
};

