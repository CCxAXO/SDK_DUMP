// WidgetBlueprintGeneratedClass WBP_Button_Social_StandardLayout_Base.WBP_Button_Social_StandardLayout_Base_C
// Size: 0x1b9c (Inherited: 0x1ae8)
struct UWBP_Button_Social_StandardLayout_Base_C : UWBP_Button_Social_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae8(0x08)
	struct UBorder* Border_Root; // 0x1af0(0x08)
	struct UHorizontalBox* HorizontalBox_Content; // 0x1af8(0x08)
	struct UAresButtonRichTextComponent* RichText_Primary; // 0x1b00(0x08)
	struct UScaleBox* ScaleBox_Text; // 0x1b08(0x08)
	struct USizeBox* SizeBox_Icon; // 0x1b10(0x08)
	struct USpacer* Spacer_IconToText; // 0x1b18(0x08)
	struct UWBP_Template_AnimatedButtonContent_Social_C* WBP_Template_AnimatedButtonContent_Social; // 0x1b20(0x08)
	struct FMargin ContentPadding; // 0x1b28(0x10)
	enum class EHorizontalAlignment ContentHorizontalAlignment; // 0x1b38(0x01)
	enum class EVerticalAlignment ContentVerticalAlignment; // 0x1b39(0x01)
	char pad_1B3A[0x6]; // 0x1b3a(0x06)
	struct FVector2D IconSize; // 0x1b40(0x10)
	double IconToTextPaddingSize; // 0x1b50(0x08)
	struct FSlateColor IconTint; // 0x1b58(0x14)
	bool bOverrideIconTintDuringInteraction; // 0x1b6c(0x01)
	char pad_1B6D[0x3]; // 0x1b6d(0x03)
	struct FSlateColor InteractionIconTint; // 0x1b70(0x14)
	enum class EHorizontalAlignment TextHorizontalAlignment; // 0x1b84(0x01)
	bool bOverrideTextTintDuringInteraction; // 0x1b85(0x01)
	char pad_1B86[0x2]; // 0x1b86(0x02)
	struct FSlateColor InteractionTextTint; // 0x1b88(0x14)

	void UpdateInteractionAppearance(); // Function WBP_Button_Social_StandardLayout_Base.WBP_Button_Social_StandardLayout_Base_C.UpdateInteractionAppearance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_Social_StandardLayout_Base.WBP_Button_Social_StandardLayout_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void UpdateSpacerVisibility(); // Function WBP_Button_Social_StandardLayout_Base.WBP_Button_Social_StandardLayout_Base_C.UpdateSpacerVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetText(struct FText& InText); // Function WBP_Button_Social_StandardLayout_Base.WBP_Button_Social_StandardLayout_Base_C.SetText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIconBrush(struct FSlateBrush& InIconBrush); // Function WBP_Button_Social_StandardLayout_Base.WBP_Button_Social_StandardLayout_Base_C.SetIconBrush // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionHovered(); // Function WBP_Button_Social_StandardLayout_Base.WBP_Button_Social_StandardLayout_Base_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionUnHovered(); // Function WBP_Button_Social_StandardLayout_Base.WBP_Button_Social_StandardLayout_Base_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionPressed(); // Function WBP_Button_Social_StandardLayout_Base.WBP_Button_Social_StandardLayout_Base_C.BP_OnTransitionPressed // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionReleased(); // Function WBP_Button_Social_StandardLayout_Base.WBP_Button_Social_StandardLayout_Base_C.BP_OnTransitionReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_Social_StandardLayout_Base(int32_t EntryPoint); // Function WBP_Button_Social_StandardLayout_Base.WBP_Button_Social_StandardLayout_Base_C.ExecuteUbergraph_WBP_Button_Social_StandardLayout_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

