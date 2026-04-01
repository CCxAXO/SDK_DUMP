// WidgetBlueprintGeneratedClass TelemetryTabButton_Universal.TelemetryTabButton_Universal_C
// Size: 0x420 (Inherited: 0x3b8)
struct UTelemetryTabButton_Universal_C : UTelemetryTabButton_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct UWidgetAnimation* AnimUnhover; // 0x3c0(0x08)
	struct UWidgetAnimation* AnimActive; // 0x3c8(0x08)
	struct UWidgetAnimation* AnimHover; // 0x3d0(0x08)
	struct UTextBlock* ButtonText; // 0x3d8(0x08)
	struct UImage* Diamond2; // 0x3e0(0x08)
	struct UImage* glowNew; // 0x3e8(0x08)
	struct UImage* glowNewAdd; // 0x3f0(0x08)
	struct UTelemetryButton* InsideTelemetryButton; // 0x3f8(0x08)
	struct UImage* TabUnderline; // 0x400(0x08)
	struct UImage* TabUnderline_white; // 0x408(0x08)
	struct USizeBox* TelemetryButtonSizeBox; // 0x410(0x08)
	struct UMaterialInstanceDynamic* GlowMaterial; // 0x418(0x08)

	void SetTabButtonIsEnabled(bool IsEnabled); // Function TelemetryTabButton_Universal.TelemetryTabButton_Universal_C.SetTabButtonIsEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateMinDesiredWidth(double MinDesiredWidth); // Function TelemetryTabButton_Universal.TelemetryTabButton_Universal_C.UpdateMinDesiredWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetVisuals(struct FText Text, struct UTexture* Image); // Function TelemetryTabButton_Universal.TelemetryTabButton_Universal_C.SetVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetActionTarget(struct FString ActionTarget); // Function TelemetryTabButton_Universal.TelemetryTabButton_Universal_C.SetActionTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function TelemetryTabButton_Universal.TelemetryTabButton_Universal_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TelemetryTabButtonV2_InsideTelemetryButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // Function TelemetryTabButton_Universal.TelemetryTabButton_Universal_C.BndEvt__TelemetryTabButtonV2_InsideTelemetryButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TelemetryTabButtonV2_InsideTelemetryButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(); // Function TelemetryTabButton_Universal.TelemetryTabButton_Universal_C.BndEvt__TelemetryTabButtonV2_InsideTelemetryButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TelemetryTabButtonV2_InsideTelemetryButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature(); // Function TelemetryTabButton_Universal.TelemetryTabButton_Universal_C.BndEvt__TelemetryTabButtonV2_InsideTelemetryButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void SetIsActive(bool IsActive); // Function TelemetryTabButton_Universal.TelemetryTabButton_Universal_C.SetIsActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function TelemetryTabButton_Universal.TelemetryTabButton_Universal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TelemetryTabButton_Universal(int32_t EntryPoint); // Function TelemetryTabButton_Universal.TelemetryTabButton_Universal_C.ExecuteUbergraph_TelemetryTabButton_Universal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

