// WidgetBlueprintGeneratedClass WBP_Panel_HovercardSection_TeamInfo.WBP_Panel_HovercardSection_TeamInfo_C
// Size: 0x430 (Inherited: 0x3e0)
struct UWBP_Panel_HovercardSection_TeamInfo_C : UWBP_Panel_HovercardSection_SocialPanelPlayer_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UPlayerPremierInfoSectionViewModel* PlayerPremierInfoSectionViewModel; // 0x3e8(0x08)
	struct USpacer* Spacer_NameToScore; // 0x3f0(0x08)
	struct UAresCommonText* Text_Title_TeamName; // 0x3f8(0x08)
	struct UVerticalBox* VerticalBox_Score; // 0x400(0x08)
	struct UWBP_Panel_PlayerPremierDivisionIcon_C* WBP_Panel_PlayerPremierDivisionIcon; // 0x408(0x08)
	struct UWBP_Panel_PlayerPremierTeamName_C* WBP_Panel_PlayerPremierTeamName; // 0x410(0x08)
	struct UWBP_Panel_PlayerPremierTeamScore_C* WBP_Panel_PlayerPremierTeamScore; // 0x418(0x08)
	struct UWBP_ProRosterIcon_C* WBP_ProRosterIcon; // 0x420(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Icon; // 0x428(0x08)

	void SetObservedPlayer(struct FString InPlayerSubject); // Function WBP_Panel_HovercardSection_TeamInfo.WBP_Panel_HovercardSection_TeamInfo_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetConfigValues(bool& bSectionIsEnabled, bool& bHideIfNotInTeam); // Function WBP_Panel_HovercardSection_TeamInfo.WBP_Panel_HovercardSection_TeamInfo_C.GetConfigValues // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateVisibility(); // Function WBP_Panel_HovercardSection_TeamInfo.WBP_Panel_HovercardSection_TeamInfo_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRosterTypeChanged(enum class EPremierRosterType RosterType); // Function WBP_Panel_HovercardSection_TeamInfo.WBP_Panel_HovercardSection_TeamInfo_C.OnRosterTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_PlayerPremierInfoSection_WBP_Panel_PlayerPremierDivisionIcon_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility); // Function WBP_Panel_HovercardSection_TeamInfo.WBP_Panel_HovercardSection_TeamInfo_C.BndEvt__WBP_Panel_PlayerPremierInfoSection_WBP_Panel_PlayerPremierDivisionIcon_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_PlayerPremierInfoSection_WBP_Panel_PlayerPremierTeamScore_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility); // Function WBP_Panel_HovercardSection_TeamInfo.WBP_Panel_HovercardSection_TeamInfo_C.BndEvt__WBP_Panel_PlayerPremierInfoSection_WBP_Panel_PlayerPremierTeamScore_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_HovercardSection_TeamInfo(int32_t EntryPoint); // Function WBP_Panel_HovercardSection_TeamInfo.WBP_Panel_HovercardSection_TeamInfo_C.ExecuteUbergraph_WBP_Panel_HovercardSection_TeamInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

