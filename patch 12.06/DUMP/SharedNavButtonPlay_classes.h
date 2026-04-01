// WidgetBlueprintGeneratedClass SharedNavButtonPlay.SharedNavButtonPlay_C
// Size: 0x3d0 (Inherited: 0x320)
struct USharedNavButtonPlay_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* hover; // 0x328(0x08)
	struct UWidgetAnimation* Default; // 0x330(0x08)
	struct UWidgetAnimation* Selected; // 0x338(0x08)
	struct UButton* Button; // 0x340(0x08)
	struct UInQueueTimer_PC_C* InQueueTimer; // 0x348(0x08)
	struct UTextBlock* NavText; // 0x350(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_2; // 0x358(0x08)
	struct FText ButtonText; // 0x360(0x18)
	bool IsDisabled; // 0x378(0x01)
	bool IsSelected; // 0x379(0x01)
	bool isCurrentlyHovered; // 0x37a(0x01)
	char pad_37B[0x5]; // 0x37b(0x05)
	struct FMulticastInlineDelegate OnClicked; // 0x380(0x10)
	struct UAkAudioEvent* AUD_Event_Click; // 0x390(0x08)
	struct UAkAudioEvent* AUD_Event_Hover; // 0x398(0x08)
	struct UPartyViewController* View Controller; // 0x3a0(0x08)
	struct UPartyModel* PartyModel; // 0x3a8(0x08)
	struct FLinearColor TextColorEnabled; // 0x3b0(0x10)
	struct FLinearColor TextColorDisabled; // 0x3c0(0x10)

	void UpdateButtonWidget(); // Function SharedNavButtonPlay.SharedNavButtonPlay_C.UpdateButtonWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHovered(bool Hovered); // Function SharedNavButtonPlay.SharedNavButtonPlay_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetButtonText(struct FText Text); // Function SharedNavButtonPlay.SharedNavButtonPlay_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSelectionState(bool NewIsSelected); // Function SharedNavButtonPlay.SharedNavButtonPlay_C.SetSelectionState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayAnimationInternal(struct UWidgetAnimation* Animation, double StartTime, int32_t NumLoops, bool PlayForward, double PlaybackSpeed); // Function SharedNavButtonPlay.SharedNavButtonPlay_C.PlayAnimationInternal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StopAnimations(); // Function SharedNavButtonPlay.SharedNavButtonPlay_C.StopAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateSelectionbackground(); // Function SharedNavButtonPlay.SharedNavButtonPlay_C.UpdateSelectionbackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__btnPlay_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature(); // Function SharedNavButtonPlay.SharedNavButtonPlay_C.BndEvt__btnPlay_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__btnPlay_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature(); // Function SharedNavButtonPlay.SharedNavButtonPlay_C.BndEvt__btnPlay_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__button_K2Node_ComponentBoundEvent_83_OnButtonClickedEvent__DelegateSignature(); // Function SharedNavButtonPlay.SharedNavButtonPlay_C.BndEvt__button_K2Node_ComponentBoundEvent_83_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function SharedNavButtonPlay.SharedNavButtonPlay_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function SharedNavButtonPlay.SharedNavButtonPlay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void MM Changed(bool NewValue); // Function SharedNavButtonPlay.SharedNavButtonPlay_C.MM Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPartryStateChanged(enum class EPartyViewState PartyState); // Function SharedNavButtonPlay.SharedNavButtonPlay_C.OnPartryStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__InQueueTimer_PC_251_K2Node_ComponentBoundEvent_0_OnCloseClicked__DelegateSignature(); // Function SharedNavButtonPlay.SharedNavButtonPlay_C.BndEvt__InQueueTimer_PC_251_K2Node_ComponentBoundEvent_0_OnCloseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnNavigationStateChanged(); // Function SharedNavButtonPlay.SharedNavButtonPlay_C.OnNavigationStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SharedNavButtonPlay(int32_t EntryPoint); // Function SharedNavButtonPlay.SharedNavButtonPlay_C.ExecuteUbergraph_SharedNavButtonPlay // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnClicked__DelegateSignature(); // Function SharedNavButtonPlay.SharedNavButtonPlay_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

