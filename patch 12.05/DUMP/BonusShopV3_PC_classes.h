// WidgetBlueprintGeneratedClass BonusShopV3_PC.BonusShopV3_PC_C
// Size: 0x420 (Inherited: 0x348)
struct UBonusShopV3_PC_C : UBonusShop_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* OffersIntro; // 0x350(0x08)
	struct UWidgetAnimation* BgIntro; // 0x358(0x08)
	struct UWidgetAnimation* BgAmbient; // 0x360(0x08)
	struct UWidgetSwitcher* BonusShopStateSwitcher; // 0x368(0x08)
	struct UBonusShop_Header_C* HeaderPanel; // 0x370(0x08)
	struct UMenuOrnament_C* MenuOrnament; // 0x378(0x08)
	struct UImage* NM23_MAT_Glow; // 0x380(0x08)
	struct UImage* NME_MAT_Ambient; // 0x388(0x08)
	struct UImage* NME_MAT_WipeBlur; // 0x390(0x08)
	struct UImage* NME_MAT_WipeSolid; // 0x398(0x08)
	struct UImage* NME_TX_Base; // 0x3a0(0x08)
	struct UCanvasPanel* OffersAvailablePanel; // 0x3a8(0x08)
	struct UBonusShop_Offers_C* OffersPanel; // 0x3b0(0x08)
	struct UCanvasPanel* PlayerOwnsEverythingPanel; // 0x3b8(0x08)
	struct UTextBlock* PlayerOwnsEverythingText; // 0x3c0(0x08)
	struct UImage* Red; // 0x3c8(0x08)
	struct UCanvasPanel* ShopNotAvailablePanel; // 0x3d0(0x08)
	struct UTextBlock* ShopNotAvailableText; // 0x3d8(0x08)
	struct UImage* Vignette; // 0x3e0(0x08)
	struct FAresMainMenuNavBarData NavBarData; // 0x3e8(0x28)
	struct UMaterialInstanceDynamic* Reflection; // 0x410(0x08)
	struct UMaterialInstanceDynamic* Light01; // 0x418(0x08)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function BonusShopV3_PC.BonusShopV3_PC_C.GetNavBarData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	bool HandleBackRequest(); // Function BonusShopV3_PC.BonusShopV3_PC_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayItemDetails(struct FText DiscountPercentText, struct UStoreOffer* Offer, int32_t DiscountedPrice, struct UBonusStoreOfferViewModel* BonusOffer); // Function BonusShopV3_PC.BonusShopV3_PC_C.DisplayItemDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowShopNotAvailablePanel(); // Function BonusShopV3_PC.BonusShopV3_PC_C.ShowShopNotAvailablePanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowPlayerOwnsEverythingPanel(); // Function BonusShopV3_PC.BonusShopV3_PC_C.ShowPlayerOwnsEverythingPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowOffersAvailablePanel(); // Function BonusShopV3_PC.BonusShopV3_PC_C.ShowOffersAvailablePanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function BonusShopV3_PC.BonusShopV3_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BonusShopV3_PC(int32_t EntryPoint); // Function BonusShopV3_PC.BonusShopV3_PC_C.ExecuteUbergraph_BonusShopV3_PC // (Final|UbergraphFunction) // @ game+0x1af5410
};

