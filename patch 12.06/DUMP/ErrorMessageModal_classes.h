// WidgetBlueprintGeneratedClass ErrorMessageModal.ErrorMessageModal_C
// Size: 0x378 (Inherited: 0x320)
struct UErrorMessageModal_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* Intro; // 0x328(0x08)
	struct UConfirmationModal_C* ConfirmationModal; // 0x330(0x08)
	struct FMulticastInlineDelegate OnCancelPressed; // 0x338(0x10)
	struct FText CancelButtonText; // 0x348(0x18)
	struct FText MessageText; // 0x360(0x18)

	void SetMessageText(struct FText Message); // Function ErrorMessageModal.ErrorMessageModal_C.SetMessageText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Launch(bool InIsLaunched); // Function ErrorMessageModal.ErrorMessageModal_C.Launch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function ErrorMessageModal.ErrorMessageModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function ErrorMessageModal.ErrorMessageModal_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ConfirmationModal_K2Node_ComponentBoundEvent_0_OnConfirmationPressed__DelegateSignature(); // Function ErrorMessageModal.ErrorMessageModal_C.BndEvt__ConfirmationModal_K2Node_ComponentBoundEvent_0_OnConfirmationPressed__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ErrorMessageModal(int32_t EntryPoint); // Function ErrorMessageModal.ErrorMessageModal_C.ExecuteUbergraph_ErrorMessageModal // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnCancelPressed__DelegateSignature(); // Function ErrorMessageModal.ErrorMessageModal_C.OnCancelPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

