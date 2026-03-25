// WidgetBlueprintGeneratedClass KeyboardKeyBTN.KeyboardKeyBTN_C
// Size: 0x382 (Inherited: 0x330)
struct UKeyboardKeyBTN_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UImage* BG; // 0x338(0x08)
	struct UImage* Image_291; // 0x340(0x08)
	struct UInvalidationBox* InvalidationBox_KeyboardKeyBTN; // 0x348(0x08)
	struct UTextBlock* KeyText; // 0x350(0x08)
	struct USizeBox* SB_KeyText; // 0x358(0x08)
	struct UScaleBox* ScaleBox_KeyText; // 0x360(0x08)
	struct FName ActionMapping; // 0x368(0x0c)
	char pad_374[0x4]; // 0x374(0x04)
	struct UActionBindSet* ActionBindSet; // 0x378(0x08)
	enum class EActionBindSetAxisDirection AxisDirection; // 0x380(0x01)
	bool UseWhiteInputUI; // 0x381(0x01)

	void SetInputColors(); // Function KeyboardKeyBTN.KeyboardKeyBTN_C.SetInputColors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function KeyboardKeyBTN.KeyboardKeyBTN_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function KeyboardKeyBTN.KeyboardKeyBTN_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void UpdateHotkeyText(); // Function KeyboardKeyBTN.KeyboardKeyBTN_C.UpdateHotkeyText // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ChangeActionMapping(struct FName Action, enum class EActionBindSetAxisDirection AxisDirection); // Function KeyboardKeyBTN.KeyboardKeyBTN_C.ChangeActionMapping // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindingChanged(struct UActionBindSet* ActionBindSet, int32_t BindIndex, enum class EActionBindChangeSource ChangeSource, struct FName Character); // Function KeyboardKeyBTN.KeyboardKeyBTN_C.BindingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_KeyboardKeyBTN(int32_t EntryPoint); // Function KeyboardKeyBTN.KeyboardKeyBTN_C.ExecuteUbergraph_KeyboardKeyBTN // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

