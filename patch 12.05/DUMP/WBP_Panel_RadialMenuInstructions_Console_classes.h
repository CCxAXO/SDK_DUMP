// WidgetBlueprintGeneratedClass WBP_Panel_RadialMenuInstructions_Console.WBP_Panel_RadialMenuInstructions_Console_C
// Size: 0x429 (Inherited: 0x3e0)
struct UWBP_Panel_RadialMenuInstructions_Console_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UActionNameIconPrompt_C* ActionNameIconPrompt; // 0x3e8(0x08)
	struct UActionNameIconPrompt_C* ActionNameIconPromptInspect; // 0x3f0(0x08)
	struct UTextBlock* HeaderText; // 0x3f8(0x08)
	struct UImage* LeftRectangle; // 0x400(0x08)
	struct UTextBlock* PromptText; // 0x408(0x08)
	struct UImage* RightRectangle; // 0x410(0x08)
	struct UTextBlock* T_InspectText; // 0x418(0x08)
	struct UTextBlock* T_VerticalRule; // 0x420(0x08)
	bool HideInspectInput; // 0x428(0x01)

	void HideInspectUI(bool HideInspect); // Function WBP_Panel_RadialMenuInstructions_Console.WBP_Panel_RadialMenuInstructions_Console_C.HideInspectUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_RadialMenuInstructions_Console.WBP_Panel_RadialMenuInstructions_Console_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetHeaderText(struct FText InText); // Function WBP_Panel_RadialMenuInstructions_Console.WBP_Panel_RadialMenuInstructions_Console_C.SetHeaderText // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetActionPromptBinding(struct FName ActionName); // Function WBP_Panel_RadialMenuInstructions_Console.WBP_Panel_RadialMenuInstructions_Console_C.SetActionPromptBinding // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPromptText(struct FText InText); // Function WBP_Panel_RadialMenuInstructions_Console.WBP_Panel_RadialMenuInstructions_Console_C.SetPromptText // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_RadialMenuInstructions_Console(int32_t EntryPoint); // Function WBP_Panel_RadialMenuInstructions_Console.WBP_Panel_RadialMenuInstructions_Console_C.ExecuteUbergraph_WBP_Panel_RadialMenuInstructions_Console // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

