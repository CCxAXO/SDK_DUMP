// WidgetBlueprintGeneratedClass WBP_Screen_Pickem.WBP_Screen_Pickem_C
// Size: 0x688 (Inherited: 0x580)
struct UWBP_Screen_Pickem_C : UEsportsHubScreenV2 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	struct UWidgetAnimation* OnUserRegistered; // 0x588(0x08)
	struct UWidgetAnimation* OnEntering; // 0x590(0x08)
	struct UImage* BG; // 0x598(0x08)
	struct UImage* Divider; // 0x5a0(0x08)
	struct UImage* Divider_2; // 0x5a8(0x08)
	struct UImage* Divider_3; // 0x5b0(0x08)
	struct UOverlay* Empty; // 0x5b8(0x08)
	struct UImage* EmptyLeaderboard; // 0x5c0(0x08)
	struct UEsportsHubSafeArea* EsportsHubSafeArea; // 0x5c8(0x08)
	struct UImage* Image_65; // 0x5d0(0x08)
	struct UImage* Image_93; // 0x5d8(0x08)
	struct UOverlay* LandingPage; // 0x5e0(0x08)
	struct UOverlay* LoadingThrobber; // 0x5e8(0x08)
	struct ULoadingThrobberSmall_C* LoadingThrobberSmall; // 0x5f0(0x08)
	struct UOverlay* O_RegistrationButton; // 0x5f8(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x600(0x08)
	struct USharedBlurBg_C* SharedBlurBg_97; // 0x608(0x08)
	struct UImage* swipe; // 0x610(0x08)
	struct UVerticalBox* VB_CommunityLeaderboard; // 0x618(0x08)
	struct UWBP_Button_Esports_Secondary_C* WBP_Button_Esports_Secondary; // 0x620(0x08)
	struct UWBP_Button_Primary_C* WBP_Button_Primary; // 0x628(0x08)
	struct UWBP_Panel_Arrows_C* WBP_Panel_Arrows; // 0x630(0x08)
	struct UWBP_Panel_CelebStandingsContainer_C* WBP_Panel_CelebStandingsContainer; // 0x638(0x08)
	struct UWBP_Panel_EsportsTabbedTitle_C* WBP_Panel_EsportsTabbedTitle_310; // 0x640(0x08)
	struct UWBP_Panel_FactionsArea_C* WBP_Panel_FactionsArea; // 0x648(0x08)
	struct UWBP_Panel_InfoSidePanel_C* WBP_Panel_InfoSidePanel; // 0x650(0x08)
	struct UWBP_Panel_Pickem_Event_Rewards_C* WBP_Panel_Pickem_Event_Rewards; // 0x658(0x08)
	struct UWBP_Panel_StagesSidePanel_C* WBP_Panel_StagesSidePanel; // 0x660(0x08)
	struct UWBP_Panel_UserInfo_C* WBP_Panel_UserInfo; // 0x668(0x08)
	struct UAresWidgetSwitcher* WidgetSwitcher_Loading; // 0x670(0x08)
	struct UAresWidgetSwitcher* WidgetSwitcher_Registration; // 0x678(0x08)
	struct UPickemEventInfoViewModel* PickemEventVM; // 0x680(0x08)

	void On Pickem Overview Info Loaded(bool IsPickemOverviewInfoLoaded); // Function WBP_Screen_Pickem.WBP_Screen_Pickem_C.On Pickem Overview Info Loaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Setup Community Leaderboard(); // Function WBP_Screen_Pickem.WBP_Screen_Pickem_C.Setup Community Leaderboard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Style For Pickem Events(); // Function WBP_Screen_Pickem.WBP_Screen_Pickem_C.Style For Pickem Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Style Widgets(); // Function WBP_Screen_Pickem.WBP_Screen_Pickem_C.Style Widgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetRewardsEnabled(bool IsRewardsPanelEnabled); // Function WBP_Screen_Pickem.WBP_Screen_Pickem_C.SetRewardsEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Playoffs Pick Block Changed(struct UPickemBlockModel* PlayoffsPickBlock); // Function WBP_Screen_Pickem.WBP_Screen_Pickem_C.On Playoffs Pick Block Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Groups Pick Block Changed(struct UPickemBlockModel* GroupsPickBlock); // Function WBP_Screen_Pickem.WBP_Screen_Pickem_C.On Groups Pick Block Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRegistrationStatusChanged(enum class EPickemRegistrationStatus& RegistrationStatus); // Function WBP_Screen_Pickem.WBP_Screen_Pickem_C.OnRegistrationStatusChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToOrUnbindFromModelEvents(bool ShouldBind); // Function WBP_Screen_Pickem.WBP_Screen_Pickem_C.BindToOrUnbindFromModelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Is Registered Changed(bool NewValue); // Function WBP_Screen_Pickem.WBP_Screen_Pickem_C.On Is Registered Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Screen_Pickem_WBP_Button_Primary_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Screen_Pickem.WBP_Screen_Pickem_C.BndEvt__WBP_Screen_Pickem_WBP_Button_Primary_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Screen_Pickem.WBP_Screen_Pickem_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Screen_Pickem.WBP_Screen_Pickem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Screen_Pickem_WBP_Button_Esports_Secondary_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Screen_Pickem.WBP_Screen_Pickem_C.BndEvt__WBP_Screen_Pickem_WBP_Button_Esports_Secondary_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Screen_Pickem_WBP_Button_Primary_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Screen_Pickem.WBP_Screen_Pickem_C.BndEvt__WBP_Screen_Pickem_WBP_Button_Primary_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Screen_Pickem_WBP_Button_Primary_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Screen_Pickem.WBP_Screen_Pickem_C.BndEvt__WBP_Screen_Pickem_WBP_Button_Primary_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnScreenReady(); // Function WBP_Screen_Pickem.WBP_Screen_Pickem_C.OnScreenReady // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Screen_Pickem.WBP_Screen_Pickem_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Screen_Pickem(int32_t EntryPoint); // Function WBP_Screen_Pickem.WBP_Screen_Pickem_C.ExecuteUbergraph_WBP_Screen_Pickem // (Final|UbergraphFunction) // @ game+0x1b42740
};

