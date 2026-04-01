// WidgetBlueprintGeneratedClass WBP_Panel_StartGame.WBP_Panel_StartGame_C
// Size: 0x449 (Inherited: 0x3e0)
struct UWBP_Panel_StartGame_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UQueueViewModel_C* QueueViewModel; // 0x3e8(0x08)
	struct UVM_QueueRestrictions_C* VM_QueueRestrictions; // 0x3f0(0x08)
	struct UAresTitleUpdateViewModel* AresTitleUpdateViewModel; // 0x3f8(0x08)
	struct UAresHotfixViewModel* AresHotfixViewModel; // 0x400(0x08)
	struct UVM_StartGame_C* VM_StartGame; // 0x408(0x08)
	struct UWidgetSwitcher* ButtonModeSwitcher; // 0x410(0x08)
	struct UWidgetSwitcher* ButtonStateSwitcher; // 0x418(0x08)
	struct UWBP_Button_Hero_InQueue_C* InQueueButton; // 0x420(0x08)
	struct UWBP_Button_Hero_StartGame_Premier_C* PremierStartButton; // 0x428(0x08)
	struct UAresCommonText* QueueRestrictionWarning; // 0x430(0x08)
	struct UWBP_Button_Hero_StartGame_Default_C* StartButton; // 0x438(0x08)
	struct UVM_StartGame_C* StartGameControlsViewModel; // 0x440(0x08)
	bool PlayAgain; // 0x448(0x01)

	void __Setter_bIsPlayAgain(bool NewValue); // Function WBP_Panel_StartGame.WBP_Panel_StartGame_C.__Setter_bIsPlayAgain // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateQueueViewModel(); // Function WBP_Panel_StartGame.WBP_Panel_StartGame_C.CreateQueueViewModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateQueueTimer(struct FText QueueTimerText); // Function WBP_Panel_StartGame.WBP_Panel_StartGame_C.UpdateQueueTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetInQueue(enum class ESlateVisibility InQueueVisibility); // Function WBP_Panel_StartGame.WBP_Panel_StartGame_C.SetInQueue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void FormatExpiryText(struct TArray<struct FString>& QueueRestrictedPuuids); // Function WBP_Panel_StartGame.WBP_Panel_StartGame_C.FormatExpiryText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateButtonText(bool bLocalPlayerUnverified); // Function WBP_Panel_StartGame.WBP_Panel_StartGame_C.UpdateButtonText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	enum class ESlateVisibility __0e63eca5-427d-cd1a-42dc-958b181b7ac8_SourceToDest(); // Function WBP_Panel_StartGame.WBP_Panel_StartGame_C.__0e63eca5-427d-cd1a-42dc-958b181b7ac8_SourceToDest // (Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_StartGame.WBP_Panel_StartGame_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_StartGame_PremierStartButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_StartGame.WBP_Panel_StartGame_C.BndEvt__WBP_Panel_StartGame_PremierStartButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_StartGame_StartButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_StartGame.WBP_Panel_StartGame_C.BndEvt__WBP_Panel_StartGame_StartButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_StartGame_InQueueButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_StartGame.WBP_Panel_StartGame_C.BndEvt__WBP_Panel_StartGame_InQueueButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_StartGame_InQueueButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_StartGame.WBP_Panel_StartGame_C.BndEvt__WBP_Panel_StartGame_InQueueButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_StartGame(int32_t EntryPoint); // Function WBP_Panel_StartGame.WBP_Panel_StartGame_C.ExecuteUbergraph_WBP_Panel_StartGame // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

