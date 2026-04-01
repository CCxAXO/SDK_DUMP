// WidgetBlueprintGeneratedClass BombPlantUsableHUDComponent.BombPlantUsableHUDComponent_C
// Size: 0x448 (Inherited: 0x358)
struct UBombPlantUsableHUDComponent_C : UBaseUsableHUDComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UActionNameIconPrompt_C* ActionNameIconPrompt; // 0x360(0x08)
	struct UAnnotatedProgressBar_C* AnnotatedProgressBar; // 0x368(0x08)
	struct UImage* BG; // 0x370(0x08)
	struct UImage* Image_117; // 0x378(0x08)
	struct UImage* Image_119; // 0x380(0x08)
	struct UImage* Image_120; // 0x388(0x08)
	struct UImage* Image_121; // 0x390(0x08)
	struct UImage* Image_122; // 0x398(0x08)
	struct UImage* Image_123; // 0x3a0(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x3a8(0x08)
	struct UInvalidationBox* InvalidationBox_2; // 0x3b0(0x08)
	struct UInvalidationBox* InvalidationBox_3; // 0x3b8(0x08)
	struct UInvalidationBox* InvalidationBox_4; // 0x3c0(0x08)
	struct UInvalidationBox* InvalidationBox_5; // 0x3c8(0x08)
	struct UInvalidationBox* InvalidationBox_6; // 0x3d0(0x08)
	struct UInvalidationBox* InvalidationBox_7; // 0x3d8(0x08)
	struct UInvalidationBox* InvalidationBox_8; // 0x3e0(0x08)
	struct UInvalidationBox* InvalidationBox_9; // 0x3e8(0x08)
	struct UInvalidationBox* InvalidationBox_10; // 0x3f0(0x08)
	struct UOverlay* Prompt; // 0x3f8(0x08)
	struct UScaleBox* ScaleBox_1; // 0x400(0x08)
	struct UWidgetSwitcher* Switcher; // 0x408(0x08)
	struct UInvalidationBox* SwitcherIcon; // 0x410(0x08)
	struct USizeBox* SwitcherProgressBar; // 0x418(0x08)
	struct UTextBlock* Text1; // 0x420(0x08)
	struct UTextBlock* Text2; // 0x428(0x08)
	struct FTimerHandle HoldTimer; // 0x430(0x08)
	bool isHeld; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct UGamepadInputIconBase* InteractGamepadGlyph; // 0x440(0x08)

	void Adjust Layout for Device(); // Function BombPlantUsableHUDComponent.BombPlantUsableHUDComponent_C.Adjust Layout for Device // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateTouchPrompt(bool InUse); // Function BombPlantUsableHUDComponent.BombPlantUsableHUDComponent_C.UpdateTouchPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function BombPlantUsableHUDComponent.BombPlantUsableHUDComponent_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleCurrentlyInUseUpdate(bool CurrentlyInUse); // Function BombPlantUsableHUDComponent.BombPlantUsableHUDComponent_C.HandleCurrentlyInUseUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleUsingTimeUpdate(double CurrentUsingTime, double MaxUsingTime); // Function BombPlantUsableHUDComponent.BombPlantUsableHUDComponent_C.HandleUsingTimeUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EnableToggleSettingChange(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function BombPlantUsableHUDComponent.BombPlantUsableHUDComponent_C.EnableToggleSettingChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function BombPlantUsableHUDComponent.BombPlantUsableHUDComponent_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BombPlantUsableHUDComponent(int32_t EntryPoint); // Function BombPlantUsableHUDComponent.BombPlantUsableHUDComponent_C.ExecuteUbergraph_BombPlantUsableHUDComponent // (Final|UbergraphFunction) // @ game+0x1b42740
};

