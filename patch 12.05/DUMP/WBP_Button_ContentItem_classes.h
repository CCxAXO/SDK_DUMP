// WidgetBlueprintGeneratedClass WBP_Button_ContentItem.WBP_Button_ContentItem_C
// Size: 0x1d63 (Inherited: 0x1ae0)
struct UWBP_Button_ContentItem_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* AnimReleased; // 0x1ae8(0x08)
	struct UWidgetAnimation* AnimPressed; // 0x1af0(0x08)
	struct UWidgetAnimation* Anim_Unhoverx2; // 0x1af8(0x08)
	struct UWidgetAnimation* Anim_Hoverx2; // 0x1b00(0x08)
	struct UWidgetAnimation* Anim_Unhoverx1; // 0x1b08(0x08)
	struct UWidgetAnimation* Anim_Hoverx1; // 0x1b10(0x08)
	struct UImage* CollectionIndicator; // 0x1b18(0x08)
	struct UOverlay* IconOverlay; // 0x1b20(0x08)
	struct USizeBox* IconOverlaySizeBox; // 0x1b28(0x08)
	struct UImage* IMG_CheckMarkBG; // 0x1b30(0x08)
	struct UImage* IMG_FavoriteBG; // 0x1b38(0x08)
	struct UImage* IMG_ItemBG; // 0x1b40(0x08)
	struct UImage* IMG_QuantityBG; // 0x1b48(0x08)
	struct UOverlay* O_lockedDimOverlay; // 0x1b50(0x08)
	struct UOverlay* O_NewItemWrap; // 0x1b58(0x08)
	struct UAresButtonTextComponent* QuantityDisplay; // 0x1b60(0x08)
	struct UImage* SubscriptionIcon; // 0x1b68(0x08)
	struct UImage* WarningIndicator; // 0x1b70(0x08)
	struct UWBP_Panel_FavoriteIndicator_C* WBP_Panel_FavoriteIndicator; // 0x1b78(0x08)
	enum class EHorizontalAlignment StarIndicatorHorizontalAlignment; // 0x1b80(0x01)
	enum class EVerticalAlignment StarIndicatorVerticalAlignment; // 0x1b81(0x01)
	enum class EHorizontalAlignment CollectionIndicatorHorizontalAlignment; // 0x1b82(0x01)
	enum class EHorizontalAlignment QuantityIndicatorHorizontalAlignment; // 0x1b83(0x01)
	enum class EVerticalAlignment QuantityIndicatorVerticalAlignment; // 0x1b84(0x01)
	char pad_1B85[0x3]; // 0x1b85(0x03)
	struct FMargin IconPadding; // 0x1b88(0x10)
	enum class EVerticalAlignment CollectionIndicatorVerticalAlignment; // 0x1b98(0x01)
	char pad_1B99[0x3]; // 0x1b99(0x03)
	int32_t Quantity; // 0x1b9c(0x04)
	bool Locked; // 0x1ba0(0x01)
	bool Checked; // 0x1ba1(0x01)
	bool New; // 0x1ba2(0x01)
	bool Starred; // 0x1ba3(0x01)
	char pad_1BA4[0x4]; // 0x1ba4(0x04)
	struct UTexture* DisplayTexture; // 0x1ba8(0x08)
	struct FVector2D IconOffset; // 0x1bb0(0x10)
	struct FVector2D IconTiling; // 0x1bc0(0x10)
	double IconRotation; // 0x1bd0(0x08)
	struct TMap<struct TSoftClassPtr<UObject>, struct FVector2D> GunOffsets; // 0x1bd8(0x50)
	bool DisplayInBackground; // 0x1c28(0x01)
	char pad_1C29[0x7]; // 0x1c29(0x07)
	struct TSoftClassPtr<UObject> EquippableAsset; // 0x1c30(0x30)
	bool MiscellaneousAsset; // 0x1c60(0x01)
	enum class EHorizontalAlignment TextHorizontalAlignment; // 0x1c61(0x01)
	enum class EVerticalAlignment TextVerticalAlignment; // 0x1c62(0x01)
	bool AlwaysShowButtonText; // 0x1c63(0x01)
	char pad_1C64[0x4]; // 0x1c64(0x04)
	struct TMap<struct TSoftClassPtr<UObject>, double> GunScales; // 0x1c68(0x50)
	struct TMap<struct TSoftClassPtr<UObject>, double> Gun Rotation; // 0x1cb8(0x50)
	enum class EVerticalAlignment CheckedIndicatorVerticalAlignment; // 0x1d08(0x01)
	enum class EHorizontalAlignment CheckedIndicatorHorizontalAlignment; // 0x1d09(0x01)
	bool Warning; // 0x1d0a(0x01)
	bool UnlockBySubscription; // 0x1d0b(0x01)
	enum class EHorizontalAlignment WarningIndicatorHorizontalAlignment; // 0x1d0c(0x01)
	enum class EVerticalAlignment WarningIndicatorVerticalAlignment; // 0x1d0d(0x01)
	enum class EAresContentType ContentType; // 0x1d0e(0x01)
	char pad_1D0F[0x1]; // 0x1d0f(0x01)
	struct TMap<enum class EAresContentType, struct FMargin> RewardTypeIconPadding; // 0x1d10(0x50)
	bool PremiumRequired; // 0x1d60(0x01)
	bool UseHoverAnimation; // 0x1d61(0x01)
	bool ShowIcon; // 0x1d62(0x01)

	void EnableNonSquareGrid(); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.EnableNonSquareGrid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSubscriptionIcon(struct UTexture* SubscriptionIcon); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.UpdateSubscriptionIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DoReleaseAnimation(); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.DoReleaseAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DoPressAnimation(); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.DoPressAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleOnFavoriteChanged(bool IsFavorited); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.HandleOnFavoriteChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetContentType(enum class EAresContentType ContentType); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.SetContentType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetEquippableAsset(struct TSoftClassPtr<UObject> EquippableAssetClass); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.SetEquippableAsset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetQuantity(int32_t Quantity); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.SetQuantity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetFieldsFromStyle(struct UCommonButtonStyle* InStyle); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.SetFieldsFromStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsMiscellany(bool IsMiscellaneousAsset); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.SetIsMiscellany // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIconRotation(double IconRotation); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.SetIconRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	double GetTextureAspectRatio(); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.GetTextureAspectRatio // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetIconTexture(struct UTexture* InTexture); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.SetIconTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateDisplay(); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.UpdateDisplay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateIndicatorIcons(); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.UpdateIndicatorIcons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnButtonBaseHovered_Event_1(struct UCommonButtonBase* Button); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.OnButtonBaseHovered_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BP_OnHovered(); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnUnhovered(); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnPressed(); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnReleased(); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.BP_OnReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnSelected(); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnDeselected(); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_ContentItem(int32_t EntryPoint); // Function WBP_Button_ContentItem.WBP_Button_ContentItem_C.ExecuteUbergraph_WBP_Button_ContentItem // (Final|UbergraphFunction) // @ game+0x1af5410
};

