// WidgetBlueprintGeneratedClass WBP_Screen_EsportsSpotlight.WBP_Screen_EsportsSpotlight_C
// Size: 0x660 (Inherited: 0x520)
struct UWBP_Screen_EsportsSpotlight_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UWidgetAnimation* Intro_Spotlight; // 0x528(0x08)
	struct UImage* Background; // 0x530(0x08)
	struct UImage* Border; // 0x538(0x08)
	struct UUI_AresRichTextButton_C* Button_EventDetails; // 0x540(0x08)
	struct UAresCommonText* CT_EventBlurb; // 0x548(0x08)
	struct UImage* I_ARROWL1; // 0x550(0x08)
	struct UImage* I_ARROWL2; // 0x558(0x08)
	struct UImage* I_ARROWR1; // 0x560(0x08)
	struct UImage* I_ARROWR2; // 0x568(0x08)
	struct UImage* I_BL1; // 0x570(0x08)
	struct UImage* I_BL2; // 0x578(0x08)
	struct UImage* I_BR1; // 0x580(0x08)
	struct UImage* I_BR2; // 0x588(0x08)
	struct UImage* I_TL1; // 0x590(0x08)
	struct UImage* I_TL2; // 0x598(0x08)
	struct UImage* I_TR1; // 0x5a0(0x08)
	struct UImage* I_TR2; // 0x5a8(0x08)
	struct UImage* Image; // 0x5b0(0x08)
	struct UImage* Image_328; // 0x5b8(0x08)
	struct UImage* Image_407; // 0x5c0(0x08)
	struct UImage* largesparkBL; // 0x5c8(0x08)
	struct UImage* LargeSparkTR; // 0x5d0(0x08)
	struct USizeBox* PickemsBox; // 0x5d8(0x08)
	struct USpacer* PickemsSpacer; // 0x5e0(0x08)
	struct UImage* RedL1; // 0x5e8(0x08)
	struct UImage* RedL1_2; // 0x5f0(0x08)
	struct UImage* RedL1_3; // 0x5f8(0x08)
	struct UImage* RedL1_4; // 0x600(0x08)
	struct UImage* RedL2; // 0x608(0x08)
	struct UImage* RedL2_2; // 0x610(0x08)
	struct UImage* RedL2_3; // 0x618(0x08)
	struct UImage* RedL2_4; // 0x620(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x628(0x08)
	struct UWBP_Button_Event_TabbedContent1_C* WBP_Button_Event_TabbedContent1; // 0x630(0x08)
	struct UWBP_Panel_Esports_Upcoming_Matches_C* WBP_Panel_Esports_Upcoming_Matches; // 0x638(0x08)
	struct UWBP_Panel_EsportsEventTitleCard_C* WBP_Panel_EsportsEventTitleCard; // 0x640(0x08)
	struct UWBP_Panel_EsportsSpotlightTeams_C* WBP_Panel_EsportsSpotlightTeams; // 0x648(0x08)
	struct UEsportsEventViewModel* EsportsEventViewModel; // 0x650(0x08)
	struct UTabbedContent_C* Tabbed Content; // 0x658(0x08)

	void Style Spotlight Page(); // Function WBP_Screen_EsportsSpotlight.WBP_Screen_EsportsSpotlight_C.Style Spotlight Page // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Setup Pickems Box(); // Function WBP_Screen_EsportsSpotlight.WBP_Screen_EsportsSpotlight_C.Setup Pickems Box // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Event IDs Changed(struct FString NewLeagueID, struct FString NewTournamentID); // Function WBP_Screen_EsportsSpotlight.WBP_Screen_EsportsSpotlight_C.On Event IDs Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToOrUnbindFromViewModel(bool Should Bind); // Function WBP_Screen_EsportsSpotlight.WBP_Screen_EsportsSpotlight_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Screen_EsportsSpotlight.WBP_Screen_EsportsSpotlight_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Screen_EsportsSpotlight.WBP_Screen_EsportsSpotlight_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Screen_EsportsSpotlight.WBP_Screen_EsportsSpotlight_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Screen_EsportsSpotlight_UI_AresRichTextButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Screen_EsportsSpotlight.WBP_Screen_EsportsSpotlight_C.BndEvt__WBP_Screen_EsportsSpotlight_UI_AresRichTextButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Screen_EsportsSpotlight_WBP_Button_Event_TabbedContent1_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Screen_EsportsSpotlight.WBP_Screen_EsportsSpotlight_C.BndEvt__WBP_Screen_EsportsSpotlight_WBP_Button_Event_TabbedContent1_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Screen_EsportsSpotlight_WBP_Button_Event_TabbedContent1_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Screen_EsportsSpotlight.WBP_Screen_EsportsSpotlight_C.BndEvt__WBP_Screen_EsportsSpotlight_WBP_Button_Event_TabbedContent1_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Screen_EsportsSpotlight_Button_EventDetails_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Screen_EsportsSpotlight.WBP_Screen_EsportsSpotlight_C.BndEvt__WBP_Screen_EsportsSpotlight_Button_EventDetails_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_EsportsSpotlight(int32_t EntryPoint); // Function WBP_Screen_EsportsSpotlight.WBP_Screen_EsportsSpotlight_C.ExecuteUbergraph_WBP_Screen_EsportsSpotlight // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

