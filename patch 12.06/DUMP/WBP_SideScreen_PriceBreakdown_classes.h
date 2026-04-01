// WidgetBlueprintGeneratedClass WBP_SideScreen_PriceBreakdown.WBP_SideScreen_PriceBreakdown_C
// Size: 0x600 (Inherited: 0x520)
struct UWBP_SideScreen_PriceBreakdown_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UImage* BlueImage; // 0x528(0x08)
	struct UAresCommonText* BundleName; // 0x530(0x08)
	struct UImage* DiscountCurrencyIcon; // 0x538(0x08)
	struct UAresCommonText* DiscountPrice; // 0x540(0x08)
	struct UAresCommonText* FinalBundleCost; // 0x548(0x08)
	struct UImage* FinalCostCurrencyIcon; // 0x550(0x08)
	struct UImage* Image; // 0x558(0x08)
	struct UImage* Image_123; // 0x560(0x08)
	struct UImage* Image_Background; // 0x568(0x08)
	struct UImage* OriginalCostCurrencyIcon; // 0x570(0x08)
	struct UAresCommonText* OriginalPrice; // 0x578(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x580(0x08)
	struct UUniversalHorizontalDivider04_C* UniversalHorizontalDivider04; // 0x588(0x08)
	struct UUniversalHorizontalDivider04_C* UniversalHorizontalDivider04_103; // 0x590(0x08)
	struct UWBP_List_Base_C* WBP_List_Base; // 0x598(0x08)
	struct UWBP_Template_SideScreenContent_C* WBP_Template_SideScreenContent; // 0x5a0(0x08)
	struct UVM_InventoryItem_C* VM Inventory Item; // 0x5a8(0x08)
	struct UVM_Reward_C* VM Reward; // 0x5b0(0x08)
	struct UVM_StoreOffer_C* VM Store Offer; // 0x5b8(0x08)
	struct UVM_StorefrontItem_C* VM Storefront Item; // 0x5c0(0x08)
	struct UVM_SideScreen_PriceBreakdown_C* VM Side Screen Price Breakdown; // 0x5c8(0x08)
	double ScrollSpeed; // 0x5d0(0x08)
	struct FAresConditionalInputAction ScrollAction; // 0x5d8(0x28)

	void ScrollCalculation(double DeltaTime); // Function WBP_SideScreen_PriceBreakdown.WBP_SideScreen_PriceBreakdown_C.ScrollCalculation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitSortProvider(); // Function WBP_SideScreen_PriceBreakdown.WBP_SideScreen_PriceBreakdown_C.InitSortProvider // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleCostListChanged(struct TArray<struct FOfferCostWithDiscountInfo>& Cost List); // Function WBP_SideScreen_PriceBreakdown.WBP_SideScreen_PriceBreakdown_C.HandleCostListChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleDisplayNameChanged(struct FText DisplayName); // Function WBP_SideScreen_PriceBreakdown.WBP_SideScreen_PriceBreakdown_C.HandleDisplayNameChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleOfferDTOChanged(struct UOfferDTO* OfferDTO); // Function WBP_SideScreen_PriceBreakdown.WBP_SideScreen_PriceBreakdown_C.HandleOfferDTOChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_SideScreen_PriceBreakdown.WBP_SideScreen_PriceBreakdown_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_SideScreen_PriceBreakdown.WBP_SideScreen_PriceBreakdown_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_SideScreen_PriceBreakdown.WBP_SideScreen_PriceBreakdown_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_SideScreen_PriceBreakdown.WBP_SideScreen_PriceBreakdown_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_SideScreen_PriceBreakdown.WBP_SideScreen_PriceBreakdown_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_SideScreen_PriceBreakdown.WBP_SideScreen_PriceBreakdown_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_SideScreen_PriceBreakdown_WBP_List_Base_K2Node_ComponentBoundEvent_0_OnEntryObjectAndWidgetChanged__DelegateSignature(struct UObject* EntryObject, struct UUserWidget* EntryWidget); // Function WBP_SideScreen_PriceBreakdown.WBP_SideScreen_PriceBreakdown_C.BndEvt__WBP_SideScreen_PriceBreakdown_WBP_List_Base_K2Node_ComponentBoundEvent_0_OnEntryObjectAndWidgetChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Init from Nav Args(struct TMap<struct FName, struct FWildcard> InParameters); // Function WBP_SideScreen_PriceBreakdown.WBP_SideScreen_PriceBreakdown_C.Init from Nav Args // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_SideScreen_PriceBreakdown_SharedBackButton_K2Node_ComponentBoundEvent_2_OnBackRequested__DelegateSignature(); // Function WBP_SideScreen_PriceBreakdown.WBP_SideScreen_PriceBreakdown_C.BndEvt__WBP_SideScreen_PriceBreakdown_SharedBackButton_K2Node_ComponentBoundEvent_2_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_SideScreen_PriceBreakdown(int32_t EntryPoint); // Function WBP_SideScreen_PriceBreakdown.WBP_SideScreen_PriceBreakdown_C.ExecuteUbergraph_WBP_SideScreen_PriceBreakdown // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

