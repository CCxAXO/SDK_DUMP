// WidgetBlueprintGeneratedClass WBP_Panel_ShopItemAbility.WBP_Panel_ShopItemAbility_C
// Size: 0x25c1 (Inherited: 0x24d0)
struct UWBP_Panel_ShopItemAbility_C : UWBP_Panel_ShopItems_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x24d0(0x08)
	struct UTexture* DisplayIcon; // 0x24d8(0x08)
	struct UTexture2D* NewVar_0_1; // 0x24e0(0x08)
	struct UTexture2D* Texture2D; // 0x24e8(0x08)
	struct FSlateBrush IconBrush_1; // 0x24f0(0xd0)
	bool WasLastClickRightMouseButton; // 0x25c0(0x01)

	void handleMouseDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent, struct FEventReply& Reply); // Function WBP_Panel_ShopItemAbility.WBP_Panel_ShopItemAbility_C.handleMouseDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* On_Prompt_Tooltip_GetMenuContent_1(); // Function WBP_Panel_ShopItemAbility.WBP_Panel_ShopItemAbility_C.On_Prompt_Tooltip_GetMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void getAbilitySlot(enum class ECharacterAbilitySlot& AbilitySlot); // Function WBP_Panel_ShopItemAbility.WBP_Panel_ShopItemAbility_C.getAbilitySlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	struct FSlateBrush getWeaponIcon(); // Function WBP_Panel_ShopItemAbility.WBP_Panel_ShopItemAbility_C.getWeaponIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function WBP_Panel_ShopItemAbility.WBP_Panel_ShopItemAbility_C.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CharacterUIDataLoaded(struct UCharacterHandle* CharacterHandle); // Function WBP_Panel_ShopItemAbility.WBP_Panel_ShopItemAbility_C.CharacterUIDataLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_ShopItemAbility.WBP_Panel_ShopItemAbility_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnDoubleClicked(); // Function WBP_Panel_ShopItemAbility.WBP_Panel_ShopItemAbility_C.BP_OnDoubleClicked // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_ShopItemAbility(int32_t EntryPoint); // Function WBP_Panel_ShopItemAbility.WBP_Panel_ShopItemAbility_C.ExecuteUbergraph_WBP_Panel_ShopItemAbility // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

