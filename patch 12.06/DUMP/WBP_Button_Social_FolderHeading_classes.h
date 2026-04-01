// WidgetBlueprintGeneratedClass WBP_Button_Social_FolderHeading.WBP_Button_Social_FolderHeading_C
// Size: 0x1b3c (Inherited: 0x1ae8)
struct UWBP_Button_Social_FolderHeading_C : UWBP_Button_Social_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae8(0x08)
	struct UWidgetAnimation* Anim_Collapse; // 0x1af0(0x08)
	struct UWidgetAnimation* Anim_Expand; // 0x1af8(0x08)
	struct UImage* Image_ExpansionIcon; // 0x1b00(0x08)
	struct UWBP_Template_AnimatedButtonContent_Social_C* WBP_Template_AnimatedButtonContent_Social; // 0x1b08(0x08)
	bool bIsExpanded; // 0x1b10(0x01)
	char pad_1B11[0x7]; // 0x1b11(0x07)
	struct UAkAudioEvent* ExpandAudioEvent; // 0x1b18(0x08)
	struct UAkAudioEvent* CollapseAudioEvent; // 0x1b20(0x08)
	struct FSlateColor IconColor; // 0x1b28(0x14)

	void SetIsExpanded(bool bInIsExpanded, enum class EAresSocialTransitionType TransitionType); // Function WBP_Button_Social_FolderHeading.WBP_Button_Social_FolderHeading_C.SetIsExpanded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_Social_FolderHeading.WBP_Button_Social_FolderHeading_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SetIconBrush(struct FSlateBrush& InIconBrush); // Function WBP_Button_Social_FolderHeading.WBP_Button_Social_FolderHeading_C.SetIconBrush // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_Social_FolderHeading(int32_t EntryPoint); // Function WBP_Button_Social_FolderHeading.WBP_Button_Social_FolderHeading_C.ExecuteUbergraph_WBP_Button_Social_FolderHeading // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

