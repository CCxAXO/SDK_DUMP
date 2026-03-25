// WidgetBlueprintGeneratedClass AutocompleteSuggestionBasic.AutocompleteSuggestionBasic_C
// Size: 0x378 (Inherited: 0x348)
struct UAutocompleteSuggestionBasic_C : UAutocompleteSuggestionBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UImage* BackgroundColor; // 0x350(0x08)
	struct UButton* Button_1; // 0x358(0x08)
	struct UTextBlock* SuggestionText; // 0x360(0x08)
	struct FMulticastInlineDelegate OnSuggestionHovered; // 0x368(0x10)

	void Click(); // Function AutocompleteSuggestionBasic.AutocompleteSuggestionBasic_C.Click // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function AutocompleteSuggestionBasic.AutocompleteSuggestionBasic_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Hovered(); // Function AutocompleteSuggestionBasic.AutocompleteSuggestionBasic_C.Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHighlighted(bool Highlighted); // Function AutocompleteSuggestionBasic.AutocompleteSuggestionBasic_C.SetHighlighted // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AutocompleteSuggestionBasic(int32_t EntryPoint); // Function AutocompleteSuggestionBasic.AutocompleteSuggestionBasic_C.ExecuteUbergraph_AutocompleteSuggestionBasic // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnSuggestionHovered__DelegateSignature(struct FString Suggestion); // Function AutocompleteSuggestionBasic.AutocompleteSuggestionBasic_C.OnSuggestionHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

