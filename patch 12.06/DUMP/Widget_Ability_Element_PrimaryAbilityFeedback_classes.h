// WidgetBlueprintGeneratedClass Widget_Ability_Element_PrimaryAbilityFeedback.Widget_Ability_Element_PrimaryAbilityFeedback_C
// Size: 0x348 (Inherited: 0x318)
struct UWidget_Ability_Element_PrimaryAbilityFeedback_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHorizontalBox* InputPromptBox; // 0x320(0x08)
	struct USizeBox* SizeBox_1; // 0x328(0x08)
	struct UVerticalBox* TimerBox; // 0x330(0x08)
	struct UVerticalBox* VerticalBox_1; // 0x338(0x08)
	double TimerBottomPadding; // 0x340(0x08)

	void HasInputPrompt(bool& Has Input Prompt); // Function Widget_Ability_Element_PrimaryAbilityFeedback.Widget_Ability_Element_PrimaryAbilityFeedback_C.HasInputPrompt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InputPromptRemoved(); // Function Widget_Ability_Element_PrimaryAbilityFeedback.Widget_Ability_Element_PrimaryAbilityFeedback_C.InputPromptRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetInputPromptVisibility(enum class ESlateVisibility Visible); // Function Widget_Ability_Element_PrimaryAbilityFeedback.Widget_Ability_Element_PrimaryAbilityFeedback_C.SetInputPromptVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddTimer(struct UUserWidget* InTimerWidget); // Function Widget_Ability_Element_PrimaryAbilityFeedback.Widget_Ability_Element_PrimaryAbilityFeedback_C.AddTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddInputPrompt(struct UUserWidget* InInputPromptWidget); // Function Widget_Ability_Element_PrimaryAbilityFeedback.Widget_Ability_Element_PrimaryAbilityFeedback_C.AddInputPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function Widget_Ability_Element_PrimaryAbilityFeedback.Widget_Ability_Element_PrimaryAbilityFeedback_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Widget_Ability_Element_PrimaryAbilityFeedback(int32_t EntryPoint); // Function Widget_Ability_Element_PrimaryAbilityFeedback.Widget_Ability_Element_PrimaryAbilityFeedback_C.ExecuteUbergraph_Widget_Ability_Element_PrimaryAbilityFeedback // (Final|UbergraphFunction) // @ game+0x1b42740
};

