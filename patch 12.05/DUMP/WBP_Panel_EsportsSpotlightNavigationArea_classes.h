// WidgetBlueprintGeneratedClass WBP_Panel_EsportsSpotlightNavigationArea.WBP_Panel_EsportsSpotlightNavigationArea_C
// Size: 0x448 (Inherited: 0x3e0)
struct UWBP_Panel_EsportsSpotlightNavigationArea_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UHorizontalBox* HB_Pickem; // 0x3e8(0x08)
	struct USizeBox* SB_Schedule; // 0x3f0(0x08)
	struct UScaleBox* ScaleBox_1; // 0x3f8(0x08)
	struct USpacer* Spacer_2; // 0x400(0x08)
	struct USpacer* Spacer_3; // 0x408(0x08)
	struct USpacer* Spacer_Teams_and_VCT25; // 0x410(0x08)
	struct UVerticalBox* VB_TeamsAndEvents; // 0x418(0x08)
	struct UWBP_Button_EsportsPickemNavButton_C* WBP_Button_EsportsPickemNavButton; // 0x420(0x08)
	struct UWBP_Button_EsportsEventsNavButton_C* WBP_Panel_EsportsEventsNavButton; // 0x428(0x08)
	struct UWBP_Button_EsportsScheduleNavButton_C* WBP_Panel_EsportsScheduleNavButton; // 0x430(0x08)
	struct UWBP_Button_EsportsTeamsNavButton_C* WBP_Panel_EsportsTeamsNavButton; // 0x438(0x08)
	struct UEsportsOverviewViewModel* EsportsOverviewVM; // 0x440(0x08)

	void On Configs Updated(struct FName& ConfigName); // Function WBP_Panel_EsportsSpotlightNavigationArea.WBP_Panel_EsportsSpotlightNavigationArea_C.On Configs Updated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Bind Events(bool Should Bind); // Function WBP_Panel_EsportsSpotlightNavigationArea.WBP_Panel_EsportsSpotlightNavigationArea_C.Bind Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Button Visibility(); // Function WBP_Panel_EsportsSpotlightNavigationArea.WBP_Panel_EsportsSpotlightNavigationArea_C.Update Button Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetOverviewViewModel(struct UEsportsOverviewViewModel* OverviewVM); // Function WBP_Panel_EsportsSpotlightNavigationArea.WBP_Panel_EsportsSpotlightNavigationArea_C.SetOverviewViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_EsportsSpotlightNavigationArea.WBP_Panel_EsportsSpotlightNavigationArea_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void Init(struct TArray<enum class E2024VCTEvent>& SpotlightEvents); // Function WBP_Panel_EsportsSpotlightNavigationArea.WBP_Panel_EsportsSpotlightNavigationArea_C.Init // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_EsportsSpotlightNavigationArea.WBP_Panel_EsportsSpotlightNavigationArea_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_EsportsSpotlightNavigationArea.WBP_Panel_EsportsSpotlightNavigationArea_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_EsportsSpotlightNavigationArea_WBP_Panel_EsportsTeamsNavButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_EsportsSpotlightNavigationArea.WBP_Panel_EsportsSpotlightNavigationArea_C.BndEvt__WBP_Panel_EsportsSpotlightNavigationArea_WBP_Panel_EsportsTeamsNavButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_EsportsSpotlightNavigationArea_WBP_Panel_EsportsEventsNavButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_EsportsSpotlightNavigationArea.WBP_Panel_EsportsSpotlightNavigationArea_C.BndEvt__WBP_Panel_EsportsSpotlightNavigationArea_WBP_Panel_EsportsEventsNavButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_EsportsSpotlightNavigationArea_WBP_Panel_EsportsScheduleNavButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_EsportsSpotlightNavigationArea.WBP_Panel_EsportsSpotlightNavigationArea_C.BndEvt__WBP_Panel_EsportsSpotlightNavigationArea_WBP_Panel_EsportsScheduleNavButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_EsportsSpotlightNavigationArea_WBP_Button_EsportsPIckemNavButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_EsportsSpotlightNavigationArea.WBP_Panel_EsportsSpotlightNavigationArea_C.BndEvt__WBP_Panel_EsportsSpotlightNavigationArea_WBP_Button_EsportsPIckemNavButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_EsportsSpotlightNavigationArea(int32_t EntryPoint); // Function WBP_Panel_EsportsSpotlightNavigationArea.WBP_Panel_EsportsSpotlightNavigationArea_C.ExecuteUbergraph_WBP_Panel_EsportsSpotlightNavigationArea // (Final|UbergraphFunction) // @ game+0x1af5410
};

