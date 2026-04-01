// WidgetBlueprintGeneratedClass WBP_Panel_PromoTile.WBP_Panel_PromoTile_C
// Size: 0x1c10 (Inherited: 0x1ae0)
struct UWBP_Panel_PromoTile_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* PressAnim; // 0x1ae8(0x08)
	struct UWidgetAnimation* ReleaseAnim; // 0x1af0(0x08)
	struct UAresCommonText* AdditionalText; // 0x1af8(0x08)
	struct USizeBox* DividerSizeBox; // 0x1b00(0x08)
	struct UImage* LeftArrow; // 0x1b08(0x08)
	struct UImage* LoadingImage_2; // 0x1b10(0x08)
	struct UOverlay* Main_Overlay; // 0x1b18(0x08)
	struct UAresCommonText* PrimaryTitle; // 0x1b20(0x08)
	struct UScaleBox* PrimaryTitleScaleBox; // 0x1b28(0x08)
	struct UImage* RightArrow; // 0x1b30(0x08)
	struct UAresCommonText* SecondaryTitle; // 0x1b38(0x08)
	struct UOverlay* SecondaryTitleOverlay; // 0x1b40(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_4; // 0x1b48(0x08)
	struct UVM_Interface_PromoTile_C* PromoTileViewModelClass; // 0x1b50(0x08)
	struct UVM_Interface_PromoTile_C* PromoTileViewModel; // 0x1b58(0x08)
	bool UseDesignFieldsAtRuntime; // 0x1b60(0x01)
	char pad_1B61[0x7]; // 0x1b61(0x07)
	struct UCommonTextStyle* PrimaryTitleStyle; // 0x1b68(0x08)
	struct FText PrimaryTextField; // 0x1b70(0x18)
	struct UCommonTextStyle* SecondaryTitleStyle; // 0x1b88(0x08)
	struct FText SecondaryTextField; // 0x1b90(0x18)
	struct UCommonTextStyle* AdditionalTextStyle; // 0x1ba8(0x08)
	struct FText AdditionalTextField; // 0x1bb0(0x18)
	struct UTexture2D* BackgroundImageField; // 0x1bc8(0x08)
	struct FText InputActionHintOverride; // 0x1bd0(0x18)
	bool ShowDivider; // 0x1be8(0x01)
	bool ShowArrows; // 0x1be9(0x01)
	char pad_1BEA[0x2]; // 0x1bea(0x02)
	struct FMargin PrimaryTitlePadding; // 0x1bec(0x10)
	struct FMargin SecondaryTitlePadding; // 0x1bfc(0x10)
	enum class EHorizontalAlignment PrimaryTitleHorizontalAlignment; // 0x1c0c(0x01)
	enum class EVerticalAlignment PrimaryTitleVerticalAlignment; // 0x1c0d(0x01)
	enum class EHorizontalAlignment SecondaryTitleHorizontalAlignment; // 0x1c0e(0x01)
	enum class EVerticalAlignment SecondaryTitleVerticalAlignment; // 0x1c0f(0x01)

	void SetPromoTileLayout(); // Function WBP_Panel_PromoTile.WBP_Panel_PromoTile_C.SetPromoTileLayout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleAdditionalTextChanged(struct FText SecondaryText); // Function WBP_Panel_PromoTile.WBP_Panel_PromoTile_C.HandleAdditionalTextChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleOnClicked(); // Function WBP_Panel_PromoTile.WBP_Panel_PromoTile_C.HandleOnClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleBackgroundImageChanged(struct UTexture2D* BackgroundImage); // Function WBP_Panel_PromoTile.WBP_Panel_PromoTile_C.HandleBackgroundImageChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleHasValidDataChanged(bool NewValue); // Function WBP_Panel_PromoTile.WBP_Panel_PromoTile_C.HandleHasValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePrimaryTextChanged(struct FText PrimaryText); // Function WBP_Panel_PromoTile.WBP_Panel_PromoTile_C.HandlePrimaryTextChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleSecondaryTextChanged(struct FText SecondaryText); // Function WBP_Panel_PromoTile.WBP_Panel_PromoTile_C.HandleSecondaryTextChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Panel_PromoTile.WBP_Panel_PromoTile_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_Panel_PromoTile.WBP_Panel_PromoTile_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_PromoTile.WBP_Panel_PromoTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_PromoTile.WBP_Panel_PromoTile_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_PromoTile.WBP_Panel_PromoTile_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnClicked(); // Function WBP_Panel_PromoTile.WBP_Panel_PromoTile_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionPressed(); // Function WBP_Panel_PromoTile.WBP_Panel_PromoTile_C.BP_OnTransitionPressed // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionReleased(); // Function WBP_Panel_PromoTile.WBP_Panel_PromoTile_C.BP_OnTransitionReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PromoTile.WBP_Panel_PromoTile_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnHovered(); // Function WBP_Panel_PromoTile.WBP_Panel_PromoTile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnUnhovered(); // Function WBP_Panel_PromoTile.WBP_Panel_PromoTile_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnPressed(); // Function WBP_Panel_PromoTile.WBP_Panel_PromoTile_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnReleased(); // Function WBP_Panel_PromoTile.WBP_Panel_PromoTile_C.BP_OnReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PromoTile(int32_t EntryPoint); // Function WBP_Panel_PromoTile.WBP_Panel_PromoTile_C.ExecuteUbergraph_WBP_Panel_PromoTile // (Final|UbergraphFunction) // @ game+0x1b42740
};

