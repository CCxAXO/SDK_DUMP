// WidgetBlueprintGeneratedClass WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C
// Size: 0x1c19 (Inherited: 0x1b70)
struct UWBP_Button_ContentTileBase_C : ULobbyContentButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b70(0x08)
	struct UVM_SingleMatMenuTile_C* TileButtonMaterialViewmodel; // 0x1b78(0x08)
	bool DefaultEnabledState; // 0x1b80(0x01)
	bool UseHoldAction; // 0x1b81(0x01)
	bool IsFocused; // 0x1b82(0x01)
	char pad_1B83[0x5]; // 0x1b83(0x05)
	struct FText DefaultFooter; // 0x1b88(0x18)
	struct FText DefaultSecondaryText; // 0x1ba0(0x18)
	struct FText DefaultText; // 0x1bb8(0x18)
	struct UTexture* DefaultOptionIcon; // 0x1bd0(0x08)
	struct UTexture* DefaultOptionBackground; // 0x1bd8(0x08)
	double Anim_MarginCut; // 0x1be0(0x08)
	double PatternSize; // 0x1be8(0x08)
	struct UTexture* DefaultOptionFrontImage; // 0x1bf0(0x08)
	double OutlineProportion; // 0x1bf8(0x08)
	double NotchProportion; // 0x1c00(0x08)
	struct UBP_ContentTileTall_ListItem_C* ContentTileData; // 0x1c08(0x08)
	struct UVM_ContentTile_ListItem_C* ContentTileViewmodel; // 0x1c10(0x08)
	bool UseTextAnimation; // 0x1c18(0x01)

	struct FString GetListItemTelemetryTarget(); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayUnhoveredAnimation(); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.PlayUnhoveredAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayHoveredAnimation(); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.PlayHoveredAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShouldShowFeaturedElements(bool& bShouldShow); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.ShouldShowFeaturedElements // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateFeaturedTileElements(); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.UpdateFeaturedTileElements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ToggleIsActive(); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.ToggleIsActive // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateDescriptionVisibility(); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.UpdateDescriptionVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateFooterVisibility(); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.UpdateFooterVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetupDesignPreview(); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.SetupDesignPreview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleContentFooterChanged(struct FText NewOptionFooter); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.HandleContentFooterChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetupMaterialViewModel(struct UBP_ContentTileTall_ListItem_C* ContentData); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.SetupMaterialViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleContentInvalidateChanged(bool NewInvalidate); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.HandleContentInvalidateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleContentbackgroundChanged(struct UTexture* NewOptionBackground); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.HandleContentbackgroundChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleContentIconChanged(struct UTexture* NewOptionIcon); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.HandleContentIconChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleContentDisabledDescriptionChanged(struct FText NewLockedDescription); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.HandleContentDisabledDescriptionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleContentDescriptionChanged(struct FText NewOptionDescription); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.HandleContentDescriptionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleContentEnabledChanged(bool NewIsEnabled); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.HandleContentEnabledChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleContentActiveChanged(bool NewActiveState); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.HandleContentActiveChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetupContentTileViewModel(struct UBP_ContentTileTall_ListItem_C* ContentData); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.SetupContentTileViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleContentNameChanged(struct FText NewOptionName); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.HandleContentNameChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetViewModelDataAndSetup(struct UObject* Object); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.SetViewModelDataAndSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetAssetID(struct FString& AssetID); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.GetAssetID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetPatternSize(double PatternSize); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.SetPatternSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHoveredState(bool IsHovered); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.SetHoveredState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetupListItem(struct UObject* Object); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.SetupListItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToMaterialViewModel(bool Bind); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.BindToMaterialViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToContentViewModel(bool Bind); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.BindToContentViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateFocusDisplayedElements(); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.UpdateFocusDisplayedElements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateHoveredElements(); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.UpdateHoveredElements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateMaterialViewModel(); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.CreateMaterialViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateContentTileViewModel(); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.CreateContentTileViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateViewModels(); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.CreateViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnEntryReleased(); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnActionProgress(float HeldPercent); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Event On Set Data Directly(struct UObject* Object); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.Event On Set Data Directly // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnHovered(); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnUnhovered(); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_SetIsFeatured(bool bNewValue); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.BP_SetIsFeatured // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_ContentTileBase(int32_t EntryPoint); // Function WBP_Button_ContentTileBase.WBP_Button_ContentTileBase_C.ExecuteUbergraph_WBP_Button_ContentTileBase // (Final|UbergraphFunction) // @ game+0x1b42740
};

