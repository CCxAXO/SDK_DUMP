// WidgetBlueprintGeneratedClass shopItemsUltimate.shopItemsUltimate_C
// Size: 0x3f0 (Inherited: 0x318)
struct UshopItemsUltimate_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Ani_hover_CantAfford; // 0x320(0x08)
	struct UWidgetAnimation* Ani_hover; // 0x328(0x08)
	struct USizeBox* AbilityCharges; // 0x330(0x08)
	struct UTextBlock* armorPoolValue; // 0x338(0x08)
	struct UImage* chargeDot1; // 0x340(0x08)
	struct UImage* chargeDot2; // 0x348(0x08)
	struct UImage* chargeDot3; // 0x350(0x08)
	struct UImage* chargeDot4; // 0x358(0x08)
	struct UVerticalBox* chargeDotContainer; // 0x360(0x08)
	struct UCorners_C* Corners; // 0x368(0x08)
	struct UImage* Fill; // 0x370(0x08)
	struct UImage* fill_Owned; // 0x378(0x08)
	struct UImage* Frame; // 0x380(0x08)
	struct UImage* Frame_Owned; // 0x388(0x08)
	struct UImage* Icon; // 0x390(0x08)
	struct UMenuAnchor* Prompt_Tooltip; // 0x398(0x08)
	struct UBorder* RequestedBorder; // 0x3a0(0x08)
	struct UTextBlock* RequestedText; // 0x3a8(0x08)
	struct UTextBlock* txt_ItemName; // 0x3b0(0x08)
	struct UTextBlock* txt_ItemPrice; // 0x3b8(0x08)
	struct UShopItemDetailPanel* ItemDetailPreview; // 0x3c0(0x08)
	struct UShopPurchasableModel* Model; // 0x3c8(0x08)
	struct UInventorySlotModel* InventorySlotModel; // 0x3d0(0x08)
	struct UShopPlayerModel* PlayerModel; // 0x3d8(0x08)
	enum class EAresItemSlot TargetSlot; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct UTexture* ultAbilityIcon; // 0x3e8(0x08)

	void canBuyWhenAlreadyOwned(bool& canBuyWhenAlreadyOwned); // Function shopItemsUltimate.shopItemsUltimate_C.canBuyWhenAlreadyOwned // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void canRemove(bool& canRemove); // Function shopItemsUltimate.shopItemsUltimate_C.canRemove // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetAbilityItemPrice(struct UInventorySlotModel* Inventory Slot); // Function shopItemsUltimate.shopItemsUltimate_C.GetAbilityItemPrice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void setChargeDots(struct UInventorySlotModel* Inventory Slot); // Function shopItemsUltimate.shopItemsUltimate_C.setChargeDots // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void setIndividualChargeDot(struct UImage* Charge Image test, int32_t Charge Position, int32_t Current Charges, int32_t Max Charges); // Function shopItemsUltimate.shopItemsUltimate_C.setIndividualChargeDot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UltimateItemStates(); // Function shopItemsUltimate.shopItemsUltimate_C.UltimateItemStates // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateItemDisplayFromMakeGunRequest(bool ShouldDisplay); // Function shopItemsUltimate.shopItemsUltimate_C.UpdateItemDisplayFromMakeGunRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* On_Prompt_Tooltip_GetMenuContent_1(); // Function shopItemsUltimate.shopItemsUltimate_C.On_Prompt_Tooltip_GetMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void actionTooltip(); // Function shopItemsUltimate.shopItemsUltimate_C.actionTooltip // (Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	struct FLinearColor ownedAffordedOpacity(); // Function shopItemsUltimate.shopItemsUltimate_C.ownedAffordedOpacity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	enum class ESlateVisibility sellButtonVisibility(); // Function shopItemsUltimate.shopItemsUltimate_C.sellButtonVisibility // (HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	struct FText getItemPrice(); // Function shopItemsUltimate.shopItemsUltimate_C.getItemPrice // (HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Construct(); // Function shopItemsUltimate.shopItemsUltimate_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function shopItemsUltimate.shopItemsUltimate_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function shopItemsUltimate.shopItemsUltimate_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void ModelUpdated(); // Function shopItemsUltimate.shopItemsUltimate_C.ModelUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GotCharacterData(struct UCharacterHandle* CharacterHandle); // Function shopItemsUltimate.shopItemsUltimate_C.GotCharacterData // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_shopItemsUltimate(int32_t EntryPoint); // Function shopItemsUltimate.shopItemsUltimate_C.ExecuteUbergraph_shopItemsUltimate // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

