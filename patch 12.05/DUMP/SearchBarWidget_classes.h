// WidgetBlueprintGeneratedClass SearchBarWidget.SearchBarWidget_C
// Size: 0x350 (Inherited: 0x318)
struct USearchBarWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USearchBar_C* SearchBar; // 0x320(0x08)
	struct FText SearchHintText; // 0x328(0x18)
	struct TArray<struct TScriptInterface<ISearchableEntryInterface_C>> SearchEntries; // 0x340(0x10)

	void IsSearchActive(bool& bIsSearching); // Function SearchBarWidget.SearchBarWidget_C.IsSearchActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void ClearSearch(); // Function SearchBarWidget.SearchBarWidget_C.ClearSearch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(struct TArray<struct TScriptInterface<ISearchableEntryInterface_C>>& SearchEntries); // Function SearchBarWidget.SearchBarWidget_C.Initialize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SearchBarWidget_SearchBar_K2Node_ComponentBoundEvent_2_OnSearchTextChanged__DelegateSignature(struct FText SearchText); // Function SearchBarWidget.SearchBarWidget_C.BndEvt__SearchBarWidget_SearchBar_K2Node_ComponentBoundEvent_2_OnSearchTextChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SearchBarWidget(int32_t EntryPoint); // Function SearchBarWidget.SearchBarWidget_C.ExecuteUbergraph_SearchBarWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

