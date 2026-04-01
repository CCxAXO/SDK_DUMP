// WidgetBlueprintGeneratedClass QueueRestrictedErrorModal.QueueRestrictedErrorModal_C
// Size: 0x348 (Inherited: 0x318)
struct UQueueRestrictedErrorModal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UConfirmationModal_C* ConfirmationModal; // 0x320(0x08)
	struct UQueueRestrictedTimer_C* QueueRestrictedTimer; // 0x328(0x08)
	struct UPartyModel* Model; // 0x330(0x08)
	struct UQueueRestrictedTimer_C* NewVar_1; // 0x338(0x08)
	struct FTimerHandle UpdateTextTimer; // 0x340(0x08)

	void Construct(); // Function QueueRestrictedErrorModal.QueueRestrictedErrorModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void TimerTextUpdated(); // Function QueueRestrictedErrorModal.QueueRestrictedErrorModal_C.TimerTextUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CloseModal(); // Function QueueRestrictedErrorModal.QueueRestrictedErrorModal_C.CloseModal // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ConfirmationModal_K2Node_ComponentBoundEvent_0_OnConfirmationPressed__DelegateSignature(); // Function QueueRestrictedErrorModal.QueueRestrictedErrorModal_C.BndEvt__ConfirmationModal_K2Node_ComponentBoundEvent_0_OnConfirmationPressed__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_QueueRestrictedErrorModal(int32_t EntryPoint); // Function QueueRestrictedErrorModal.QueueRestrictedErrorModal_C.ExecuteUbergraph_QueueRestrictedErrorModal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

