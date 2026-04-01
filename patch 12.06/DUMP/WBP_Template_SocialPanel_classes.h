// WidgetBlueprintGeneratedClass WBP_Template_SocialPanel.WBP_Template_SocialPanel_C
// Size: 0x428 (Inherited: 0x318)
struct UWBP_Template_SocialPanel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Anim_Open; // 0x320(0x08)
	struct UBackgroundBlur* BackgroundBlur_Panel; // 0x328(0x08)
	struct UGridPanel* GridPanel_Contents; // 0x330(0x08)
	struct UImage* Image_BackgroundShadow; // 0x338(0x08)
	struct UImage* Image_PanelBackgroundColor; // 0x340(0x08)
	struct UImage* Image_TabBarColor; // 0x348(0x08)
	struct UNamedSlot* NamedSlot_HovercardContainer; // 0x350(0x08)
	struct UNamedSlot* NamedSlot_OverSocialPanel; // 0x358(0x08)
	struct UNamedSlot* NamedSlot_Page; // 0x360(0x08)
	struct UNamedSlot* NamedSlot_TabBar; // 0x368(0x08)
	struct USizeBox* SizeBox_HovercardContainer; // 0x370(0x08)
	struct USizeBox* SizeBox_OverSocialPanel; // 0x378(0x08)
	struct USizeBox* SizeBox_Page; // 0x380(0x08)
	struct USizeBox* SizeBox_Panel; // 0x388(0x08)
	struct USizeBox* SizeBox_Panel_Clipping; // 0x390(0x08)
	struct USizeBox* SizeBox_Panel_Outer; // 0x398(0x08)
	struct USizeBox* SizeBox_TabBar; // 0x3a0(0x08)
	struct UWBP_Button_Social_SocialPanelContainer_C* WBP_Button_Social_SocialPanelContainer; // 0x3a8(0x08)
	double OpenInterpolation; // 0x3b0(0x08)
	struct USocialPanelAppearanceDataAsset* DesktopAppearance; // 0x3b8(0x08)
	struct USocialPanelAppearanceDataAsset* ConsoleAppearance; // 0x3c0(0x08)
	double OpenAnimationDuration; // 0x3c8(0x08)
	double CloseAnimationDuration; // 0x3d0(0x08)
	struct UCurveFloat* OpenAnimationCurve; // 0x3d8(0x08)
	struct UCurveFloat* CloseAnimationCurve; // 0x3e0(0x08)
	struct UAkAudioEvent* OpenAudioEvent; // 0x3e8(0x08)
	struct UAkAudioEvent* CloseAudioEvent; // 0x3f0(0x08)
	struct FMulticastInlineDelegate OnOpenInterpolationChanged; // 0x3f8(0x10)
	struct FMulticastInlineDelegate OnWeightedOpenInterpolationChanged; // 0x408(0x10)
	struct FMulticastInlineDelegate OnContainerButtonClicked; // 0x418(0x10)

	void ApplyShadowMaterialParameters(struct FSocialPanelAppearance InAppearance, bool bClipPanel); // Function WBP_Template_SocialPanel.WBP_Template_SocialPanel_C.ApplyShadowMaterialParameters // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetClippedPanelPadding(struct FSocialPanelAppearance InAppearance, struct FMargin& Return Value); // Function WBP_Template_SocialPanel.WBP_Template_SocialPanel_C.GetClippedPanelPadding // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void ApplyPanelClipping(bool bClipPanelToBounds); // Function WBP_Template_SocialPanel.WBP_Template_SocialPanel_C.ApplyPanelClipping // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayCloseAnimation(enum class EAresSocialTransitionType InTransitionType); // Function WBP_Template_SocialPanel.WBP_Template_SocialPanel_C.PlayCloseAnimation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayOpenAnimation(enum class EAresSocialTransitionType InTransitionType); // Function WBP_Template_SocialPanel.WBP_Template_SocialPanel_C.PlayOpenAnimation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayTransitionAnimation(struct UAkAudioEvent* AudioEvent, double StartAtTime, enum class EAresSocialTransitionType TransitionType, enum class EUMGSequencePlayMode PlayMode, double AnimationDuration); // Function WBP_Template_SocialPanel.WBP_Template_SocialPanel_C.PlayTransitionAnimation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetCurrentAnimationCurve(struct UCurveFloat*& Return Value); // Function WBP_Template_SocialPanel.WBP_Template_SocialPanel_C.GetCurrentAnimationCurve // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplyTabBarOrientation(enum class ESocialPanelTabBarOrientation InTabBarOrientation); // Function WBP_Template_SocialPanel.WBP_Template_SocialPanel_C.ApplyTabBarOrientation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplyAppearance(struct FSocialPanelAppearance InAppearance, enum class ESocialPanelTabBarOrientation TabBarOrientation, bool bClipPanel); // Function WBP_Template_SocialPanel.WBP_Template_SocialPanel_C.ApplyAppearance // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct USocialPanelAppearanceDataAsset* GetAppearanceDataAsset(bool& bIsValid); // Function WBP_Template_SocialPanel.WBP_Template_SocialPanel_C.GetAppearanceDataAsset // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetOpenInterpolation(double OpenInterpolation); // Function WBP_Template_SocialPanel.WBP_Template_SocialPanel_C.SetOpenInterpolation // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Template_SocialPanel.WBP_Template_SocialPanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void On Social Panel Opened(enum class EAresSocialTransitionType InTransitionType); // Function WBP_Template_SocialPanel.WBP_Template_SocialPanel_C.On Social Panel Opened // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Social Panel Closed(enum class EAresSocialTransitionType InTransitionType); // Function WBP_Template_SocialPanel.WBP_Template_SocialPanel_C.On Social Panel Closed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Template_SocialPanel_WBP_Button_Social_SocialPanelContainer_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Template_SocialPanel.WBP_Template_SocialPanel_C.BndEvt__WBP_Template_SocialPanel_WBP_Button_Social_SocialPanelContainer_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Template_SocialPanel(int32_t EntryPoint); // Function WBP_Template_SocialPanel.WBP_Template_SocialPanel_C.ExecuteUbergraph_WBP_Template_SocialPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnContainerButtonClicked__DelegateSignature(); // Function WBP_Template_SocialPanel.WBP_Template_SocialPanel_C.OnContainerButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnWeightedOpenInterpolationChanged__DelegateSignature(double OpenInterpolation); // Function WBP_Template_SocialPanel.WBP_Template_SocialPanel_C.OnWeightedOpenInterpolationChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOpenInterpolationChanged__DelegateSignature(double RawOpenInterpolation, double WeightedOpenInterpolation); // Function WBP_Template_SocialPanel.WBP_Template_SocialPanel_C.OnOpenInterpolationChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

