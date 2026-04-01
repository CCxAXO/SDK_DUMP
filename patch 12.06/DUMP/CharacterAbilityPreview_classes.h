// WidgetBlueprintGeneratedClass CharacterAbilityPreview.CharacterAbilityPreview_C
// Size: 0x380 (Inherited: 0x320)
struct UCharacterAbilityPreview_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UActionNameIconPrompt_C* ActionNameIconPrompt; // 0x328(0x08)
	struct UButton* Button_126; // 0x330(0x08)
	struct UImage* Icon; // 0x338(0x08)
	struct UButton* LargeButton; // 0x340(0x08)
	struct UImage* SelectedState; // 0x348(0x08)
	struct UImage* SelectedState_2; // 0x350(0x08)
	enum class ECharacterAbilitySlot AbilitySlot; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct FMulticastInlineDelegate Clicked; // 0x360(0x10)
	enum class Enum_CharacterPreviewType PreviewType; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct UInputChordWidgetBase_C* InputChordWidget; // 0x378(0x08)

	void SetText(struct FText Text); // Function CharacterAbilityPreview.CharacterAbilityPreview_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSelected(bool Selected); // Function CharacterAbilityPreview.CharacterAbilityPreview_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIcon(struct UTexture* Icon); // Function CharacterAbilityPreview.CharacterAbilityPreview_C.SetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function CharacterAbilityPreview.CharacterAbilityPreview_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__LargeButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function CharacterAbilityPreview.CharacterAbilityPreview_C.BndEvt__LargeButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function CharacterAbilityPreview.CharacterAbilityPreview_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CharacterAbilityPreview(int32_t EntryPoint); // Function CharacterAbilityPreview.CharacterAbilityPreview_C.ExecuteUbergraph_CharacterAbilityPreview // (Final|UbergraphFunction) // @ game+0x1b42740
	void Clicked__DelegateSignature(); // Function CharacterAbilityPreview.CharacterAbilityPreview_C.Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

