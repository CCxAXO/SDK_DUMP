// WidgetBlueprintGeneratedClass WBP_Panel_MatchDetailsScoreboardTabV2.WBP_Panel_MatchDetailsScoreboardTabV2_C
// Size: 0x451 (Inherited: 0x3e0)
struct UWBP_Panel_MatchDetailsScoreboardTabV2_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UMatchHistoryScoreboardViewModel* MatchHistoryScoreboardViewModel; // 0x3e8(0x08)
	struct UGridPanel* Header; // 0x3f0(0x08)
	struct UVerticalBox* VerticalBox_2; // 0x3f8(0x08)
	struct UWBP_Button_BasicText_C* WBP_Button_ACS; // 0x400(0x08)
	struct UWBP_Button_BasicText_C* WBP_Button_Defuses; // 0x408(0x08)
	struct UWBP_Button_BasicText_C* WBP_Button_Econ_Rating; // 0x410(0x08)
	struct UWBP_Button_BasicText_C* WBP_Button_FirstBloods; // 0x418(0x08)
	struct UWBP_Button_BasicText_C* WBP_Button_IndividualSort; // 0x420(0x08)
	struct UWBP_Button_BasicText_C* WBP_Button_KDA; // 0x428(0x08)
	struct UWBP_Button_BasicText_C* WBP_Button_Plants; // 0x430(0x08)
	struct UWBP_List_Base_C* WBP_List_Base; // 0x438(0x08)
	struct FGameModeMatchDetailsScoreboardConfig ScoreboardConfig; // 0x440(0x08)
	struct UButton* CurrentSelectedButton; // 0x448(0x08)
	bool IsFFAMode; // 0x450(0x01)

	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_MatchDetailsScoreboardTabV2.WBP_Panel_MatchDetailsScoreboardTabV2_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void HideColumns(struct FGameModeMatchDetailsScoreboardConfig ScoreboardConfig); // Function WBP_Panel_MatchDetailsScoreboardTabV2.WBP_Panel_MatchDetailsScoreboardTabV2_C.HideColumns // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnScoreboardConfigChanged(struct FGameModeMatchDetailsScoreboardConfig ScoreboardConfig); // Function WBP_Panel_MatchDetailsScoreboardTabV2.WBP_Panel_MatchDetailsScoreboardTabV2_C.OnScoreboardConfigChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPlayersSorted(); // Function WBP_Panel_MatchDetailsScoreboardTabV2.WBP_Panel_MatchDetailsScoreboardTabV2_C.OnPlayersSorted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetMatchInfo(struct FString MatchID, struct FString Subject); // Function WBP_Panel_MatchDetailsScoreboardTabV2.WBP_Panel_MatchDetailsScoreboardTabV2_C.SetMatchInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetMatchIDOverride(struct FString MatchIDOverride); // Function WBP_Panel_MatchDetailsScoreboardTabV2.WBP_Panel_MatchDetailsScoreboardTabV2_C.SetMatchIDOverride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_MatchDetailsScoreboardTabV2.WBP_Panel_MatchDetailsScoreboardTabV2_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_MatchDetailsScoreboardTabV2.WBP_Panel_MatchDetailsScoreboardTabV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_MatchDetailsScoreboardTab_WBP_Button_BasicText_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_MatchDetailsScoreboardTabV2.WBP_Panel_MatchDetailsScoreboardTabV2_C.BndEvt__WBP_Panel_MatchDetailsScoreboardTab_WBP_Button_BasicText_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_MatchDetailsScoreboardTab_WBP_Button_AVGCombatScore_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_MatchDetailsScoreboardTabV2.WBP_Panel_MatchDetailsScoreboardTabV2_C.BndEvt__WBP_Panel_MatchDetailsScoreboardTab_WBP_Button_AVGCombatScore_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_MatchDetailsScoreboardTab_WBP_Button_KDA_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_MatchDetailsScoreboardTabV2.WBP_Panel_MatchDetailsScoreboardTabV2_C.BndEvt__WBP_Panel_MatchDetailsScoreboardTab_WBP_Button_KDA_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_MatchDetailsScoreboardTab_WBP_Button_Econ_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_MatchDetailsScoreboardTabV2.WBP_Panel_MatchDetailsScoreboardTabV2_C.BndEvt__WBP_Panel_MatchDetailsScoreboardTab_WBP_Button_Econ_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_MatchDetailsScoreboardTab_WBP_Button_FirstBloods_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_MatchDetailsScoreboardTabV2.WBP_Panel_MatchDetailsScoreboardTabV2_C.BndEvt__WBP_Panel_MatchDetailsScoreboardTab_WBP_Button_FirstBloods_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_MatchDetailsScoreboardTab_WBP_Button_Plants_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_MatchDetailsScoreboardTabV2.WBP_Panel_MatchDetailsScoreboardTabV2_C.BndEvt__WBP_Panel_MatchDetailsScoreboardTab_WBP_Button_Plants_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_MatchDetailsScoreboardTab_WBP_Button_Defuse_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_MatchDetailsScoreboardTabV2.WBP_Panel_MatchDetailsScoreboardTabV2_C.BndEvt__WBP_Panel_MatchDetailsScoreboardTab_WBP_Button_Defuse_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_MatchDetailsScoreboardTabV2.WBP_Panel_MatchDetailsScoreboardTabV2_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_MatchDetailsScoreboardTabV2.WBP_Panel_MatchDetailsScoreboardTabV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_MatchDetailsScoreboardTabV2(int32_t EntryPoint); // Function WBP_Panel_MatchDetailsScoreboardTabV2.WBP_Panel_MatchDetailsScoreboardTabV2_C.ExecuteUbergraph_WBP_Panel_MatchDetailsScoreboardTabV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

