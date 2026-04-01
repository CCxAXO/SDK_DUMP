// WidgetBlueprintGeneratedClass WBP_Panel_Teams_List.WBP_Panel_Teams_List_C
// Size: 0x460 (Inherited: 0x3e0)
struct UWBP_Panel_Teams_List_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct USizeBox* SB_CommonUITeamList; // 0x3e8(0x08)
	struct UVerticalBox* VB_TeamList; // 0x3f0(0x08)
	struct UWBP_List_Grid_C* WBP_List_Teams; // 0x3f8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_TeamList; // 0x400(0x08)
	int32_t NumberOfTeams; // 0x408(0x04)
	enum class E_esportsTeamListStates E_ButtonState; // 0x40c(0x01)
	char pad_40D[0x3]; // 0x40d(0x03)
	struct TArray<struct FString> TeamNames; // 0x410(0x10)
	struct UEsports_VCTInfoSection_C* EsportsTeamInfoSection; // 0x420(0x08)
	struct UWBP_Panel_Teams_List_Entry_C* Selected Team; // 0x428(0x08)
	struct FMulticastInlineDelegate TeamListOnTeamEntrySelected; // 0x430(0x10)
	struct FMulticastInlineDelegate TeamListOnTeamEntrySelectedV2; // 0x440(0x10)
	struct TArray<struct FString> SavedTeamIDs; // 0x450(0x10)

	void HandleEntrySelectedV2(struct UWBP_Panel_Teams_List_Entry_C* New Selected Team, struct FString NewSelectedTeamID); // Function WBP_Panel_Teams_List.WBP_Panel_Teams_List_C.HandleEntrySelectedV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PopulateTeamsListV2(struct TArray<struct FString>& TeamIDs, struct UEsportsTeamsByRegionDropdownViewModelV2* TeamsByRegionDropdownViewModel); // Function WBP_Panel_Teams_List.WBP_Panel_Teams_List_C.PopulateTeamsListV2 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSelectedTeam(struct UWBP_Panel_Teams_List_Entry_C* New Selected Team); // Function WBP_Panel_Teams_List.WBP_Panel_Teams_List_C.SetSelectedTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleEntrySelected(struct UWBP_Panel_Teams_List_Entry_C* New Selected Team, struct FString NewSelectedTeamName); // Function WBP_Panel_Teams_List.WBP_Panel_Teams_List_C.HandleEntrySelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PopulateTeamsListFromStrings(struct TArray<struct FString>& Teams); // Function WBP_Panel_Teams_List.WBP_Panel_Teams_List_C.PopulateTeamsListFromStrings // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PopulateTeamsList(struct TArray<struct UTeamModel*>& Teams); // Function WBP_Panel_Teams_List.WBP_Panel_Teams_List_C.PopulateTeamsList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_Teams_List.WBP_Panel_Teams_List_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_Teams_List.WBP_Panel_Teams_List_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_Teams_List_WBP_List_Teams_K2Node_ComponentBoundEvent_0_OnEntryObjectAndWidgetChanged__DelegateSignature(struct UObject* EntryObject, struct UUserWidget* EntryWidget); // Function WBP_Panel_Teams_List.WBP_Panel_Teams_List_C.BndEvt__WBP_Panel_Teams_List_WBP_List_Teams_K2Node_ComponentBoundEvent_0_OnEntryObjectAndWidgetChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_Teams_List.WBP_Panel_Teams_List_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_Teams_List(int32_t EntryPoint); // Function WBP_Panel_Teams_List.WBP_Panel_Teams_List_C.ExecuteUbergraph_WBP_Panel_Teams_List // (Final|UbergraphFunction) // @ game+0x1b42740
	void TeamListOnTeamEntrySelectedV2__DelegateSignature(struct UWBP_Panel_Teams_List_C* SelectedTeamList, struct FString SelectedTeamID); // Function WBP_Panel_Teams_List.WBP_Panel_Teams_List_C.TeamListOnTeamEntrySelectedV2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TeamListOnTeamEntrySelected__DelegateSignature(struct UWBP_Panel_Teams_List_C* SelectedTeamList, struct FString SelectedTeamName); // Function WBP_Panel_Teams_List.WBP_Panel_Teams_List_C.TeamListOnTeamEntrySelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

