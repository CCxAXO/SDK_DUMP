// WidgetBlueprintGeneratedClass WBP_Screen_ExpressionWheel_Base.WBP_Screen_ExpressionWheel_Base_C
// Size: 0x578 (Inherited: 0x550)
struct UWBP_Screen_ExpressionWheel_Base_C : UExpressionWheelScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UVM_ExpressionWheel_C* CurrentExpressionWheelVM; // 0x558(0x08)
	struct UWBP_Panel_ExpressionWheel_C* ExpressionWheelWidget; // 0x560(0x08)
	struct FMulticastInlineDelegate EventRadialOptionCast; // 0x568(0x10)

	void BP_OnShow(); // Function WBP_Screen_ExpressionWheel_Base.WBP_Screen_ExpressionWheel_Base_C.BP_OnShow // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnHide(); // Function WBP_Screen_ExpressionWheel_Base.WBP_Screen_ExpressionWheel_Base_C.BP_OnHide // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_ExpressionWheel_Base(int32_t EntryPoint); // Function WBP_Screen_ExpressionWheel_Base.WBP_Screen_ExpressionWheel_Base_C.ExecuteUbergraph_WBP_Screen_ExpressionWheel_Base // (Final|UbergraphFunction) // @ game+0x1af5410
	void EventRadialOptionCast__DelegateSignature(int32_t LastSelected, bool ShouldTriggerInspect); // Function WBP_Screen_ExpressionWheel_Base.WBP_Screen_ExpressionWheel_Base_C.EventRadialOptionCast__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

