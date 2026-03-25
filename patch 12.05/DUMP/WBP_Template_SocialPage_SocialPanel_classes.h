// WidgetBlueprintGeneratedClass WBP_Template_SocialPage_SocialPanel.WBP_Template_SocialPage_SocialPanel_C
// Size: 0x4c9 (Inherited: 0x3f8)
struct UWBP_Template_SocialPage_SocialPanel_C : UWBP_Template_SocialPage_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f8(0x08)
	struct USocialExperienceOpenStateViewModel* SocialExperienceOpenStateViewModel; // 0x400(0x08)
	struct UWidgetAnimation* Anim_Open; // 0x408(0x08)
	struct UBorder* Border_Root; // 0x410(0x08)
	struct UNamedSlot* NamedSlot_Content; // 0x418(0x08)
	struct USizeBox* SizeBox_Title; // 0x420(0x08)
	struct UAresCommonText* Text_Title; // 0x428(0x08)
	double OpenInterpolation; // 0x430(0x08)
	struct FVector2D ClosedOffset; // 0x438(0x10)
	struct FVector2D ClosedOffsetForwardsDesktop; // 0x448(0x10)
	struct FVector2D ClosedOffsetForwardsConsole; // 0x458(0x10)
	struct FVector2D ClosedOffsetBackwardsDesktop; // 0x468(0x10)
	struct FVector2D ClosedOffsetBackwardsConsole; // 0x478(0x10)
	struct FMargin ContentPadding; // 0x488(0x10)
	struct FMargin TitlePadding; // 0x498(0x10)
	double TitleMinDesiredHeight; // 0x4a8(0x08)
	struct FText TitleText; // 0x4b0(0x18)
	bool bHideTitleWhileSocialPanelIsClosed; // 0x4c8(0x01)

	void PlayOpenSound(enum class EAresSocialTransitionType TransitionType); // Function WBP_Template_SocialPage_SocialPanel.WBP_Template_SocialPage_SocialPanel_C.PlayOpenSound // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetOpenInterpolation(double OpenInterpolation); // Function WBP_Template_SocialPage_SocialPanel.WBP_Template_SocialPage_SocialPanel_C.SetOpenInterpolation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayOpenAnimation(enum class EAresSocialTabSelectionDirection Direction, enum class EAresSocialTransitionType TransitionType); // Function WBP_Template_SocialPage_SocialPanel.WBP_Template_SocialPage_SocialPanel_C.PlayOpenAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Template_SocialPage_SocialPanel.WBP_Template_SocialPage_SocialPanel_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Template_SocialPage_SocialPanel.WBP_Template_SocialPage_SocialPanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetTitleText(struct FText InTitleText); // Function WBP_Template_SocialPage_SocialPanel.WBP_Template_SocialPage_SocialPanel_C.SetTitleText // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOpenInterpolationChanged(double OpenInterpolation); // Function WBP_Template_SocialPage_SocialPanel.WBP_Template_SocialPage_SocialPanel_C.OnOpenInterpolationChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Template_SocialPage_SocialPanel(int32_t EntryPoint); // Function WBP_Template_SocialPage_SocialPanel.WBP_Template_SocialPage_SocialPanel_C.ExecuteUbergraph_WBP_Template_SocialPage_SocialPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

