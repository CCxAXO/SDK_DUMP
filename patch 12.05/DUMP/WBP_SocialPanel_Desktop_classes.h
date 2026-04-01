// WidgetBlueprintGeneratedClass WBP_SocialPanel_Desktop.WBP_SocialPanel_Desktop_C
// Size: 0x458 (Inherited: 0x3e0)
struct UWBP_SocialPanel_Desktop_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct USocialExperienceOpenStateViewModel* SocialExperienceOpenStateViewModel; // 0x3e8(0x08)
	struct UWidgetAnimation* Anim_Hover; // 0x3f0(0x08)
	struct UFlyoutContainer_Overlay_C* FlyoutContainer_Overlay; // 0x3f8(0x08)
	struct UWBP_TabList_Social_C* TabList; // 0x400(0x08)
	struct UWBP_Panel_SocialPanelSummary_Desktop_C* WBP_Panel_SocialPanelSummary; // 0x408(0x08)
	struct UWBP_Template_SocialPanel_C* WBP_Template_SocialPanel; // 0x410(0x08)
	struct UCommonActivatableWidgetSwitcher* WidgetSwitcher_Pages; // 0x418(0x08)
	struct FTimerHandle AutoCloseTimerHandle; // 0x420(0x08)
	double AutoCloseDuration; // 0x428(0x08)
	double OpenInterpolation; // 0x430(0x08)
	bool bIsVisuallyHovered; // 0x438(0x01)
	char pad_439[0x3]; // 0x439(0x03)
	struct FName PageListKey; // 0x43c(0x0c)
	struct FName InitialPageID; // 0x448(0x0c)
	int32_t DesignTimePageIndex; // 0x454(0x04)

	void CreatePages(); // Function WBP_SocialPanel_Desktop.WBP_SocialPanel_Desktop_C.CreatePages // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_SocialPanel_Desktop.WBP_SocialPanel_Desktop_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_SocialPanel_Desktop.WBP_SocialPanel_Desktop_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OpenSocialPanel(enum class EAresSocialTransitionType TransitionType); // Function WBP_SocialPanel_Desktop.WBP_SocialPanel_Desktop_C.OpenSocialPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CloseSocialPanel(enum class EAresSocialTransitionType TransitionType); // Function WBP_SocialPanel_Desktop.WBP_SocialPanel_Desktop_C.CloseSocialPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_SocialPanel_Desktop_WBP_Template_SocialPanel_K2Node_ComponentBoundEvent_1_OnOpenInterpolationChanged__DelegateSignature(double RawOpenInterpolation, double WeightedOpenInterpolation); // Function WBP_SocialPanel_Desktop.WBP_SocialPanel_Desktop_C.BndEvt__WBP_SocialPanel_Desktop_WBP_Template_SocialPanel_K2Node_ComponentBoundEvent_1_OnOpenInterpolationChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_SocialPanel_Desktop_WBP_Template_SocialPanel_K2Node_ComponentBoundEvent_0_OnContainerButtonClicked__DelegateSignature(); // Function WBP_SocialPanel_Desktop.WBP_SocialPanel_Desktop_C.BndEvt__WBP_SocialPanel_Desktop_WBP_Template_SocialPanel_K2Node_ComponentBoundEvent_0_OnContainerButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_SocialPanel_Desktop.WBP_SocialPanel_Desktop_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_SocialPanel_Desktop.WBP_SocialPanel_Desktop_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnAutoCloseTimerFinished(); // Function WBP_SocialPanel_Desktop.WBP_SocialPanel_Desktop_C.OnAutoCloseTimerFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_SocialPanel_Desktop(int32_t EntryPoint); // Function WBP_SocialPanel_Desktop.WBP_SocialPanel_Desktop_C.ExecuteUbergraph_WBP_SocialPanel_Desktop // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

