// WidgetBlueprintGeneratedClass AccessoryStorefront.AccessoryStorefront_C
// Size: 0x390 (Inherited: 0x318)
struct UAccessoryStorefront_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* DiamondLarge; // 0x320(0x08)
	struct UImage* DiamondMedium; // 0x328(0x08)
	struct UImage* DiamondSmall; // 0x330(0x08)
	struct UOverlay* Error; // 0x338(0x08)
	struct URichTextBlock* FeatureDescriptionRichText; // 0x340(0x08)
	struct UImage* Image_5; // 0x348(0x08)
	struct UImage* LineRight; // 0x350(0x08)
	struct UVerticalBox* Offers; // 0x358(0x08)
	struct UHorizontalBox* PlayerOffersBox; // 0x360(0x08)
	struct UVerticalBox* RotatingOffersPanel; // 0x368(0x08)
	struct UStoreCountdownTimer_C* RotatingOffersTimer; // 0x370(0x08)
	struct UImage* StaticBackground; // 0x378(0x08)
	struct UWidgetSwitcher* Switcher; // 0x380(0x08)
	struct UTextBlock* Title; // 0x388(0x08)

	void Init(); // Function AccessoryStorefront.AccessoryStorefront_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Accessory Offers(struct TArray<struct UAccessoryStoreOfferViewModel*>& AccessoryStoreOffers); // Function AccessoryStorefront.AccessoryStorefront_C.Update Accessory Offers // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Bind Offers Events(); // Function AccessoryStorefront.AccessoryStorefront_C.Bind Offers Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Offers Expiration(struct FDateTime& NewExpirationTime); // Function AccessoryStorefront.AccessoryStorefront_C.Update Offers Expiration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Add Limited Offers To Box(struct TArray<struct UUserWidget*>& OfferWidgets); // Function AccessoryStorefront.AccessoryStorefront_C.Add Limited Offers To Box // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function AccessoryStorefront.AccessoryStorefront_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnAccessoryStoreEnabledChanged_Event_1(); // Function AccessoryStorefront.AccessoryStorefront_C.OnAccessoryStoreEnabledChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AccessoryStorefront(int32_t EntryPoint); // Function AccessoryStorefront.AccessoryStorefront_C.ExecuteUbergraph_AccessoryStorefront // (Final|UbergraphFunction) // @ game+0x1af5410
};

