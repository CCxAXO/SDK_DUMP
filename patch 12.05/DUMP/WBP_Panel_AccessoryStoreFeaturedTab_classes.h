// WidgetBlueprintGeneratedClass WBP_Panel_AccessoryStoreFeaturedTab.WBP_Panel_AccessoryStoreFeaturedTab_C
// Size: 0x400 (Inherited: 0x3e0)
struct UWBP_Panel_AccessoryStoreFeaturedTab_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_Panel_StoreOffers_C* WBP_Panel_StoreOffers; // 0x3e8(0x08)
	struct UVM_Order_C* VM_Order; // 0x3f0(0x08)
	struct UVM_AccessoryStoreScreen_C* VM_AccessoryStoreScreen; // 0x3f8(0x08)

	void HandleOfferObjectSelected(struct UObject* SelectedOfferObject, enum class Enum_OffersType OfferType); // Function WBP_Panel_AccessoryStoreFeaturedTab.WBP_Panel_AccessoryStoreFeaturedTab_C.HandleOfferObjectSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool Bind); // Function WBP_Panel_AccessoryStoreFeaturedTab.WBP_Panel_AccessoryStoreFeaturedTab_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModels(); // Function WBP_Panel_AccessoryStoreFeaturedTab.WBP_Panel_AccessoryStoreFeaturedTab_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_AccessoryStoreFeaturedTab.WBP_Panel_AccessoryStoreFeaturedTab_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_AccessoryStoreFeaturedTab.WBP_Panel_AccessoryStoreFeaturedTab_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_AccessoryStoreFeaturedTab(int32_t EntryPoint); // Function WBP_Panel_AccessoryStoreFeaturedTab.WBP_Panel_AccessoryStoreFeaturedTab_C.ExecuteUbergraph_WBP_Panel_AccessoryStoreFeaturedTab // (Final|UbergraphFunction) // @ game+0x1af5410
};

