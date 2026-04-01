// WidgetBlueprintGeneratedClass WBP_Panel_ExpressionWheel.WBP_Panel_ExpressionWheel_C
// Size: 0x488 (Inherited: 0x420)
struct UWBP_Panel_ExpressionWheel_C : URadialMenuBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x420(0x08)
	struct UWidgetAnimation* TimerAnimation; // 0x428(0x08)
	struct UImage* InspectImage; // 0x430(0x08)
	struct UTextBlock* InspectText; // 0x438(0x08)
	struct UWBP_Panel_GameRadialMenu_C* RadialMenu; // 0x440(0x08)
	struct UImage* Timer; // 0x448(0x08)
	struct UVM_ExpressionWheel_C* ExpressionWheelVM; // 0x450(0x08)
	bool CenterMouseOnShow; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)
	struct FVector2D MouseReferencePosition; // 0x460(0x10)
	struct UMaterialInstanceDynamic* TimerMaterial; // 0x470(0x08)
	struct FMulticastInlineDelegate HandleRadialPiecesCreated; // 0x478(0x10)

	void HandleCenterSelection(bool bIsCenterSelected); // Function WBP_Panel_ExpressionWheel.WBP_Panel_ExpressionWheel_C.HandleCenterSelection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleWheelVisibilityChanged(enum class ESlateVisibility Visibility); // Function WBP_Panel_ExpressionWheel.WBP_Panel_ExpressionWheel_C.HandleWheelVisibilityChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCooldownElapsed(); // Function WBP_Panel_ExpressionWheel.WBP_Panel_ExpressionWheel_C.HandleCooldownElapsed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCooldownStarted(); // Function WBP_Panel_ExpressionWheel.WBP_Panel_ExpressionWheel_C.HandleCooldownStarted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindExpressionWheelEvents(bool Bind); // Function WBP_Panel_ExpressionWheel.WBP_Panel_ExpressionWheel_C.BindExpressionWheelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetExpressionWheelViewModel(struct UVM_ExpressionWheel_C* ExpressionVM); // Function WBP_Panel_ExpressionWheel.WBP_Panel_ExpressionWheel_C.SetExpressionWheelViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeViewModel(struct UVM_ExpressionWheel_C* ExpressionWheelViewModel); // Function WBP_Panel_ExpressionWheel.WBP_Panel_ExpressionWheel_C.InitializeViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSprayFailure(); // Function WBP_Panel_ExpressionWheel.WBP_Panel_ExpressionWheel_C.OnSprayFailure // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCreateRadialPiecesFromSlotDescriptors(struct TArray<struct FRadialMenuSlotDescriptor>& SlotDescriptors); // Function WBP_Panel_ExpressionWheel.WBP_Panel_ExpressionWheel_C.HandleCreateRadialPiecesFromSlotDescriptors // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_ExpressionWheel.WBP_Panel_ExpressionWheel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Panel_ExpressionWheel.WBP_Panel_ExpressionWheel_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_ExpressionWheel.WBP_Panel_ExpressionWheel_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_ExpressionWheel(int32_t EntryPoint); // Function WBP_Panel_ExpressionWheel.WBP_Panel_ExpressionWheel_C.ExecuteUbergraph_WBP_Panel_ExpressionWheel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void HandleRadialPiecesCreated__DelegateSignature(); // Function WBP_Panel_ExpressionWheel.WBP_Panel_ExpressionWheel_C.HandleRadialPiecesCreated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

