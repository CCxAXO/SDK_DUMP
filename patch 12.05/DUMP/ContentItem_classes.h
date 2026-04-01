// WidgetBlueprintGeneratedClass ContentItem.ContentItem_C
// Size: 0x368 (Inherited: 0x318)
struct UContentItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BG; // 0x320(0x08)
	struct UButton* ItemButton; // 0x328(0x08)
	struct UOverlay* Placeholder; // 0x330(0x08)
	struct UWidgetSwitcher* PlaceholderSwitcher; // 0x338(0x08)
	struct USquareRewardThumbnail_C* SquareRewardThumbnail; // 0x340(0x08)
	struct UUniversalCarouselBG_C* UniversalCarouselBG; // 0x348(0x08)
	bool HandleIsEquipped; // 0x350(0x01)
	bool HandleIsOwned; // 0x351(0x01)
	char pad_352[0x6]; // 0x352(0x06)
	struct UAkAudioEvent* HoverSound; // 0x358(0x08)
	struct UContentItemObject_C* ContentItemObject; // 0x360(0x08)

	struct FString GetListItemTelemetryTarget(); // Function ContentItem.ContentItem_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BP_OnEntryReleased(); // Function ContentItem.ContentItem_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function ContentItem.ContentItem_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function ContentItem.ContentItem_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function ContentItem.ContentItem_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function ContentItem.ContentItem_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleIsEquippedChanged(bool IsEquipped); // Function ContentItem.ContentItem_C.HandleIsEquippedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsOwnedChanged(bool IsOwned); // Function ContentItem.ContentItem_C.HandleIsOwnedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsLoyaltyContentChanged(bool IsLoyaltyContent); // Function ContentItem.ContentItem_C.HandleIsLoyaltyContentChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsFavoritedChanged(bool IsFavorited); // Function ContentItem.ContentItem_C.HandleIsFavoritedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function ContentItem.ContentItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature(); // Function ContentItem.ContentItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature(); // Function ContentItem.ContentItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void SetListItemObject(struct UObject* ListItemObject); // Function ContentItem.ContentItem_C.SetListItemObject // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ChangeSelection(bool IsSelected); // Function ContentItem.ContentItem_C.ChangeSelection // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ContentItem.ContentItem_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function ContentItem.ContentItem_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ContentItem(int32_t EntryPoint); // Function ContentItem.ContentItem_C.ExecuteUbergraph_ContentItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

