// WidgetBlueprintGeneratedClass GamepadInputChordWidget.GamepadInputChordWidget_C
// Size: 0x368 (Inherited: 0x320)
struct UGamepadInputChordWidget_C : UInputChordWidgetBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UHorizontalBox* ChordedInputBox; // 0x328(0x08)
	struct UBorder* GamepadLeftInput; // 0x330(0x08)
	struct UBorder* GamepadRightInput; // 0x338(0x08)
	struct UTextBlock* GamepadShiftLinkText; // 0x340(0x08)
	struct UHorizontalBox* IconBox; // 0x348(0x08)
	struct UBorder* RootBorder; // 0x350(0x08)
	struct UGamepadInputIconBase* LeftInputIcon; // 0x358(0x08)
	struct UGamepadInputIconBase* RightInputIcon; // 0x360(0x08)

	void UpdateActionTapHoldType(enum class EActionChordTapHoldType NewTapHoldType); // Function GamepadInputChordWidget.GamepadInputChordWidget_C.UpdateActionTapHoldType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindInputEvents(struct UInputIconController_C* Input Icon Controller, bool Bind); // Function GamepadInputChordWidget.GamepadInputChordWidget_C.BindInputEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateCurrentHoldTime(double New Hold Time); // Function GamepadInputChordWidget.GamepadInputChordWidget_C.UpdateCurrentHoldTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTotalHoldTime(double New Total Hold Time); // Function GamepadInputChordWidget.GamepadInputChordWidget_C.SetTotalHoldTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetInputAction(struct FName ActionName, enum class EActionBindSetAxisDirection ActionBindSetAxisDirection); // Function GamepadInputChordWidget.GamepadInputChordWidget_C.SetInputAction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function GamepadInputChordWidget.GamepadInputChordWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_GamepadInputChordWidget(int32_t EntryPoint); // Function GamepadInputChordWidget.GamepadInputChordWidget_C.ExecuteUbergraph_GamepadInputChordWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};

