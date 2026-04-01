// WidgetBlueprintGeneratedClass Widget_Ability_Element_InputPrompt.Widget_Ability_Element_InputPrompt_C
// Size: 0x380 (Inherited: 0x320)
struct UWidget_Ability_Element_InputPrompt_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* ActionIcon; // 0x328(0x08)
	struct UOverlay* RootOverlay; // 0x330(0x08)
	struct UWidget_Ability_Element_InputPrompt_NoActionIcon_C* Widget_Ability_Element_InputPrompt_NoActionIcon; // 0x338(0x08)
	struct FStruct_Widget_Ability_Input CurrentInputStruct; // 0x340(0x38)
	struct UActionBindSet* Action Bind Set; // 0x378(0x08)

	void SetInputStructForConstruct(struct FStruct_Widget_Ability_Input NewStruct); // Function Widget_Ability_Element_InputPrompt.Widget_Ability_Element_InputPrompt_C.SetInputStructForConstruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function Widget_Ability_Element_InputPrompt.Widget_Ability_Element_InputPrompt_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SetupInputPrompt(struct FStruct_Widget_Ability_Input InputStruct); // Function Widget_Ability_Element_InputPrompt.Widget_Ability_Element_InputPrompt_C.SetupInputPrompt // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function Widget_Ability_Element_InputPrompt.Widget_Ability_Element_InputPrompt_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnActionBindingChanged(struct UActionBindSet* ActionBindSet, int32_t BindIndex, enum class EActionBindChangeSource ChangeSource, struct FName Character); // Function Widget_Ability_Element_InputPrompt.Widget_Ability_Element_InputPrompt_C.OnActionBindingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetupDirectChildren(struct FStruct_Widget_Ability_Input InputStruct); // Function Widget_Ability_Element_InputPrompt.Widget_Ability_Element_InputPrompt_C.SetupDirectChildren // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Widget_Ability_Element_InputPrompt(int32_t EntryPoint); // Function Widget_Ability_Element_InputPrompt.Widget_Ability_Element_InputPrompt_C.ExecuteUbergraph_Widget_Ability_Element_InputPrompt // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

