// WidgetBlueprintGeneratedClass WBP_TabManager.WBP_TabManager_C
// Size: 0x493 (Inherited: 0x3e0)
struct UWBP_TabManager_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* PressRightNav; // 0x3e8(0x08)
	struct UWidgetAnimation* PressLeftNav; // 0x3f0(0x08)
	struct UAresCommonActionWidget* LeftNavigation; // 0x3f8(0x08)
	struct UAresCommonActionWidget* RightNavigation; // 0x400(0x08)
	struct UOverlay* TabOverlay; // 0x408(0x08)
	double RotatingTimerDuration; // 0x410(0x08)
	struct FMulticastInlineDelegate OnCurrentlyDisplayedTabChanged; // 0x418(0x10)
	struct UVM_TimedRotation_C* TimedRotationVM; // 0x428(0x08)
	struct TArray<struct UObject*> TabElements; // 0x430(0x10)
	struct UWBP_View_TabDisplayBase_C* TabClass; // 0x440(0x08)
	struct FDataTableRowHandle LeftInputDataTableRowHandle; // 0x448(0x18)
	struct FDataTableRowHandle RightInputDataTableRowHandle; // 0x460(0x18)
	struct UAresCommonInputActionManager* InputActionManager; // 0x478(0x08)
	struct UWBP_View_TabDisplayBase_C* TabDisplay; // 0x480(0x08)
	struct FAresActionBindingHandle LeftInputActionHandle; // 0x488(0x04)
	struct FAresActionBindingHandle RightInputActionHandle; // 0x48c(0x04)
	bool IsLeftInputSet; // 0x490(0x01)
	bool IsRightInputSet; // 0x491(0x01)
	bool ShouldUseTriggerInput; // 0x492(0x01)

	void HandleIsManuallySelectedChanged(bool InIsManuallySelected); // Function WBP_TabManager.WBP_TabManager_C.HandleIsManuallySelectedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StopTimer(); // Function WBP_TabManager.WBP_TabManager_C.StopTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RestartTimer(); // Function WBP_TabManager.WBP_TabManager_C.RestartTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ResumeTimer(); // Function WBP_TabManager.WBP_TabManager_C.ResumeTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PauseTimer(); // Function WBP_TabManager.WBP_TabManager_C.PauseTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Refresh(); // Function WBP_TabManager.WBP_TabManager_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void EnableInput(); // Function WBP_TabManager.WBP_TabManager_C.EnableInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisableInput(); // Function WBP_TabManager.WBP_TabManager_C.DisableInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Reset(int32_t InTabIndex); // Function WBP_TabManager.WBP_TabManager_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShouldShowGamepadIcons(bool& ShowGamepadIcons); // Function WBP_TabManager.WBP_TabManager_C.ShouldShowGamepadIcons // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void OnSelectedIndexChanged(int32_t SelectedIndex); // Function WBP_TabManager.WBP_TabManager_C.OnSelectedIndexChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTabsChanged(struct TArray<struct UObject*>& InNewTabObjects); // Function WBP_TabManager.WBP_TabManager_C.OnTabsChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCurrentTabSelectionChanged(int32_t InCurrentIndex, struct UObject* InCurrentObject); // Function WBP_TabManager.WBP_TabManager_C.OnCurrentTabSelectionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateInputActions(); // Function WBP_TabManager.WBP_TabManager_C.CreateInputActions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnNavigateTabsRight(struct FName ActionName); // Function WBP_TabManager.WBP_TabManager_C.OnNavigateTabsRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnNavigateTabsLeft(struct FName ActionName); // Function WBP_TabManager.WBP_TabManager_C.OnNavigateTabsLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowOrHideControllerIcons(); // Function WBP_TabManager.WBP_TabManager_C.ShowOrHideControllerIcons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(struct TArray<struct UObject*>& InTabElements); // Function WBP_TabManager.WBP_TabManager_C.Initialize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool Bind); // Function WBP_TabManager.WBP_TabManager_C.BindEvents // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModels(); // Function WBP_TabManager.WBP_TabManager_C.InitViewModels // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_TabManager.WBP_TabManager_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_TabManager.WBP_TabManager_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_TabManager_LeftNavigation_K2Node_ComponentBoundEvent_2_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Function WBP_TabManager.WBP_TabManager_C.BndEvt__WBP_TabManager_LeftNavigation_K2Node_ComponentBoundEvent_2_OnInputMethodChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_TabManager.WBP_TabManager_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_TabManager_RightNavigation_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Function WBP_TabManager.WBP_TabManager_C.BndEvt__WBP_TabManager_RightNavigation_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_TabManager(int32_t EntryPoint); // Function WBP_TabManager.WBP_TabManager_C.ExecuteUbergraph_WBP_TabManager // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnCurrentlyDisplayedTabChanged__DelegateSignature(int32_t CurrentIndex, struct UObject* CurrentObject); // Function WBP_TabManager.WBP_TabManager_C.OnCurrentlyDisplayedTabChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

