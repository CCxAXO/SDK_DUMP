// WidgetBlueprintGeneratedClass PlayScreenCustomPartyMemberListingDisplayEntry.PlayScreenCustomPartyMemberListingDisplayEntry_C
// Size: 0x390 (Inherited: 0x358)
struct UPlayScreenCustomPartyMemberListingDisplayEntry_C : UListItemDisplayEntryBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UImage* DragBorder; // 0x360(0x08)
	struct UPlayScreenCustomPartyMemberListing_C* PlayScreenCustomPartyMemberListing; // 0x368(0x08)
	struct UPartyPlayerModel* PlayerModel; // 0x370(0x08)
	struct UCustomGameUIFacade_C* PartyFacade; // 0x378(0x08)
	struct FMulticastInlineDelegate ListDragBorderVisibilityChanged; // 0x380(0x10)

	void Depopulate Drag Info(struct UObject* Object); // Function PlayScreenCustomPartyMemberListingDisplayEntry.PlayScreenCustomPartyMemberListingDisplayEntry_C.Depopulate Drag Info // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PopulateDragInfo(struct UDragDropOperation* Operation); // Function PlayScreenCustomPartyMemberListingDisplayEntry.PlayScreenCustomPartyMemberListingDisplayEntry_C.PopulateDragInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function PlayScreenCustomPartyMemberListingDisplayEntry.PlayScreenCustomPartyMemberListingDisplayEntry_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTeam(enum class ECustomGameTeam NewValue); // Function PlayScreenCustomPartyMemberListingDisplayEntry.PlayScreenCustomPartyMemberListingDisplayEntry_C.SetTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBackgroundColor(struct FLinearColor NewValue); // Function PlayScreenCustomPartyMemberListingDisplayEntry.PlayScreenCustomPartyMemberListingDisplayEntry_C.SetBackgroundColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetFacade(struct UCustomGameUIFacade_C* NewValue); // Function PlayScreenCustomPartyMemberListingDisplayEntry.PlayScreenCustomPartyMemberListingDisplayEntry_C.SetFacade // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPlayerModel(struct UPartyPlayerModel* OtherModel); // Function PlayScreenCustomPartyMemberListingDisplayEntry.PlayScreenCustomPartyMemberListingDisplayEntry_C.SetPlayerModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PropagatePlayerAndListIndex(); // Function PlayScreenCustomPartyMemberListingDisplayEntry.PlayScreenCustomPartyMemberListingDisplayEntry_C.PropagatePlayerAndListIndex // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function PlayScreenCustomPartyMemberListingDisplayEntry.PlayScreenCustomPartyMemberListingDisplayEntry_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetListItemData(struct FWildcard& NewValue); // Function PlayScreenCustomPartyMemberListingDisplayEntry.PlayScreenCustomPartyMemberListingDisplayEntry_C.SetListItemData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnListIndexChanged(int32_t OldListIndex, int32_t NewListIndex); // Function PlayScreenCustomPartyMemberListingDisplayEntry.PlayScreenCustomPartyMemberListingDisplayEntry_C.OnListIndexChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void SetSharedListItemData(struct FWildcard& NewValue); // Function PlayScreenCustomPartyMemberListingDisplayEntry.PlayScreenCustomPartyMemberListingDisplayEntry_C.SetSharedListItemData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function PlayScreenCustomPartyMemberListingDisplayEntry.PlayScreenCustomPartyMemberListingDisplayEntry_C.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function PlayScreenCustomPartyMemberListingDisplayEntry.PlayScreenCustomPartyMemberListingDisplayEntry_C.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Function PlayScreenCustomPartyMemberListingDisplayEntry.PlayScreenCustomPartyMemberListingDisplayEntry_C.OnDragCancelled // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PlayScreenCustomPartyMemberListingDisplayEntry(int32_t EntryPoint); // Function PlayScreenCustomPartyMemberListingDisplayEntry.PlayScreenCustomPartyMemberListingDisplayEntry_C.ExecuteUbergraph_PlayScreenCustomPartyMemberListingDisplayEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void ListDragBorderVisibilityChanged__DelegateSignature(enum class ESlateVisibility Visibility); // Function PlayScreenCustomPartyMemberListingDisplayEntry.PlayScreenCustomPartyMemberListingDisplayEntry_C.ListDragBorderVisibilityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

