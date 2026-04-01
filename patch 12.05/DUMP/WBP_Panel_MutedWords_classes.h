// WidgetBlueprintGeneratedClass WBP_Panel_MutedWords.WBP_Panel_MutedWords_C
// Size: 0x3f8 (Inherited: 0x368)
struct UWBP_Panel_MutedWords_C : UStringTagsSettingsWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct UAresCommonText* AddErrorText; // 0x370(0x08)
	struct UImage* AlertIcon_Img; // 0x378(0x08)
	struct UWBP_Panel_SettingTooltipAnchor_C* AresTooltipWidget; // 0x380(0x08)
	struct UImage* Background; // 0x388(0x08)
	struct UAresCommonText* DisplayNameText; // 0x390(0x08)
	struct UHorizontalBox* ErrorState; // 0x398(0x08)
	struct UTextBlock* MaxListSizeErrorText; // 0x3a0(0x08)
	struct UWrapBoxList* MutedWordsList; // 0x3a8(0x08)
	struct UEditableTextBox* StringTagEntrybox; // 0x3b0(0x08)
	struct UWidgetSwitcher* TextEntrySwitcher; // 0x3b8(0x08)
	struct FText DisplayTooltip; // 0x3c0(0x18)
	struct UAkAudioEvent* Aud_TextOverflow; // 0x3d8(0x08)
	struct FName WarningIconParamaterName; // 0x3e0(0x0c)
	enum class EWarningAlertType Warning Type; // 0x3ec(0x01)
	char pad_3ED[0x3]; // 0x3ed(0x03)
	struct UMaterialInstance* WarningIconMID; // 0x3f0(0x08)

	void SetAlertType(enum class EWarningAlertType WarningType); // Function WBP_Panel_MutedWords.WBP_Panel_MutedWords_C.SetAlertType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSettingModel(struct TScriptInterface<IAresStringListSettingModel> NewValue); // Function WBP_Panel_MutedWords.WBP_Panel_MutedWords_C.SetSettingModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetListModel(struct TScriptInterface<IOrderedListModel> ListModel); // Function WBP_Panel_MutedWords.WBP_Panel_MutedWords_C.SetListModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowTagExistsError(bool ShowError); // Function WBP_Panel_MutedWords.WBP_Panel_MutedWords_C.ShowTagExistsError // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetStringTagEntryboxText(struct FText Text); // Function WBP_Panel_MutedWords.WBP_Panel_MutedWords_C.SetStringTagEntryboxText // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSettingDisplayNameText(struct FText DisplayNameText); // Function WBP_Panel_MutedWords.WBP_Panel_MutedWords_C.SetSettingDisplayNameText // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetMaxListSizeErrorText(struct FText MaxListErrorText); // Function WBP_Panel_MutedWords.WBP_Panel_MutedWords_C.SetMaxListSizeErrorText // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHasReachedMaxListSize(bool HasExceededMaxListSize); // Function WBP_Panel_MutedWords.WBP_Panel_MutedWords_C.SetHasReachedMaxListSize // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetStaticText(); // Function WBP_Panel_MutedWords.WBP_Panel_MutedWords_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ValueBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function WBP_Panel_MutedWords.WBP_Panel_MutedWords_C.BndEvt__ValueBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__StringTagEntrybox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Function WBP_Panel_MutedWords.WBP_Panel_MutedWords_C.BndEvt__StringTagEntrybox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__MutedWordsList_K2Node_ComponentBoundEvent_3_EntryActivatedMulticastDelegate__DelegateSignature(struct UOrderedListSimpleWidgetContainerBase* Source, struct FListItemDisplayEntryActivatedEventData EventData); // Function WBP_Panel_MutedWords.WBP_Panel_MutedWords_C.BndEvt__MutedWordsList_K2Node_ComponentBoundEvent_3_EntryActivatedMulticastDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__StringTagEntrybox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxOverflowedEvent__DelegateSignature(); // Function WBP_Panel_MutedWords.WBP_Panel_MutedWords_C.BndEvt__StringTagEntrybox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxOverflowedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_MutedWords.WBP_Panel_MutedWords_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_MutedWords(int32_t EntryPoint); // Function WBP_Panel_MutedWords.WBP_Panel_MutedWords_C.ExecuteUbergraph_WBP_Panel_MutedWords // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

