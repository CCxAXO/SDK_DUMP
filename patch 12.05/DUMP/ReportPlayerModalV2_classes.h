// WidgetBlueprintGeneratedClass ReportPlayerModalV2.ReportPlayerModalV2_C
// Size: 0x3cc (Inherited: 0x368)
struct UReportPlayerModalV2_C : UReportPlayerModalV2_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct USharedBackButton_C* BackButton; // 0x370(0x08)
	struct USocialEditableTextBox_C* CommentTextBox; // 0x378(0x08)
	struct UReportPlayerOptionV2_C* MuteOption; // 0x380(0x08)
	struct UReportPlayerReasonListV2_C* PlayFairCategory; // 0x388(0x08)
	struct UReportPlayerReasonListV2_C* PlayToWinCategory; // 0x390(0x08)
	struct UReportPlayerReasonListV2_C* PlayWithRespectCategory; // 0x398(0x08)
	struct UVerticalBox* ReportCategoriesAndButton; // 0x3a0(0x08)
	struct UWBP_MenuButtonPrimary_C* SubmitButton; // 0x3a8(0x08)
	struct UTextBlock* SubTitleBlock; // 0x3b0(0x08)
	struct TArray<struct UReportPlayerReasonV2_C*> StoredReasonWidgets; // 0x3b8(0x10)
	int32_t ToggledReasonsCount; // 0x3c8(0x04)

	void Set Unchecked Reasons Enabled(bool Enable); // Function ReportPlayerModalV2.ReportPlayerModalV2_C.Set Unchecked Reasons Enabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateReasonsSubmitEnabled(bool IsToggledOn); // Function ReportPlayerModalV2.ReportPlayerModalV2_C.UpdateReasonsSubmitEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateMuteOption(); // Function ReportPlayerModalV2.ReportPlayerModalV2_C.UpdateMuteOption // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CloseWithConfirmationPopup(struct FText MessageText, struct FText TitleText, enum class TextColors TitleTextColor); // Function ReportPlayerModalV2.ReportPlayerModalV2_C.CloseWithConfirmationPopup // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Is Any Reason Checked(bool& AnyChecked); // Function ReportPlayerModalV2.ReportPlayerModalV2_C.Is Any Reason Checked // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void BindToggleListeners(); // Function ReportPlayerModalV2.ReportPlayerModalV2_C.BindToggleListeners // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetAndStoreReasons(struct UReportPlayerReasonListV2_C* ReasonCategory, struct TArray<enum class EPlayerReportReason>& Reasons); // Function ReportPlayerModalV2.ReportPlayerModalV2_C.SetAndStoreReasons // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetReportReasons(struct TArray<enum class EPlayerReportReason>& Reasons); // Function ReportPlayerModalV2.ReportPlayerModalV2_C.GetReportReasons // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetReportComment(struct FText& Comment); // Function ReportPlayerModalV2.ReportPlayerModalV2_C.GetReportComment // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void BuildReasons(); // Function ReportPlayerModalV2.ReportPlayerModalV2_C.BuildReasons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function ReportPlayerModalV2.ReportPlayerModalV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ReportPlayerModalV2_ReportButton_K2Node_ComponentBoundEvent_0_OnUniversalButtonVoidEvent__DelegateSignature(); // Function ReportPlayerModalV2.ReportPlayerModalV2_C.BndEvt__ReportPlayerModalV2_ReportButton_K2Node_ComponentBoundEvent_0_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnSubmitFailed(); // Function ReportPlayerModalV2.ReportPlayerModalV2_C.OnSubmitFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSubmitSuccess(); // Function ReportPlayerModalV2.ReportPlayerModalV2_C.OnSubmitSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ReportPlayerModalV2_CommentTextBox_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(struct FText Text); // Function ReportPlayerModalV2.ReportPlayerModalV2_C.BndEvt__ReportPlayerModalV2_CommentTextBox_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnReasonToggled(bool IsToggledOn); // Function ReportPlayerModalV2.ReportPlayerModalV2_C.OnReasonToggled // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ReportPlayerModalV2.ReportPlayerModalV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnAgentNameReceived(struct FText& AgentName); // Function ReportPlayerModalV2.ReportPlayerModalV2_C.OnAgentNameReceived // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function ReportPlayerModalV2.ReportPlayerModalV2_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnFullPlayerNameChanged(struct FText InFullName); // Function ReportPlayerModalV2.ReportPlayerModalV2_C.OnFullPlayerNameChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ReportPlayerModalV2(int32_t EntryPoint); // Function ReportPlayerModalV2.ReportPlayerModalV2_C.ExecuteUbergraph_ReportPlayerModalV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

