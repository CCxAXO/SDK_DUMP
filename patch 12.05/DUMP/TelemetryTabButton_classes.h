// WidgetBlueprintGeneratedClass TelemetryTabButton.TelemetryTabButton_C
// Size: 0x3b8 (Inherited: 0x340)
struct UTelemetryTabButton_C : UTabButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UWidgetAnimation* Unhover; // 0x348(0x08)
	struct UWidgetAnimation* Active; // 0x350(0x08)
	struct UWidgetAnimation* hover; // 0x358(0x08)
	struct UImage* Image_129; // 0x360(0x08)
	struct USizeBox* SizeBox_1; // 0x368(0x08)
	struct UTelemetryButton* TelemetryButton_4; // 0x370(0x08)
	struct UTextBlock* TextSelected; // 0x378(0x08)
	struct UImage* UI_ButtonDetail_image; // 0x380(0x08)
	struct UImage* Underline; // 0x388(0x08)
	bool IsActive; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct UAkAudioEvent* SoundHover; // 0x398(0x08)
	struct UAkAudioEvent* SoundClick; // 0x3a0(0x08)
	bool isCurrentlyHovered; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	double InitialMinDesiredWidth; // 0x3b0(0x08)

	void SequenceEvent__ENTRYPOINTTelemetryTabButton(); // Function TelemetryTabButton.TelemetryTabButton_C.SequenceEvent__ENTRYPOINTTelemetryTabButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateMinDesiredWidth(double MinDesiredWidth); // Function TelemetryTabButton.TelemetryTabButton_C.UpdateMinDesiredWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetVisuals(struct FText Text, struct UTexture* Image); // Function TelemetryTabButton.TelemetryTabButton_C.SetVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent_1(); // Function TelemetryTabButton.TelemetryTabButton_C.SequenceEvent_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetActionTarget(struct FString ActionTarget); // Function TelemetryTabButton.TelemetryTabButton_C.SetActionTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsActive(bool IsActive); // Function TelemetryTabButton.TelemetryTabButton_C.SetIsActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TelemetryButton_3_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function TelemetryTabButton.TelemetryTabButton_C.BndEvt__TelemetryButton_3_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TelemetryButton_3_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TelemetryTabButton.TelemetryTabButton_C.BndEvt__TelemetryButton_3_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TelemetryButton_3_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function TelemetryTabButton.TelemetryTabButton_C.BndEvt__TelemetryButton_3_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function TelemetryTabButton.TelemetryTabButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TelemetryTabButton(int32_t EntryPoint); // Function TelemetryTabButton.TelemetryTabButton_C.ExecuteUbergraph_TelemetryTabButton // (Final|UbergraphFunction) // @ game+0x1af5410
};

