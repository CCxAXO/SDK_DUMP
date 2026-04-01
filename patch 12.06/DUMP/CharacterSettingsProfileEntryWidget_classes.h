// WidgetBlueprintGeneratedClass CharacterSettingsProfileEntryWidget.CharacterSettingsProfileEntryWidget_C
// Size: 0x438 (Inherited: 0x318)
struct UCharacterSettingsProfileEntryWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USizeBox* AddSizeBox; // 0x320(0x08)
	struct UCharacterSettingsEntryWidget_C* CharacterSettingsEntryWidget; // 0x328(0x08)
	struct UButton* DeleteButton; // 0x330(0x08)
	struct USizeBox* DeleteSizeBox; // 0x338(0x08)
	struct UImage* Image; // 0x340(0x08)
	struct UImage* Image_182; // 0x348(0x08)
	struct FMulticastInlineDelegate OnDelete; // 0x350(0x10)
	enum class ESlateVisibility ProfileVisibility; // 0x360(0x01)
	bool bIsCreated; // 0x361(0x01)
	char pad_362[0x6]; // 0x362(0x06)
	struct FMulticastInlineDelegate RebroadcastOnSearch; // 0x368(0x10)
	struct FMulticastInlineDelegate RebroadcastOnSearchCleared; // 0x378(0x10)
	bool bIsInactive; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct FText ConflictTooltip; // 0x390(0x18)
	struct FText DeleteTooltip; // 0x3a8(0x18)
	bool ConfirmDelete; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct FText ConfirmDeleteTitle; // 0x3c8(0x18)
	struct FText ConfirmDeleteMessage; // 0x3e0(0x18)
	struct FMulticastInlineDelegate OnCharacterEntryClicked; // 0x3f8(0x10)
	struct FText AddTooltip; // 0x408(0x18)
	struct FText SelectTooltip; // 0x420(0x18)

	void GetSearchResult(struct FText Query, bool& bIsHit); // Function CharacterSettingsProfileEntryWidget.CharacterSettingsProfileEntryWidget_C.GetSearchResult // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void CreateTooltips(); // Function CharacterSettingsProfileEntryWidget.CharacterSettingsProfileEntryWidget_C.CreateTooltips // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetInactive(bool bIsInactive); // Function CharacterSettingsProfileEntryWidget.CharacterSettingsProfileEntryWidget_C.SetInactive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsCreated(bool bIsAdded); // Function CharacterSettingsProfileEntryWidget.CharacterSettingsProfileEntryWidget_C.SetIsCreated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetVisibilityForNonexistingProfiles(enum class ESlateVisibility InProfileVisibility); // Function CharacterSettingsProfileEntryWidget.CharacterSettingsProfileEntryWidget_C.SetVisibilityForNonexistingProfiles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(struct UCharacterHandle* CharacterHandle); // Function CharacterSettingsProfileEntryWidget.CharacterSettingsProfileEntryWidget_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateEntryBySearchResult(bool bIsHit); // Function CharacterSettingsProfileEntryWidget.CharacterSettingsProfileEntryWidget_C.UpdateEntryBySearchResult // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__DeleteButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature(); // Function CharacterSettingsProfileEntryWidget.CharacterSettingsProfileEntryWidget_C.BndEvt__DeleteButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnSearchCleared(); // Function CharacterSettingsProfileEntryWidget.CharacterSettingsProfileEntryWidget_C.OnSearchCleared // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnConfirmDelete(); // Function CharacterSettingsProfileEntryWidget.CharacterSettingsProfileEntryWidget_C.OnConfirmDelete // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RebroadcastOnEntryClicked(struct UCharacterSettingsEntryWidget_C* CharacterEntry); // Function CharacterSettingsProfileEntryWidget.CharacterSettingsProfileEntryWidget_C.RebroadcastOnEntryClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CharacterSettingsProfileEntryWidget(int32_t EntryPoint); // Function CharacterSettingsProfileEntryWidget.CharacterSettingsProfileEntryWidget_C.ExecuteUbergraph_CharacterSettingsProfileEntryWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnCharacterEntryClicked__DelegateSignature(struct UCharacterSettingsProfileEntryWidget_C* ClickedCharacter); // Function CharacterSettingsProfileEntryWidget.CharacterSettingsProfileEntryWidget_C.OnCharacterEntryClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RebroadcastOnSearchCleared__DelegateSignature(struct UCharacterSettingsProfileEntryWidget_C* Profile); // Function CharacterSettingsProfileEntryWidget.CharacterSettingsProfileEntryWidget_C.RebroadcastOnSearchCleared__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RebroadcastOnSearch__DelegateSignature(bool bIsHit, struct UCharacterSettingsProfileEntryWidget_C* HitProfile); // Function CharacterSettingsProfileEntryWidget.CharacterSettingsProfileEntryWidget_C.RebroadcastOnSearch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnDelete__DelegateSignature(struct UCharacterSettingsProfileEntryWidget_C* DeletedProfile); // Function CharacterSettingsProfileEntryWidget.CharacterSettingsProfileEntryWidget_C.OnDelete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

