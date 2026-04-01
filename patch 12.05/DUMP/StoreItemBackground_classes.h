// WidgetBlueprintGeneratedClass StoreItemBackground.StoreItemBackground_C
// Size: 0x3d1 (Inherited: 0x318)
struct UStoreItemBackground_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* FeaturedShopSetup; // 0x320(0x08)
	struct UWidgetAnimation* FeaturedShopHoverV2; // 0x328(0x08)
	struct UWidgetAnimation* AccessoryStoreHover; // 0x330(0x08)
	struct UWidgetAnimation* FeaturedShopHover; // 0x338(0x08)
	struct UImage* AccentTriangle; // 0x340(0x08)
	struct UOverlay* AccessoryStoreBackground; // 0x348(0x08)
	struct UImage* ActiveTopRimLight; // 0x350(0x08)
	struct UImage* ActiveTopRimLight_2; // 0x358(0x08)
	struct UWidgetSwitcher* BackgroundSwitcher; // 0x360(0x08)
	struct UImage* BackgroundWhiteStatic_2; // 0x368(0x08)
	struct UImage* BarDefault; // 0x370(0x08)
	struct UImage* BarHover; // 0x378(0x08)
	struct UImage* BlackBG_2; // 0x380(0x08)
	struct UOverlay* FeaturedShopBackground; // 0x388(0x08)
	struct UOverlay* FeaturedShopBackgroundV2; // 0x390(0x08)
	struct UImage* FeaturedShopDynamicColorGradient; // 0x398(0x08)
	struct UImage* FeaturedShopGreenGradient; // 0x3a0(0x08)
	struct UImage* FeaturedShopHoverBorder; // 0x3a8(0x08)
	struct UImage* GreenBG_2; // 0x3b0(0x08)
	struct UImage* HoverBorder; // 0x3b8(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x3c0(0x08)
	struct USharedBlurBg_C* SharedBlurBg_2; // 0x3c8(0x08)
	enum class EPurchaseSource PurchaseSource; // 0x3d0(0x01)

	void UpdateColor(struct FLinearColor ColorAndOpacity); // Function StoreItemBackground.StoreItemBackground_C.UpdateColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayUnhoverAnim(); // Function StoreItemBackground.StoreItemBackground_C.PlayUnhoverAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayHoverAnim(); // Function StoreItemBackground.StoreItemBackground_C.PlayHoverAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Active Background(enum class EPurchaseSource PurchaseSource); // Function StoreItemBackground.StoreItemBackground_C.Set Active Background // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function StoreItemBackground.StoreItemBackground_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function StoreItemBackground.StoreItemBackground_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_StoreItemBackground(int32_t EntryPoint); // Function StoreItemBackground.StoreItemBackground_C.ExecuteUbergraph_StoreItemBackground // (Final|UbergraphFunction) // @ game+0x1af5410
};

