// WidgetBlueprintGeneratedClass PlayerFeedbackHyperlinkQuestion.PlayerFeedbackHyperlinkQuestion_C
// Size: 0x348 (Inherited: 0x318)
struct UPlayerFeedbackHyperlinkQuestion_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USharedButtonMaster_C* SharedButtonMaster; // 0x320(0x08)
	struct FString Hyperlink; // 0x328(0x10)
	struct FMulticastInlineDelegate OnSurveyOpened; // 0x338(0x10)

	void BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function PlayerFeedbackHyperlinkQuestion.PlayerFeedbackHyperlinkQuestion_C.BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PlayerFeedbackHyperlinkQuestion(int32_t EntryPoint); // Function PlayerFeedbackHyperlinkQuestion.PlayerFeedbackHyperlinkQuestion_C.ExecuteUbergraph_PlayerFeedbackHyperlinkQuestion // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnSurveyOpened__DelegateSignature(); // Function PlayerFeedbackHyperlinkQuestion.PlayerFeedbackHyperlinkQuestion_C.OnSurveyOpened__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

