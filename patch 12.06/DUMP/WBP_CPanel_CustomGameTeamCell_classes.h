// WidgetBlueprintGeneratedClass WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C
// Size: 0x1c2a (Inherited: 0x1ae0)
struct UWBP_CPanel_CustomGameTeamCell_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWBP_CustomGameTeamCellBackground_C* CellBackground; // 0x1ae8(0x08)
	struct UWBP_ContextMenuAnchor_SocialPlayer_C* ContextMenuAnchor; // 0x1af0(0x08)
	struct UImage* IMG_FocusBorder; // 0x1af8(0x08)
	struct UImage* ImgSpeakerBackground; // 0x1b00(0x08)
	struct UOverlay* Overlay_SpeakerIcon; // 0x1b08(0x08)
	struct UWBP_View_PlayerCard_CustomLobby_C* PlayerCard_CustomLobby; // 0x1b10(0x08)
	struct UWBP_Panel_VoiceIndicator_SpeakerIcon_C* WBP_Panel_VoiceIndicator_SpeakerIcon; // 0x1b18(0x08)
	struct UWBP_VoiceSpeakerButton_Icon_Desktop_C* WBP_VoiceSpeakerButton_Icon_Desktop; // 0x1b20(0x08)
	bool bOnFocusPath; // 0x1b28(0x01)
	bool bShowHardEdge; // 0x1b29(0x01)
	bool bShowPlayerCardImage; // 0x1b2a(0x01)
	bool bIsLocalPlayer; // 0x1b2b(0x01)
	enum class BPE_CustomLobbyCellIconType IconDisplayType; // 0x1b2c(0x01)
	char pad_1B2D[0x3]; // 0x1b2d(0x03)
	struct FLinearColor BackgroundColor; // 0x1b30(0x10)
	struct FLinearColor EdgeColor; // 0x1b40(0x10)
	struct FString CurrentPlayerSubject; // 0x1b50(0x10)
	struct FLinearColor FocusGradientColorTop; // 0x1b60(0x10)
	struct FLinearColor FocusGradientColorBottom; // 0x1b70(0x10)
	struct FLinearColor FocusBorderColor; // 0x1b80(0x10)
	struct FAresConditionalInputAction CIA_Select; // 0x1b90(0x28)
	struct FText ActionText_Invite; // 0x1bb8(0x18)
	struct FText ActionText_OpenPlayerMenu; // 0x1bd0(0x18)
	struct FText ActionText_MoveTeams; // 0x1be8(0x18)
	struct FText ActionText_EmptyCell; // 0x1c00(0x18)
	struct FMulticastInlineDelegate OnPlayerDroppedIntoCell; // 0x1c18(0x10)
	enum class ECustomGameTeam TeamType; // 0x1c28(0x01)
	bool IsContextMenuOpen; // 0x1c29(0x01)

	bool IsHoveringClickableChildWidget(); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.IsHoveringClickableChildWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	bool CanDragCell(); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.CanDragCell // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool ShouldShowFocusVisuals(); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.ShouldShowFocusVisuals // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.OnPreviewMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OpenContextMenu(); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.OpenContextMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateSelectCIA(); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.UpdateSelectCIA // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetShowPlayerCardImage(bool bShowPlayerCardImage); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.SetShowPlayerCardImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HasPlayer(bool& bHasPlayer); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.HasPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetPlayerSubject(struct FString& PlayerSubject); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.GetPlayerSubject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetPlayerSubject(struct FString PlayerSubject); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.SetPlayerSubject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsLocalPlayer(bool bIsLocalPlayer); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.SetIsLocalPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetFocusColors(struct FLinearColor FocusColorGradientTop, struct FLinearColor FocusColorGradientBottom, struct FLinearColor FocusBorderColor); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.SetFocusColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateVisualFocus(bool IsFocused); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.UpdateVisualFocus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIconDisplayType(enum class BPE_CustomLobbyCellIconType IconDisplayType); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.SetIconDisplayType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetShowHardEdge(bool bShow); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.SetShowHardEdge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetEdgeColor(struct FLinearColor EdgeColor); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.SetEdgeColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBackgroundColor(struct FLinearColor BackgroundColor); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.SetBackgroundColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnButtonBaseHovered_Event_1(struct UCommonButtonBase* Button); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.OnButtonBaseHovered_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnButtonBaseClicked_Event_1(struct UCommonButtonBase* Button); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.OnButtonBaseClicked_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_CPanel_CustomGameTeamCell_ContextMenuAnchor_K2Node_ComponentBoundEvent_0_OnContextMenuOpenChanged__DelegateSignature(bool bIsOpen); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.BndEvt__WBP_CPanel_CustomGameTeamCell_ContextMenuAnchor_K2Node_ComponentBoundEvent_0_OnContextMenuOpenChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_CPanel_CustomGameTeamCell(int32_t EntryPoint); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.ExecuteUbergraph_WBP_CPanel_CustomGameTeamCell // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnPlayerDroppedIntoCell__DelegateSignature(struct FString PlayerSubject, struct UWBP_CPanel_CustomGameTeamCell_C* Cell); // Function WBP_CPanel_CustomGameTeamCell.WBP_CPanel_CustomGameTeamCell_C.OnPlayerDroppedIntoCell__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

