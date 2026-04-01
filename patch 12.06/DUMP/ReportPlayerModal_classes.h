// WidgetBlueprintGeneratedClass ReportPlayerModal.ReportPlayerModal_C
// Size: 0x3bc (Inherited: 0x318)
struct UReportPlayerModal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UVerticalBox* BehaviorOptions; // 0x320(0x08)
	struct UButton* CloseButton; // 0x328(0x08)
	struct UButton* CloseButton2; // 0x330(0x08)
	struct UMultiLineEditableTextBox* CommentTextBox; // 0x338(0x08)
	struct UImage* FullScreen_Background; // 0x340(0x08)
	struct UButton* LeaveButton; // 0x348(0x08)
	struct UVerticalBox* ReportConfirmationPanel; // 0x350(0x08)
	struct UVerticalBox* ReportFailedPanel; // 0x358(0x08)
	struct UVerticalBox* ReportPlayerPanel; // 0x360(0x08)
	struct UButton* SubmitButton; // 0x368(0x08)
	struct UWidgetSwitcher* Switcher; // 0x370(0x08)
	struct UTextBlock* TextBlock_1; // 0x378(0x08)
	struct UTextBlock* TextBlock_133; // 0x380(0x08)
	struct FString Subject; // 0x388(0x10)
	struct TArray<struct UReportPlayerReason_C*> ReportReasonWidgets; // 0x398(0x10)
	struct FString MatchID; // 0x3a8(0x10)
	int32_t MaxCommentLength; // 0x3b8(0x04)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ReportPlayerModal.ReportPlayerModal_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ReportPlayerModal.ReportPlayerModal_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSubmitFailed(); // Function ReportPlayerModal.ReportPlayerModal_C.OnSubmitFailed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSubmitSuccess(); // Function ReportPlayerModal.ReportPlayerModal_C.OnSubmitSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateSubmitDisabled(); // Function ReportPlayerModal.ReportPlayerModal_C.UpdateSubmitDisabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PopulateReasonWidgets(); // Function ReportPlayerModal.ReportPlayerModal_C.PopulateReasonWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct FString Subject, struct FString MatchID); // Function ReportPlayerModal.ReportPlayerModal_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SubmitReport(); // Function ReportPlayerModal.ReportPlayerModal_C.SubmitReport // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function ReportPlayerModal.ReportPlayerModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnSubmitClicked(); // Function ReportPlayerModal.ReportPlayerModal_C.OnSubmitClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ReportPlayerModal.ReportPlayerModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function ReportPlayerModal.ReportPlayerModal_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CloseButton2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function ReportPlayerModal.ReportPlayerModal_C.BndEvt__CloseButton2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CommentTextBox_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Function ReportPlayerModal.ReportPlayerModal_C.BndEvt__CommentTextBox_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function ReportPlayerModal.ReportPlayerModal_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function ReportPlayerModal.ReportPlayerModal_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ReportPlayerModal(int32_t EntryPoint); // Function ReportPlayerModal.ReportPlayerModal_C.ExecuteUbergraph_ReportPlayerModal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

