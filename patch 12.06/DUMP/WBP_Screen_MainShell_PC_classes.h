// WidgetBlueprintGeneratedClass WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C
// Size: 0x700 (Inherited: 0x5b1)
struct UWBP_Screen_MainShell_PC_C : UWBP_Screen_Shell_Base_C {
	char pad_5B1[0x7]; // 0x5b1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5b8(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* ContextContainer; // 0x5c0(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* FullscreenModalOverlayContainer; // 0x5c8(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* MainContainer; // 0x5d0(0x08)
	struct UMainMenuNavBar_PC_C* MainMenuNavBar_PC; // 0x5d8(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* ModalContainer; // 0x5e0(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* PopupContainer; // 0x5e8(0x08)
	struct USizeBox* QueueTimerSizeBox; // 0x5f0(0x08)
	struct UWBP_Panel_ShellBackground_C* ShellBackground; // 0x5f8(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* SocialContainer; // 0x600(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* SystemErrorContainer; // 0x608(0x08)
	struct UWBP_MenuActionHintBar_C* WBP_MenuActionHintBar; // 0x610(0x08)
	struct UWBP_QueueTimer_C* WBP_QueueTimer; // 0x618(0x08)
	struct UWBP_TabList_Navigation_C* WBP_TabList_Navigation; // 0x620(0x08)
	enum class MainShellGlobalTransitionRequest TransitionRequestBuffer; // 0x628(0x01)
	char pad_629[0x7]; // 0x629(0x07)
	struct TMap<struct FName, struct UAresCommonActivatableWidget*> WrapperMap; // 0x630(0x50)
	struct FName MainStackName; // 0x680(0x0c)
	struct FName ContextStackName; // 0x68c(0x0c)
	struct FName PopupStackName; // 0x698(0x0c)
	char pad_6A4[0x4]; // 0x6a4(0x04)
	struct UVM_PlatformFaulted_C* PlatformFaultedViewModel; // 0x6a8(0x08)
	struct FString URLFatalNotification; // 0x6b0(0x10)
	struct UAresSocialExperienceViewModel* SocialExperienceViewModel; // 0x6c0(0x08)
	struct FName ModalStackName; // 0x6c8(0x0c)
	struct FName SystemErrorStackName; // 0x6d4(0x0c)
	struct UPreludeViewModel* PreludeViewModel; // 0x6e0(0x08)
	struct FName FullscreenModalOverlayStackName; // 0x6e8(0x0c)
	char pad_6F4[0x4]; // 0x6f4(0x04)
	struct UQueueViewModel_C* LocalQueueViewModel; // 0x6f8(0x08)

	void InitializeLocalQueueVM(); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.InitializeLocalQueueVM // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleRequestNavigateToLobby(); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.HandleRequestNavigateToLobby // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleMatchFound(bool MatchFound); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.HandleMatchFound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetMatchmakingMatchFoundDuration(int32_t& Duration); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.GetMatchmakingMatchFoundDuration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void NavigateToSettings(); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.NavigateToSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void NavigateToLobby(); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.NavigateToLobby // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTransitionBuffer(enum class MainShellGlobalTransitionRequest InTransitionRequestBuffer); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.SetTransitionBuffer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteTransitionBufferRequest(); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.ExecuteTransitionBufferRequest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSocialExperienceClosed(enum class EAresSocialTransitionType TransitionType); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.OnSocialExperienceClosed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSocialExperienceOpened(enum class EAresSocialTransitionType TransitionType); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.OnSocialExperienceOpened // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToSocialExperience(bool bDoBind); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.BindToSocialExperience // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToPreludes(bool Bind); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.BindToPreludes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlatformFaulted(bool IsPlatformFaulted); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.OnPlatformFaulted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void BindToPlatformFaulted(); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.BindToPlatformFaulted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool BP_OnHandleBackAction(); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.BP_OnHandleBackAction // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBackgroundVideo(struct FMenuStackMediaSourceParams BackgroundVideoParams); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.SetBackgroundVideo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBackgroundVisibility(enum class EWidgetVisibilityOption ShellBackgroundVisibilityOption); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.SetBackgroundVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBackgroundImage(struct FSlateBrush& BackgroundImage); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.SetBackgroundImage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnActivated(); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleNativePlatformFirstPartyInviteFailed(enum class EPartyErrorEnum ErrorCode, struct FString Description); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.HandleNativePlatformFirstPartyInviteFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_HandleMenuStackActiveStateChanged(struct FName InMenuStack, bool bInActiveState); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.BP_HandleMenuStackActiveStateChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Screen_MainShell_Console_MainStackContainer_K2Node_ComponentBoundEvent_7_OnActivatableContainerTransitionChanged__DelegateSignature(struct UCommonActivatableWidgetContainerBase* WidgetStack, bool bIsTransitioning); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.BndEvt__WBP_Screen_MainShell_Console_MainStackContainer_K2Node_ComponentBoundEvent_7_OnActivatableContainerTransitionChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PopulateMenuStackMap(); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.PopulateMenuStackMap // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Screen_MainShell_Console_WBP_QueueTimer_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.BndEvt__WBP_Screen_MainShell_Console_WBP_QueueTimer_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Screen_MainShell_PC(int32_t EntryPoint); // Function WBP_Screen_MainShell_PC.WBP_Screen_MainShell_PC_C.ExecuteUbergraph_WBP_Screen_MainShell_PC // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

