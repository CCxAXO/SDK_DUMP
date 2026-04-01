// WidgetBlueprintGeneratedClass ReplayCancelButton.ReplayCancelButton_C
// Size: 0x400 (Inherited: 0x338)
struct UReplayCancelButton_C : UWBP_Button_ReplayButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetSwitcher* CancelButtonWidgetSwitcher; // 0x340(0x08)
	struct UWBP_Button_TimelineUI_C* WBP_Button_Cancel; // 0x348(0x08)
	struct UWBP_Button_TimelineUI_C* WBP_Button_Delete; // 0x350(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x358(0x08)
	struct FName MatParam_Icon; // 0x360(0x0c)
	struct FName MatParam_IconSize; // 0x36c(0x0c)
	struct FMulticastInlineDelegate OnPressed; // 0x378(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x388(0x10)
	struct FString MatchID_1; // 0x398(0x10)
	struct FReplayLocalFileMatchEntryUpdateInfo LastUpdateInfo; // 0x3a8(0x50)
	struct UReplayButtonViewModel* ReplayButtonVM_1; // 0x3f8(0x08)

	void UpdateButtonVisual(enum class EMatchHistoryReplayCancelStatus StatusEnum); // Function ReplayCancelButton.ReplayCancelButton_C.UpdateButtonVisual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct FString Match ID); // Function ReplayCancelButton.ReplayCancelButton_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateState(struct FReplayLocalFileMatchEntryUpdateInfo ReplayLocalUpdate); // Function ReplayCancelButton.ReplayCancelButton_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ReplayCancelButton_WBP_Button_Delete_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function ReplayCancelButton.ReplayCancelButton_C.BndEvt__ReplayCancelButton_WBP_Button_Delete_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ReplayCancelButton_WBP_Button_Cancel_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function ReplayCancelButton.ReplayCancelButton_C.BndEvt__ReplayCancelButton_WBP_Button_Cancel_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ReplayCancelButton_WBP_Button_Delete_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function ReplayCancelButton.ReplayCancelButton_C.BndEvt__ReplayCancelButton_WBP_Button_Delete_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ReplayCancelButton_WBP_Button_Cancel_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function ReplayCancelButton.ReplayCancelButton_C.BndEvt__ReplayCancelButton_WBP_Button_Cancel_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ReplayCancelButton(int32_t EntryPoint); // Function ReplayCancelButton.ReplayCancelButton_C.ExecuteUbergraph_ReplayCancelButton // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnReleased__DelegateSignature(); // Function ReplayCancelButton.ReplayCancelButton_C.OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPressed__DelegateSignature(); // Function ReplayCancelButton.ReplayCancelButton_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

