// WidgetBlueprintGeneratedClass shopItemAbilityRankup.shopItemAbilityRankup_C
// Size: 0x2290 (Inherited: 0x2214)
struct UshopItemAbilityRankup_C : Uitem_C {
	char pad_2214[0x4]; // 0x2214(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2218(0x08)
	struct UWidgetAnimation* Ani_hover_CantAfford; // 0x2220(0x08)
	struct UWidgetAnimation* Ani_hover; // 0x2228(0x08)
	struct UImage* Backing; // 0x2230(0x08)
	struct UBorder* buyButton; // 0x2238(0x08)
	struct UCorners_C* Corners; // 0x2240(0x08)
	struct UImage* Fill; // 0x2248(0x08)
	struct UImage* fill_Owned; // 0x2250(0x08)
	struct UImage* Frame; // 0x2258(0x08)
	struct UImage* Frame_Owned; // 0x2260(0x08)
	struct UImage* hover; // 0x2268(0x08)
	struct UImage* Icon; // 0x2270(0x08)
	struct UImage* Image_228; // 0x2278(0x08)
	struct UBorder* RequestedBorder; // 0x2280(0x08)
	struct UTextBlock* txt_ItemName; // 0x2288(0x08)

	void displayRankOnOffer(); // Function shopItemAbilityRankup.shopItemAbilityRankup_C.displayRankOnOffer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function shopItemAbilityRankup.shopItemAbilityRankup_C.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ItemStates(bool Condition); // Function shopItemAbilityRankup.shopItemAbilityRankup_C.ItemStates // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* On_Prompt_Tooltip_GetMenuContent_1(); // Function shopItemAbilityRankup.shopItemAbilityRankup_C.On_Prompt_Tooltip_GetMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FSlateBrush getWeaponIcon(); // Function shopItemAbilityRankup.shopItemAbilityRankup_C.getWeaponIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void actionTooltip(); // Function shopItemAbilityRankup.shopItemAbilityRankup_C.actionTooltip // (Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Construct(); // Function shopItemAbilityRankup.shopItemAbilityRankup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function shopItemAbilityRankup.shopItemAbilityRankup_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function shopItemAbilityRankup.shopItemAbilityRankup_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnModelUpdated(); // Function shopItemAbilityRankup.shopItemAbilityRankup_C.OnModelUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_shopItemAbilityRankup(int32_t EntryPoint); // Function shopItemAbilityRankup.shopItemAbilityRankup_C.ExecuteUbergraph_shopItemAbilityRankup // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

