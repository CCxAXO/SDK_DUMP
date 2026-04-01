// WidgetBlueprintGeneratedClass WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C
// Size: 0x4c8 (Inherited: 0x3e0)
struct UWBP_View_ContentItemDisplay_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* BannerText; // 0x3e8(0x08)
	struct UCommonBorder* ContentBanner; // 0x3f0(0x08)
	struct UWBP_Button_ContentItem_C* ContentButton; // 0x3f8(0x08)
	struct USizeBox* ContentItemSizeBox; // 0x400(0x08)
	struct UCommonButtonStyle* ButtonStyle; // 0x408(0x08)
	struct FText BannerDisplayText; // 0x410(0x18)
	struct UObject* ListItem; // 0x428(0x08)
	struct FMulticastInlineDelegate OnChildButtonClicked; // 0x430(0x10)
	struct UTexture* RandomTexture; // 0x440(0x08)
	bool IsEquipped; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct UVM_ContentItem_C* VM_ContentItem; // 0x450(0x08)
	bool IsFocusReady; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)
	struct FMulticastInlineDelegate OnFocusReady; // 0x460(0x10)
	bool Is Unlocked; // 0x470(0x01)
	bool IsOwned; // 0x471(0x01)
	bool IsRandomSelectionAsset; // 0x472(0x01)
	bool HasUpgrades; // 0x473(0x01)
	bool Style; // 0x474(0x01)
	char pad_475[0x3]; // 0x475(0x03)
	struct UCommonBorderStyle* BorderStyle; // 0x478(0x08)
	struct FMargin DefaultIconPadding; // 0x480(0x10)
	bool ShouldHideContentBanner; // 0x490(0x01)
	bool IsFavorited; // 0x491(0x01)
	char pad_492[0x6]; // 0x492(0x06)
	struct FMulticastInlineDelegate OnChildButtonPressed; // 0x498(0x10)
	struct FMulticastInlineDelegate OnChildButtonReleased; // 0x4a8(0x10)
	struct UVM_Subscription_C* VM_Subscription; // 0x4b8(0x08)
	struct USubscriptionDataAsset* HighestOwnedSubscription; // 0x4c0(0x08)

	struct FString GetListItemTelemetryTarget(); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void EnableNonSquareGrid(); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.EnableNonSquareGrid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindSubscriptionViewModel(bool Bind); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.BindSubscriptionViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DoPressOrReleaseAnimation(bool Press); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.DoPressOrReleaseAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetUseHoverAnimation(bool UseHoverAnimation); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.SetUseHoverAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleOnItemSelectionChanged(bool IsSelected); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.HandleOnItemSelectionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleOnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.HandleOnListItemObjectSet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsFavoritedChanged(bool IsFavorited); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnIsFavoritedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSubscriptionHandlesLoaded(); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnSubscriptionHandlesLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnHighestOwnedSubscriptionChanged(struct USubscriptionDataAsset* SubscriptionDataAsset); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnHighestOwnedSubscriptionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindFavoriteItemViewModel(bool Bind); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.BindFavoriteItemViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRewardHandleChanged(struct UBaseHandle* RewardBaseHandle); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnRewardHandleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ResetDisplay(); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.ResetDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsPremiumRequiredChanged(bool NewIsPremiumRequired); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnIsPremiumRequiredChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHideContentBanner(bool ShouldHideContentBanner); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.SetHideContentBanner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRewardTypeChanged(enum class EAresContentType RewardType); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnRewardTypeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCostListChanged(struct TArray<struct FOfferCostWithDiscountInfo>& CostList); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnCostListChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsRandomSelectionAssetChanged(bool IsRandomSelectionAsset); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnIsRandomSelectionAssetChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnHasUpgradesChanged(bool NewHasUpgrades); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnHasUpgradesChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsOwnedChanged(bool IsOwned); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnIsOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsUnlockedChanged(bool IsUnlocked); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnIsUnlockedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindContentItemViewModel(bool Bind); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.BindContentItemViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetContentItemViewModel(struct UVM_ContentItem_C* New VM_ContentItem); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.SetContentItemViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindStoreOfferViewModel(struct UVM_StoreOffer_C* StoreOfferVM, bool Bind); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.BindStoreOfferViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ToggleWarningIndicator(bool IsWarning); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.ToggleWarningIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetInventoryContext(struct UBaseHandle* Handle, struct UEquippableDataAsset* ContextEquippable); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.SetInventoryContext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnUnlockedOnlyBySubscriptionChanged(bool IsUnlockedOnlyBySubscription); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnUnlockedOnlyBySubscriptionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnHasValidDataChanged(bool bHasValidData); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnHasValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEquippedToContextChanged(bool IsEquippedToAssociation); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnEquippedToContextChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnQuantityChanged(int32_t Quantity); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnQuantityChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeObject(struct UObject* InputPin); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.InitializeObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Icon Texture(struct UTexture* InTexture, bool DisplayInBackground); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.Set Icon Texture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBannerText(struct FText BannerDisplayText); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.SetBannerText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIconRotation(double IconRotation); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.SetIconRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetGunOffsets(struct TMap<struct TSoftClassPtr<UObject>, struct FVector2D> GunOffsets); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.SetGunOffsets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetStyle(struct UCommonButtonStyle* InStyle); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.SetStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Equippable Skin Handle Changed(struct UEquippableSkinHandle* EquippableSkinHandle); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.On Equippable Skin Handle Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIconTransformChanged(struct FWidgetTransform IconTransform); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnIconTransformChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIconChanged(struct UTexture* IconTexture, bool DisplayIconAsBackground); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnIconChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayNameChanged(struct FText DisplayName); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.DisplayNameChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEquippedChanged(bool IsEquipped); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnEquippedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindInventoryItemViewModel(struct UVM_InventoryItem_C* InventoryItemVM, bool Bind); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.BindInventoryItemViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindRewardViewModel(struct UVM_Reward_C* RewardVM, bool Bind); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.BindRewardViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateViewModels(); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.CreateViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshBanner(); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.RefreshBanner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshButton(); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.RefreshButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Refresh(); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BP_OnEntryReleased(); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_View_ContentItemDisplay_ContentButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.BndEvt__WBP_View_ContentItemDisplay_ContentButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_View_ContentItemDisplay_ContentButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.BndEvt__WBP_View_ContentItemDisplay_ContentButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_View_ContentItemDisplay_ContentButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.BndEvt__WBP_View_ContentItemDisplay_ContentButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_View_ContentItemDisplay(int32_t EntryPoint); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.ExecuteUbergraph_WBP_View_ContentItemDisplay // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnChildButtonReleased__DelegateSignature(); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnChildButtonReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnChildButtonPressed__DelegateSignature(); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnChildButtonPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnFocusReady__DelegateSignature(); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnFocusReady__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnChildButtonClicked__DelegateSignature(struct UObject* Item); // Function WBP_View_ContentItemDisplay.WBP_View_ContentItemDisplay_C.OnChildButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

