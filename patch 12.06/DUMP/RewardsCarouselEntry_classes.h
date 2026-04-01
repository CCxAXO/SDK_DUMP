// WidgetBlueprintGeneratedClass RewardsCarouselEntry.RewardsCarouselEntry_C
// Size: 0x360 (Inherited: 0x318)
struct URewardsCarouselEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UButton* CarouselButton; // 0x320(0x08)
	struct USizeBox* EntrySizeBox; // 0x328(0x08)
	struct USquareRewardThumbnail_C* SquareRewardThumbnail; // 0x330(0x08)
	struct UUniversalCarouselBG_C* UniversalCarouselBG; // 0x338(0x08)
	struct UInfiniteCarouselV2* Carousel; // 0x340(0x08)
	struct UGenericCarouselObject_C* Object; // 0x348(0x08)
	struct UAkAudioEvent* HoverSound; // 0x350(0x08)
	struct UAkAudioEvent* ClickSound; // 0x358(0x08)

	struct UObject* GetEntryObject(); // Function RewardsCarouselEntry.RewardsCarouselEntry_C.GetEntryObject // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void OnEntryObjectSet(struct UObject* EntryObject); // Function RewardsCarouselEntry.RewardsCarouselEntry_C.OnEntryObjectSet // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSelected(bool bSelected); // Function RewardsCarouselEntry.RewardsCarouselEntry_C.SetSelected // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCarouselSet(struct UInfiniteCarouselV2* InfiniteCarousel); // Function RewardsCarouselEntry.RewardsCarouselEntry_C.OnCarouselSet // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetDimensions(struct FVector2D Dimensions); // Function RewardsCarouselEntry.RewardsCarouselEntry_C.SetDimensions // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function RewardsCarouselEntry.RewardsCarouselEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleIsEquippedChanged(bool IsEquipped); // Function RewardsCarouselEntry.RewardsCarouselEntry_C.HandleIsEquippedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CarouselButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function RewardsCarouselEntry.RewardsCarouselEntry_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CarouselButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature(); // Function RewardsCarouselEntry.RewardsCarouselEntry_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CarouselButton_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature(); // Function RewardsCarouselEntry.RewardsCarouselEntry_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CarouselButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function RewardsCarouselEntry.RewardsCarouselEntry_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CarouselButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function RewardsCarouselEntry.RewardsCarouselEntry_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_RewardsCarouselEntry(int32_t EntryPoint); // Function RewardsCarouselEntry.RewardsCarouselEntry_C.ExecuteUbergraph_RewardsCarouselEntry // (Final|UbergraphFunction) // @ game+0x1b42740
};

