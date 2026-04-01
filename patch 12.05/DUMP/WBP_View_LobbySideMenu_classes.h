// WidgetBlueprintGeneratedClass WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C
// Size: 0x5a8 (Inherited: 0x408)
struct UWBP_View_LobbySideMenu_C : UAresCommonWidgetPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct ULobbySideMenuViewModel* LobbySideMenuViewModel; // 0x410(0x08)
	struct UWidgetAnimation* FocusLost; // 0x418(0x08)
	struct UWidgetAnimation* FocusGained; // 0x420(0x08)
	struct UDynamicConfigSwitcher_C* ConfigSwitcher_SharePartyInvite; // 0x428(0x08)
	struct UWBP_Button_SelectBox_C* CustomModesButton; // 0x430(0x08)
	struct UWBP_Button_SelectBox_ComboButton_C* CustomServerSelectComboBox; // 0x438(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher; // 0x440(0x08)
	struct UWBP_Button_TertiaryButton_C* LeavePartyButton; // 0x448(0x08)
	struct UVerticalBox* LineDivider; // 0x450(0x08)
	struct UWBP_Button_MapPool_C* MapPoolButton; // 0x458(0x08)
	struct UWBP_Button_SelectBox_C* MapSelectButton; // 0x460(0x08)
	struct UWBP_Button_SelectBox_C* OptionsButton; // 0x468(0x08)
	struct UWBP_Button_TertiaryButton_C* PartyCodeButton; // 0x470(0x08)
	struct UWBP_Button_StyledToggle_C* PartyToggle; // 0x478(0x08)
	struct UWBP_Button_TertiaryButton_C* PracticeButton; // 0x480(0x08)
	struct UWBP_Button_SelectBox_C* QueueSelectButton; // 0x488(0x08)
	struct UWBP_Button_SelectBox_C* ServerSelectButton; // 0x490(0x08)
	struct UWBP_Button_TertiaryButton_C* SharePartyInviteButton; // 0x498(0x08)
	struct UWBP_Button_QueueSelect_C* WBP_Button_QueueSelect; // 0x4a0(0x08)
	struct FMulticastInlineDelegate QueueSelectPressed; // 0x4a8(0x10)
	struct FMulticastInlineDelegate MapSelectPressed; // 0x4b8(0x10)
	struct FMulticastInlineDelegate OptionsPressed; // 0x4c8(0x10)
	struct FMulticastInlineDelegate ServerSelectPressed; // 0x4d8(0x10)
	struct FMulticastInlineDelegate ServerSelectionChanged; // 0x4e8(0x10)
	struct FMulticastInlineDelegate PracticePressed; // 0x4f8(0x10)
	struct FMulticastInlineDelegate PartyTogglePressed; // 0x508(0x10)
	struct FMulticastInlineDelegate EXPBoostPressed; // 0x518(0x10)
	struct FMulticastInlineDelegate LeavePartyPressed; // 0x528(0x10)
	struct UUserWidget* LastSelectedWidget; // 0x538(0x08)
	bool bLobbyStateTransitioning; // 0x540(0x01)
	char pad_541[0x7]; // 0x541(0x07)
	struct FMulticastInlineDelegate CustomModeSelectPressed; // 0x548(0x10)
	struct FMulticastInlineDelegate PartyCodePressed; // 0x558(0x10)
	struct UBP_ContentTileTall_ListItem_C* QueueContentTileData; // 0x568(0x08)
	struct FMulticastInlineDelegate MapPoolPressed; // 0x570(0x10)
	bool Is Custom Lobby; // 0x580(0x01)
	char pad_581[0x7]; // 0x581(0x07)
	struct FString CurrentQueueID; // 0x588(0x10)
	struct FMulticastInlineDelegate SharePartyInvitePressed; // 0x598(0x10)

	void UpdateSharePartyInviteButtonVisibility(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.UpdateSharePartyInviteButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetMapPoolButtonHasIncentive(bool bNewValue); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetMapPoolButtonHasIncentive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetMapPoolButtonVisible(bool bIsVisible); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetMapPoolButtonVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCurrentQueueID(struct FString InQueueID); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetCurrentQueueID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetQueueBackground(struct UTexture* BackgroundTexture); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetQueueBackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetServerOptions(struct TArray<struct FString>& InServers); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetServerOptions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCustomModeSelectable(bool bSelectable); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetCustomModeSelectable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCustomModeName(struct FText& InText); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetCustomModeName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCustomModeIcon(struct UTexture* Icon); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetCustomModeIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Is Widget Valid Focus Target(struct UWidget* Widget, bool& Focusable); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.Is Widget Valid Focus Target // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void ClearLastSelection(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.ClearLastSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetEXPBoostVisibility(enum class ESlateVisibility InVisibility); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetEXPBoostVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetServerName(struct FText& InText); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetServerName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPracticeButtonVisibility(enum class ESlateVisibility InVisibility); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetPracticeButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateAccessibilityToggle(enum class EAresPartyAccessibility NewAccessibility); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.UpdateAccessibilityToggle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetLeavePartySelectable(bool bSelectable); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetLeavePartySelectable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetWidgetVisibilityForLobby(bool bIsCustomLobby); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetWidgetVisibilityForLobby // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetMapSelectable(bool bSelectable); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetMapSelectable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetMapName(struct FText& InText); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetMapName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetMapIcon(struct UTexture* Icon); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetMapIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void SetQueueSelectable(bool bSelectable); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetQueueSelectable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetQueueName(struct FText& InText); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetQueueName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetQueueIcon(struct UTexture* Icon); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetQueueIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_View_LobbySideMenu_QueueSelectButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BndEvt__WBP_View_LobbySideMenu_QueueSelectButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_View_LobbySideMenu_MapSelectButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BndEvt__WBP_View_LobbySideMenu_MapSelectButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_View_LobbySideMenu_OptionsButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BndEvt__WBP_View_LobbySideMenu_OptionsButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_View_LobbySideMenu_ServerSelectButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BndEvt__WBP_View_LobbySideMenu_ServerSelectButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_View_LobbySideMenu_PracticeButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BndEvt__WBP_View_LobbySideMenu_PracticeButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_View_LobbySideMenu_PartyToggle_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BndEvt__WBP_View_LobbySideMenu_PartyToggle_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_View_LobbySideMenu_LeavePartyButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BndEvt__WBP_View_LobbySideMenu_LeavePartyButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnChildWidgetFocusChanged(struct UUserWidget* ChildWidget); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BP_OnChildWidgetFocusChanged // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_View_LobbySideMenu_CustomModesButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BndEvt__WBP_View_LobbySideMenu_CustomModesButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_View_LobbySideMenu_PartyCodeButton_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BndEvt__WBP_View_LobbySideMenu_PartyCodeButton_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_View_LobbySideMenu_ServerSelectComboBox_K2Node_ComponentBoundEvent_10_OnSelectionChanged__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BndEvt__WBP_View_LobbySideMenu_ServerSelectComboBox_K2Node_ComponentBoundEvent_10_OnSelectionChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_View_LobbySideMenu_WBP_Button_QueueSelect_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BndEvt__WBP_View_LobbySideMenu_WBP_Button_QueueSelect_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_View_LobbySideMenu_MapPoolButton_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BndEvt__WBP_View_LobbySideMenu_MapPoolButton_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_View_LobbySideMenu_PartyInviteButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BndEvt__WBP_View_LobbySideMenu_PartyInviteButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_View_LobbySideMenu(int32_t EntryPoint); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.ExecuteUbergraph_WBP_View_LobbySideMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void SharePartyInvitePressed__DelegateSignature(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SharePartyInvitePressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MapPoolPressed__DelegateSignature(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.MapPoolPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ServerSelectionChanged__DelegateSignature(struct FString OutServer); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.ServerSelectionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PartyCodePressed__DelegateSignature(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.PartyCodePressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CustomModeSelectPressed__DelegateSignature(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.CustomModeSelectPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void LeavePartyPressed__DelegateSignature(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.LeavePartyPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void EXPBoostPressed__DelegateSignature(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.EXPBoostPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PartyTogglePressed__DelegateSignature(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.PartyTogglePressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PracticePressed__DelegateSignature(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.PracticePressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ServerSelectPressed__DelegateSignature(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.ServerSelectPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OptionsPressed__DelegateSignature(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.OptionsPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MapSelectPressed__DelegateSignature(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.MapSelectPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void QueueSelectPressed__DelegateSignature(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.QueueSelectPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

