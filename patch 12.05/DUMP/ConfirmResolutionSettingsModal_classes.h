// WidgetBlueprintGeneratedClass ConfirmResolutionSettingsModal.ConfirmResolutionSettingsModal_C
// Size: 0x5a8 (Inherited: 0x568)
struct UConfirmResolutionSettingsModal_C : UConfirmationModal_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x568(0x08)
	struct FText MessageTextFormat; // 0x570(0x18)
	struct FTimerHandle RemainingConfirmationTime; // 0x588(0x08)
	double ConfirmationTimeout; // 0x590(0x08)
	struct FMulticastInlineDelegate OnDisplayConfirmationClosed; // 0x598(0x10)

	void CloseAndDispatch(bool bShouldApplySettings); // Function ConfirmResolutionSettingsModal.ConfirmResolutionSettingsModal_C.CloseAndDispatch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateMessageTimer(); // Function ConfirmResolutionSettingsModal.ConfirmResolutionSettingsModal_C.UpdateMessageTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ConfirmResolutionSettingsModal.ConfirmResolutionSettingsModal_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ConfirmationTimeoutExpired(); // Function ConfirmResolutionSettingsModal.ConfirmResolutionSettingsModal_C.ConfirmationTimeoutExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleConfirmPressed(); // Function ConfirmResolutionSettingsModal.ConfirmResolutionSettingsModal_C.HandleConfirmPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCancelPressed(); // Function ConfirmResolutionSettingsModal.ConfirmResolutionSettingsModal_C.HandleCancelPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ConfirmResolutionSettingsModal.ConfirmResolutionSettingsModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function ConfirmResolutionSettingsModal.ConfirmResolutionSettingsModal_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ConfirmResolutionSettingsModal(int32_t EntryPoint); // Function ConfirmResolutionSettingsModal.ConfirmResolutionSettingsModal_C.ExecuteUbergraph_ConfirmResolutionSettingsModal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnDisplayConfirmationClosed__DelegateSignature(bool bShouldApplySettings); // Function ConfirmResolutionSettingsModal.ConfirmResolutionSettingsModal_C.OnDisplayConfirmationClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

