// WidgetBlueprintGeneratedClass StringTagsSettingsWidget.StringTagsSettingsWidget_C
// Size: 0x3d0 (Inherited: 0x368)
struct UStringTagsSettingsWidget_C : UStringTagsSettingsWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct UTextBlock* AddErrorText; // 0x370(0x08)
	struct UImage* Background; // 0x378(0x08)
	struct UTextBlock* DisplayNameText; // 0x380(0x08)
	struct UTextBlock* MaxListSizeErrorText; // 0x388(0x08)
	struct UWrapBoxList* MutedWordsList; // 0x390(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x398(0x08)
	struct UEditableTextBox* StringTagEntrybox; // 0x3a0(0x08)
	struct UWidgetSwitcher* TextEntrySwitcher; // 0x3a8(0x08)
	struct FText DisplayTooltip; // 0x3b0(0x18)
	struct UAkAudioEvent* Aud_TextOverflow; // 0x3c8(0x08)

	void SetSettingModel(struct TScriptInterface<IAresStringListSettingModel> NewValue); // Function StringTagsSettingsWidget.StringTagsSettingsWidget_C.SetSettingModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetListModel(struct TScriptInterface<IOrderedListModel> ListModel); // Function StringTagsSettingsWidget.StringTagsSettingsWidget_C.SetListModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShowTagExistsError(bool ShowError); // Function StringTagsSettingsWidget.StringTagsSettingsWidget_C.ShowTagExistsError // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetStringTagEntryboxText(struct FText Text); // Function StringTagsSettingsWidget.StringTagsSettingsWidget_C.SetStringTagEntryboxText // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSettingDisplayNameText(struct FText DisplayNameText); // Function StringTagsSettingsWidget.StringTagsSettingsWidget_C.SetSettingDisplayNameText // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMaxListSizeErrorText(struct FText MaxListErrorText); // Function StringTagsSettingsWidget.StringTagsSettingsWidget_C.SetMaxListSizeErrorText // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHasReachedMaxListSize(bool HasExceededMaxListSize); // Function StringTagsSettingsWidget.StringTagsSettingsWidget_C.SetHasReachedMaxListSize // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetStaticText(); // Function StringTagsSettingsWidget.StringTagsSettingsWidget_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ValueBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function StringTagsSettingsWidget.StringTagsSettingsWidget_C.BndEvt__ValueBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__StringTagEntrybox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Function StringTagsSettingsWidget.StringTagsSettingsWidget_C.BndEvt__StringTagEntrybox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function StringTagsSettingsWidget.StringTagsSettingsWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function StringTagsSettingsWidget.StringTagsSettingsWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__MutedWordsList_K2Node_ComponentBoundEvent_3_EntryActivatedMulticastDelegate__DelegateSignature(struct UOrderedListSimpleWidgetContainerBase* Source, struct FListItemDisplayEntryActivatedEventData EventData); // Function StringTagsSettingsWidget.StringTagsSettingsWidget_C.BndEvt__MutedWordsList_K2Node_ComponentBoundEvent_3_EntryActivatedMulticastDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__StringTagEntrybox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxOverflowedEvent__DelegateSignature(); // Function StringTagsSettingsWidget.StringTagsSettingsWidget_C.BndEvt__StringTagEntrybox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxOverflowedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_StringTagsSettingsWidget(int32_t EntryPoint); // Function StringTagsSettingsWidget.StringTagsSettingsWidget_C.ExecuteUbergraph_StringTagsSettingsWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

