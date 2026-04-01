// WidgetBlueprintGeneratedClass WBP_Panel_EsportsSpotlightTitle.WBP_Panel_EsportsSpotlightTitle_C
// Size: 0x439 (Inherited: 0x3e0)
struct UWBP_Panel_EsportsSpotlightTitle_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* VCT_Spotlight_Anim; // 0x3e8(0x08)
	struct UImage* Image_DateBG; // 0x3f0(0x08)
	struct UImage* Image_VCTSpark; // 0x3f8(0x08)
	struct USpacer* Loc_Spacer; // 0x400(0x08)
	struct USpacer* Loc_Spacer2; // 0x408(0x08)
	struct UOverlay* Overlay_1; // 0x410(0x08)
	struct UAresCommonText* Text_Event; // 0x418(0x08)
	struct UAresCommonText* Text_ValorantChampionsTour; // 0x420(0x08)
	struct UAresCommonText* Text_ValorantChampionsTour_2; // 0x428(0x08)
	struct UAresCommonText* Text_Year; // 0x430(0x08)
	bool IsSchedulePage; // 0x438(0x01)

	void PlayIntroAnim(); // Function WBP_Panel_EsportsSpotlightTitle.WBP_Panel_EsportsSpotlightTitle_C.PlayIntroAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Style For Event(enum class E2024VCTEvent event); // Function WBP_Panel_EsportsSpotlightTitle.WBP_Panel_EsportsSpotlightTitle_C.Style For Event // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_EsportsSpotlightTitle.WBP_Panel_EsportsSpotlightTitle_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_EsportsSpotlightTitle(int32_t EntryPoint); // Function WBP_Panel_EsportsSpotlightTitle.WBP_Panel_EsportsSpotlightTitle_C.ExecuteUbergraph_WBP_Panel_EsportsSpotlightTitle // (Final|UbergraphFunction) // @ game+0x1af5410
};

