// WidgetBlueprintGeneratedClass WBP_Panel_Teams_List_Entry.WBP_Panel_Teams_List_Entry_C
// Size: 0x1b78 (Inherited: 0x1ae0)
struct UWBP_Panel_Teams_List_Entry_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* textClick; // 0x1ae8(0x08)
	struct UWidgetAnimation* HideBG; // 0x1af0(0x08)
	struct UWidgetAnimation* ShowBG; // 0x1af8(0x08)
	struct UWidgetAnimation* HideTab; // 0x1b00(0x08)
	struct UWidgetAnimation* ShowTab; // 0x1b08(0x08)
	struct UWidgetAnimation* textHover; // 0x1b10(0x08)
	struct UAresButtonTextComponent* AresButtonText_TeamName; // 0x1b18(0x08)
	struct UImage* IMG_BG; // 0x1b20(0x08)
	struct UImage* IMG_isSelectedBG; // 0x1b28(0x08)
	struct UImage* IMG_isSelectedTab; // 0x1b30(0x08)
	bool IsSelected; // 0x1b38(0x01)
	bool IsEnterAnimPending; // 0x1b39(0x01)
	bool IsExitAnimPending; // 0x1b3a(0x01)
	char pad_1B3B[0x5]; // 0x1b3b(0x05)
	struct FMulticastInlineDelegate OnTeamEntrySelected; // 0x1b40(0x10)
	struct FString TeamID; // 0x1b50(0x10)
	struct FMulticastInlineDelegate OnTeamEntrySelectedV2; // 0x1b60(0x10)
	struct UEsportsTeamViewModelV2* TeamViewModel; // 0x1b70(0x08)

	struct FString GetListItemTelemetryTarget(); // Function WBP_Panel_Teams_List_Entry.WBP_Panel_Teams_List_Entry_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTeamNameChanged(struct FString TeamName); // Function WBP_Panel_Teams_List_Entry.WBP_Panel_Teams_List_Entry_C.OnTeamNameChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindOrUnbindEvents(bool Bind); // Function WBP_Panel_Teams_List_Entry.WBP_Panel_Teams_List_Entry_C.BindOrUnbindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTeamID(struct FString TeamID); // Function WBP_Panel_Teams_List_Entry.WBP_Panel_Teams_List_Entry_C.SetTeamID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSelectedState(bool SetIsSelected); // Function WBP_Panel_Teams_List_Entry.WBP_Panel_Teams_List_Entry_C.SetSelectedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTeamName(struct FString Team Name); // Function WBP_Panel_Teams_List_Entry.WBP_Panel_Teams_List_Entry_C.SetTeamName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTeamNameFromText(struct FText TeamName); // Function WBP_Panel_Teams_List_Entry.WBP_Panel_Teams_List_Entry_C.SetTeamNameFromText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Finished_8067BD1549976B3469F34788362D1A4C(); // Function WBP_Panel_Teams_List_Entry.WBP_Panel_Teams_List_Entry_C.Finished_8067BD1549976B3469F34788362D1A4C // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnEntryReleased(); // Function WBP_Panel_Teams_List_Entry.WBP_Panel_Teams_List_Entry_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Panel_Teams_List_Entry.WBP_Panel_Teams_List_Entry_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Panel_Teams_List_Entry.WBP_Panel_Teams_List_Entry_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Set Entry Selected(bool SkipAudio); // Function WBP_Panel_Teams_List_Entry.WBP_Panel_Teams_List_Entry_C.Set Entry Selected // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnClicked(); // Function WBP_Panel_Teams_List_Entry.WBP_Panel_Teams_List_Entry_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnHovered(); // Function WBP_Panel_Teams_List_Entry.WBP_Panel_Teams_List_Entry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnUnhovered(); // Function WBP_Panel_Teams_List_Entry.WBP_Panel_Teams_List_Entry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Panel_Teams_List_Entry.WBP_Panel_Teams_List_Entry_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_Teams_List_Entry(int32_t EntryPoint); // Function WBP_Panel_Teams_List_Entry.WBP_Panel_Teams_List_Entry_C.ExecuteUbergraph_WBP_Panel_Teams_List_Entry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnTeamEntrySelectedV2__DelegateSignature(struct UWBP_Panel_Teams_List_Entry_C* NewSelectedTeamEntry, struct FString SelectedTeamID); // Function WBP_Panel_Teams_List_Entry.WBP_Panel_Teams_List_Entry_C.OnTeamEntrySelectedV2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTeamEntrySelected__DelegateSignature(struct UWBP_Panel_Teams_List_Entry_C* NewSelectedTeamEntry, struct FString SelectedTeamName); // Function WBP_Panel_Teams_List_Entry.WBP_Panel_Teams_List_Entry_C.OnTeamEntrySelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

