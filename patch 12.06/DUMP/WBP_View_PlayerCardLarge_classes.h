// WidgetBlueprintGeneratedClass WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C
// Size: 0x6da (Inherited: 0x410)
struct UWBP_View_PlayerCardLarge_C : UWBP_Panel_PlayerCard_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct UWidgetAnimation* FocusOff; // 0x418(0x08)
	struct UWidgetAnimation* FocusOn; // 0x420(0x08)
	struct UImage* Au_P_BackGlow; // 0x428(0x08)
	struct UOverlay* Aura_Empty; // 0x430(0x08)
	struct UOverlay* Aura_Premier; // 0x438(0x08)
	struct UWidgetSwitcher* AuraSwitcher; // 0x440(0x08)
	struct UBorder* Border_PlayerName; // 0x448(0x08)
	struct UImage* diamond_other_2; // 0x450(0x08)
	struct UImage* diamond_other_3; // 0x458(0x08)
	struct UHorizontalBox* HorizontalBox_AccountLevel; // 0x460(0x08)
	struct UHorizontalBox* HorizontalBox_Ineligible; // 0x468(0x08)
	struct UImage* Image_108; // 0x470(0x08)
	struct UImage* Image_Frame_CompetitiveTier; // 0x478(0x08)
	struct UImage* Image_Frame_CompetitiveTier_Premier; // 0x480(0x08)
	struct UImage* Image_LocalPlayerAccent_Left; // 0x488(0x08)
	struct UImage* Image_LocalPlayerAccent_Right; // 0x490(0x08)
	struct UImage* Image_TopBar_Full; // 0x498(0x08)
	struct UImage* Img_TopBar_Left; // 0x4a0(0x08)
	struct UImage* Img_TopBar_Right; // 0x4a8(0x08)
	struct UImage* L_Decoration; // 0x4b0(0x08)
	struct UImage* L_Plate_Glow; // 0x4b8(0x08)
	struct UImage* Left_4; // 0x4c0(0x08)
	struct UImage* left_member_2; // 0x4c8(0x08)
	struct UImage* left_member_3; // 0x4d0(0x08)
	struct UImage* logofont_l; // 0x4d8(0x08)
	struct UImage* logofont_r; // 0x4e0(0x08)
	struct UWidgetSwitcher* MainBorder_Premier; // 0x4e8(0x08)
	struct UOverlay* MainBorder_Standard; // 0x4f0(0x08)
	struct UWidgetSwitcher* MainBorderSwitcher; // 0x4f8(0x08)
	struct UOverlay* MB_P_Basic; // 0x500(0x08)
	struct UOverlay* MB_P_Qualified; // 0x508(0x08)
	struct UOverlay* PartyLeader_Overlay; // 0x510(0x08)
	struct UImage* R_Decoration; // 0x518(0x08)
	struct UImage* R_Plate_Glow; // 0x520(0x08)
	struct URetainerBox* RetainerBox_PlayerCardImage; // 0x528(0x08)
	struct UImage* Right_4; // 0x530(0x08)
	struct UImage* right_member_2; // 0x538(0x08)
	struct UImage* right_member_3; // 0x540(0x08)
	struct USizeBox* SizeBox_CompetitiveTierIcon; // 0x548(0x08)
	struct USizeBox* SizeBox_IdentitySourceIcon; // 0x550(0x08)
	struct USizeBox* SizeBox_PlayerInfo; // 0x558(0x08)
	struct UVerticalBox* TierIcon; // 0x560(0x08)
	struct UWBP_IdentitySourceIcon_C* WBP_IdentitySourceIcon; // 0x568(0x08)
	struct UWBP_Panel_PartyLeader_C* WBP_Panel_PartyLeader; // 0x570(0x08)
	struct UWBP_Panel_PlayerAccountLevel_C* WBP_Panel_PlayerAccountLevel; // 0x578(0x08)
	struct UWBP_Panel_PlayerCardImage_C* WBP_Panel_PlayerCardImage; // 0x580(0x08)
	struct UWBP_Panel_PlayerCompetitiveTierIcon_C* WBP_Panel_PlayerCompetitiveTierIcon; // 0x588(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x590(0x08)
	struct UWBP_Panel_PlayerPartyReadiness_C* WBP_Panel_PlayerPartyReadiness; // 0x598(0x08)
	struct UWBP_Panel_PlayerTitle_C* WBP_Panel_PlayerTitle; // 0x5a0(0x08)
	struct UWBP_Panel_SeasonWinBadge_C* WBP_Panel_SeasonWinBadge; // 0x5a8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_ShowTopBar; // 0x5b0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_TierBackground; // 0x5b8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_TitleAndEligibility; // 0x5c0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_TopBar; // 0x5c8(0x08)
	struct FLinearColor LocalPlayerColor; // 0x5d0(0x10)
	struct FLinearColor TeammateColor; // 0x5e0(0x10)
	struct FLinearColor ErrorColor; // 0x5f0(0x10)
	struct FLinearColor FocusedColor; // 0x600(0x10)
	struct FLinearColor PartyLeaderStandardColor; // 0x610(0x10)
	struct FLinearColor PartyLeaderErrorColor; // 0x620(0x10)
	struct FString PlayerNameStandardStyleTag; // 0x630(0x10)
	struct FString PlayerNameErrorStyleTag; // 0x640(0x10)
	struct UCommonTextStyle* PlayerNameStandardStyle; // 0x650(0x08)
	struct UCommonTextStyle* PlayerNameErrorStyle; // 0x658(0x08)
	struct FName HighlightColorParameter; // 0x660(0x0c)
	struct FName IsFocusedParameter; // 0x66c(0x0c)
	double Anim_Highlight_Strength; // 0x678(0x08)
	struct UMaterialInstanceDynamic* RetainerBoxMaterial; // 0x680(0x08)
	struct UVM_PlayerQueueEligibility_C* PlayerQueueEligibilityViewModel; // 0x688(0x08)
	bool bIsInErrorState; // 0x690(0x01)
	char pad_691[0x7]; // 0x691(0x07)
	struct UVM_LocalPartyQueueEligibility_C* PartyQueueEligibilityViewModel; // 0x698(0x08)
	struct UVM_LocalPartyIsInRankedQueue_C* IsInRankedQueueViewModel; // 0x6a0(0x08)
	struct UVM_RankedInfo_C* RankedInfoViewModel; // 0x6a8(0x08)
	struct UVM_PlayerPrimaryIdentitySource_C* PlayerPrimaryIdentySourceViewModel; // 0x6b0(0x08)
	bool IsActRankHidden; // 0x6b8(0x01)
	bool IsInRankedQueue; // 0x6b9(0x01)
	char pad_6BA[0x6]; // 0x6ba(0x06)
	struct FString Subject; // 0x6c0(0x10)
	bool AccountLevelVisibleInitial; // 0x6d0(0x01)
	bool ShowQueueInfo; // 0x6d1(0x01)
	bool HideIdentitySource; // 0x6d2(0x01)
	bool HideCompetitiveTier; // 0x6d3(0x01)
	bool HidePlayerPartyReadiness; // 0x6d4(0x01)
	bool HideLocalPlayerAccents; // 0x6d5(0x01)
	bool GamepadHoverOverride; // 0x6d6(0x01)
	bool HidePartyLeadership; // 0x6d7(0x01)
	bool HidePremierPrestige; // 0x6d8(0x01)
	bool ShowPlayerNameOnMouseHover; // 0x6d9(0x01)

	bool ShouldShowPrestigeVisuals(); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.ShouldShowPrestigeVisuals // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateBorder(); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.UpdateBorder // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateAura(); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.UpdateAura // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePrestigeVisuals(); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.UpdatePrestigeVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateComponentVisibility(); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.UpdateComponentVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsActRankHiddenChanged(bool IsActRankHidden); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.HandleIsActRankHiddenChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OverrideDisplayedTitleText(struct FText InText, bool ActivateOverride); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.OverrideDisplayedTitleText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHasValidPresence(bool bHasValidPresence); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.SetHasValidPresence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePlayerReadinessChanged(bool bIsReady); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.HandlePlayerReadinessChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshViewModelData(); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.RefreshViewModelData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePlayerNameTextStyle(); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.UpdatePlayerNameTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool DeriveIsInErrorState(); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.DeriveIsInErrorState // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateIsInErrorState(); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.UpdateIsInErrorState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePlayerQueueEligibilityChanged(bool bIsQueueEligible); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.HandlePlayerQueueEligibilityChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePlayerQueueIneligibilityReasonChanged(struct FText IneligibilityReason); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.HandlePlayerQueueIneligibilityReasonChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePlayerPrimaryIdentitySourceChanged(enum class EAresIdentitySource PrimaryIdentitySource); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.HandlePlayerPrimaryIdentitySourceChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePartyQueueEligibilityChanged(bool bIsQueueEligible); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.HandlePartyQueueEligibilityChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindViewModelEvents(bool bDoBind); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.BindViewModelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsInRankedQueueChanged(bool bIsInRankedQueue); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.HandleIsInRankedQueueChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleCompetitiveTierDataUpdated(struct FCompetitiveTierData CompeitiveTierData); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.HandleCompetitiveTierDataUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetShowPlayerCardImage(bool bShowPlayerCardImage); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.SetShowPlayerCardImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlayerSubject(struct FString PlayerSubject); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.SetPlayerSubject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsVisuallyFocused(bool bIsVisuallyFocused); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.SetIsVisuallyFocused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsLocalPlayer(bool bIsLocalPlayer); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.SetIsLocalPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePlayerNameBorderColor(); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.UpdatePlayerNameBorderColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateSelfIndicatorDecorations(); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.UpdateSelfIndicatorDecorations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateDynamcDecorations(); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.UpdateDynamcDecorations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_View_PlayerCardLarge_WBP_Panel_PlayerAccountLevel_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.BndEvt__WBP_View_PlayerCardLarge_WBP_Panel_PlayerAccountLevel_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_View_PlayerCardLarge_WBP_Panel_SeasonWinBadge_K2Node_ComponentBoundEvent_2_OnBadgeVisibilityChanged__DelegateSignature(bool IsVisible); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.BndEvt__WBP_View_PlayerCardLarge_WBP_Panel_SeasonWinBadge_K2Node_ComponentBoundEvent_2_OnBadgeVisibilityChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_View_PlayerCardLarge(int32_t EntryPoint); // Function WBP_View_PlayerCardLarge.WBP_View_PlayerCardLarge_C.ExecuteUbergraph_WBP_View_PlayerCardLarge // (Final|UbergraphFunction) // @ game+0x1b42740
};

