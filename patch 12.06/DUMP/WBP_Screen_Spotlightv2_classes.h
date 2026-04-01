// WidgetBlueprintGeneratedClass WBP_Screen_Spotlightv2.WBP_Screen_Spotlightv2_C
// Size: 0x700 (Inherited: 0x580)
struct UWBP_Screen_Spotlightv2_C : UEsportsHubScreenV2 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	struct UWidgetAnimation* EnteringAnim; // 0x588(0x08)
	struct UImage* BG_VCT; // 0x590(0x08)
	struct UImage* Border; // 0x598(0x08)
	struct UCanvasPanel* CanvasPanel_DebugButton; // 0x5a0(0x08)
	struct UWBP_Panel_EsportsSpotlightNavigationArea_C* Console_EsportsSpotlightNavigationArea; // 0x5a8(0x08)
	struct UEsports_PageFurniture_Horizontal_C* Esports_PageFurniture_Horizontal; // 0x5b0(0x08)
	struct UEsports_PageFurniture_Horizontal_C* Esports_PageFurniture_Horizontal_2; // 0x5b8(0x08)
	struct UEsportsHubSafeArea* EsportsHubSafeArea; // 0x5c0(0x08)
	struct UImage* I_VCTNotch; // 0x5c8(0x08)
	struct UImage* Image_328; // 0x5d0(0x08)
	struct UImage* Image_407; // 0x5d8(0x08)
	struct UImage* largesparkBL; // 0x5e0(0x08)
	struct UImage* LargeSparkTR; // 0x5e8(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* LazyLoader_DebugButton; // 0x5f0(0x08)
	struct UOverlay* Overlay_DefaultConfiguration; // 0x5f8(0x08)
	struct UOverlay* Overlay_GlobalTournamentConfiguration; // 0x600(0x08)
	struct UImage* RedL1; // 0x608(0x08)
	struct UImage* RedL1_2; // 0x610(0x08)
	struct UImage* RedL2; // 0x618(0x08)
	struct UImage* RedL2_2; // 0x620(0x08)
	struct UWidgetSwitcher* RightPanel_WidgetSwitcher; // 0x628(0x08)
	struct UOverlay* RightPanelOverlay; // 0x630(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x638(0x08)
	struct USharedBlurBg_C* SharedBlurBg_134; // 0x640(0x08)
	struct UAresCommonRichText* T_SchedulesHeader; // 0x648(0x08)
	struct UVerticalBox* VB_PC_UpcomingEvents; // 0x650(0x08)
	struct UImage* VCT_Logo_Loop_Left; // 0x658(0x08)
	struct UImage* VCT_Logo_Loop_Right; // 0x660(0x08)
	struct UWBP_Panel_Esports_Upcoming_Matches_C* WBP_Panel_Esports_Upcoming_Matches; // 0x668(0x08)
	struct UWBP_Panel_EsportsSpotlightSplashImage_C* WBP_Panel_EsportsSpotlightSplashImage; // 0x670(0x08)
	struct UWBP_Panel_EsportsSpotlightTimeline_C* WBP_Panel_EsportsSpotlightTimeline; // 0x678(0x08)
	struct UWBP_Panel_EsportsTeamsSection_C* WBP_Panel_EsportsTeamsSection; // 0x680(0x08)
	struct UWBP_Panel_EsportsUpcomingEventsArea_C* WBP_Panel_EsportsUpcomingEventsArea; // 0x688(0x08)
	struct UCommonActivatableWidgetSwitcher* WS_LowerSection; // 0x690(0x08)
	struct UEsportsEventViewModel* Esports Event View Model; // 0x698(0x08)
	enum class E2024VCTEvent event; // 0x6a0(0x01)
	char pad_6A1[0x3]; // 0x6a1(0x03)
	struct FLinearColor Color_VCT Red; // 0x6a4(0x10)
	struct FLinearColor Color_Masters; // 0x6b4(0x10)
	struct FLinearColor Color_Champions; // 0x6c4(0x10)
	struct FLinearColor Color_GameChangers; // 0x6d4(0x10)
	char pad_6E4[0x4]; // 0x6e4(0x04)
	struct UEsportsTournamentViewModel* Esports Tournament View Model; // 0x6e8(0x08)
	struct TArray<enum class E2024VCTEvent> SpotlightEventsV2; // 0x6f0(0x10)

	void ViewLiveEvents(struct FName ActionName); // Function WBP_Screen_Spotlightv2.WBP_Screen_Spotlightv2_C.ViewLiveEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateLiveEventsInputAction(bool HasLiveEvents); // Function WBP_Screen_Spotlightv2.WBP_Screen_Spotlightv2_C.UpdateLiveEventsInputAction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetupViewLiveEvents(); // Function WBP_Screen_Spotlightv2.WBP_Screen_Spotlightv2_C.SetupViewLiveEvents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnNavigateToCurrentEvent(); // Function WBP_Screen_Spotlightv2.WBP_Screen_Spotlightv2_C.OnNavigateToCurrentEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitUpcomingMatchesForSpotlightEvent(); // Function WBP_Screen_Spotlightv2.WBP_Screen_Spotlightv2_C.InitUpcomingMatchesForSpotlightEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEventChanged(enum class E2024VCTEvent InEvent); // Function WBP_Screen_Spotlightv2.WBP_Screen_Spotlightv2_C.OnEventChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_Spotlightv2.WBP_Screen_Spotlightv2_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void Style Page(); // Function WBP_Screen_Spotlightv2.WBP_Screen_Spotlightv2_C.Style Page // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Multi Event IDs Changed(struct TArray<struct FEventIDs>& EventIDs); // Function WBP_Screen_Spotlightv2.WBP_Screen_Spotlightv2_C.On Multi Event IDs Changed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Get Spotlight Event(enum class E2024VCTEvent& event); // Function WBP_Screen_Spotlightv2.WBP_Screen_Spotlightv2_C.Get Spotlight Event // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Event IDs Changed(struct FString NewLeagueID, struct FString NewTournamentID); // Function WBP_Screen_Spotlightv2.WBP_Screen_Spotlightv2_C.On Event IDs Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToOrUnbindFromViewModel(bool ShouldBind); // Function WBP_Screen_Spotlightv2.WBP_Screen_Spotlightv2_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Screen_Spotlightv2.WBP_Screen_Spotlightv2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Screen_Spotlightv2.WBP_Screen_Spotlightv2_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnScreenReady(); // Function WBP_Screen_Spotlightv2.WBP_Screen_Spotlightv2_C.OnScreenReady // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Screen_Spotlightv2.WBP_Screen_Spotlightv2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PlayEnterAnim(bool NewValue); // Function WBP_Screen_Spotlightv2.WBP_Screen_Spotlightv2_C.PlayEnterAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Screen_Spotlightv2(int32_t EntryPoint); // Function WBP_Screen_Spotlightv2.WBP_Screen_Spotlightv2_C.ExecuteUbergraph_WBP_Screen_Spotlightv2 // (Final|UbergraphFunction) // @ game+0x1b42740
};

