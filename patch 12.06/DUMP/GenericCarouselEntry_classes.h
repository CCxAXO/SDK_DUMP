// WidgetBlueprintGeneratedClass GenericCarouselEntry.GenericCarouselEntry_C
// Size: 0x372 (Inherited: 0x328)
struct UGenericCarouselEntry_C : UContentThumbnailWithInventoryState_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UButton* CarouselButton; // 0x330(0x08)
	struct USizeBox* EntrySizeBox; // 0x338(0x08)
	struct USquareRewardThumbnail_C* SquareRewardThumbnail; // 0x340(0x08)
	struct UUniversalCarouselBG_C* UniversalCarouselBG; // 0x348(0x08)
	struct UInfiniteCarouselV2* Carousel; // 0x350(0x08)
	struct UGenericCarouselObject_C* Object; // 0x358(0x08)
	struct UAkAudioEvent* HoverSound; // 0x360(0x08)
	struct UAkAudioEvent* ClickSound; // 0x368(0x08)
	bool HandleIsOwned; // 0x370(0x01)
	bool HandleIsEquipped; // 0x371(0x01)

	struct UObject* GetEntryObject(); // Function GenericCarouselEntry.GenericCarouselEntry_C.GetEntryObject // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void RefreshUnlockTypeIndicators(); // Function GenericCarouselEntry.GenericCarouselEntry_C.RefreshUnlockTypeIndicators // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEntryObjectSet(struct UObject* EntryObject); // Function GenericCarouselEntry.GenericCarouselEntry_C.OnEntryObjectSet // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSelected(bool bSelected); // Function GenericCarouselEntry.GenericCarouselEntry_C.SetSelected // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCarouselSet(struct UInfiniteCarouselV2* InfiniteCarousel); // Function GenericCarouselEntry.GenericCarouselEntry_C.OnCarouselSet // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetDimensions(struct FVector2D Dimensions); // Function GenericCarouselEntry.GenericCarouselEntry_C.SetDimensions // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function GenericCarouselEntry.GenericCarouselEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleIsEquippedChanged(bool IsEquipped); // Function GenericCarouselEntry.GenericCarouselEntry_C.HandleIsEquippedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CarouselButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function GenericCarouselEntry.GenericCarouselEntry_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CarouselButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature(); // Function GenericCarouselEntry.GenericCarouselEntry_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CarouselButton_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature(); // Function GenericCarouselEntry.GenericCarouselEntry_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CarouselButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function GenericCarouselEntry.GenericCarouselEntry_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CarouselButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function GenericCarouselEntry.GenericCarouselEntry_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void HandleIsFavoritedChanged(bool IsFavorited); // Function GenericCarouselEntry.GenericCarouselEntry_C.HandleIsFavoritedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GenericCarouselEntry(int32_t EntryPoint); // Function GenericCarouselEntry.GenericCarouselEntry_C.ExecuteUbergraph_GenericCarouselEntry // (Final|UbergraphFunction) // @ game+0x1b42740
};

