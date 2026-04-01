// WidgetBlueprintGeneratedClass GamepadInputIconWidget.GamepadInputIconWidget_C
// Size: 0x3e8 (Inherited: 0x350)
struct UGamepadInputIconWidget_C : UGamepadInputIconBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct UWidgetAnimation* OnUnpressed; // 0x358(0x08)
	struct UWidgetAnimation* OnPressed; // 0x360(0x08)
	struct UOverlay* DoubleTapPlaceHolder; // 0x368(0x08)
	struct UImage* HoldArrow; // 0x370(0x08)
	struct UImage* Icon; // 0x378(0x08)
	struct UImage* RadialProgress; // 0x380(0x08)
	struct FKey Key; // 0x388(0x20)
	struct FVector2D Size; // 0x3a8(0x10)
	struct UMaterialInstanceDynamic* ProgressFill; // 0x3b8(0x08)
	struct FMulticastInlineDelegate OnHoldTimeChanged; // 0x3c0(0x10)
	double Total Hold Time; // 0x3d0(0x08)
	struct FMulticastInlineDelegate OnInputPress; // 0x3d8(0x10)

	void SetupDoubleTapInputGraphics(bool Enable); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.SetupDoubleTapInputGraphics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateTapHoldType(enum class EActionChordTapHoldType NewTapHoldType); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.UpdateTapHoldType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetupHoldInputGraphics(bool Enable); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.SetupHoldInputGraphics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Total Hold Time(double New Total Hold Time); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.Set Total Hold Time // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateInputIcon(); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.UpdateInputIcon // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetKey(struct FKey Key); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.SetKey // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInternalKeyUpdate(); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.OnInternalKeyUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Update Progress Fill(double New Hold Time); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.Update Progress Fill // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Input Pressed(); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.On Input Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Input Released(); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.On Input Released // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GamepadInputIconWidget(int32_t EntryPoint); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.ExecuteUbergraph_GamepadInputIconWidget // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnInputPress__DelegateSignature(); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.OnInputPress__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnHoldTimeChanged__DelegateSignature(double New Hold Time); // Function GamepadInputIconWidget.GamepadInputIconWidget_C.OnHoldTimeChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

