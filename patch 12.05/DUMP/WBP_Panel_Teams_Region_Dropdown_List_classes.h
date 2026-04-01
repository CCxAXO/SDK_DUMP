// WidgetBlueprintGeneratedClass WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C
// Size: 0x520 (Inherited: 0x3e0)
struct UWBP_Panel_Teams_Region_Dropdown_List_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* Pressed; // 0x3e8(0x08)
	struct UWidgetAnimation* hover; // 0x3f0(0x08)
	struct UImage* BG; // 0x3f8(0x08)
	struct UImage* Focus; // 0x400(0x08)
	struct UImage* IMG_VCTspark; // 0x408(0x08)
	struct UImage* Outline; // 0x410(0x08)
	struct UImage* Outline_2; // 0x418(0x08)
	struct UAresScrollBox* SB_RegionDropdownLists; // 0x420(0x08)
	struct UButton* TeamsLandingButton; // 0x428(0x08)
	struct UWBP_Panel_Teams_Region_Entry_C* WBP_AmericasRegion; // 0x430(0x08)
	struct UWBP_Panel_Teams_Region_Entry_C* WBP_CNRegion; // 0x438(0x08)
	struct UWBP_Panel_Teams_Region_Entry_C* WBP_EMEARegion; // 0x440(0x08)
	struct UWBP_Panel_Teams_Region_Entry_C* WBP_PacificRegion; // 0x448(0x08)
	struct UEsportsTeamsRegionDropdownListViewModel* TeamsRegionDropdownListViewModel; // 0x450(0x08)
	struct UEsportsTeamsByRegionDropdownViewModelV2* TeamsByRegionDropdownViewModelV2; // 0x458(0x08)
	struct TArray<struct FText> RegionNames; // 0x460(0x10)
	struct UWBP_Panel_Teams_Region_Entry_C* ExpandedRegion; // 0x470(0x08)
	struct UWBP_Panel_Teams_Region_Entry_C* Highlighted Region; // 0x478(0x08)
	struct FMulticastInlineDelegate RegionListOnTeamEntrySelected; // 0x480(0x10)
	struct FMulticastInlineDelegate LandingButtonClicked; // 0x490(0x10)
	struct FMulticastInlineDelegate RegionListOnTeamEntrySelectedV2; // 0x4a0(0x10)
	struct FSlateColor Slate Color_Americas; // 0x4b0(0x14)
	struct FSlateColor Slate Color_EMEA; // 0x4c4(0x14)
	struct FSlateColor Slate Color_Pacific; // 0x4d8(0x14)
	struct FSlateColor Slate Color_CN; // 0x4ec(0x14)
	struct UTexture2D* Logo_Americas; // 0x500(0x08)
	struct UTexture2D* Logo_EMEA; // 0x508(0x08)
	struct UTexture2D* Logo_Pacific; // 0x510(0x08)
	struct UTexture2D* Logo_CN; // 0x518(0x08)

	void InitOnScreenReady(); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.InitOnScreenReady // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleTeamEntrySelectedV2(struct UWBP_Panel_Teams_Region_Entry_C* SelectedTeamRegionEntry, struct FString SelectedTeamID); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.HandleTeamEntrySelectedV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTeamSelectedV2(struct FString TeamID); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.OnTeamSelectedV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTeamsListUpdatedV2(struct FEsportsTeamsByRegionMap& UpdatedTeamsLists); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.OnTeamsListUpdatedV2 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CollapseAll(); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.CollapseAll // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleRegionEntrySelected(struct UWBP_Panel_Teams_Region_Entry_C* New Expanded Region); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.HandleRegionEntrySelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleTeamEntrySelected(struct UWBP_Panel_Teams_Region_Entry_C* SelectedTeamRegionEntry, struct FString SelectedTeamName); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.HandleTeamEntrySelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTeamSelected(struct UTeamModel* NewSelectedTeam); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.OnTeamSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTeamsListUpdated(struct FTeamsListByRegionMap& UpdatedTeamsLists); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.OnTeamsListUpdated // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateHighlightedRegion(struct UWBP_Panel_Teams_Region_Entry_C* New Highlighted Region); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.UpdateHighlightedRegion // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleRegionEntrySelectedMultiple(struct UWBP_Panel_Teams_Region_Entry_C* New Expanded Region); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.HandleRegionEntrySelectedMultiple // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init Region Dropdowns(); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.Init Region Dropdowns // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindOrUnbindEvents(bool Bind); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.BindOrUnbindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModel(); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.InitViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_Teams_Region_Dropdown_List_TeamsLandingButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.BndEvt__WBP_Panel_Teams_Region_Dropdown_List_TeamsLandingButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_Teams_Region_Dropdown_List_TeamsLandingButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.BndEvt__WBP_Panel_Teams_Region_Dropdown_List_TeamsLandingButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_Teams_Region_Dropdown_List_TeamsLandingButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.BndEvt__WBP_Panel_Teams_Region_Dropdown_List_TeamsLandingButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_Teams_Region_Dropdown_List_TeamsLandingButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.BndEvt__WBP_Panel_Teams_Region_Dropdown_List_TeamsLandingButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_Teams_Region_Dropdown_List(int32_t EntryPoint); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.ExecuteUbergraph_WBP_Panel_Teams_Region_Dropdown_List // (Final|UbergraphFunction) // @ game+0x1af5410
	void RegionListOnTeamEntrySelectedV2__DelegateSignature(struct FString SelectedTeamID); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.RegionListOnTeamEntrySelectedV2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void LandingButtonClicked__DelegateSignature(); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.LandingButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RegionListOnTeamEntrySelected__DelegateSignature(struct UTeamModel* SelectedTeam); // Function WBP_Panel_Teams_Region_Dropdown_List.WBP_Panel_Teams_Region_Dropdown_List_C.RegionListOnTeamEntrySelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

