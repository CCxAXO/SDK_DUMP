// WidgetBlueprintGeneratedClass WBP_Screen_SocialPage_Base.WBP_Screen_SocialPage_Base_C
// Size: 0x538 (Inherited: 0x528)
struct UWBP_Screen_SocialPage_Base_C : USocialPageBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UWBP_Template_SocialPage_Base_C* PageTemplate; // 0x530(0x08)

	void Initialize(struct UWBP_Template_SocialPage_Base_C* InPageTemplate); // Function WBP_Screen_SocialPage_Base.WBP_Screen_SocialPage_Base_C.Initialize // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPageOpened(enum class EAresSocialTabSelectionDirection Direction, enum class EAresSocialTransitionType TransitionType); // Function WBP_Screen_SocialPage_Base.WBP_Screen_SocialPage_Base_C.OnPageOpened // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnPageClosed(enum class EAresSocialTabSelectionDirection Direction, enum class EAresSocialTransitionType TransitionType); // Function WBP_Screen_SocialPage_Base.WBP_Screen_SocialPage_Base_C.OnPageClosed // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_SocialPage_Base(int32_t EntryPoint); // Function WBP_Screen_SocialPage_Base.WBP_Screen_SocialPage_Base_C.ExecuteUbergraph_WBP_Screen_SocialPage_Base // (Final|UbergraphFunction) // @ game+0x1af5410
};

