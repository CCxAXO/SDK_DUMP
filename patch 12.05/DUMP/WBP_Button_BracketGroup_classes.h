// WidgetBlueprintGeneratedClass WBP_Button_BracketGroup.WBP_Button_BracketGroup_C
// Size: 0x640 (Inherited: 0x5da)
struct UWBP_Button_BracketGroup_C : UBaseMenuButton_Universal_C {
	char pad_5DA[0x6]; // 0x5da(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5e0(0x08)
	struct UImage* IMG_GroupButBG_3; // 0x5e8(0x08)
	struct UImage* IMG_GroupButBorder_3; // 0x5f0(0x08)
	struct UAresTextBlock* Text_Button; // 0x5f8(0x08)
	struct FText ButtonDisplayText; // 0x600(0x18)
	struct FString ID; // 0x618(0x10)
	enum class E_BracketGroupButtonStates E_ButtonState; // 0x628(0x01)
	char pad_629[0x7]; // 0x629(0x07)
	struct FMulticastInlineDelegate OnClickedWithID; // 0x630(0x10)

	void OnClickedStyling(); // Function WBP_Button_BracketGroup.WBP_Button_BracketGroup_C.OnClickedStyling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnExitStyling(); // Function WBP_Button_BracketGroup.WBP_Button_BracketGroup_C.OnExitStyling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEnterStyling(); // Function WBP_Button_BracketGroup.WBP_Button_BracketGroup_C.OnEnterStyling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StyleButton(enum class E_BracketGroupButtonStates ButtonState); // Function WBP_Button_BracketGroup.WBP_Button_BracketGroup_C.StyleButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_BracketGroup.WBP_Button_BracketGroup_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Button_BracketGroup.WBP_Button_BracketGroup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleButtonClicked(); // Function WBP_Button_BracketGroup.WBP_Button_BracketGroup_C.HandleButtonClicked // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void HandleButtonEntered(); // Function WBP_Button_BracketGroup.WBP_Button_BracketGroup_C.HandleButtonEntered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void HandleButtonExited(); // Function WBP_Button_BracketGroup.WBP_Button_BracketGroup_C.HandleButtonExited // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_BracketGroup(int32_t EntryPoint); // Function WBP_Button_BracketGroup.WBP_Button_BracketGroup_C.ExecuteUbergraph_WBP_Button_BracketGroup // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnClickedWithID__DelegateSignature(struct FString ID, struct TSoftObjectPtr<UWBP_Button_BracketGroup_C> PressedButton); // Function WBP_Button_BracketGroup.WBP_Button_BracketGroup_C.OnClickedWithID__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

