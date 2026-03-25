// WidgetBlueprintGeneratedClass WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C
// Size: 0x6b1 (Inherited: 0x3e0)
struct UWBP_Panel_RewardDetails_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UOverlay* BG_FX; // 0x3e8(0x08)
	struct UImage* CenterFiligree; // 0x3f0(0x08)
	struct UImage* CustomIconImage; // 0x3f8(0x08)
	struct USizeBox* CustomIconSizeBox; // 0x400(0x08)
	struct UImage* DividerFiligree; // 0x408(0x08)
	struct UOverlay* EquipandFavoriteHB; // 0x410(0x08)
	struct UOverlay* EquipButtonContainer; // 0x418(0x08)
	struct UFadeoutWidget_C* FadeoutWidget; // 0x420(0x08)
	struct UOverlay* FavoritesIndicatorContainer; // 0x428(0x08)
	struct UOverlay* GiftingButton_Container; // 0x430(0x08)
	struct UImage* Gradient_BG; // 0x438(0x08)
	struct UOverlay* GunskinLevelsAndVariants; // 0x440(0x08)
	struct UImage* LeftSideFiligree; // 0x448(0x08)
	struct UImage* LightingSweeps; // 0x450(0x08)
	struct USizeBox* ListSizeBox; // 0x458(0x08)
	struct UWBP_List_InfiniteCarousel_C* OfferOrRewardList; // 0x460(0x08)
	struct UWBP_Panel_OfferPreview_C* OfferPreview; // 0x468(0x08)
	struct UWBP_List_Carousel_C* OfferRewardPaginatedList; // 0x470(0x08)
	struct UImage* PCBackground; // 0x478(0x08)
	struct UOverlay* PrimaryOfferButton_Container; // 0x480(0x08)
	struct UImage* RightSideFiligree; // 0x488(0x08)
	struct UOverlay* SubOfferButton_Container; // 0x490(0x08)
	struct USizeBox* TierIconSizeBox; // 0x498(0x08)
	struct UVerticalBox* VB_BundleContentWrap; // 0x4a0(0x08)
	struct UWBP_Panel_ChromaAndSkinLevelSelector_C* WBP_Panel_ChromaAndSkinLevelSelector; // 0x4a8(0x08)
	struct UWBP_Panel_CommonTitle_C* WBP_Panel_CommonTitle; // 0x4b0(0x08)
	struct UWBP_Panel_ContentTierIcon_C* WBP_Panel_ContentTierIcon; // 0x4b8(0x08)
	struct UWBP_Panel_EquipButton_C* WBP_Panel_EquipButton; // 0x4c0(0x08)
	struct UWBP_Panel_FavoriteIndicator_C* WBP_Panel_FavoriteIndicator; // 0x4c8(0x08)
	struct UWBP_Panel_GiftOfferButton_C* WBP_Panel_GiftOfferButton; // 0x4d0(0x08)
	struct UWBP_Panel_LimitedEditionDescriptions_C* WBP_Panel_LimitedEditionDescriptions; // 0x4d8(0x08)
	struct UWBP_Panel_LimitedEditionIcons_C* WBP_Panel_LimitedEditionIcons; // 0x4e0(0x08)
	struct UWBP_Panel_OfferPurchaseButton_C* WBP_Panel_OfferPurchaseButton_Primary; // 0x4e8(0x08)
	struct UWBP_Panel_OfferPurchaseButton_C* WBP_Panel_OfferPurchaseButton_SubOffer; // 0x4f0(0x08)
	struct UHorizontalBox* Wholesale_HB; // 0x4f8(0x08)
	struct UVM_StoreDetailsPanel_C* VM_DetailsPanel; // 0x500(0x08)
	struct UVM_StoreOffer_C* VM_StoreOffer; // 0x508(0x08)
	struct UVM_Reward_C* VM_Reward; // 0x510(0x08)
	struct UVM_InventoryItem_C* VM_InventoryItem; // 0x518(0x08)
	struct UVM_Order_C* VM_Order; // 0x520(0x08)
	bool DisplayLevelsAndVariants; // 0x528(0x01)
	char pad_529[0x7]; // 0x529(0x07)
	struct UVM_WeaponSkinLevels_C* VM_SkinLevels; // 0x530(0x08)
	struct UVM_WeaponVariantList_C* VM_SkinVariants; // 0x538(0x08)
	enum class Enum_WBP_Panel_RewardDetails_InfoTypes EyebrowContent; // 0x540(0x01)
	enum class Enum_WBP_Panel_RewardDetails_InfoTypes TitleContent; // 0x541(0x01)
	enum class Enum_WBP_Panel_RewardDetails_InfoTypes SubtitleContent; // 0x542(0x01)
	char pad_543[0x5]; // 0x543(0x05)
	struct FText CustomTextOne; // 0x548(0x18)
	struct FText CustomTextTwo; // 0x560(0x18)
	enum class EHorizontalAlignment TitlesHorizontalAligment; // 0x578(0x01)
	char pad_579[0x7]; // 0x579(0x07)
	struct UVM_StoreOfferSelector_C* VM_StoreOffer_Selector; // 0x580(0x08)
	bool ShowOfferPurchaseButtons; // 0x588(0x01)
	char pad_589[0x7]; // 0x589(0x07)
	struct UVM_ModelViewerPrompt_C* VM_ModelViewerPrompt; // 0x590(0x08)
	struct FMulticastInlineDelegate OnInputActionPreferenceChanged; // 0x598(0x10)
	bool HideLockIconInCarousel; // 0x5a8(0x01)
	bool HideBGEffect; // 0x5a9(0x01)
	bool ShouldShowSourceIndicator; // 0x5aa(0x01)
	bool CollapseTierIconSlotWithoutValidTier; // 0x5ab(0x01)
	char pad_5AC[0x4]; // 0x5ac(0x04)
	struct FText CustomSubtitleSeparator; // 0x5b0(0x18)
	bool DisplayFavoriteIndicator; // 0x5c8(0x01)
	bool AllowNavigationToCollections; // 0x5c9(0x01)
	char pad_5CA[0x6]; // 0x5ca(0x06)
	struct FSlateBrush CustomTitleIcon; // 0x5d0(0xd0)
	bool InitFromNavParameters; // 0x6a0(0x01)
	char pad_6A1[0x7]; // 0x6a1(0x07)
	struct UVM_ManageUpgradesPrompt_C* VM_ManageUpgradePrompt; // 0x6a8(0x08)
	bool bShouldUseUpdatedHorizontalList; // 0x6b0(0x01)

	enum class EActivationPreference GetActivationPreferenceForAction(struct FAresConditionalInputAction Action); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.GetActivationPreferenceForAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CREATEDELEGATE_PROXYFUNCTION_1(enum class EGiftingType& IsGiftable); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.CREATEDELEGATE_PROXYFUNCTION_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShouldShowOfferOrRewardList(bool& ShowList); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.ShouldShowOfferOrRewardList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void GetConstructedListWidget(struct UListView*& ListWidget); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.GetConstructedListWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void FetchShouldUseUpdatedHorizontalList(); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.FetchShouldUseUpdatedHorizontalList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AdjustDisplaySettingsForTargetedBridgedConvergedScreens(); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.AdjustDisplaySettingsForTargetedBridgedConvergedScreens // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShouldAllowNavigationToCollections(bool& ShouldAllowNavigationToCollections); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.ShouldAllowNavigationToCollections // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void HandleSelectedSkinLevelChanged(struct UEquippableSkinLevelHandle* NewSkinLevel); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.HandleSelectedSkinLevelChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AdjustDisplaySettings(); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.AdjustDisplaySettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateTitlesHorizontalAlignment(enum class EHorizontalAlignment HorizontalAlignment); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.UpdateTitlesHorizontalAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateCustomTitlesIcon(); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.UpdateCustomTitlesIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShouldShowEquipButton(bool& ShouldShowEquipButton); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.ShouldShowEquipButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void On Content Tier Has Valid Data Changed(bool NewValue); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.On Content Tier Has Valid Data Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsGiftableChanged(enum class EGiftingType IsGiftable); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.HandleIsGiftableChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleSelectedChromaChanged(struct UEquippableSkinChromaHandle* NewChroma); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.HandleSelectedChromaChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShouldDisplaySourceIndicator(enum class ERewardAttributionSource RewardAttribution, struct FText& RewardAttributionName, bool& ShouldDisplayRewardSource); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.ShouldDisplaySourceIndicator // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void HandleRewardSourceAndType(); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.HandleRewardSourceAndType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleRewardAttributionChanged(enum class ERewardAttributionSource RewardAttribution, struct FText RewardAttributionName); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.HandleRewardAttributionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsEquipCandidateChanged(bool IsEquipCandidate); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.HandleIsEquipCandidateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Offer And Equip Buttons Visibility(); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.Update Offer And Equip Buttons Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHideLockIcon(bool InHideLockIconInCarousel); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.SetHideLockIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnShouldShowDiscountInformationChanged(bool ShouldShowDiscountInformation); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.OnShouldShowDiscountInformationChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OverrideRewardCarouselVisuals(struct UWBP_View_ContentItemDisplay_C* Widget); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.OverrideRewardCarouselVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HasMultipleRewards(bool& HasMultipleRewards); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.HasMultipleRewards // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void HandleShouldShowPromptChanged(bool bShouldShowPrompt); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.HandleShouldShowPromptChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateInitialOfferOrRewardDisplay(); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.UpdateInitialOfferOrRewardDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Offer or Reward List Display(); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.Update Offer or Reward List Display // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateCarouselSectionDisplay(); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.UpdateCarouselSectionDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleSelectedOfferChanged(struct UOfferDTO* SelectedOffer); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.HandleSelectedOfferChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleRewardModelListChanged(struct TArray<struct URewardModel*>& RewardList); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.HandleRewardModelListChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleSubOffersListChanged(struct TArray<struct UOfferDTO*>& NewSubOffersList); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.HandleSubOffersListChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateTitlesContent(struct FText NewInfo, enum class Enum_WBP_Panel_RewardDetails_InfoTypes InfoType); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.UpdateTitlesContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshTitlesAlignment(); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.RefreshTitlesAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSelectedOfferOrReward(struct UObject* OfferOrRewardObject); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.SetSelectedOfferOrReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleSkinVariantHandlesChanged(struct TArray<struct UEquippableSkinChromaHandle*>& OutChromaHandles); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.HandleSkinVariantHandlesChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleSkinLevelHandleChanged(struct UEquippableSkinHandle* SkinHandle, int32_t SelectedLevel, int32_t CurrentLevel); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.HandleSkinLevelHandleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Primary Offer DTOChanged(struct UOfferDTO* OfferDTO); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.Handle Primary Offer DTOChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleOfferPurchaseButtonClicked(struct UOfferDTO* OfferDTO); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.HandleOfferPurchaseButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleRewardTypeChanged(struct FText RewardTypeName); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.HandleRewardTypeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void SetSubtitle(struct FText Title); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.SetSubtitle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTitle(struct FText Title); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.SetTitle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetEyebrow(struct FText Title); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.SetEyebrow // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPurchaseButtonUnhovered(struct UCommonButtonBase* Button); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.OnPurchaseButtonUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPurchaseButtonHovered(struct UCommonButtonBase* Button); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.OnPurchaseButtonHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindPurchaseInputEvents(); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.BindPurchaseInputEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleItemNameChanged(struct FText ItemName); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.HandleItemNameChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCollectionNameChanged(struct FText CollectionName); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.HandleCollectionNameChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsItemOwnedChanged(bool IsItemOwned); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.HandleIsItemOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsWholesaleChanged(bool IsWholesaleInput); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.HandleIsWholesaleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsBundleChanged(bool IsBundle); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.HandleIsBundleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool Bind); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModels(); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ModelViewerPressed(); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.ModelViewerPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ModelViewerReleased(bool bForcedRelease); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.ModelViewerReleased // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_RewardDetails_WBP_List_InfiniteCarousel_K2Node_ComponentBoundEvent_1_OnEntryObjectAndWidgetChanged__DelegateSignature(struct UObject* EntryObject, struct UUserWidget* EntryWidget); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.BndEvt__WBP_Panel_RewardDetails_WBP_List_InfiniteCarousel_K2Node_ComponentBoundEvent_1_OnEntryObjectAndWidgetChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_RewardDetails_WBP_List_InfiniteCarousel_K2Node_ComponentBoundEvent_2_OnEntryObjectWidgetAndStateChanged__DelegateSignature(struct UObject* EntryObject, struct UUserWidget* EntryWidget, bool EntryState); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.BndEvt__WBP_Panel_RewardDetails_WBP_List_InfiniteCarousel_K2Node_ComponentBoundEvent_2_OnEntryObjectWidgetAndStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_RewardDetails_OfferRewardPaginatedList_K2Node_ComponentBoundEvent_0_OnEntryObjectAndWidgetChanged__DelegateSignature(struct UObject* EntryObject, struct UUserWidget* EntryWidget); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.BndEvt__WBP_Panel_RewardDetails_OfferRewardPaginatedList_K2Node_ComponentBoundEvent_0_OnEntryObjectAndWidgetChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_RewardDetails_OfferRewardPaginatedList_K2Node_ComponentBoundEvent_3_OnEntryObjectWidgetAndStateChanged__DelegateSignature(struct UObject* EntryObject, struct UUserWidget* EntryWidget, bool EntryState); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.BndEvt__WBP_Panel_RewardDetails_OfferRewardPaginatedList_K2Node_ComponentBoundEvent_3_OnEntryObjectWidgetAndStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_RewardDetails(int32_t EntryPoint); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.ExecuteUbergraph_WBP_Panel_RewardDetails // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnInputActionPreferenceChanged__DelegateSignature(); // Function WBP_Panel_RewardDetails.WBP_Panel_RewardDetails_C.OnInputActionPreferenceChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

