// BlueprintGeneratedClass ShopFunctionLibrary_Gamepad.ShopFunctionLibrary_Gamepad_C
// Size: 0x30 (Inherited: 0x30)
struct UShopFunctionLibrary_Gamepad_C : UBlueprintFunctionLibrary {

	void GetShopInputActionStrings(struct UShopPurchasableModel* shopModel, struct UInventorySlotModel* InventorySlotModel, struct UShopPlayerModel* PlayerModel, struct UObject* __WorldContext, struct FText& SecondaryActionOut, struct FText& PrimaryActionOut); // Function ShopFunctionLibrary_Gamepad.ShopFunctionLibrary_Gamepad_C.GetShopInputActionStrings // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateShopAbilityIcons(struct UCharacterUIData* UIData, struct TArray<struct UImage*>& CharacterAbilityImageArray, struct UObject* __WorldContext); // Function ShopFunctionLibrary_Gamepad.ShopFunctionLibrary_Gamepad_C.UpdateShopAbilityIcons // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateShopAbilitiesAvailability(struct UShopPlayerModel* PlayerModel, struct TArray<struct UImage*>& CharacterAbilityImageArray, struct UObject* __WorldContext); // Function ShopFunctionLibrary_Gamepad.ShopFunctionLibrary_Gamepad_C.UpdateShopAbilitiesAvailability // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

