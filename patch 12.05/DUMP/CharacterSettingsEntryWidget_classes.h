// WidgetBlueprintGeneratedClass CharacterSettingsEntryWidget.CharacterSettingsEntryWidget_C
// Size: 0x3a8 (Inherited: 0x318)
struct UCharacterSettingsEntryWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* CharacterName; // 0x320(0x08)
	struct USizeBox* CharacterPortraitSizeBox; // 0x328(0x08)
	struct USizeBox* ConflictSizeBox; // 0x330(0x08)
	struct USizeBox* EditedSizeBox; // 0x338(0x08)
	struct UButton* EntryButton; // 0x340(0x08)
	struct UOverlay* Highlight; // 0x348(0x08)
	struct UImage* HoverImage; // 0x350(0x08)
	struct UImage* Image_147; // 0x358(0x08)
	struct UKeybindCategoryErrorIndicatorWidget_C* InterfaceControlsCategeryErrorIcon; // 0x360(0x08)
	struct UImage* Portrait_2; // 0x368(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x370(0x08)
	struct USizeBox* ValorantIconSizeBox; // 0x378(0x08)
	struct UAkAudioEvent* AUD_Hover; // 0x380(0x08)
	struct UAkAudioEvent* AUD_Click; // 0x388(0x08)
	struct UCharacterHandle* CharacterHandle; // 0x390(0x08)
	struct FMulticastInlineDelegate OnEntryClicked; // 0x398(0x10)

	void GetSearchResult(struct FText Query, bool& bIsHit); // Function CharacterSettingsEntryWidget.CharacterSettingsEntryWidget_C.GetSearchResult // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void GetCharacterName(struct FName& CharacterName); // Function CharacterSettingsEntryWidget.CharacterSettingsEntryWidget_C.GetCharacterName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void ShowHasConflicts(bool bHasConflicts); // Function CharacterSettingsEntryWidget.CharacterSettingsEntryWidget_C.ShowHasConflicts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowIsEdited(bool bIsEdited); // Function CharacterSettingsEntryWidget.CharacterSettingsEntryWidget_C.ShowIsEdited // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHighlighted(bool bIsHighlighted); // Function CharacterSettingsEntryWidget.CharacterSettingsEntryWidget_C.SetHighlighted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateCharacterName(); // Function CharacterSettingsEntryWidget.CharacterSettingsEntryWidget_C.UpdateCharacterName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetCharacterHandle(struct UCharacterHandle*& CharacterHandle); // Function CharacterSettingsEntryWidget.CharacterSettingsEntryWidget_C.GetCharacterHandle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void UpdatePortrait(); // Function CharacterSettingsEntryWidget.CharacterSettingsEntryWidget_C.UpdatePortrait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(struct UCharacterHandle* CharacterHandle); // Function CharacterSettingsEntryWidget.CharacterSettingsEntryWidget_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function CharacterSettingsEntryWidget.CharacterSettingsEntryWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function CharacterSettingsEntryWidget.CharacterSettingsEntryWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function CharacterSettingsEntryWidget.CharacterSettingsEntryWidget_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void UpdateEntryBySearchResult(bool bIsHit); // Function CharacterSettingsEntryWidget.CharacterSettingsEntryWidget_C.UpdateEntryBySearchResult // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnClicked(); // Function CharacterSettingsEntryWidget.CharacterSettingsEntryWidget_C.OnClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSearchCleared(); // Function CharacterSettingsEntryWidget.CharacterSettingsEntryWidget_C.OnSearchCleared // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CharacterSettingsEntryWidget(int32_t EntryPoint); // Function CharacterSettingsEntryWidget.CharacterSettingsEntryWidget_C.ExecuteUbergraph_CharacterSettingsEntryWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnEntryClicked__DelegateSignature(struct UCharacterSettingsEntryWidget_C* CharacterEntry); // Function CharacterSettingsEntryWidget.CharacterSettingsEntryWidget_C.OnEntryClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

