// WidgetBlueprintGeneratedClass WBP_Panel_CustomLobbyTeam.WBP_Panel_CustomLobbyTeam_C
// Size: 0x570 (Inherited: 0x408)
struct UWBP_Panel_CustomLobbyTeam_C : UAresCommonWidgetPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UImage* ImgTitle; // 0x410(0x08)
	struct UAresCommonText* TxtTitle; // 0x418(0x08)
	struct FText Title; // 0x420(0x18)
	struct FText ActionText_MoveTeams; // 0x438(0x18)
	int32_t NumCells; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct FVector2D CellSize; // 0x458(0x10)
	struct FVector2D CellSizeObserversTournamentMode; // 0x468(0x10)
	struct FMargin CellPadding; // 0x478(0x10)
	struct TArray<None> Cells; // 0x488(0x10)
	double TitleHeight; // 0x498(0x08)
	struct FLinearColor CellBackgroundColor; // 0x4a0(0x10)
	struct FLinearColor CellEdgeColor; // 0x4b0(0x10)
	struct FLinearColor TitleColor; // 0x4c0(0x10)
	bool bShowHardEdge; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	struct FMulticastInlineDelegate OnRequestInvite; // 0x4d8(0x10)
	struct FMulticastInlineDelegate OnRequestMove; // 0x4e8(0x10)
	bool bHasLocalPlayer; // 0x4f8(0x01)
	bool bHasSetCellIconType; // 0x4f9(0x01)
	char pad_4FA[0x6]; // 0x4fa(0x06)
	struct FMulticastInlineDelegate OnPlayerClicked; // 0x500(0x10)
	bool bShowPlayerCardImage; // 0x510(0x01)
	char pad_511[0x3]; // 0x511(0x03)
	struct FLinearColor CellBackgroundFocusColorTop; // 0x514(0x10)
	struct FLinearColor CellBackgroundFocusColorBottom; // 0x524(0x10)
	struct FLinearColor CellBackgroundFocusColorBorder; // 0x534(0x10)
	char pad_544[0x4]; // 0x544(0x04)
	struct UUniformGridPanel* MyUniformGridPanel; // 0x548(0x08)
	struct FMulticastInlineDelegate OnPlayerDroppedIntoCell; // 0x550(0x10)
	enum class ECustomGameTeam TeamType; // 0x560(0x01)
	char pad_561[0x7]; // 0x561(0x07)
	struct UVM_CustomGame_TeamInfo_C* CustomGameTeamInfoVM; // 0x568(0x08)

	void GetMemberSlotIndex(struct FString Member, int32_t& SlotIndex); // Function WBP_Panel_CustomLobbyTeam.WBP_Panel_CustomLobbyTeam_C.GetMemberSlotIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePlayerDroppedIntoCell(struct FString PlayerSubject, struct UWBP_CPanel_CustomGameTeamCell_C* Cell); // Function WBP_Panel_CustomLobbyTeam.WBP_Panel_CustomLobbyTeam_C.HandlePlayerDroppedIntoCell // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindCellEvents(struct UWBP_CPanel_CustomGameTeamCell_C* InLobbyCell, bool Bind); // Function WBP_Panel_CustomLobbyTeam.WBP_Panel_CustomLobbyTeam_C.BindCellEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_CustomLobbyTeam.WBP_Panel_CustomLobbyTeam_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void Internal_OnCellClicked(struct UCommonButtonBase* Button); // Function WBP_Panel_CustomLobbyTeam.WBP_Panel_CustomLobbyTeam_C.Internal_OnCellClicked // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTeamMembers(struct TSet<struct FString> TeamMembers); // Function WBP_Panel_CustomLobbyTeam.WBP_Panel_CustomLobbyTeam_C.SetTeamMembers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateCells(int32_t NumCellsToCreate); // Function WBP_Panel_CustomLobbyTeam.WBP_Panel_CustomLobbyTeam_C.CreateCells // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetNumberOfVisibleCells(int32_t NumVisibleCells); // Function WBP_Panel_CustomLobbyTeam.WBP_Panel_CustomLobbyTeam_C.SetNumberOfVisibleCells // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetNumberOfCells(int32_t NumCells); // Function WBP_Panel_CustomLobbyTeam.WBP_Panel_CustomLobbyTeam_C.SetNumberOfCells // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_CustomLobbyTeam.WBP_Panel_CustomLobbyTeam_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_CustomLobbyTeam.WBP_Panel_CustomLobbyTeam_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_CustomLobbyTeam.WBP_Panel_CustomLobbyTeam_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_CustomLobbyTeam.WBP_Panel_CustomLobbyTeam_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_CustomLobbyTeam(int32_t EntryPoint); // Function WBP_Panel_CustomLobbyTeam.WBP_Panel_CustomLobbyTeam_C.ExecuteUbergraph_WBP_Panel_CustomLobbyTeam // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnPlayerDroppedIntoCell__DelegateSignature(struct FString PlayerSubject, struct UWBP_CPanel_CustomGameTeamCell_C* Cell); // Function WBP_Panel_CustomLobbyTeam.WBP_Panel_CustomLobbyTeam_C.OnPlayerDroppedIntoCell__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPlayerClicked__DelegateSignature(struct FString PlayerSubject); // Function WBP_Panel_CustomLobbyTeam.WBP_Panel_CustomLobbyTeam_C.OnPlayerClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRequestMove__DelegateSignature(); // Function WBP_Panel_CustomLobbyTeam.WBP_Panel_CustomLobbyTeam_C.OnRequestMove__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRequestInvite__DelegateSignature(); // Function WBP_Panel_CustomLobbyTeam.WBP_Panel_CustomLobbyTeam_C.OnRequestInvite__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

