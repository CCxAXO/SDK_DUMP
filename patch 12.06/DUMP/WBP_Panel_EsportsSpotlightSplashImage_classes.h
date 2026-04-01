// WidgetBlueprintGeneratedClass WBP_Panel_EsportsSpotlightSplashImage.WBP_Panel_EsportsSpotlightSplashImage_C
// Size: 0x421 (Inherited: 0x3e0)
struct UWBP_Panel_EsportsSpotlightSplashImage_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UUI_AresRichTextButton_C* Button_EventDetails; // 0x3e8(0x08)
	struct UAresCommonText* CT_EventBlurb; // 0x3f0(0x08)
	struct USizeBox* SB_EventDetails; // 0x3f8(0x08)
	struct UWBP_Panel_EsportsSpotlightTitle_C* WBP_Panel_EsportsSpotlightTitle; // 0x400(0x08)
	enum class E2024VCTEvent event; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct FMulticastInlineDelegate OnNavigateToCurrentEvent; // 0x410(0x10)
	bool bShowIntroAnim; // 0x420(0x01)

	void PlayIntroAnim(bool bShouldPlayAnimation); // Function WBP_Panel_EsportsSpotlightSplashImage.WBP_Panel_EsportsSpotlightSplashImage_C.PlayIntroAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_EsportsSpotlightSplashImage.WBP_Panel_EsportsSpotlightSplashImage_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void SetTextForEvent(enum class E2024VCTEvent Evenrt); // Function WBP_Panel_EsportsSpotlightSplashImage.WBP_Panel_EsportsSpotlightSplashImage_C.SetTextForEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Style For Event(enum class E2024VCTEvent event); // Function WBP_Panel_EsportsSpotlightSplashImage.WBP_Panel_EsportsSpotlightSplashImage_C.Style For Event // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_EsportsSpotlightSplashImage.WBP_Panel_EsportsSpotlightSplashImage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Screen_EsportsSpotlight_Button_EventDetails_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_EsportsSpotlightSplashImage.WBP_Panel_EsportsSpotlightSplashImage_C.BndEvt__WBP_Screen_EsportsSpotlight_Button_EventDetails_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Screen_EsportsSpotlight_UI_AresRichTextButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_EsportsSpotlightSplashImage.WBP_Panel_EsportsSpotlightSplashImage_C.BndEvt__WBP_Screen_EsportsSpotlight_UI_AresRichTextButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_EsportsSpotlightSplashImage.WBP_Panel_EsportsSpotlightSplashImage_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_EsportsSpotlightSplashImage(int32_t EntryPoint); // Function WBP_Panel_EsportsSpotlightSplashImage.WBP_Panel_EsportsSpotlightSplashImage_C.ExecuteUbergraph_WBP_Panel_EsportsSpotlightSplashImage // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnNavigateToCurrentEvent__DelegateSignature(); // Function WBP_Panel_EsportsSpotlightSplashImage.WBP_Panel_EsportsSpotlightSplashImage_C.OnNavigateToCurrentEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

