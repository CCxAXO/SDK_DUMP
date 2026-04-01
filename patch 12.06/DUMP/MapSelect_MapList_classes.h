// WidgetBlueprintGeneratedClass MapSelect_MapList.MapSelect_MapList_C
// Size: 0x350 (Inherited: 0x318)
struct UMapSelect_MapList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* InteractableAnim; // 0x320(0x08)
	struct UWrapBox* WB_MapSelectionWrap; // 0x328(0x08)
	int32_t DebugItemCount; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct TArray<None> Maps; // 0x338(0x10)
	struct UMapSelect_MapListEntry_C* CurrentlySelectedButton; // 0x348(0x08)

	void IsMapBanned(struct UMapDataAsset* Map, bool& bBanned); // Function MapSelect_MapList.MapSelect_MapList_C.IsMapBanned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void ClearVotes(); // Function MapSelect_MapList.MapSelect_MapList_C.ClearVotes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddVote(struct FGuid MapGuid); // Function MapSelect_MapList.MapSelect_MapList_C.AddVote // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SelectMap(struct UMapDataAsset* InMap); // Function MapSelect_MapList.MapSelect_MapList_C.SelectMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSelectedButton(struct UMapSelect_MapListEntry_C* Button); // Function MapSelect_MapList.MapSelect_MapList_C.SetSelectedButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetInteractable(bool bInteractable); // Function MapSelect_MapList.MapSelect_MapList_C.SetInteractable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetListEntryForMap(struct FGuid MapGuid, struct UMapSelect_MapListEntry_C*& Entry); // Function MapSelect_MapList.MapSelect_MapList_C.GetListEntryForMap // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MapSortPredicate(struct UObject* Left, struct UObject* Right, bool& bIsLeftLessThanRight); // Function MapSelect_MapList.MapSelect_MapList_C.MapSortPredicate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SortMaps(); // Function MapSelect_MapList.MapSelect_MapList_C.SortMaps // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateListEntries(struct TArray<struct UMapSelect_MapListEntry_C*>& ListEntries); // Function MapSelect_MapList.MapSelect_MapList_C.CreateListEntries // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateListEntry(struct UMapDataAsset* Map, struct UMapSelect_MapListEntry_C*& Item); // Function MapSelect_MapList.MapSelect_MapList_C.CreateListEntry // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(struct TArray<struct UMapDataAsset*>& Maps, struct TArray<struct UMapSelect_MapListEntry_C*>& ListEntries); // Function MapSelect_MapList.MapSelect_MapList_C.Initialize // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BanMap(struct UMapDataAsset* Map); // Function MapSelect_MapList.MapSelect_MapList_C.BanMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddMap(struct UMapDataAsset* MapData); // Function MapSelect_MapList.MapSelect_MapList_C.AddMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function MapSelect_MapList.MapSelect_MapList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function MapSelect_MapList.MapSelect_MapList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MapSelect_MapList(int32_t EntryPoint); // Function MapSelect_MapList.MapSelect_MapList_C.ExecuteUbergraph_MapSelect_MapList // (Final|UbergraphFunction) // @ game+0x1b42740
};

