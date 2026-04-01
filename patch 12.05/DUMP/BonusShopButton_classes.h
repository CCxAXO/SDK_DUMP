// WidgetBlueprintGeneratedClass BonusShopButton.BonusShopButton_C
// Size: 0x361 (Inherited: 0x318)
struct UBonusShopButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* SeenOffers; // 0x320(0x08)
	struct UWidgetAnimation* hover; // 0x328(0x08)
	struct UWidgetAnimation* UnseenOffers; // 0x330(0x08)
	struct UWidgetAnimation* Selected; // 0x338(0x08)
	struct UButton* Button_37; // 0x340(0x08)
	struct UImage* Glitch; // 0x348(0x08)
	bool IsSelected; // 0x350(0x01)
	bool Hovered; // 0x351(0x01)
	char pad_352[0x6]; // 0x352(0x06)
	struct UMaterialInstanceDynamic* BonusShopFlipbook; // 0x358(0x08)
	bool AllOffersSeen; // 0x360(0x01)

	void UpdateAllOffersSeen(bool& AllOffersSeen); // Function BonusShopButton.BonusShopButton_C.UpdateAllOffersSeen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StopAnimations(); // Function BonusShopButton.BonusShopButton_C.StopAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateAnimation(); // Function BonusShopButton.BonusShopButton_C.UpdateAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHovered(bool Hovered); // Function BonusShopButton.BonusShopButton_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateIsSelected(); // Function BonusShopButton.BonusShopButton_C.UpdateIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateVisibility(); // Function BonusShopButton.BonusShopButton_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Button_36_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function BonusShopButton.BonusShopButton_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function BonusShopButton.BonusShopButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnAnyConfigUpdated(struct FName& ConfigName); // Function BonusShopButton.BonusShopButton_C.OnAnyConfigUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnNavigationStateChanged(); // Function BonusShopButton.BonusShopButton_C.OnNavigationStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Button_36_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function BonusShopButton.BonusShopButton_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Button_36_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function BonusShopButton.BonusShopButton_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnIsBonusShopActiveChanged(bool IsBonusShopActive); // Function BonusShopButton.BonusShopButton_C.OnIsBonusShopActiveChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function BonusShopButton.BonusShopButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnBonusStoreOffersChanged(struct TArray<struct UBonusStoreOfferViewModel*>& BonusStoreOffers); // Function BonusShopButton.BonusShopButton_C.OnBonusStoreOffersChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BonusShopButton(int32_t EntryPoint); // Function BonusShopButton.BonusShopButton_C.ExecuteUbergraph_BonusShopButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

