// WidgetBlueprintGeneratedClass ContentGridItem.ContentGridItem_C
// Size: 0x378 (Inherited: 0x328)
struct UContentGridItem_C : UContentThumbnailWithInventoryState_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UImage* BG; // 0x330(0x08)
	struct UButton* ItemButton; // 0x338(0x08)
	struct UOverlay* Placeholder; // 0x340(0x08)
	struct UWidgetSwitcher* PlaceholderSwitcher; // 0x348(0x08)
	struct USquareRewardThumbnail_C* SquareRewardThumbnail; // 0x350(0x08)
	struct UUniversalContentGridBG_C* UniversalContentGridBG; // 0x358(0x08)
	bool HandleIsEquipped; // 0x360(0x01)
	bool HandleIsOwned; // 0x361(0x01)
	char pad_362[0x6]; // 0x362(0x06)
	struct UAkAudioEvent* HoverSound; // 0x368(0x08)
	struct UContentItemObject_C* ContentItemObject; // 0x370(0x08)

	struct FString GetListItemTelemetryTarget(); // Function ContentGridItem.ContentGridItem_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshUnlockTypeIndicators(); // Function ContentGridItem.ContentGridItem_C.RefreshUnlockTypeIndicators // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function ContentGridItem.ContentGridItem_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function ContentGridItem.ContentGridItem_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleIsEquippedChanged(bool IsEquipped); // Function ContentGridItem.ContentGridItem_C.HandleIsEquippedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsFavoritedChanged(bool IsFavorited); // Function ContentGridItem.ContentGridItem_C.HandleIsFavoritedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function ContentGridItem.ContentGridItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature(); // Function ContentGridItem.ContentGridItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature(); // Function ContentGridItem.ContentGridItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void SetListItemObject(struct UObject* ListItemObject); // Function ContentGridItem.ContentGridItem_C.SetListItemObject // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ChangeSelection(bool IsSelected); // Function ContentGridItem.ContentGridItem_C.ChangeSelection // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ContentGridItem.ContentGridItem_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function ContentGridItem.ContentGridItem_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function ContentGridItem.ContentGridItem_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function ContentGridItem.ContentGridItem_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ContentGridItem_ItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ContentGridItem.ContentGridItem_C.BndEvt__ContentGridItem_ItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BP_OnEntryReleased(); // Function ContentGridItem.ContentGridItem_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ContentGridItem(int32_t EntryPoint); // Function ContentGridItem.ContentGridItem_C.ExecuteUbergraph_ContentGridItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

