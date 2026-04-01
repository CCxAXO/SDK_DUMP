// WidgetBlueprintGeneratedClass CharacterCarouselEntry.CharacterCarouselEntry_C
// Size: 0x3a0 (Inherited: 0x318)
struct UCharacterCarouselEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UProgressBar* Bar; // 0x320(0x08)
	struct UButton* CarouselButton; // 0x328(0x08)
	struct UCharacterTile_C* CharacterTile; // 0x330(0x08)
	struct USizeBox* EntrySizeBox; // 0x338(0x08)
	struct USizeBox* ImageSizeBox; // 0x340(0x08)
	struct UUniversalCarouselBG_C* UniversalCarouselBG; // 0x348(0x08)
	struct UInfiniteCarouselV2* Carousel; // 0x350(0x08)
	struct UGenericCarouselObject_C* Object; // 0x358(0x08)
	struct UAkAudioEvent* HoverSound; // 0x360(0x08)
	struct UAkAudioEvent* ClickSound; // 0x368(0x08)
	struct UCharacterHandle* CharacterHandle; // 0x370(0x08)
	struct UContractViewModel* ContractViewModel; // 0x378(0x08)
	struct FLinearColor ProgressBarDefaultColor; // 0x380(0x10)
	struct FLinearColor ProgressBarCompleteColor; // 0x390(0x10)

	struct UObject* GetEntryObject(); // Function CharacterCarouselEntry.CharacterCarouselEntry_C.GetEntryObject // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void HandleIsSubscriptionChanged(); // Function CharacterCarouselEntry.CharacterCarouselEntry_C.HandleIsSubscriptionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsUnlocked(); // Function CharacterCarouselEntry.CharacterCarouselEntry_C.HandleIsUnlocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateCompletedState(); // Function CharacterCarouselEntry.CharacterCarouselEntry_C.UpdateCompletedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsCompleted(bool IsCompleted); // Function CharacterCarouselEntry.CharacterCarouselEntry_C.HandleIsCompleted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleProgressChanged(float Progress); // Function CharacterCarouselEntry.CharacterCarouselEntry_C.HandleProgressChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCharacter(struct UCharacterHandle* Handle); // Function CharacterCarouselEntry.CharacterCarouselEntry_C.SetCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshUI(); // Function CharacterCarouselEntry.CharacterCarouselEntry_C.RefreshUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetContractLevel(); // Function CharacterCarouselEntry.CharacterCarouselEntry_C.SetContractLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEntryObjectSet(struct UObject* EntryObject); // Function CharacterCarouselEntry.CharacterCarouselEntry_C.OnEntryObjectSet // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSelected(bool bSelected); // Function CharacterCarouselEntry.CharacterCarouselEntry_C.SetSelected // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCarouselSet(struct UInfiniteCarouselV2* InfiniteCarousel); // Function CharacterCarouselEntry.CharacterCarouselEntry_C.OnCarouselSet // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetDimensions(struct FVector2D Dimensions); // Function CharacterCarouselEntry.CharacterCarouselEntry_C.SetDimensions // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CarouselButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function CharacterCarouselEntry.CharacterCarouselEntry_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CarouselButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature(); // Function CharacterCarouselEntry.CharacterCarouselEntry_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CarouselButton_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature(); // Function CharacterCarouselEntry.CharacterCarouselEntry_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CarouselButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function CharacterCarouselEntry.CharacterCarouselEntry_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CarouselButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function CharacterCarouselEntry.CharacterCarouselEntry_C.BndEvt__CarouselButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CharacterCarouselEntry(int32_t EntryPoint); // Function CharacterCarouselEntry.CharacterCarouselEntry_C.ExecuteUbergraph_CharacterCarouselEntry // (Final|UbergraphFunction) // @ game+0x1b42740
};

