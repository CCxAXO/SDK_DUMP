// WidgetBlueprintGeneratedClass WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C
// Size: 0x1d40 (Inherited: 0x1ae0)
struct UWBP_Panel_MatchDetailsScoreboardTabPlayerV2_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UMatchHistoryScoreboardPlayerViewModel* MatchHistoryScoreboardPlayerViewModel; // 0x1ae8(0x08)
	struct UImage* ACS_BG; // 0x1af0(0x08)
	struct UOverlay* ACSBox; // 0x1af8(0x08)
	struct UAresInputSwitcher* AresInputSwitcher_1; // 0x1b00(0x08)
	struct UAresCommonText* AVGScore; // 0x1b08(0x08)
	struct UImage* CHARACTER_PORTRAIT; // 0x1b10(0x08)
	struct UCompetitiveTierIconSmall_C* CompetitiveTierIconSmall; // 0x1b18(0x08)
	struct UWBP_ContextMenuAnchor_SocialPlayer_C* ContextMenuAnchor; // 0x1b20(0x08)
	struct UAresCommonText* Defuse; // 0x1b28(0x08)
	struct UImage* Defuses_BG; // 0x1b30(0x08)
	struct UOverlay* DefusesBox; // 0x1b38(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher; // 0x1b40(0x08)
	struct UAresCommonText* Econ; // 0x1b48(0x08)
	struct UImage* EconRating_BG; // 0x1b50(0x08)
	struct UOverlay* EconRatingBox; // 0x1b58(0x08)
	struct UAresCommonText* FirstBlood; // 0x1b60(0x08)
	struct UImage* FirstBloods_BG; // 0x1b68(0x08)
	struct UOverlay* FirstBloodsBox; // 0x1b70(0x08)
	struct UGridPanel* GridPanel_2; // 0x1b78(0x08)
	struct UAresCommonText* KDA; // 0x1b80(0x08)
	struct UImage* KDA_BG; // 0x1b88(0x08)
	struct UOverlay* KDABox; // 0x1b90(0x08)
	struct UImage* LocalPlayerIndicator_Triangle; // 0x1b98(0x08)
	struct UImage* Name_BG; // 0x1ba0(0x08)
	struct UAresCommonText* Plant; // 0x1ba8(0x08)
	struct UImage* Plants_BG; // 0x1bb0(0x08)
	struct UOverlay* PlantsBox; // 0x1bb8(0x08)
	struct UAresCommonText* PlayerCharacterName; // 0x1bc0(0x08)
	struct UImage* PlayerIndicator; // 0x1bc8(0x08)
	struct UImage* RANK_ICON; // 0x1bd0(0x08)
	struct USizeBox* SizeBox_4; // 0x1bd8(0x08)
	struct USizeBox* Slot_CompetitiveTier; // 0x1be0(0x08)
	struct UWBP_Button_Basic_C* WBP_Button_Basic; // 0x1be8(0x08)
	struct UWBP_Button_PenaltyFeedback_C* WBP_Button_PenaltyFeedback; // 0x1bf0(0x08)
	struct UWBP_IdentitySourceIcon_C* WBP_IdentitySourceIcon; // 0x1bf8(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName_Console; // 0x1c00(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName_PC; // 0x1c08(0x08)
	struct FMulticastInlineDelegate OnPlayerSubjectChanged; // 0x1c10(0x10)
	struct FString PlayerSubject; // 0x1c20(0x10)
	struct UVM_PenaltyFeedback_C* PenaltyFeedbackViewModel; // 0x1c30(0x08)
	bool PlayerHasPenaltyFeedback; // 0x1c38(0x01)
	char pad_1C39[0x7]; // 0x1c39(0x07)
	struct FString MatchID; // 0x1c40(0x10)
	struct UVM_PlayerDisplayableIdentity_C* DisplayableIdentitySourceViewModel; // 0x1c50(0x08)
	struct FGameModeMatchDetailsScoreboardConfig ScoreboardConfig; // 0x1c58(0x08)
	struct FLinearColor LocalPlayerColor; // 0x1c60(0x10)
	struct FLinearColor AllyTeamColor; // 0x1c70(0x10)
	struct FLinearColor EnemyTeamColor; // 0x1c80(0x10)
	enum class EMatchDetailsScoreboardPlayerRowType PlayerType; // 0x1c90(0x01)
	char pad_1C91[0x7]; // 0x1c91(0x07)
	double LocalNameAlpha; // 0x1c98(0x08)
	double LocalScoreAlpha; // 0x1ca0(0x08)
	double LocalStatsAlpha; // 0x1ca8(0x08)
	double LocalTriangleAlpha; // 0x1cb0(0x08)
	double AllyNameAlpha; // 0x1cb8(0x08)
	double AllyScoreAlpha; // 0x1cc0(0x08)
	double AllyStatsAlpha; // 0x1cc8(0x08)
	double EnemyNameAlpha; // 0x1cd0(0x08)
	double EnemyScoreAlpha; // 0x1cd8(0x08)
	double EnemyStatsAlpha; // 0x1ce0(0x08)
	bool IsAllyTeam; // 0x1ce8(0x01)
	bool IsTargetPlayer; // 0x1ce9(0x01)
	char pad_1CEA[0x6]; // 0x1cea(0x06)
	struct FAresConditionalInputAction PlayerMenuAction; // 0x1cf0(0x28)
	struct FAresConditionalInputAction PenaltyFeedbackAction; // 0x1d18(0x28)

	struct FString GetListItemTelemetryTarget(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMatchHistoryScoreboardPlayerViewModel(struct UMatchHistoryScoreboardPlayerViewModel* ViewModel); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.SetMatchHistoryScoreboardPlayerViewModel // (Final|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePenaltyFeedbackClicked(struct FName ActionName); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.HandlePenaltyFeedbackClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePlayerMenuClicked(struct FName ActionName); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.HandlePlayerMenuClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindCIAButtons(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.BindCIAButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnScoreboardConfigChanged(struct FGameModeMatchDetailsScoreboardConfig ScoreboardConfig); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.OnScoreboardConfigChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct FText __0ba1be4d-4712-6a6f-eceb-e6af8f22d536_SourceToDest(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.__0ba1be4d-4712-6a6f-eceb-e6af8f22d536_SourceToDest // (Final|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	struct FText __633d3228-4111-836c-001e-5f8478a8e279_SourceToDest(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.__633d3228-4111-836c-001e-5f8478a8e279_SourceToDest // (Final|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	struct FText __a9692270-414c-bb3f-e322-ef8559341440_SourceToDest(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.__a9692270-414c-bb3f-e322-ef8559341440_SourceToDest // (Final|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	struct FText __f43dbf15-4e2a-4d10-3355-fd80d79c8e85_SourceToDest(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.__f43dbf15-4e2a-4d10-3355-fd80d79c8e85_SourceToDest // (Final|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	struct FText __c0a24eaf-4a73-bd55-817c-a6bcc3e14fbc_SourceToDest(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.__c0a24eaf-4a73-bd55-817c-a6bcc3e14fbc_SourceToDest // (Final|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void On Penalty Feedback Button Clicked(struct UCommonButtonBase* Button); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.On Penalty Feedback Button Clicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPenaltyFeedback(bool HasPenaltyFeedback, struct TArray<enum class EInfractionType>& Infractions); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.SetPenaltyFeedback // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlayerType(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.SetPlayerType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlayerSubject(struct FString InPlayerSubject); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.SetPlayerSubject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlayerCharacter(struct FText InPlayerCharacterName); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.SetPlayerCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMatchID(struct FString MatchID); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.SetMatchID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsTargetPlayer(bool InIsTargetPlayer); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.SetIsTargetPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsAllyTeam(bool IsAllyTeam); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.SetIsAllyTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCompetitiveTier(int32_t CompetitiveTier); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.SetCompetitiveTier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCharacterPortrait(struct UTexture2D* InCharacterPortrait); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.SetCharacterPortrait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBackgrounds(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.SetBackgrounds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HideColumns(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.HideColumns // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetColors(struct FLinearColor& IndicatorColor, struct FLinearColor& NameColor, struct FLinearColor& ScoreColor, struct FLinearColor& StatColor, struct FLinearColor& LocalPlayerTriangleColor); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.GetColors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DetermineLocalTriangleAlpha(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.DetermineLocalTriangleAlpha // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnEntryReleased(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandlePlayerIdentitySourceChanged(enum class EAresIdentitySource NewIdentitySource, bool bHasValidIdentity); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.HandlePlayerIdentitySourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnHovered(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnUnhovered(); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_MatchDetailsScoreboardTabPlayerV2_WBP_Button_PenaltyFeedback_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.BndEvt__WBP_Panel_MatchDetailsScoreboardTabPlayerV2_WBP_Button_PenaltyFeedback_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_MatchDetailsScoreboardTabPlayerV2_WBP_Button_Basic_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.BndEvt__WBP_Panel_MatchDetailsScoreboardTabPlayerV2_WBP_Button_Basic_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_MatchDetailsScoreboardTabPlayerV2_WBP_Button_Basic_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.BndEvt__WBP_Panel_MatchDetailsScoreboardTabPlayerV2_WBP_Button_Basic_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_MatchDetailsScoreboardTabPlayerV2_WBP_Button_Basic_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.BndEvt__WBP_Panel_MatchDetailsScoreboardTabPlayerV2_WBP_Button_Basic_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_MatchDetailsScoreboardTabPlayerV2(int32_t EntryPoint); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.ExecuteUbergraph_WBP_Panel_MatchDetailsScoreboardTabPlayerV2 // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnPlayerSubjectChanged__DelegateSignature(struct FString OutPlayerSubject); // Function WBP_Panel_MatchDetailsScoreboardTabPlayerV2.WBP_Panel_MatchDetailsScoreboardTabPlayerV2_C.OnPlayerSubjectChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

