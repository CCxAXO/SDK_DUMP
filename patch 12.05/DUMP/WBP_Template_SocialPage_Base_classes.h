// WidgetBlueprintGeneratedClass WBP_Template_SocialPage_Base.WBP_Template_SocialPage_Base_C
// Size: 0x3f8 (Inherited: 0x3e0)
struct UWBP_Template_SocialPage_Base_C : UAresCommonUserWidget {
	struct UWidgetAnimation* OpenForwardsAnimation; // 0x3e0(0x08)
	struct UWidgetAnimation* OpenBackwardsAnimation; // 0x3e8(0x08)
	struct UAkAudioEvent* OpenAudioEvent; // 0x3f0(0x08)

	void PlayOpenSound(enum class EAresSocialTransitionType TransitionType); // Function WBP_Template_SocialPage_Base.WBP_Template_SocialPage_Base_C.PlayOpenSound // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayOpenAnimation(enum class EAresSocialTabSelectionDirection Direction, enum class EAresSocialTransitionType TransitionType); // Function WBP_Template_SocialPage_Base.WBP_Template_SocialPage_Base_C.PlayOpenAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(struct UWidgetAnimation* InOpenForwardsAnimation, struct UWidgetAnimation* InOpenBackwardsAnimation); // Function WBP_Template_SocialPage_Base.WBP_Template_SocialPage_Base_C.Initialize // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

