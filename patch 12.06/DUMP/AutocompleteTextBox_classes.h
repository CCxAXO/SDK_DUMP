// WidgetBlueprintGeneratedClass AutocompleteTextBox.AutocompleteTextBox_C
// Size: 0x3f8 (Inherited: 0x378)
struct UAutocompleteTextBox_C : UAresAutocompleteTextBox {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UInvalidationBox* InvalidationBox_AutocompleteTextBox; // 0x380(0x08)
	struct UMenuAnchor* SuggestionsAnchor; // 0x388(0x08)
	struct UEditableTextBox* TextBox; // 0x390(0x08)
	int32_t CurrentSuggestionIndex; // 0x398(0x04)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct UAutocompleteSuggestions_C* SuggestionContainer; // 0x3a0(0x08)
	struct FKey LastKeyDown; // 0x3a8(0x20)
	struct FString PreviousInput; // 0x3c8(0x10)
	double VerticalPadding; // 0x3d8(0x08)
	bool OnTabChoice; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct FMulticastInlineDelegate OnTextChange; // 0x3e8(0x10)

	void GetPaddedText(struct FText& Result); // Function AutocompleteTextBox.AutocompleteTextBox_C.GetPaddedText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateInlineSuggestion(); // Function AutocompleteTextBox.AutocompleteTextBox_C.UpdateInlineSuggestion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateSuggestionWidgets(); // Function AutocompleteTextBox.AutocompleteTextBox_C.UpdateSuggestionWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSuggestionClicked(struct FString Suggestion); // Function AutocompleteTextBox.AutocompleteTextBox_C.OnSuggestionClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTextChanged(struct FText New Text); // Function AutocompleteTextBox.AutocompleteTextBox_C.OnTextChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CycleSuggestions(); // Function AutocompleteTextBox.AutocompleteTextBox_C.CycleSuggestions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* OnGetMenuContent_1(); // Function AutocompleteTextBox.AutocompleteTextBox_C.OnGetMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function AutocompleteTextBox.AutocompleteTextBox_C.OnPreviewKeyDown // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function AutocompleteTextBox.AutocompleteTextBox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnRawTextChanged(struct FText& Text); // Function AutocompleteTextBox.AutocompleteTextBox_C.OnRawTextChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function AutocompleteTextBox.AutocompleteTextBox_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function AutocompleteTextBox.AutocompleteTextBox_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AutocompleteTextBox(int32_t EntryPoint); // Function AutocompleteTextBox.AutocompleteTextBox_C.ExecuteUbergraph_AutocompleteTextBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnTextChange__DelegateSignature(struct FText Text); // Function AutocompleteTextBox.AutocompleteTextBox_C.OnTextChange__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

