// WidgetBlueprintGeneratedClass WBP_Panel_RadialSprayWheelArsenal.WBP_Panel_RadialSprayWheelArsenal_C
// Size: 0x1b49 (Inherited: 0x1ae0)
struct UWBP_Panel_RadialSprayWheelArsenal_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* Anim_Unfocus; // 0x1ae8(0x08)
	struct UWidgetAnimation* Anim_Focus; // 0x1af0(0x08)
	struct UWBP_Panel_RadialSprayWheel_C* ExpressionsWheel; // 0x1af8(0x08)
	struct UExpressionManagementViewModel* ExpressionManagementVM; // 0x1b00(0x08)
	struct FAresConditionalInputAction ActivateAction; // 0x1b08(0x28)
	struct UVM_ArsenalExpressionWheel_C* AresenalExpressionWheelViewModel; // 0x1b30(0x08)
	struct UExpressionHandle* TopExpressionHandle; // 0x1b38(0x08)
	double AnimFocused; // 0x1b40(0x08)
	bool Hovered; // 0x1b48(0x01)

	void SetAnimIsFocused(double AnimFocused); // Function WBP_Panel_RadialSprayWheelArsenal.WBP_Panel_RadialSprayWheelArsenal_C.SetAnimIsFocused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(); // Function WBP_Panel_RadialSprayWheelArsenal.WBP_Panel_RadialSprayWheelArsenal_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEquippedExpressionHandlesChanged(struct TArray<struct UExpressionHandle*>& EquippedExpressionHandles); // Function WBP_Panel_RadialSprayWheelArsenal.WBP_Panel_RadialSprayWheelArsenal_C.OnEquippedExpressionHandlesChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MakeViewModels(); // Function WBP_Panel_RadialSprayWheelArsenal.WBP_Panel_RadialSprayWheelArsenal_C.MakeViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetExpressionVM(struct UExpressionManagementViewModel* ExpressionVM); // Function WBP_Panel_RadialSprayWheelArsenal.WBP_Panel_RadialSprayWheelArsenal_C.SetExpressionVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindExpressionVM(bool Bind, struct UExpressionManagementViewModel* ExpressionManagementVM); // Function WBP_Panel_RadialSprayWheelArsenal.WBP_Panel_RadialSprayWheelArsenal_C.BindExpressionVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BP_OnClicked(); // Function WBP_Panel_RadialSprayWheelArsenal.WBP_Panel_RadialSprayWheelArsenal_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_RadialSprayWheelArsenal.WBP_Panel_RadialSprayWheelArsenal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnHovered(); // Function WBP_Panel_RadialSprayWheelArsenal.WBP_Panel_RadialSprayWheelArsenal_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnUnhovered(); // Function WBP_Panel_RadialSprayWheelArsenal.WBP_Panel_RadialSprayWheelArsenal_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_RadialSprayWheelArsenal(int32_t EntryPoint); // Function WBP_Panel_RadialSprayWheelArsenal.WBP_Panel_RadialSprayWheelArsenal_C.ExecuteUbergraph_WBP_Panel_RadialSprayWheelArsenal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

