// WidgetBlueprintGeneratedClass InputIconController.InputIconController_C
// Size: 0x391 (Inherited: 0x318)
struct UInputIconController_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UBorder* GamepadInputIconContainer; // 0x320(0x08)
	struct UGamepadInputPromptSwitcher_C* GamepadInputPromptSwitcher; // 0x328(0x08)
	struct UOverlay* KeyboardMouseIconContainer; // 0x330(0x08)
	struct FMulticastInlineDelegate OnIconChange; // 0x338(0x10)
	bool PreConstructShowGamepad; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct TArray<struct FPlatformSpecificText> PlatformSpecificText; // 0x350(0x10)
	struct FMulticastInlineDelegate OnInputPress; // 0x360(0x10)
	struct FMulticastInlineDelegate OnInputReleased; // 0x370(0x10)
	enum class EActionChordTapHoldType ActionTapHoldType; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct UWidget* HoldTextContainerObject; // 0x388(0x08)
	bool UseWhiteKeyboardKeyInputStyle; // 0x390(0x01)

	void CreateKeyTextLabel(struct FName ActionName, struct UPanelWidget* Object Container, struct UTextBlock*& TextBox); // Function InputIconController.InputIconController_C.CreateKeyTextLabel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateHoldKeyboardBTN(struct UHoldKeyboardKeyBTN_C*& HoldKeyboardBTN); // Function InputIconController.InputIconController_C.CreateHoldKeyboardBTN // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateKeyboardBTN(struct UKeyboardKeyBTN_C*& KeyboardKeyBTN); // Function InputIconController.InputIconController_C.CreateKeyboardBTN // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateSharedKeyPrompt(struct UShared_Keyboard_Prompt_C*& SharedKeyboardPrompt); // Function InputIconController.InputIconController_C.CreateSharedKeyPrompt // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateSharedMousePrompt(struct UShared_Mouse_Prompt_C*& SharedMousePromptWidget); // Function InputIconController.InputIconController_C.CreateSharedMousePrompt // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetKeyBinding(struct FName BindingName, struct FText& DisplayName); // Function InputIconController.InputIconController_C.GetKeyBinding // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetMouseBinding(struct FName Action Name, enum class Enum_AbilityInputs& MouseBinding); // Function InputIconController.InputIconController_C.GetMouseBinding // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void EventOnIconChange(); // Function InputIconController.InputIconController_C.EventOnIconChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function InputIconController.InputIconController_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function InputIconController.InputIconController_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function InputIconController.InputIconController_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_InputIconController(int32_t EntryPoint); // Function InputIconController.InputIconController_C.ExecuteUbergraph_InputIconController // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnInputReleased__DelegateSignature(); // Function InputIconController.InputIconController_C.OnInputReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInputPress__DelegateSignature(); // Function InputIconController.InputIconController_C.OnInputPress__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIconChange__DelegateSignature(); // Function InputIconController.InputIconController_C.OnIconChange__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

