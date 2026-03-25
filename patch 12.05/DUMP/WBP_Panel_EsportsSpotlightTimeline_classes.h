// WidgetBlueprintGeneratedClass WBP_Panel_EsportsSpotlightTimeline.WBP_Panel_EsportsSpotlightTimeline_C
// Size: 0x428 (Inherited: 0x3e0)
struct UWBP_Panel_EsportsSpotlightTimeline_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* InputBlocker; // 0x3e8(0x08)
	struct UWBP_Panel_EsportsSpotlightTimelineSection_C* WBP_Panel_EsportsSpotlightTimelineSection_2; // 0x3f0(0x08)
	struct UWBP_Panel_EsportsSpotlightTimelineSection_C* WBP_Panel_EsportsSpotlightTimelineSection_3; // 0x3f8(0x08)
	struct UWBP_Panel_EsportsSpotlightTimelineSection_C* WBP_Panel_EsportsSpotlightTimelineSection_4; // 0x400(0x08)
	struct UWBP_Panel_EsportsSpotlightTimelineSection_C* WBP_Panel_EsportsSpotlightTimelineSection_5; // 0x408(0x08)
	struct UWBP_Panel_EsportsSpotlightTimelineSection_C* WBP_Panel_EsportsSpotlightTimelineSection_6; // 0x410(0x08)
	struct UWBP_Panel_EsportsSpotlightTimelineSection_C* WBP_Panel_EsportsSpotlightTimelineSection_7; // 0x418(0x08)
	struct UEsportsOverviewViewModel* OverviewVM; // 0x420(0x08)

	void SetOverviewViewModel(struct UEsportsOverviewViewModel* OverviewVM); // Function WBP_Panel_EsportsSpotlightTimeline.WBP_Panel_EsportsSpotlightTimeline_C.SetOverviewViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_EsportsSpotlightTimeline.WBP_Panel_EsportsSpotlightTimeline_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_EsportsSpotlightTimeline.WBP_Panel_EsportsSpotlightTimeline_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_EsportsSpotlightTimeline(int32_t EntryPoint); // Function WBP_Panel_EsportsSpotlightTimeline.WBP_Panel_EsportsSpotlightTimeline_C.ExecuteUbergraph_WBP_Panel_EsportsSpotlightTimeline // (Final|UbergraphFunction) // @ game+0x1af5410
};

