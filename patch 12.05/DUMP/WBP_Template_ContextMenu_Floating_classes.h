// WidgetBlueprintGeneratedClass WBP_Template_ContextMenu_Floating.WBP_Template_ContextMenu_Floating_C
// Size: 0x354 (Inherited: 0x318)
struct UWBP_Template_ContextMenu_Floating_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Anim_Open; // 0x320(0x08)
	struct UImage* Image_BackgroundFill; // 0x328(0x08)
	struct UNamedSlot* NamedSlot_Content; // 0x330(0x08)
	struct UAkAudioEvent* OpenSound; // 0x338(0x08)
	struct FSlateColor BackgroundColor; // 0x340(0x14)

	void PreConstruct(bool IsDesignTime); // Function WBP_Template_ContextMenu_Floating.WBP_Template_ContextMenu_Floating_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PlayOpenAnimation(); // Function WBP_Template_ContextMenu_Floating.WBP_Template_ContextMenu_Floating_C.PlayOpenAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Template_ContextMenu_Floating(int32_t EntryPoint); // Function WBP_Template_ContextMenu_Floating.WBP_Template_ContextMenu_Floating_C.ExecuteUbergraph_WBP_Template_ContextMenu_Floating // (Final|UbergraphFunction) // @ game+0x1af5410
};

