// WidgetBlueprintGeneratedClass PlayerFeedbackToolExternalLinkWidget.PlayerFeedbackToolExternalLinkWidget_C
// Size: 0x359 (Inherited: 0x318)
struct UPlayerFeedbackToolExternalLinkWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetSwitcher* ButtonSwitcher; // 0x320(0x08)
	struct USharedButtonMaster_C* CloseButton; // 0x328(0x08)
	struct UTextBlock* Message; // 0x330(0x08)
	struct UPlayerFeedbackHyperlinkQuestion_C* PlayerFeedbackHyperlinkQuestion_2; // 0x338(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x340(0x08)
	struct UStorepopupBacking_C* StorepopupBacking; // 0x348(0x08)
	struct UTextBlock* Title; // 0x350(0x08)
	bool SurveyOpened; // 0x358(0x01)

	void OnExternalLinkSurveyReceived(struct FPlayerFeedbackSurvey& survey); // Function PlayerFeedbackToolExternalLinkWidget.PlayerFeedbackToolExternalLinkWidget_C.OnExternalLinkSurveyReceived // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExternalLinkSurveyClosed(); // Function PlayerFeedbackToolExternalLinkWidget.PlayerFeedbackToolExternalLinkWidget_C.ExternalLinkSurveyClosed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(); // Function PlayerFeedbackToolExternalLinkWidget.PlayerFeedbackToolExternalLinkWidget_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExternalLinkSurveyOpened(); // Function PlayerFeedbackToolExternalLinkWidget.PlayerFeedbackToolExternalLinkWidget_C.ExternalLinkSurveyOpened // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function PlayerFeedbackToolExternalLinkWidget.PlayerFeedbackToolExternalLinkWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function PlayerFeedbackToolExternalLinkWidget.PlayerFeedbackToolExternalLinkWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function PlayerFeedbackToolExternalLinkWidget.PlayerFeedbackToolExternalLinkWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PlayerFeedbackHyperlinkQuestion_1_K2Node_ComponentBoundEvent_1_OnSurveyOpened__DelegateSignature(); // Function PlayerFeedbackToolExternalLinkWidget.PlayerFeedbackToolExternalLinkWidget_C.BndEvt__PlayerFeedbackHyperlinkQuestion_1_K2Node_ComponentBoundEvent_1_OnSurveyOpened__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PlayerFeedbackToolExternalLinkWidget(int32_t EntryPoint); // Function PlayerFeedbackToolExternalLinkWidget.PlayerFeedbackToolExternalLinkWidget_C.ExecuteUbergraph_PlayerFeedbackToolExternalLinkWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};

