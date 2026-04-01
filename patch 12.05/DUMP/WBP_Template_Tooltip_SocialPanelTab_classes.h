// WidgetBlueprintGeneratedClass WBP_Template_Tooltip_SocialPanelTab.WBP_Template_Tooltip_SocialPanelTab_C
// Size: 0x349 (Inherited: 0x318)
struct UWBP_Template_Tooltip_SocialPanelTab_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Anim_Hide; // 0x320(0x08)
	struct UWidgetAnimation* Anim_Show; // 0x328(0x08)
	struct UAresCommonText* Text_Label; // 0x330(0x08)
	struct FMulticastInlineDelegate OnHideCompleted; // 0x338(0x10)
	bool bIsShowing; // 0x348(0x01)

	void PlayTransitionAnimation(struct UWidgetAnimation* Animation, enum class EAresSocialTransitionType TransiitonType); // Function WBP_Template_Tooltip_SocialPanelTab.WBP_Template_Tooltip_SocialPanelTab_C.PlayTransitionAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetIsShowing(bool& bIsShowing); // Function WBP_Template_Tooltip_SocialPanelTab.WBP_Template_Tooltip_SocialPanelTab_C.GetIsShowing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetLabelText(struct FText InLabel); // Function WBP_Template_Tooltip_SocialPanelTab.WBP_Template_Tooltip_SocialPanelTab_C.SetLabelText // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayShowAnimation(enum class EAresSocialTransitionType TransitionType); // Function WBP_Template_Tooltip_SocialPanelTab.WBP_Template_Tooltip_SocialPanelTab_C.PlayShowAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayHideAnimation(enum class EAresSocialTransitionType TransitionType); // Function WBP_Template_Tooltip_SocialPanelTab.WBP_Template_Tooltip_SocialPanelTab_C.PlayHideAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Template_Tooltip_SocialPanelTab.WBP_Template_Tooltip_SocialPanelTab_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function WBP_Template_Tooltip_SocialPanelTab.WBP_Template_Tooltip_SocialPanelTab_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Template_Tooltip_SocialPanelTab(int32_t EntryPoint); // Function WBP_Template_Tooltip_SocialPanelTab.WBP_Template_Tooltip_SocialPanelTab_C.ExecuteUbergraph_WBP_Template_Tooltip_SocialPanelTab // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnHideCompleted__DelegateSignature(); // Function WBP_Template_Tooltip_SocialPanelTab.WBP_Template_Tooltip_SocialPanelTab_C.OnHideCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

