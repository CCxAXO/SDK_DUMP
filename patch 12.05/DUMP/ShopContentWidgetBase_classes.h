// WidgetBlueprintGeneratedClass ShopContentWidgetBase.ShopContentWidgetBase_C
// Size: 0x539 (Inherited: 0x508)
struct UShopContentWidgetBase_C : UShopContentWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x508(0x08)
	struct UShopPlayerModel* PlayerModel; // 0x510(0x08)
	bool AddedArmor; // 0x518(0x01)
	bool bNeedsFullRefresh; // 0x519(0x01)
	bool bIncompleteAbilityInitialization; // 0x51a(0x01)
	bool bNeedsAbilityRefresh; // 0x51b(0x01)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct APawn* CachedDesiredClass; // 0x520(0x08)
	struct FMulticastInlineDelegate OnCloseShopDispatch; // 0x528(0x10)
	bool bAddedAbility; // 0x538(0x01)

	void GetItemContainerChildren(struct UWidget* itemContainer, struct TArray<struct UWidget*>& Children); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.GetItemContainerChildren // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetAllItemWidgets(struct TSoftClassPtr<UObject> ItemType, bool OfType, struct TArray<struct Uitem_C*>& OutItemWidgets); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.GetAllItemWidgets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void FinishArmorInitialization(bool WasArmorAdded); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.FinishArmorInitialization // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void FinishAbilityInitialization(bool WasAnyAbilityAdded); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.FinishAbilityInitialization // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddAbilityToContainer(struct UInventorySlotModel* InventorySlotModel, bool& WasAdded); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.AddAbilityToContainer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetOrCreateCategoriesArmor(struct FName Category, struct UShopArmorCategoryContainer*& ArmorContaner); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.GetOrCreateCategoriesArmor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetOrCreateCategoriesSlot2(struct FName Category, struct UShopSidearmsCategoryContainer*& SideArmContainer); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.GetOrCreateCategoriesSlot2 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetOrCreateCategoriesSlot1(struct FName Category, struct UShopItemCategoryContainer*& itemContainer); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.GetOrCreateCategoriesSlot1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void loadoutUpdated(); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.loadoutUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPurchasables(struct TArray<struct UShopPurchasableModel*>& Purchasables); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.SetPurchasables // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSelfPlayer(struct UShopPlayerModel* Player); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.SetSelfPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTeammatePlayerModels(struct TArray<struct UShopPlayerModel*>& TeammateShopPlayerModels); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.SetTeammatePlayerModels // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandlePlayerModelUpdated(); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.HandlePlayerModelUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddAbilites(); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.AddAbilites // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ClearAbilities(); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.ClearAbilities // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDirty(); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.SetDirty // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ClearWeapons(); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.ClearWeapons // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ClearArmor(); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.ClearArmor // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddArmor(struct TArray<struct UShopPurchasableModel*>& Purchasables); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.AddArmor // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddPrimaryWeapons(struct TArray<struct UShopPurchasableModel*>& Purchasables); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.AddPrimaryWeapons // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddSidearms(struct TArray<struct UShopPurchasableModel*>& Purchasables); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.AddSidearms // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ShopContentWidgetBase(int32_t EntryPoint); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.ExecuteUbergraph_ShopContentWidgetBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnCloseShopDispatch__DelegateSignature(); // Function ShopContentWidgetBase.ShopContentWidgetBase_C.OnCloseShopDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

