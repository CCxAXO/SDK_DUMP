// WidgetBlueprintGeneratedClass WBP_Panel_RadialMenuInstructions_Desktop.WBP_Panel_RadialMenuInstructions_Desktop_C
// Size: 0x408 (Inherited: 0x3e0)
struct UWBP_Panel_RadialMenuInstructions_Desktop_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UTextBlock* HeaderText; // 0x3e8(0x08)
	struct UImage* LeftRectangle; // 0x3f0(0x08)
	struct UTextBlock* PromptText; // 0x3f8(0x08)
	struct UImage* RightRectangle; // 0x400(0x08)

	void SetHeaderText(struct FText InText); // Function WBP_Panel_RadialMenuInstructions_Desktop.WBP_Panel_RadialMenuInstructions_Desktop_C.SetHeaderText // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPromptText(struct FText InText); // Function WBP_Panel_RadialMenuInstructions_Desktop.WBP_Panel_RadialMenuInstructions_Desktop_C.SetPromptText // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_RadialMenuInstructions_Desktop(int32_t EntryPoint); // Function WBP_Panel_RadialMenuInstructions_Desktop.WBP_Panel_RadialMenuInstructions_Desktop_C.ExecuteUbergraph_WBP_Panel_RadialMenuInstructions_Desktop // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

