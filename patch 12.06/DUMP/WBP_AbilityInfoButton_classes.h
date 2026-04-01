// WidgetBlueprintGeneratedClass WBP_AbilityInfoButton.WBP_AbilityInfoButton_C
// Size: 0x418 (Inherited: 0x3e0)
struct UWBP_AbilityInfoButton_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UActionNameIconPrompt_C* ActionNameIconPrompt; // 0x3e8(0x08)
	struct UScaleBox* ScaleBox_1; // 0x3f0(0x08)
	struct UWBP_CharacterAbilityIcon_C* WBP_CharacterAbilityIcon; // 0x3f8(0x08)
	enum class Enum_CharacterPreviewType PreviewType; // 0x400(0x01)
	enum class ECharacterAbilitySlot AbilitySlot; // 0x401(0x01)
	char pad_402[0x6]; // 0x402(0x06)
	struct FMulticastInlineDelegate OnButtonBaseClickChanged; // 0x408(0x10)

	void SetIconPromptText(struct FText Text); // Function WBP_AbilityInfoButton.WBP_AbilityInfoButton_C.SetIconPromptText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_AbilityInfoButton.WBP_AbilityInfoButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_AbilityInfoButton.WBP_AbilityInfoButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_AbilityInfoButton_WBP_CharacterAbilityIcon_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_AbilityInfoButton.WBP_AbilityInfoButton_C.BndEvt__WBP_AbilityInfoButton_WBP_CharacterAbilityIcon_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_AbilityInfoButton_WBP_CharacterAbilityIcon_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_AbilityInfoButton.WBP_AbilityInfoButton_C.BndEvt__WBP_AbilityInfoButton_WBP_CharacterAbilityIcon_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void SetEntryData(struct FWildcard Data); // Function WBP_AbilityInfoButton.WBP_AbilityInfoButton_C.SetEntryData // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_AbilityInfoButton_WBP_CharacterAbilityIcon_K2Node_ComponentBoundEvent_2_CommonSelectedStateChangedBase__DelegateSignature(struct UCommonButtonBase* Button, bool Selected); // Function WBP_AbilityInfoButton.WBP_AbilityInfoButton_C.BndEvt__WBP_AbilityInfoButton_WBP_CharacterAbilityIcon_K2Node_ComponentBoundEvent_2_CommonSelectedStateChangedBase__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_AbilityInfoButton(int32_t EntryPoint); // Function WBP_AbilityInfoButton.WBP_AbilityInfoButton_C.ExecuteUbergraph_WBP_AbilityInfoButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnButtonBaseClickChanged__DelegateSignature(struct UWBP_AbilityInfoButton_C* Button); // Function WBP_AbilityInfoButton.WBP_AbilityInfoButton_C.OnButtonBaseClickChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

