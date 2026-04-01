// BlueprintGeneratedClass AutocompleteProviderNotification.AutocompleteProviderNotification_C
// Size: 0x30 (Inherited: 0x30)
struct UAutocompleteProviderNotification_C : UObject {

	struct UAutocompleteSuggestionBase* GetSuggestionWidgetClass(); // Function AutocompleteProviderNotification.AutocompleteProviderNotification_C.GetSuggestionWidgetClass // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	bool PerformsAutoFill(); // Function AutocompleteProviderNotification.AutocompleteProviderNotification_C.PerformsAutoFill // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	struct TArray<struct FString> GetAllSuggestions(struct UAresClientGameInstance* AresClientGame); // Function AutocompleteProviderNotification.AutocompleteProviderNotification_C.GetAllSuggestions // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	bool IsRelevant(struct TArray<struct FString>& Tokens); // Function AutocompleteProviderNotification.AutocompleteProviderNotification_C.IsRelevant // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
};

