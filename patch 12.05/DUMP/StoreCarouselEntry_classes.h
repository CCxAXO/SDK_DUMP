// WidgetBlueprintGeneratedClass StoreCarouselEntry.StoreCarouselEntry_C
// Size: 0x380 (Inherited: 0x318)
struct UStoreCarouselEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UButton* CarouselButton; // 0x320(0x08)
	struct UTextBlock* DiscountText; // 0x328(0x08)
	struct USizeBox* EntrySizeBox; // 0x330(0x08)
	struct UImage* Image_66; // 0x338(0x08)
	struct UOverlay* PromoState; // 0x340(0x08)
	struct USquareRewardThumbnail_C* SquareRewardThumbnail; // 0x348(0x08)
	struct UUniversalCarouselBG_C* UniversalCarouselBG; // 0x350(0x08)
	struct UInfiniteCarouselV2* Carousel; // 0x358(0x08)
	struct UGenericCarouselObject_C* Object; // 0x360(0x08)
	struct UAkAudioEvent* HoverSound; // 0x368(0x08)
	struct UAkAudioEvent* ClickSound; // 0x370(0x08)
	struct UBaseHandle* Handle; // 0x378(0x08)

	struct UObject* GetEntryObject(); // Function StoreCarouselEntry.StoreCarouselEntry_C.GetEntryObject // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void UpdateState(); // Function StoreCarouselEntry.StoreCarouselEntry_C.UpdateState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEntryObjectSet(struct UObject* EntryObject); // Function StoreCarouselEntry.StoreCarouselEntry_C.OnEntryObjectSet // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSelected(bool bSelected); // Function StoreCarouselEntry.StoreCarouselEntry_C.SetSelected // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCarouselSet(struct UInfiniteCarouselV2* InfiniteCarousel); // Function StoreCarouselEntry.StoreCarouselEntry_C.OnCarouselSet // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDimensions(struct FVector2D Dimensions); // Function StoreCarouselEntry.StoreCarouselEntry_C.SetDimensions // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function StoreCarouselEntry.StoreCarouselEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleIsOwnedChanged(bool IsOwned); // Function StoreCarouselEntry.StoreCarouselEntry_C.HandleIsOwnedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__CarouselButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function StoreCarouselEntry.StoreCarouselEntry_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__CarouselButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature(); // Function StoreCarouselEntry.StoreCarouselEntry_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__CarouselButton_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature(); // Function StoreCarouselEntry.StoreCarouselEntry_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__CarouselButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function StoreCarouselEntry.StoreCarouselEntry_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__CarouselButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function StoreCarouselEntry.StoreCarouselEntry_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function StoreCarouselEntry.StoreCarouselEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_StoreCarouselEntry(int32_t EntryPoint); // Function StoreCarouselEntry.StoreCarouselEntry_C.ExecuteUbergraph_StoreCarouselEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

