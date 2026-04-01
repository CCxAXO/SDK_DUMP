// WidgetBlueprintGeneratedClass WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C
// Size: 0x471 (Inherited: 0x3e0)
struct UWBP_Panel_ContractChapterRewardList_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* Diamond; // 0x3e8(0x08)
	struct UImage* Dividerline; // 0x3f0(0x08)
	struct UHorizontalBox* DividerLineGroup; // 0x3f8(0x08)
	struct UImage* DividerNib; // 0x400(0x08)
	struct UImage* DividerNib_2; // 0x408(0x08)
	struct UVerticalBox* FreeRewardVerticalBox; // 0x410(0x08)
	struct UImage* Image_202; // 0x418(0x08)
	struct UTextBlock* LevelRewardsTitle; // 0x420(0x08)
	struct UWBP_List_Base_C* WBP_List_FreeRewards; // 0x428(0x08)
	struct UWBP_List_Base_C* WBP_List_Levels; // 0x430(0x08)
	struct UVM_ContractChapterRewardListWithFocus_C* VM_ContractChapterRewardListWithFocus; // 0x438(0x08)
	struct UVM_ContractChapterListWithSelect_C* VM_ContractChapterListWithSelect; // 0x440(0x08)
	struct UVM_ContractState_C* VM_ContractState; // 0x448(0x08)
	struct FMulticastInlineDelegate OnSelectedRewardChanged; // 0x450(0x10)
	struct FMulticastInlineDelegate OnSelectedLevelChanged; // 0x460(0x10)
	bool DebugPrintEnabled; // 0x470(0x01)

	void DebugPrint(struct FText Text, struct FLinearColor TextColor, double Duration); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.DebugPrint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleOnFreeRewardChildButtonClicked(struct UObject* Item); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.HandleOnFreeRewardChildButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleOnLevelChildButtonClicked(struct UObject* Item); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.HandleOnLevelChildButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RequestFocusOverride(struct FWildcard FocusOverrideWildcard, struct UContractLevelViewModel* DefaultFocus); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.RequestFocusOverride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void Set_VM_ContractState(struct UVM_ContractState_C* VM_ContractState); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.Set_VM_ContractState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RequestLevelFocus(struct UContractLevelViewModel* Level); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.RequestLevelFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleMouseWheel(int32_t Direction); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.HandleMouseWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleObjectSelectionChanged(struct UObject* Item, bool bIsSelected); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.HandleObjectSelectionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* PaginateForwardFromLevels(enum class EUINavigation Navigation); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.PaginateForwardFromLevels // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* PaginateToLevelsFromFreeRewards(enum class EUINavigation Navigation); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.PaginateToLevelsFromFreeRewards // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* SetFocusManually(struct UListView* ListViewObject, int32_t Index, struct UListView* ListViewObjectToClearSelection); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.SetFocusManually // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* PaginateBackwardFromLevelRewards(enum class EUINavigation Navigation); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.PaginateBackwardFromLevelRewards // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* PaginateForward(enum class EUINavigation Navigation); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.PaginateForward // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleLevelInitialized(struct UObject* Item, struct UUserWidget* Widget); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.HandleLevelInitialized // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleFreeRewardInitialized(struct UObject* Item, struct UUserWidget* Widget); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.HandleFreeRewardInitialized // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init from Chapter Model(struct UContractChapterViewModel* ContractChapterViewModel); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.Init from Chapter Model // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleFreeRewardVisibility(bool ShouldShowFreeRewardFields); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.HandleFreeRewardVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleFreeEarnableItemsChanged(struct TArray<struct UFreeChapterEarnableItem*>& FreeEarnableItems, int32_t desiredFocusIndex); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.HandleFreeEarnableItemsChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleLevelListChanged(struct TArray<struct UContractLevelViewModel*>& Levels, int32_t desiredFocusIndex); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.HandleLevelListChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindChapterEvents(bool Bind); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.BindChapterEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindSelectionEvents(bool Bind); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.BindSelectionEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindWidgetEvents(bool Bind); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.BindWidgetEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_ContractChapterRewardList(int32_t EntryPoint); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.ExecuteUbergraph_WBP_Panel_ContractChapterRewardList // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnSelectedLevelChanged__DelegateSignature(struct UContractLevelViewModel* SelectedLevel); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.OnSelectedLevelChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSelectedRewardChanged__DelegateSignature(struct URewardModel* SelectedReward); // Function WBP_Panel_ContractChapterRewardList.WBP_Panel_ContractChapterRewardList_C.OnSelectedRewardChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

