// WidgetBlueprintGeneratedClass ReportTeamModal.ReportTeamModal_C
// Size: 0x3e0 (Inherited: 0x378)
struct UReportTeamModal_C : UReportTeamModal_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct USharedBackButton_C* BackButton; // 0x380(0x08)
	struct UImage* BG; // 0x388(0x08)
	struct USocialEditableTextBox_C* CommentTextBox; // 0x390(0x08)
	struct UReportPlayerReasonListV2_C* CommunicationCategory; // 0x398(0x08)
	struct UImage* Logo; // 0x3a0(0x08)
	struct UImage* Pattern; // 0x3a8(0x08)
	struct UVerticalBox* ReportCategoriesAndButton; // 0x3b0(0x08)
	struct UWBP_MenuButtonPrimary_C* SubmitButton; // 0x3b8(0x08)
	struct UTextBlock* SubTitleBlock; // 0x3c0(0x08)
	struct UImage* topornament; // 0x3c8(0x08)
	struct TArray<struct UReportTeamReason_C*> StoredReasonWidgets; // 0x3d0(0x10)

	void CloseWithConfirmationPopup(struct FText MessageText, struct FText TitleText, enum class TextColors TitleTextColor); // Function ReportTeamModal.ReportTeamModal_C.CloseWithConfirmationPopup // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsAnyReasonChecked(bool& AnyChecked); // Function ReportTeamModal.ReportTeamModal_C.IsAnyReasonChecked // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void BindToggleListeners(); // Function ReportTeamModal.ReportTeamModal_C.BindToggleListeners // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetAndStoreReasons(struct UReportPlayerReasonListV2_C* ReasonCategory, struct TArray<enum class EPremierTeamReportReason>& Reasons); // Function ReportTeamModal.ReportTeamModal_C.SetAndStoreReasons // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetReportReasons(struct TArray<enum class EPremierTeamReportReason>& ReportReasons); // Function ReportTeamModal.ReportTeamModal_C.GetReportReasons // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetReportComment(struct FText& Comment); // Function ReportTeamModal.ReportTeamModal_C.GetReportComment // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void BuildReasons(); // Function ReportTeamModal.ReportTeamModal_C.BuildReasons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function ReportTeamModal.ReportTeamModal_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ReportPlayerModalV2_ReportButton_K2Node_ComponentBoundEvent_0_OnUniversalButtonVoidEvent__DelegateSignature(); // Function ReportTeamModal.ReportTeamModal_C.BndEvt__ReportPlayerModalV2_ReportButton_K2Node_ComponentBoundEvent_0_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnSubmitFailed(); // Function ReportTeamModal.ReportTeamModal_C.OnSubmitFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSubmitSuccess(); // Function ReportTeamModal.ReportTeamModal_C.OnSubmitSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ReportPlayerModalV2_CommentTextBox_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(struct FText Text); // Function ReportTeamModal.ReportTeamModal_C.BndEvt__ReportPlayerModalV2_CommentTextBox_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnReasonToggled(bool IsToggledOn); // Function ReportTeamModal.ReportTeamModal_C.OnReasonToggled // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ReportTeamModal.ReportTeamModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleOnFetchTeamNameSuccess(); // Function ReportTeamModal.ReportTeamModal_C.HandleOnFetchTeamNameSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ReportTeamModal(int32_t EntryPoint); // Function ReportTeamModal.ReportTeamModal_C.ExecuteUbergraph_ReportTeamModal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

