// WidgetBlueprintGeneratedClass WBP_Screen_PickemPlayoff.WBP_Screen_PickemPlayoff_C
// Size: 0x5d1 (Inherited: 0x580)
struct UWBP_Screen_PickemPlayoff_C : UEsportsHubScreenV2 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	struct UWBP_Panel_PickemPlayoffHeader_C* Panel_PickemPlayoffHeader; // 0x588(0x08)
	struct UAresWidgetSwitcher* PicksResultsWidgetSwitcher; // 0x590(0x08)
	struct UWBP_Button_Esports_Secondary_C* WBP_Button_GPR_V1; // 0x598(0x08)
	struct UWBP_EsportsPickemBracketTemplate_C* WBP_EsportsPickemBracketTemplate; // 0x5a0(0x08)
	struct UWBP_Panel_PickemBracket_C* WBP_Panel_PickemBracketActual; // 0x5a8(0x08)
	struct UWBP_Panel_PickemBracket_C* WBP_Panel_PickemBracketPicks; // 0x5b0(0x08)
	struct FString sectionid; // 0x5b8(0x10)
	struct UEsportsEventViewModel* EsportsEventViewModel; // 0x5c8(0x08)
	enum class EAresPickemStage Current Stage; // 0x5d0(0x01)

	void InitFromNavigationParam(); // Function WBP_Screen_PickemPlayoff.WBP_Screen_PickemPlayoff_C.InitFromNavigationParam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeViewModel(struct UPickemBlockModel* PickemBlockModel, enum class EAresPickemStage CurrentStage); // Function WBP_Screen_PickemPlayoff.WBP_Screen_PickemPlayoff_C.InitializeViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Screen_PickemPlayoff_Panel_PickemPlayoffHeader_K2Node_ComponentBoundEvent_2_OnClear__DelegateSignature(); // Function WBP_Screen_PickemPlayoff.WBP_Screen_PickemPlayoff_C.BndEvt__WBP_Screen_PickemPlayoff_Panel_PickemPlayoffHeader_K2Node_ComponentBoundEvent_2_OnClear__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Screen_PickemPlayoff_Panel_PickemPlayoffHeader_K2Node_ComponentBoundEvent_3_OnToggleBracketView__DelegateSignature(bool ShouldShowStaticBracket); // Function WBP_Screen_PickemPlayoff.WBP_Screen_PickemPlayoff_C.BndEvt__WBP_Screen_PickemPlayoff_Panel_PickemPlayoffHeader_K2Node_ComponentBoundEvent_3_OnToggleBracketView__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Screen_PickemPlayoff_WBP_Button_Esports_Secondary_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Screen_PickemPlayoff.WBP_Screen_PickemPlayoff_C.BndEvt__WBP_Screen_PickemPlayoff_WBP_Button_Esports_Secondary_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Screen_PickemPlayoff.WBP_Screen_PickemPlayoff_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnActivated(); // Function WBP_Screen_PickemPlayoff.WBP_Screen_PickemPlayoff_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_PickemPlayoff(int32_t EntryPoint); // Function WBP_Screen_PickemPlayoff.WBP_Screen_PickemPlayoff_C.ExecuteUbergraph_WBP_Screen_PickemPlayoff // (Final|UbergraphFunction) // @ game+0x1af5410
};

