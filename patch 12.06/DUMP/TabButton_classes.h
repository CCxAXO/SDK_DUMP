// WidgetBlueprintGeneratedClass TabButton.TabButton_C
// Size: 0x3a9 (Inherited: 0x340)
struct UTabButton_C : UTabButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UWidgetAnimation* Unhover; // 0x348(0x08)
	struct UWidgetAnimation* Active; // 0x350(0x08)
	struct UWidgetAnimation* hover; // 0x358(0x08)
	struct UButton* Button_1; // 0x360(0x08)
	struct UImage* Dot; // 0x368(0x08)
	struct UImage* Image_129; // 0x370(0x08)
	struct UTextBlock* TextSelected; // 0x378(0x08)
	struct UImage* UI_ButtonDetail_image; // 0x380(0x08)
	struct UImage* Underline; // 0x388(0x08)
	bool IsActive; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct UAkAudioEvent* SoundHover; // 0x398(0x08)
	struct UAkAudioEvent* SoundClick; // 0x3a0(0x08)
	bool isCurrentlyHovered; // 0x3a8(0x01)

	void SequenceEvent__ENTRYPOINTTabButton(); // Function TabButton.TabButton_C.SequenceEvent__ENTRYPOINTTabButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SequenceEvent_1(); // Function TabButton.TabButton_C.SequenceEvent_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TabButton.TabButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_77_OnButtonHoverEvent__DelegateSignature(); // Function TabButton.TabButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_77_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_90_OnButtonHoverEvent__DelegateSignature(); // Function TabButton.TabButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_90_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void SetIsActive(bool IsActive); // Function TabButton.TabButton_C.SetIsActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetVisuals(struct FText Text, struct UTexture* Image); // Function TabButton.TabButton_C.SetVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function TabButton.TabButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TabButton(int32_t EntryPoint); // Function TabButton.TabButton_C.ExecuteUbergraph_TabButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

