// WidgetBlueprintGeneratedClass WBP_Panel_Schedule_Properties.WBP_Panel_Schedule_Properties_C
// Size: 0x540 (Inherited: 0x3e0)
struct UWBP_Panel_Schedule_Properties_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_Panel_Schedule_FilterCheckBox_C* FilterCheckBox_Americas; // 0x3e8(0x08)
	struct UWBP_Panel_Schedule_FilterCheckBox_C* FilterCheckBox_CN; // 0x3f0(0x08)
	struct UWBP_Panel_Schedule_FilterCheckBox_C* FilterCheckBox_EMEA; // 0x3f8(0x08)
	struct UWBP_Panel_Schedule_FilterCheckBox_C* FilterCheckBox_Pacific; // 0x400(0x08)
	struct UImage* Image; // 0x408(0x08)
	struct UImage* Image_113; // 0x410(0x08)
	struct UVerticalBox* VB_NonConvergedFilterList; // 0x418(0x08)
	struct UWBP_List_Base_C* VCTLeagueList; // 0x420(0x08)
	struct UWBP_Button_Schedule_Filter_C* WBP_Button_Schedule_Filter; // 0x428(0x08)
	struct UWidgetSwitcher* WS_TeamsFilters; // 0x430(0x08)
	struct FLinearColor ChinaColor; // 0x438(0x10)
	struct FLinearColor PacificColor; // 0x448(0x10)
	struct FLinearColor AmericasColor; // 0x458(0x10)
	struct FLinearColor EMEAColor; // 0x468(0x10)
	struct TSet<enum class EVCTLeague> FilteredLeagues; // 0x478(0x50)
	struct FMulticastInlineDelegate LeagueFilterUpdated; // 0x4c8(0x10)
	struct TArray<enum class EVCTLeague> VCTLeagues; // 0x4d8(0x10)
	struct TSet<enum class EVCTLeague> SelectedVCTLeagues; // 0x4e8(0x50)
	struct UFP_EsportsScheduleFilterProvider_C* Schedule Filter; // 0x538(0x08)

	void OnVCTFilterSelectionChanged(struct UObject* EntryObject, struct UUserWidget* EntryWidget, bool EntryState); // Function WBP_Panel_Schedule_Properties.WBP_Panel_Schedule_Properties_C.OnVCTFilterSelectionChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetAllVCTLeagues(); // Function WBP_Panel_Schedule_Properties.WBP_Panel_Schedule_Properties_C.GetAllVCTLeagues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateLeagues(enum class EVCTLeague League, bool IsChecked); // Function WBP_Panel_Schedule_Properties.WBP_Panel_Schedule_Properties_C.UpdateLeagues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_Schedule_Properties.WBP_Panel_Schedule_Properties_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_Schedule_Properties_WBP_Button_Schedule_Filter_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function WBP_Panel_Schedule_Properties.WBP_Panel_Schedule_Properties_C.BndEvt__WBP_Panel_Schedule_Properties_WBP_Button_Schedule_Filter_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_Schedule_Properties(int32_t EntryPoint); // Function WBP_Panel_Schedule_Properties.WBP_Panel_Schedule_Properties_C.ExecuteUbergraph_WBP_Panel_Schedule_Properties // (Final|UbergraphFunction) // @ game+0x1af5410
	void LeagueFilterUpdated__DelegateSignature(struct TSet<enum class EVCTLeague> Leagues); // Function WBP_Panel_Schedule_Properties.WBP_Panel_Schedule_Properties_C.LeagueFilterUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

