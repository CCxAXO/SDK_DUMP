// WidgetBlueprintGeneratedClass WBP_Button_MenuAction_Highlight.WBP_Button_MenuAction_Highlight_C
// Size: 0x16b0 (Inherited: 0x1680)
struct UWBP_Button_MenuAction_Highlight_C : UCommonBoundActionButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1680(0x08)
	struct UHorizontalBox* ButtonComponents; // 0x1688(0x08)
	struct UImage* Frame_Objective_Highlight; // 0x1690(0x08)
	struct FText ObjectiveInteractionText; // 0x1698(0x18)

	void Toggle Visibility(bool SetVisible); // Function WBP_Button_MenuAction_Highlight.WBP_Button_MenuAction_Highlight_C.Toggle Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__UI_Menu_ActionButton_InputActionWidget_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Function WBP_Button_MenuAction_Highlight.WBP_Button_MenuAction_Highlight_C.BndEvt__UI_Menu_ActionButton_InputActionWidget_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Button_MenuAction_Highlight.WBP_Button_MenuAction_Highlight_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnObjectiveChange(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus); // Function WBP_Button_MenuAction_Highlight.WBP_Button_MenuAction_Highlight_C.OnObjectiveChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnUpdateInputAction(); // Function WBP_Button_MenuAction_Highlight.WBP_Button_MenuAction_Highlight_C.OnUpdateInputAction // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_MenuAction_Highlight(int32_t EntryPoint); // Function WBP_Button_MenuAction_Highlight.WBP_Button_MenuAction_Highlight_C.ExecuteUbergraph_WBP_Button_MenuAction_Highlight // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

