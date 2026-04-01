// WidgetBlueprintGeneratedClass WBP_VisibleInterventionStatus_HoverCard_InterventionMessage.WBP_VisibleInterventionStatus_HoverCard_InterventionMessage_C
// Size: 0x458 (Inherited: 0x3e0)
struct UWBP_VisibleInterventionStatus_HoverCard_InterventionMessage_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonRichText* Body_RichTextBlock; // 0x3e8(0x08)
	struct UImage* HeaderIcon; // 0x3f0(0x08)
	struct UAresCommonRichText* SubTitle__RichTextBlock; // 0x3f8(0x08)
	struct UAresCommonRichText* Title__RichTextBlock; // 0x400(0x08)
	struct FText TitleText; // 0x408(0x18)
	struct FText SubtitleText; // 0x420(0x18)
	struct FText MessageText; // 0x438(0x18)
	struct UTexture2D* BehaviorIcon; // 0x450(0x08)

	void PreConstruct(bool IsDesignTime); // Function WBP_VisibleInterventionStatus_HoverCard_InterventionMessage.WBP_VisibleInterventionStatus_HoverCard_InterventionMessage_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_VisibleInterventionStatus_HoverCard_InterventionMessage.WBP_VisibleInterventionStatus_HoverCard_InterventionMessage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_VisibleInterventionStatus_HoverCard_InterventionMessage(int32_t EntryPoint); // Function WBP_VisibleInterventionStatus_HoverCard_InterventionMessage.WBP_VisibleInterventionStatus_HoverCard_InterventionMessage_C.ExecuteUbergraph_WBP_VisibleInterventionStatus_HoverCard_InterventionMessage // (Final|UbergraphFunction) // @ game+0x1b42740
};

