// BlueprintGeneratedClass VM_ContentItemsList.VM_ContentItemsList_C
// Size: 0x138 (Inherited: 0x130)
struct UVM_ContentItemsList_C : UContentItemListViewmodel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x130(0x08)

	void GenerateContentListRange(int32_t First Index, int32_t Last Index, struct TArray<struct FWildcard>& Items); // Function VM_ContentItemsList.VM_ContentItemsList_C.GenerateContentListRange // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GenerateContentList(struct TArray<struct FWildcard>& NewParam); // Function VM_ContentItemsList.VM_ContentItemsList_C.GenerateContentList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	bool KeyMatchFunction(struct FWildcard& Item, struct FWildcard& Key); // Function VM_ContentItemsList.VM_ContentItemsList_C.KeyMatchFunction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_ContentItemsList.VM_ContentItemsList_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void AddFilterProvider(struct TScriptInterface<IFilterProvider>& FilterProvider); // Function VM_ContentItemsList.VM_ContentItemsList_C.AddFilterProvider // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddSortProvider(struct TScriptInterface<ISortProvider>& SortProvider); // Function VM_ContentItemsList.VM_ContentItemsList_C.AddSortProvider // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClearFilterProviders(); // Function VM_ContentItemsList.VM_ContentItemsList_C.ClearFilterProviders // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ClearSortProviders(); // Function VM_ContentItemsList.VM_ContentItemsList_C.ClearSortProviders // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_ContentItemsList(int32_t EntryPoint); // Function VM_ContentItemsList.VM_ContentItemsList_C.ExecuteUbergraph_VM_ContentItemsList // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

