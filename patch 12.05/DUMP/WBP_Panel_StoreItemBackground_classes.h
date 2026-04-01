// WidgetBlueprintGeneratedClass WBP_Panel_StoreItemBackground.WBP_Panel_StoreItemBackground_C
// Size: 0x562 (Inherited: 0x3e0)
struct UWBP_Panel_StoreItemBackground_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* Anim_BG_NM_Unhover; // 0x3e8(0x08)
	struct UWidgetAnimation* Anim_BG_NM_Hover; // 0x3f0(0x08)
	struct UWidgetAnimation* Anim_BG_NM_FiligreeAnimation; // 0x3f8(0x08)
	struct UWidgetAnimation* Anim_BG_Release; // 0x400(0x08)
	struct UWidgetAnimation* Anim_BG_Press; // 0x408(0x08)
	struct UWidgetAnimation* Anim_BG_Unhover; // 0x410(0x08)
	struct UWidgetAnimation* Anim_BG_Hover; // 0x418(0x08)
	struct UOverlay* BundleBackground; // 0x420(0x08)
	struct UImage* BundleBackgroundImage; // 0x428(0x08)
	struct UImage* FeaturedShopDynamicColorGradient; // 0x430(0x08)
	struct UImage* FeaturedShopHoverBorder; // 0x438(0x08)
	struct UImage* NightMarketFiligree; // 0x440(0x08)
	struct UImage* NightMarketFiligree_LinesL; // 0x448(0x08)
	struct UImage* NightMarketFiligree_LinesR; // 0x450(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x458(0x08)
	enum class EPurchaseSource PurchaseSource; // 0x460(0x01)
	char pad_461[0x7]; // 0x461(0x07)
	struct UMaterialInstanceDynamic* BorderMaterial; // 0x468(0x08)
	struct FSlateBrush BackgroundGradientOverride; // 0x470(0xd0)
	bool UseBackgroudGradientOverride; // 0x540(0x01)
	bool DisplayFiligree; // 0x541(0x01)
	bool UseOpacityOverride; // 0x542(0x01)
	char pad_543[0x5]; // 0x543(0x05)
	double OpacityOverrideValue; // 0x548(0x08)
	struct FLinearColor RarityColor; // 0x550(0x10)
	bool HasPlayedNMFiligreeAnim; // 0x560(0x01)
	bool StopHoverForNightMarket; // 0x561(0x01)

	void PlayUnHoverAnim_NightMarket(); // Function WBP_Panel_StoreItemBackground.WBP_Panel_StoreItemBackground_C.PlayUnHoverAnim_NightMarket // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayHoverAnim_NightMarket(); // Function WBP_Panel_StoreItemBackground.WBP_Panel_StoreItemBackground_C.PlayHoverAnim_NightMarket // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBackgroundImage(struct UTexture2D* BackgroundImage); // Function WBP_Panel_StoreItemBackground.WBP_Panel_StoreItemBackground_C.SetBackgroundImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MaterialTint(); // Function WBP_Panel_StoreItemBackground.WBP_Panel_StoreItemBackground_C.MaterialTint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayReleaseAnim(); // Function WBP_Panel_StoreItemBackground.WBP_Panel_StoreItemBackground_C.PlayReleaseAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayPressAnim(); // Function WBP_Panel_StoreItemBackground.WBP_Panel_StoreItemBackground_C.PlayPressAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateBorderMaterial(); // Function WBP_Panel_StoreItemBackground.WBP_Panel_StoreItemBackground_C.CreateBorderMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateColor(struct FLinearColor ColorAndOpacity); // Function WBP_Panel_StoreItemBackground.WBP_Panel_StoreItemBackground_C.UpdateColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayUnhoverAnim(); // Function WBP_Panel_StoreItemBackground.WBP_Panel_StoreItemBackground_C.PlayUnhoverAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayHoverAnim(); // Function WBP_Panel_StoreItemBackground.WBP_Panel_StoreItemBackground_C.PlayHoverAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_StoreItemBackground.WBP_Panel_StoreItemBackground_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_StoreItemBackground(int32_t EntryPoint); // Function WBP_Panel_StoreItemBackground.WBP_Panel_StoreItemBackground_C.ExecuteUbergraph_WBP_Panel_StoreItemBackground // (Final|UbergraphFunction) // @ game+0x1af5410
};

