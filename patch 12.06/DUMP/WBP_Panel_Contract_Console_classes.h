// WidgetBlueprintGeneratedClass WBP_Panel_Contract_Console.WBP_Panel_Contract_Console_C
// Size: 0x4f8 (Inherited: 0x3e0)
struct UWBP_Panel_Contract_Console_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* CenterFiligree; // 0x3e8(0x08)
	struct UHorizontalBox* FiligreeCenter; // 0x3f0(0x08)
	struct UImage* LeftSideFiligree; // 0x3f8(0x08)
	struct UAresCommonText* RewardLabelCommon; // 0x400(0x08)
	struct UImage* RightSideFiligree; // 0x408(0x08)
	struct UWBP_Panel_Battlepass_PurchaseButton_C* WBP_Panel_Battlepass_PurchaseButton; // 0x410(0x08)
	struct UWBP_Panel_BattlepassTimer_C* WBP_Panel_BattlepassTimer; // 0x418(0x08)
	struct UWBP_Panel_BattlepassXPBoost_C* WBP_Panel_BattlepassXPBoost; // 0x420(0x08)
	struct UWBP_Panel_CommonTitle_C* WBP_Panel_CommonTitle; // 0x428(0x08)
	struct UWBP_Panel_ContractChapterRewardList_C* WBP_Panel_ContractChapterRewardList; // 0x430(0x08)
	struct UWBP_TabManager_C* WBP_TabManager; // 0x438(0x08)
	struct UWBP_View_RewardPreview_C* WBP_View_RewardPreview; // 0x440(0x08)
	struct UAresCommonText* XPLabelCommon; // 0x448(0x08)
	struct UVM_ContractState_C* VM_ContractState; // 0x450(0x08)
	struct UVM_ContractUIData_C* VM_ContractUIData; // 0x458(0x08)
	struct UVM_ContractChapterListWithSelect_C* VM_ContractChapterListWithSelect; // 0x460(0x08)
	struct UVM_ContractOffer_C* VM_ContractOffer; // 0x468(0x08)
	struct UVM_Reward_C* VM_SelectedReward; // 0x470(0x08)
	struct UVM_ContractLevel_C* VM_SelectedLevel; // 0x478(0x08)
	struct FMulticastInlineDelegate OnActiveContractChanged; // 0x480(0x10)
	struct FAresConditionalInputAction 3DModelPreviewer; // 0x490(0x28)
	struct UAresScreenBase* WBP_Screen; // 0x4b8(0x08)
	struct FText EyebrowText; // 0x4c0(0x18)
	struct UCommonTextStyle* EyebrowStyle; // 0x4d8(0x08)
	bool ShowFiligree; // 0x4e0(0x01)
	char pad_4E1[0x7]; // 0x4e1(0x07)
	struct UCommonTextStyle* TitleStyle; // 0x4e8(0x08)
	struct UVM_ModelViewerPrompt_C* VM_ModelViewerPrompt; // 0x4f0(0x08)

	void RefreshCommonTitle(); // Function WBP_Panel_Contract_Console.WBP_Panel_Contract_Console_C.RefreshCommonTitle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RequestFocusOverride(struct FWildcard& FocusOverrideWildcard); // Function WBP_Panel_Contract_Console.WBP_Panel_Contract_Console_C.RequestFocusOverride // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_Contract_Console.WBP_Panel_Contract_Console_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void SetScreen(struct UAresScreenBase* WBP_Screen); // Function WBP_Panel_Contract_Console.WBP_Panel_Contract_Console_C.SetScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void NavigateTo3DModelPreviewer(struct FName ActionName); // Function WBP_Panel_Contract_Console.WBP_Panel_Contract_Console_C.NavigateTo3DModelPreviewer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetupCIACallbacks(); // Function WBP_Panel_Contract_Console.WBP_Panel_Contract_Console_C.SetupCIACallbacks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleLevelProgressTextChanged(struct FText LevelProgressText); // Function WBP_Panel_Contract_Console.WBP_Panel_Contract_Console_C.HandleLevelProgressTextChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleChapterListChanged(struct TArray<struct UObject*>& Chapters); // Function WBP_Panel_Contract_Console.WBP_Panel_Contract_Console_C.HandleChapterListChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Should Show Prompt Changed(bool bShouldShowPrompt); // Function WBP_Panel_Contract_Console.WBP_Panel_Contract_Console_C.Handle Should Show Prompt Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleSelectedRewardDisplayNameChanged(struct FText DisplayName); // Function WBP_Panel_Contract_Console.WBP_Panel_Contract_Console_C.HandleSelectedRewardDisplayNameChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Panel_Contract_Console.WBP_Panel_Contract_Console_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_Panel_Contract_Console.WBP_Panel_Contract_Console_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromActiveContract(struct UContractViewModel* ActiveContract); // Function WBP_Panel_Contract_Console.WBP_Panel_Contract_Console_C.InitFromActiveContract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_Contract_Console.WBP_Panel_Contract_Console_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_Contract_Console.WBP_Panel_Contract_Console_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_Contract_Console.WBP_Panel_Contract_Console_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_Contract_Console(int32_t EntryPoint); // Function WBP_Panel_Contract_Console.WBP_Panel_Contract_Console_C.ExecuteUbergraph_WBP_Panel_Contract_Console // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnActiveContractChanged__DelegateSignature(struct UContractViewModel* ActiveContract); // Function WBP_Panel_Contract_Console.WBP_Panel_Contract_Console_C.OnActiveContractChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

