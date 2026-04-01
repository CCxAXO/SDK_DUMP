// WidgetBlueprintGeneratedClass Widget_Ability_Element_InputPrompt_NoActionIcon.Widget_Ability_Element_InputPrompt_NoActionIcon_C
// Size: 0x368 (Inherited: 0x320)
struct UWidget_Ability_Element_InputPrompt_NoActionIcon_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UInputStructIconPrompt_C* InputStructIconPrompt; // 0x328(0x08)
	struct FStruct_Widget_Ability_Input CurrentInputStruct; // 0x330(0x38)

	void SetInputStructForConstruct(struct FStruct_Widget_Ability_Input NewStruct); // Function Widget_Ability_Element_InputPrompt_NoActionIcon.Widget_Ability_Element_InputPrompt_NoActionIcon_C.SetInputStructForConstruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	enum class Enum_AbilityInputs GetMouseBinding(struct FName ActionMapping); // Function Widget_Ability_Element_InputPrompt_NoActionIcon.Widget_Ability_Element_InputPrompt_NoActionIcon_C.GetMouseBinding // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetKeyText(struct FName BindingName, struct FText& DisplayName); // Function Widget_Ability_Element_InputPrompt_NoActionIcon.Widget_Ability_Element_InputPrompt_NoActionIcon_C.GetKeyText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetupInputPrompt(struct FStruct_Widget_Ability_Input InputStruct); // Function Widget_Ability_Element_InputPrompt_NoActionIcon.Widget_Ability_Element_InputPrompt_NoActionIcon_C.SetupInputPrompt // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Widget_Ability_Element_InputPrompt_NoActionIcon(int32_t EntryPoint); // Function Widget_Ability_Element_InputPrompt_NoActionIcon.Widget_Ability_Element_InputPrompt_NoActionIcon_C.ExecuteUbergraph_Widget_Ability_Element_InputPrompt_NoActionIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

