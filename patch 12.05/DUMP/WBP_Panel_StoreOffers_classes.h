// WidgetBlueprintGeneratedClass WBP_Panel_StoreOffers.WBP_Panel_StoreOffers_C
// Size: 0x428 (Inherited: 0x3e0)
struct UWBP_Panel_StoreOffers_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UOverlay* PlayerOwnsEverythingPanel; // 0x3e8(0x08)
	struct UTextBlock* PlayerOwnsEverythingText; // 0x3f0(0x08)
	struct UWBP_List_Base_C* WBP_List_Base; // 0x3f8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x400(0x08)
	struct UVM_StoreOfferList_C* OfferListViewModel; // 0x408(0x08)
	int32_t ExpectedOffersCount; // 0x410(0x04)
	enum class Enum_OffersType OffersType; // 0x414(0x01)
	char pad_415[0x3]; // 0x415(0x03)
	struct FMulticastInlineDelegate RegisterSortProvider; // 0x418(0x10)

	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_StoreOffers.WBP_Panel_StoreOffers_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void OnOfferObjectsChanged(struct TArray<struct UObject*>& OfferObjects, enum class Enum_OffersType NewParam); // Function WBP_Panel_StoreOffers.WBP_Panel_StoreOffers_C.OnOfferObjectsChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Bind Events(bool Bind); // Function WBP_Panel_StoreOffers.WBP_Panel_StoreOffers_C.Bind Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModel(); // Function WBP_Panel_StoreOffers.WBP_Panel_StoreOffers_C.InitViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_StoreOffers.WBP_Panel_StoreOffers_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_StoreOffers.WBP_Panel_StoreOffers_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_StoreOffers.WBP_Panel_StoreOffers_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_StoreOffers.WBP_Panel_StoreOffers_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_StoreOffers_WBP_List_Base_K2Node_ComponentBoundEvent_2_OnEntryObjectAndWidgetChanged__DelegateSignature(struct UObject* EntryObject, struct UUserWidget* EntryWidget); // Function WBP_Panel_StoreOffers.WBP_Panel_StoreOffers_C.BndEvt__WBP_Panel_StoreOffers_WBP_List_Base_K2Node_ComponentBoundEvent_2_OnEntryObjectAndWidgetChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_StoreOffers.WBP_Panel_StoreOffers_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_StoreOffers(int32_t EntryPoint); // Function WBP_Panel_StoreOffers.WBP_Panel_StoreOffers_C.ExecuteUbergraph_WBP_Panel_StoreOffers // (Final|UbergraphFunction) // @ game+0x1af5410
	void RegisterSortProvider__DelegateSignature(); // Function WBP_Panel_StoreOffers.WBP_Panel_StoreOffers_C.RegisterSortProvider__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

