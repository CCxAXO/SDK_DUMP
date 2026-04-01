// WidgetBlueprintGeneratedClass WBP_Screen_EsportsStandingsOverlay.WBP_Screen_EsportsStandingsOverlay_C
// Size: 0x6a8 (Inherited: 0x580)
struct UWBP_Screen_EsportsStandingsOverlay_C : UEsportsHubScreenV2 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	struct UOverlay* ClearState; // 0x588(0x08)
	struct UCustomCloseButton_C* CustomCloseButtonConverged; // 0x590(0x08)
	struct UEsportsHubSafeArea* EsportsHubSafeArea_FullScreen; // 0x598(0x08)
	struct UEsports_Loading_C* EsportsLoadingThrobber; // 0x5a0(0x08)
	struct UImage* Image; // 0x5a8(0x08)
	struct UImage* Image_2; // 0x5b0(0x08)
	struct UImage* Image_3; // 0x5b8(0x08)
	struct UImage* Image_4; // 0x5c0(0x08)
	struct UImage* Image_5; // 0x5c8(0x08)
	struct UImage* Image_6; // 0x5d0(0x08)
	struct UImage* Image_7; // 0x5d8(0x08)
	struct UImage* Image_43; // 0x5e0(0x08)
	struct UImage* Image_91; // 0x5e8(0x08)
	struct UImage* Image_133; // 0x5f0(0x08)
	struct UImage* OverlayBG; // 0x5f8(0x08)
	struct USizeBox* Standings; // 0x600(0x08)
	struct UAresCommonText* T_Error; // 0x608(0x08)
	struct UAresCommonText* T_Info; // 0x610(0x08)
	struct UAresCommonText* T_MatchRecord; // 0x618(0x08)
	struct UAresCommonText* T_Team; // 0x620(0x08)
	struct UWBP_Panel_StandingsEntryContainer_C* WBP_Panel_StandingsEntryContainer_Alpha; // 0x628(0x08)
	struct UWBP_Panel_StandingsEntryContainer_C* WBP_Panel_StandingsEntryContainer_Omega; // 0x630(0x08)
	struct UWBP_Panel_StandingsInfo_C* WBP_Panel_StandingsInfo; // 0x638(0x08)
	struct UWidgetSwitcher* WS_Standings; // 0x640(0x08)
	struct UEsportsEventViewModel* Esports Event View Model; // 0x648(0x08)
	struct UEsportsTournamentViewModel* EsportsTournamentViewModel; // 0x650(0x08)
	struct TMap<struct UWBP_Panel_StandingsEntryContainer_C*, bool> StandingsWidgetLoadingMap; // 0x658(0x50)

	void InitFromNavParamEvent(); // Function WBP_Screen_EsportsStandingsOverlay.WBP_Screen_EsportsStandingsOverlay_C.InitFromNavParamEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStandingsError(); // Function WBP_Screen_EsportsStandingsOverlay.WBP_Screen_EsportsStandingsOverlay_C.OnStandingsError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnHasValidDataLoadingChanged(struct UWBP_Panel_StandingsEntryContainer_C* Widget, bool bLoadingCompleted); // Function WBP_Screen_EsportsStandingsOverlay.WBP_Screen_EsportsStandingsOverlay_C.OnHasValidDataLoadingChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStageIDsChanged(struct TArray<struct FString>& StageIDs); // Function WBP_Screen_EsportsStandingsOverlay.WBP_Screen_EsportsStandingsOverlay_C.OnStageIDsChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Bind To Or Unbind From View Model(bool ShouldBind); // Function WBP_Screen_EsportsStandingsOverlay.WBP_Screen_EsportsStandingsOverlay_C.Bind To Or Unbind From View Model // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetEvent(enum class E2024VCTEvent event); // Function WBP_Screen_EsportsStandingsOverlay.WBP_Screen_EsportsStandingsOverlay_C.SetEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Screen_EsportsStandingsOverlay.WBP_Screen_EsportsStandingsOverlay_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnScreenReady(); // Function WBP_Screen_EsportsStandingsOverlay.WBP_Screen_EsportsStandingsOverlay_C.OnScreenReady // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnActivated(); // Function WBP_Screen_EsportsStandingsOverlay.WBP_Screen_EsportsStandingsOverlay_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Screen_EsportsStandingsOverlay_CustomCloseButtonConverged_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function WBP_Screen_EsportsStandingsOverlay.WBP_Screen_EsportsStandingsOverlay_C.BndEvt__WBP_Screen_EsportsStandingsOverlay_CustomCloseButtonConverged_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_EsportsStandingsOverlay(int32_t EntryPoint); // Function WBP_Screen_EsportsStandingsOverlay.WBP_Screen_EsportsStandingsOverlay_C.ExecuteUbergraph_WBP_Screen_EsportsStandingsOverlay // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

