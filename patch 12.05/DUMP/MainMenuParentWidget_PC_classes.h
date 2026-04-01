// WidgetBlueprintGeneratedClass MainMenuParentWidget_PC.MainMenuParentWidget_PC_C
// Size: 0x468 (Inherited: 0x37c)
struct UMainMenuParentWidget_PC_C : UMainMenuParentWidgetBase_C {
	char pad_37C[0x4]; // 0x37c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct UVM_TopNavigation_C* VM_TopNavigation; // 0x388(0x08)
	struct UWidgetAnimation* HomeIntro; // 0x390(0x08)
	struct UImage* BackgroundDarken; // 0x398(0x08)
	struct ULazyDynamicWidgetSwitcher_C* ChatVersionsWidgetSwitcher; // 0x3a0(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* ContextStack; // 0x3a8(0x08)
	struct UFatalVanguardErrorNotification_C* FatalVanguardErrorNotification; // 0x3b0(0x08)
	struct UFatalVanguardRebootNotification_C* FatalVanguardRebootNotification; // 0x3b8(0x08)
	struct UCanvasPanel* MainMenu; // 0x3c0(0x08)
	struct UMainMenuBackgroundArt_Universal_C* MainMenuBackgroundArt; // 0x3c8(0x08)
	struct UMainMenuNavBar_PC_C* MainMenuNavBar_PC; // 0x3d0(0x08)
	struct UBorder* MatchFoundBorder; // 0x3d8(0x08)
	struct UOverlay* MenusContainer; // 0x3e0(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* ModalStack; // 0x3e8(0x08)
	struct UFatalNotificationFSV2_C* PlatformFaulted; // 0x3f0(0x08)
	struct UPlayerFacingPerfTextGroup_C* PlayerFacingPerfTextGroup; // 0x3f8(0x08)
	struct UPlayerFeedbackToolExternalLinkWidget_C* PlayerFeedbackToolExternalLinkWidget; // 0x400(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* PopupStack; // 0x408(0x08)
	struct UImage* Prelude; // 0x410(0x08)
	struct UOverlay* PrimaryNavBarContainer; // 0x418(0x08)
	struct USocialPanelPicker_C* SocialPanelPicker; // 0x420(0x08)
	struct UWidgetSwitcher* StateSwitcher; // 0x428(0x08)
	struct UWBP_TabList_Navigation_C* WBP_TabList_Navigation; // 0x430(0x08)
	struct FString ForceMatchID_1; // 0x438(0x10)
	struct FMargin DefaultMargin; // 0x448(0x10)
	struct FMargin CurrentMargin; // 0x458(0x10)

	void SocialVisibilityConverter(enum class EWidgetVisibilityOption Input, enum class ESlateVisibility& output); // Function MainMenuParentWidget_PC.MainMenuParentWidget_PC_C.SocialVisibilityConverter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void HandlePrimaryNavBarPositionChanged(enum class EUINavigationBarPosition NewPosition); // Function MainMenuParentWidget_PC.MainMenuParentWidget_PC_C.HandlePrimaryNavBarPositionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SpawnMiniBridge(); // Function MainMenuParentWidget_PC.MainMenuParentWidget_PC_C.SpawnMiniBridge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateMenuContainerMargins(struct FMargin NewMargins); // Function MainMenuParentWidget_PC.MainMenuParentWidget_PC_C.UpdateMenuContainerMargins // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TopMenuEntryChanged(struct UMenuStackEntry* TopEntry); // Function MainMenuParentWidget_PC.MainMenuParentWidget_PC_C.TopMenuEntryChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleEscapePressed(); // Function MainMenuParentWidget_PC.MainMenuParentWidget_PC_C.HandleEscapePressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowPlatformFaultedMessage(enum class EPlatformFaultReason FaultReason); // Function MainMenuParentWidget_PC.MainMenuParentWidget_PC_C.ShowPlatformFaultedMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function MainMenuParentWidget_PC.MainMenuParentWidget_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PlayIntroAnimations(); // Function MainMenuParentWidget_PC.MainMenuParentWidget_PC_C.PlayIntroAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowMainMenu(); // Function MainMenuParentWidget_PC.MainMenuParentWidget_PC_C.ShowMainMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AssignOptionsMenuToOptionsButton(); // Function MainMenuParentWidget_PC.MainMenuParentWidget_PC_C.AssignOptionsMenuToOptionsButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetValuesOnViewContextSet(); // Function MainMenuParentWidget_PC.MainMenuParentWidget_PC_C.SetValuesOnViewContextSet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowPrelude(); // Function MainMenuParentWidget_PC.MainMenuParentWidget_PC_C.ShowPrelude // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Platform Faulted(enum class EPlatformFaultReason FaultReason); // Function MainMenuParentWidget_PC.MainMenuParentWidget_PC_C.On Platform Faulted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__MainMenuParentWidget_PC_ChatVersionsWidgetSwitcher_K2Node_ComponentBoundEvent_0_EnabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function MainMenuParentWidget_PC.MainMenuParentWidget_PC_C.BndEvt__MainMenuParentWidget_PC_ChatVersionsWidgetSwitcher_K2Node_ComponentBoundEvent_0_EnabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function MainMenuParentWidget_PC.MainMenuParentWidget_PC_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function MainMenuParentWidget_PC.MainMenuParentWidget_PC_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MainMenuParentWidget_PC(int32_t EntryPoint); // Function MainMenuParentWidget_PC.MainMenuParentWidget_PC_C.ExecuteUbergraph_MainMenuParentWidget_PC // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

