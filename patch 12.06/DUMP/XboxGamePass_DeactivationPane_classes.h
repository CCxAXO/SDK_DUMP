// WidgetBlueprintGeneratedClass XboxGamePass_DeactivationPane.XboxGamePass_DeactivationPane_C
// Size: 0x398 (Inherited: 0x318)
struct UXboxGamePass_DeactivationPane_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Hover_LearnMore; // 0x320(0x08)
	struct UImage* CenterDeco; // 0x328(0x08)
	struct UImage* CenterDeco_2; // 0x330(0x08)
	struct UTelemetryButton* LearnMoreButton; // 0x338(0x08)
	struct UImage* Line; // 0x340(0x08)
	struct UImage* Line_2; // 0x348(0x08)
	struct UImage* LineLeft; // 0x350(0x08)
	struct UImage* LineLeft_2; // 0x358(0x08)
	struct UImage* LineRight; // 0x360(0x08)
	struct UImage* LineRight_2; // 0x368(0x08)
	struct UImage* LinkIcon; // 0x370(0x08)
	struct UTextBlock* TextBlock_188; // 0x378(0x08)
	struct UWBP_MenuButtonSecondary_C* WBP_MenuButtonSecondary; // 0x380(0x08)
	struct USubscriptionDataAsset* XGPSubscriptionClass; // 0x388(0x08)
	struct USubscriptionHandle* XboxSubscriptionHandle; // 0x390(0x08)

	void BndEvt__XboxGamePass_DeactivationPane_LearnMoreButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function XboxGamePass_DeactivationPane.XboxGamePass_DeactivationPane_C.BndEvt__XboxGamePass_DeactivationPane_LearnMoreButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnAllSubscriptionsLoaded(struct FSubscriptionHandles& SubscriptionHandles); // Function XboxGamePass_DeactivationPane.XboxGamePass_DeactivationPane_C.OnAllSubscriptionsLoaded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function XboxGamePass_DeactivationPane.XboxGamePass_DeactivationPane_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__XboxGamePass_DeactivationPane_WBP_MenuButtonSecondary_K2Node_ComponentBoundEvent_0_OnUniversalButtonVoidEvent__DelegateSignature(); // Function XboxGamePass_DeactivationPane.XboxGamePass_DeactivationPane_C.BndEvt__XboxGamePass_DeactivationPane_WBP_MenuButtonSecondary_K2Node_ComponentBoundEvent_0_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__XboxGamePass_DeactivationPane_LearnMoreButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function XboxGamePass_DeactivationPane.XboxGamePass_DeactivationPane_C.BndEvt__XboxGamePass_DeactivationPane_LearnMoreButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__XboxGamePass_DeactivationPane_LearnMoreButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function XboxGamePass_DeactivationPane.XboxGamePass_DeactivationPane_C.BndEvt__XboxGamePass_DeactivationPane_LearnMoreButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_XboxGamePass_DeactivationPane(int32_t EntryPoint); // Function XboxGamePass_DeactivationPane.XboxGamePass_DeactivationPane_C.ExecuteUbergraph_XboxGamePass_DeactivationPane // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

