// WidgetBlueprintGeneratedClass WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C
// Size: 0x500 (Inherited: 0x3e0)
struct UWBP_Panel_StartGame_Converged_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UVM_Tournament_C* VM_Tournament; // 0x3e8(0x08)
	struct UQueueViewModel_C* QueueViewModel; // 0x3f0(0x08)
	struct UVM_QueueRestrictions_C* VM_QueueRestrictions; // 0x3f8(0x08)
	struct UAresTitleUpdateViewModel* AresTitleUpdateViewModel; // 0x400(0x08)
	struct UAresHotfixViewModel* AresHotfixViewModel; // 0x408(0x08)
	struct UVM_StartGame_C* VM_StartGame; // 0x410(0x08)
	struct UWidgetSwitcher* ButtonModeSwitcher; // 0x418(0x08)
	struct UWidgetSwitcher* ButtonStateSwitcher; // 0x420(0x08)
	struct UImage* Image_6; // 0x428(0x08)
	struct UImage* Image_7; // 0x430(0x08)
	struct UImage* Image_ConnectorLine; // 0x438(0x08)
	struct UImage* Image_ConnectorLine_2; // 0x440(0x08)
	struct UWidgetSwitcher* InfoTextSwitcher; // 0x448(0x08)
	struct UWBP_Button_Hero_InQueue_C* InQueueButton; // 0x450(0x08)
	struct USizeBox* LeaveButtonSizebox; // 0x458(0x08)
	struct USharedButtonMaster_C* LeavePartyButton_PC; // 0x460(0x08)
	struct UHorizontalBox* LeavePartyContainer; // 0x468(0x08)
	struct USharedButtonMaster_C* PracticeButton_PC; // 0x470(0x08)
	struct UHorizontalBox* PracticeContainer; // 0x478(0x08)
	struct USizeBox* PremierErrorState; // 0x480(0x08)
	struct UAresCommonText* PremierErrorSubtitleText; // 0x488(0x08)
	struct UAresCommonText* PremierErrorTitleText; // 0x490(0x08)
	struct UWBP_Button_Hero_StartGame_Premier_C* PremierStartButton; // 0x498(0x08)
	struct UWidgetSwitcher* PremierSwitcher; // 0x4a0(0x08)
	struct UAresCommonText* QueueRestrictionWarning; // 0x4a8(0x08)
	struct UWBP_Button_Hero_StartGame_Default_C* StartButton; // 0x4b0(0x08)
	struct UAresCommonText* TournamentInfoText; // 0x4b8(0x08)
	struct UWidgetSwitcher* TournamentInfoTextSwitcher; // 0x4c0(0x08)
	struct UTournamentsRestPeriodStatus_C* TournamentsRestPeriodStatus; // 0x4c8(0x08)
	struct UVM_StartGame_C* StartGameControlsViewModel; // 0x4d0(0x08)
	bool PlayAgain; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct FMulticastInlineDelegate OnRequestPractice; // 0x4e0(0x10)
	struct FMulticastInlineDelegate OnRequestLeaveParty; // 0x4f0(0x10)

	void __Setter_bIsPlayAgain(bool NewValue); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.__Setter_bIsPlayAgain // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void __0a4039c7-4f70-7656-b969-babb929d51c4_SourceToDest(struct UWidget*& PremierWidget); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.__0a4039c7-4f70-7656-b969-babb929d51c4_SourceToDest // (Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void UpdatePremierErrorWidget(enum class EPremierJoinQueueAvailability PremierQueueAvailability, struct FDateTime EventStartTime, struct UWidget*& PremierWidget); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.UpdatePremierErrorWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void SetLeaveEnabled(bool bEnabled); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.SetLeaveEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateTournamentId(struct FString TournamentID); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.UpdateTournamentId // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateInPremierTournament(bool bInPremierTournament); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.UpdateInPremierTournament // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePartyType(enum class EPartyViewState PartyType); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.UpdatePartyType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetupEndOfGameVisuals(); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.SetupEndOfGameVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	enum class ESlateVisibility __eeb9cbf8-4e96-4848-660e-f598b8c788bf_SourceToDest(); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.__eeb9cbf8-4e96-4848-660e-f598b8c788bf_SourceToDest // (Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void CreateQueueViewModel(); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.CreateQueueViewModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateQueueTimer(struct FText QueueTimerText); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.UpdateQueueTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetInQueue(enum class ESlateVisibility InQueueVisibility); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.SetInQueue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void FormatExpiryText(struct TArray<struct FString>& QueueRestrictedPuuids); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.FormatExpiryText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateButtonText(bool bLocalPlayerUnverified); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.UpdateButtonText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_StartGame_PremierStartButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.BndEvt__WBP_Panel_StartGame_PremierStartButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_StartGame_StartButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.BndEvt__WBP_Panel_StartGame_StartButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_StartGame_InQueueButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.BndEvt__WBP_Panel_StartGame_InQueueButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_StartGame_InQueueButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.BndEvt__WBP_Panel_StartGame_InQueueButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_StartGame_Converged_PracticeButton_PC_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.BndEvt__WBP_Panel_StartGame_Converged_PracticeButton_PC_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_StartGame_Converged_LeavePartyButton_PC_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.BndEvt__WBP_Panel_StartGame_Converged_LeavePartyButton_PC_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_StartGame_Converged(int32_t EntryPoint); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.ExecuteUbergraph_WBP_Panel_StartGame_Converged // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnRequestLeaveParty__DelegateSignature(); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.OnRequestLeaveParty__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRequestPractice__DelegateSignature(); // Function WBP_Panel_StartGame_Converged.WBP_Panel_StartGame_Converged_C.OnRequestPractice__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

