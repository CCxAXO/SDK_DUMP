// WidgetBlueprintGeneratedClass MainMenuNavBar_PC.MainMenuNavBar_PC_C
// Size: 0x6e0 (Inherited: 0x508)
struct UMainMenuNavBar_PC_C : UMainMenuNavBar_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x508(0x08)
	struct UHorizontalBox* BreadcrumbParent; // 0x510(0x08)
	struct UVM_TopNavigation_C* VM_TopNavigation; // 0x518(0x08)
	struct UWidgetAnimation* hover; // 0x520(0x08)
	struct UButton* AlertButton; // 0x528(0x08)
	struct USizeBox* AlertParent; // 0x530(0x08)
	struct UImage* arrowtx; // 0x538(0x08)
	struct UButton* BackButton; // 0x540(0x08)
	struct UMenuAnchor* BackButtonAnchor; // 0x548(0x08)
	struct USizeBox* BackButtonParent; // 0x550(0x08)
	struct UTextBlock* BackText; // 0x558(0x08)
	struct UWBP_MenuButtonNavShortcut_C* BattlepassShortcut; // 0x560(0x08)
	struct UImage* bg_addon; // 0x568(0x08)
	struct UBonusShopButton_C* BonusShopButton; // 0x570(0x08)
	struct USizeBox* BonusShopParent; // 0x578(0x08)
	struct USizeBox* Breadcrumb; // 0x580(0x08)
	struct USpacer* BreadcrumbOnlySpacer; // 0x588(0x08)
	struct UWBP_MenuButtonNavShortcut_C* CareerShortcut_3; // 0x590(0x08)
	struct UWBP_MenuButtonNavShortcut_C* CareerShortcut_Main; // 0x598(0x08)
	struct USizeBox* CurrencyParent; // 0x5a0(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher; // 0x5a8(0x08)
	struct UWBP_MenuButtonNavShortcut_EsportsHub_C* EsportsHubrShortcut; // 0x5b0(0x08)
	struct UWBP_MenuButtonNavShortcut_C* EsportsShortcut_Addon; // 0x5b8(0x08)
	struct UOverlay* GlobalNavCluster; // 0x5c0(0x08)
	struct UGlobalQueueTimer_Universal_C* GlobalQueueTimer_Universal; // 0x5c8(0x08)
	struct UImage* Image_101; // 0x5d0(0x08)
	struct UImage* Image_143; // 0x5d8(0x08)
	struct UWBP_Button_Inbox_Nav_C* InboxButton; // 0x5e0(0x08)
	struct USizeBox* InboxParent; // 0x5e8(0x08)
	struct USizeBox* KRLoyaltyParent; // 0x5f0(0x08)
	struct UMainMenuAlert_C* MainMenuAlert; // 0x5f8(0x08)
	struct USizeBox* MissionsParent; // 0x600(0x08)
	struct USizeBox* OptionsParent; // 0x608(0x08)
	struct UTextBlock* PageNameText; // 0x610(0x08)
	struct UMenuAnchor* PickemsOpenMenuAnchor; // 0x618(0x08)
	struct UMenuAnchor* PickemsOpenMenuAnchor_Addon; // 0x620(0x08)
	struct UWBP_MenuButtonNavShortcut_C* PremierShortcut_Addon; // 0x628(0x08)
	struct UWBP_MenuButtonNavShortcut_C* PremierShortcut_Main; // 0x630(0x08)
	struct UWBP_MenuButtonNavShortcut_C* ProgressionShortcut; // 0x638(0x08)
	struct USizeBox* SB_Addon; // 0x640(0x08)
	struct USizeBox* SB_AddOnParent; // 0x648(0x08)
	struct USectionPlay_C* SectionPlay; // 0x650(0x08)
	struct USectionPlay_C* SectionPlay_2; // 0x658(0x08)
	struct USoupButton_C* SoupButton; // 0x660(0x08)
	struct USizeBox* SoupParent; // 0x668(0x08)
	struct UUniversalProgressionWidget_C* UPW; // 0x670(0x08)
	struct UUtilityMenuButton_C* UtilityMenuButton; // 0x678(0x08)
	struct UWalletSummary_PC_C* WalletSummary_PC; // 0x680(0x08)
	struct TScriptInterface<INavBarMenu> ActiveNavBarMenu; // 0x688(0x10)
	struct UAkAudioEvent* AUD_BackHovered; // 0x698(0x08)
	struct UAkAudioEvent* AUD_BackUnhovered; // 0x6a0(0x08)
	struct UAkAudioEvent* AUD_BackClick; // 0x6a8(0x08)
	struct FMulticastInlineDelegate OnBackButtonTriggered; // 0x6b0(0x10)
	struct FMulticastInlineDelegate OnBackButtonClicked; // 0x6c0(0x10)
	struct UEsportsLiveEventTimesViewModel* EsportsVM; // 0x6d0(0x08)
	struct UVM_TopNavigation_C* TopNavViewModel; // 0x6d8(0x08)

	void CREATEDELEGATE_PROXYFUNCTION_1(struct FName& ConfigName); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.CREATEDELEGATE_PROXYFUNCTION_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	enum class ESlateVisibility __c03acc1f-4293-f98b-f983-fb833c9dc98b_SourceToDest(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.__c03acc1f-4293-f98b-f983-fb833c9dc98b_SourceToDest // (Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	enum class ESlateVisibility __1639175e-4be4-c212-eefc-919e0a219fc7_SourceToDest(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.__1639175e-4be4-c212-eefc-919e0a219fc7_SourceToDest // (Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void NavVisibilityToWidgetVisibility_Hidden(enum class EWidgetVisibilityOption NavVis, enum class ESlateVisibility& WidgetVis); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.NavVisibilityToWidgetVisibility_Hidden // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void NavVisibilityToWidgetVisibility_Collasped(enum class EWidgetVisibilityOption NavVis, enum class ESlateVisibility& WidgetVis); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.NavVisibilityToWidgetVisibility_Collasped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void HandlePopupClosed(struct UMenuStackEntry* ClosedEntry); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.HandlePopupClosed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleMenuChanged(struct UMenuStackEntry* TopEntry); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.HandleMenuChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleLiveTickerStateChanged(enum class EEsportsLiveTickerState& LiveTickerState); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.HandleLiveTickerStateChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetProgressionHubVisibility(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.SetProgressionHubVisibility // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnClientConfigUpdated(struct FName ConfigName); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.OnClientConfigUpdated // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateEsportsLiveEventsVM(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.CreateEsportsLiveEventsVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePickemsTooltipVisibility(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.UpdatePickemsTooltipVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UUserWidget* OnEsportsAnchor_GetUserMenuContent(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.OnEsportsAnchor_GetUserMenuContent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateTopNavWidgetVisibility(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.UpdateTopNavWidgetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TriggerBackButton(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.TriggerBackButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UUserWidget* OnBackButtonAnchor_GetUserMenuContent(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.OnBackButtonAnchor_GetUserMenuContent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTopNavBarMenuChanged(struct TScriptInterface<INavBarMenu> TopMenu); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.OnTopNavBarMenuChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RequestCloseTopMenu(bool& MenuWasClosed); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.RequestCloseTopMenu // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateViewForNavBarData(struct FAresMainMenuNavBarData InNavBarData); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.UpdateViewForNavBarData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__AlertButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.BndEvt__AlertButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__MainMenuNavBar_PC_BackButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.BndEvt__MainMenuNavBar_PC_BackButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__MainMenuNavBar_PC_BackButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.BndEvt__MainMenuNavBar_PC_BackButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__MainMenuNavBar_PC_BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.BndEvt__MainMenuNavBar_PC_BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnTickerChanged(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.OnTickerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnNavigationStateChanged(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.OnNavigationStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MainMenuNavBar_PC(int32_t EntryPoint); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.ExecuteUbergraph_MainMenuNavBar_PC // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnBackButtonClicked__DelegateSignature(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.OnBackButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBackButtonTriggered__DelegateSignature(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.OnBackButtonTriggered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

