// WidgetBlueprintGeneratedClass WBP_Panel_PreRoundShop.WBP_Panel_PreRoundShop_C
// Size: 0x589 (Inherited: 0x539)
struct UWBP_Panel_PreRoundShop_C : UShopContentWidgetBase_C {
	char pad_539[0x7]; // 0x539(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UWidgetAnimation* Anim_Outro_Unhooked; // 0x548(0x08)
	struct UWidgetAnimation* Anim_Intro; // 0x550(0x08)
	struct UOverlay* AbilitiesHeader; // 0x558(0x08)
	struct UImage* Image; // 0x560(0x08)
	struct UImage* Image_2; // 0x568(0x08)
	struct UImage* Image_165; // 0x570(0x08)
	struct UShopPlayerModel* PlayerModel_1; // 0x578(0x08)
	struct UWBP_Panel_TeamLoadout_C* TeamLoadoutList; // 0x580(0x08)
	bool Use NPEShop; // 0x588(0x01)

	void GetItemContainerChildren(struct UWidget* itemContainer, struct TArray<struct UWidget*>& Children); // Function WBP_Panel_PreRoundShop.WBP_Panel_PreRoundShop_C.GetItemContainerChildren // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UUserWidget* CreateShopWidgetFromData(struct APlayerController* OwningPlayer, struct UShopItemDetailPanel* ItemDetailPreview, struct UShopPurchasableModel* Model, struct UShopPlayerModel* PlayerModel, struct UInventorySlotModel* InventorySlotModel, struct UShopConfirmationToast* ShopConfirmationToast, enum class EAresItemSlot TargetSlot, bool bIsFavorite); // Function WBP_Panel_PreRoundShop.WBP_Panel_PreRoundShop_C.CreateShopWidgetFromData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void FinishAbilityInitialization(bool WasAnyAbilityAdded); // Function WBP_Panel_PreRoundShop.WBP_Panel_PreRoundShop_C.FinishAbilityInitialization // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCloseShop(); // Function WBP_Panel_PreRoundShop.WBP_Panel_PreRoundShop_C.OnCloseShop // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_PreRoundShop.WBP_Panel_PreRoundShop_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnOpenShop(); // Function WBP_Panel_PreRoundShop.WBP_Panel_PreRoundShop_C.OnOpenShop // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPlayerStateChanged(struct AAresPlayerStateBase* NewValue); // Function WBP_Panel_PreRoundShop.WBP_Panel_PreRoundShop_C.OnPlayerStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnActiveMissionChanged(struct AMission* ActiveMission); // Function WBP_Panel_PreRoundShop.WBP_Panel_PreRoundShop_C.OnActiveMissionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnObjectiveStatusChanged(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus); // Function WBP_Panel_PreRoundShop.WBP_Panel_PreRoundShop_C.OnObjectiveStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_PreRoundShop(int32_t EntryPoint); // Function WBP_Panel_PreRoundShop.WBP_Panel_PreRoundShop_C.ExecuteUbergraph_WBP_Panel_PreRoundShop // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

