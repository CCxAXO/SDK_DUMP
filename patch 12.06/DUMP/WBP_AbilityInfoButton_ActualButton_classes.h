// WidgetBlueprintGeneratedClass WBP_AbilityInfoButton_ActualButton.WBP_AbilityInfoButton_ActualButton_C
// Size: 0x1b09 (Inherited: 0x1ae0)
struct UWBP_AbilityInfoButton_ActualButton_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	enum class Enum_CharacterPreviewType PreviewType; // 0x1ae8(0x01)
	enum class ECharacterAbilitySlot AbilitySlot; // 0x1ae9(0x01)
	char pad_1AEA[0x6]; // 0x1aea(0x06)
	struct FMulticastInlineDelegate OnButtonBaseClickChanged; // 0x1af0(0x10)
	struct UCommonButtonStyle* StyleClass; // 0x1b00(0x08)
	bool InternalIsHovered; // 0x1b08(0x01)

	void GetButtonBorder(struct UBorder*& ButtonBorder); // Function WBP_AbilityInfoButton_ActualButton.WBP_AbilityInfoButton_ActualButton_C.GetButtonBorder // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetActionNamePrompt(struct UActionNameIconPrompt_C*& ActionNamePrompt); // Function WBP_AbilityInfoButton_ActualButton.WBP_AbilityInfoButton_ActualButton_C.GetActionNamePrompt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Refresh Button State(); // Function WBP_AbilityInfoButton_ActualButton.WBP_AbilityInfoButton_ActualButton_C.Refresh Button State // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIconPromptText(struct FText Text); // Function WBP_AbilityInfoButton_ActualButton.WBP_AbilityInfoButton_ActualButton_C.SetIconPromptText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_AbilityInfoButton_ActualButton.WBP_AbilityInfoButton_ActualButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_AbilityInfoButton_ActualButton.WBP_AbilityInfoButton_ActualButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SetEntryData(struct FWildcard Data); // Function WBP_AbilityInfoButton_ActualButton.WBP_AbilityInfoButton_ActualButton_C.SetEntryData // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionSelected(); // Function WBP_AbilityInfoButton_ActualButton.WBP_AbilityInfoButton_ActualButton_C.BP_OnTransitionSelected // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void HandleOnButtonBaseSelectedChanged(struct UCommonButtonBase* Button, bool Selected); // Function WBP_AbilityInfoButton_ActualButton.WBP_AbilityInfoButton_ActualButton_C.HandleOnButtonBaseSelectedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleOnButtonBaseClicked(struct UCommonButtonBase* Button); // Function WBP_AbilityInfoButton_ActualButton.WBP_AbilityInfoButton_ActualButton_C.HandleOnButtonBaseClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleOnButtonBaseHovered(struct UCommonButtonBase* Button); // Function WBP_AbilityInfoButton_ActualButton.WBP_AbilityInfoButton_ActualButton_C.HandleOnButtonBaseHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionDeselected(); // Function WBP_AbilityInfoButton_ActualButton.WBP_AbilityInfoButton_ActualButton_C.BP_OnTransitionDeselected // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionHovered(); // Function WBP_AbilityInfoButton_ActualButton.WBP_AbilityInfoButton_ActualButton_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionUnHovered(); // Function WBP_AbilityInfoButton_ActualButton.WBP_AbilityInfoButton_ActualButton_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_AbilityInfoButton_ActualButton(int32_t EntryPoint); // Function WBP_AbilityInfoButton_ActualButton.WBP_AbilityInfoButton_ActualButton_C.ExecuteUbergraph_WBP_AbilityInfoButton_ActualButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnButtonBaseClickChanged__DelegateSignature(struct UWBP_AbilityInfoButton_ActualButton_C* Button); // Function WBP_AbilityInfoButton_ActualButton.WBP_AbilityInfoButton_ActualButton_C.OnButtonBaseClickChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

