// WidgetBlueprintGeneratedClass SharedNavButton.SharedNavButton_C
// Size: 0x390 (Inherited: 0x320)
struct USharedNavButton_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* hover; // 0x328(0x08)
	struct UWidgetAnimation* Default; // 0x330(0x08)
	struct UWidgetAnimation* Selected; // 0x338(0x08)
	struct UTelemetryButton* TelemetryButton_95; // 0x340(0x08)
	struct UTextBlock* TextNav; // 0x348(0x08)
	struct FText ButtonText; // 0x350(0x18)
	bool IsSelected; // 0x368(0x01)
	bool isCurrentlyHovered; // 0x369(0x01)
	char pad_36A[0x6]; // 0x36a(0x06)
	struct FMulticastInlineDelegate OnClicked; // 0x370(0x10)
	struct UAkAudioEvent* AUD_Event_Click; // 0x380(0x08)
	struct UAkAudioEvent* AUD_Event_Hover; // 0x388(0x08)

	void SetTelemetryActionTarget(struct FString ActionTarget); // Function SharedNavButton.SharedNavButton_C.SetTelemetryActionTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsTelemetryEnabled(bool IsEnabled); // Function SharedNavButton.SharedNavButton_C.SetIsTelemetryEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHovered(bool Hovered); // Function SharedNavButton.SharedNavButton_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetButtonText(struct FText Text); // Function SharedNavButton.SharedNavButton_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSelectionState(bool NewIsSelected); // Function SharedNavButton.SharedNavButton_C.SetSelectionState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayAnimationInternal(struct UWidgetAnimation* Animation, double StartTime, int32_t NumLoops, bool PlayForward, double PlaybackSpeed); // Function SharedNavButton.SharedNavButton_C.PlayAnimationInternal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StopAnimations(); // Function SharedNavButton.SharedNavButton_C.StopAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateSelectionbackground(); // Function SharedNavButton.SharedNavButton_C.UpdateSelectionbackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function SharedNavButton.SharedNavButton_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function SharedNavButton.SharedNavButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TelemetryButton_94_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function SharedNavButton.SharedNavButton_C.BndEvt__TelemetryButton_94_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TelemetryButton_94_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function SharedNavButton.SharedNavButton_C.BndEvt__TelemetryButton_94_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TelemetryButton_94_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function SharedNavButton.SharedNavButton_C.BndEvt__TelemetryButton_94_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SharedNavButton(int32_t EntryPoint); // Function SharedNavButton.SharedNavButton_C.ExecuteUbergraph_SharedNavButton // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnClicked__DelegateSignature(); // Function SharedNavButton.SharedNavButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

