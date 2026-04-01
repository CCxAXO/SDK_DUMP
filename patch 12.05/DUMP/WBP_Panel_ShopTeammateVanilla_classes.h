// WidgetBlueprintGeneratedClass WBP_Panel_ShopTeammateVanilla.WBP_Panel_ShopTeammateVanilla_C
// Size: 0x458 (Inherited: 0x3a8)
struct UWBP_Panel_ShopTeammateVanilla_C : UshopTeammateVanilla_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a8(0x08)
	struct UWidgetAnimation* Ani_RequestButtonHover; // 0x3b0(0x08)
	struct UWidgetAnimation* Ani_NewRequest_v3; // 0x3b8(0x08)
	struct UWidgetAnimation* Ani_RequestFulfilled_v3; // 0x3c0(0x08)
	struct UImage* Ability1; // 0x3c8(0x08)
	struct UImage* Ability2; // 0x3d0(0x08)
	struct UImage* Ability3; // 0x3d8(0x08)
	struct UImage* Ability4; // 0x3e0(0x08)
	struct UTextBlock* Request_Txt; // 0x3e8(0x08)
	struct UImage* Requested_Border_VFX; // 0x3f0(0x08)
	struct UButton* requestFulfillButton; // 0x3f8(0x08)
	struct UTextBlock* teammateMoney; // 0x400(0x08)
	struct UCharacterUIData* UIData; // 0x408(0x08)
	struct TArray<struct UImage*> Character Ability Image Array; // 0x410(0x10)
	struct FSlateColor CanPurchaseTextColor; // 0x420(0x14)
	struct FSlateColor CannotPurchaseTextColor; // 0x434(0x14)
	bool BoundToOwnerPlayerModelUpdated; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct UMaterialInstanceDynamic* RequestedOutlineMID; // 0x450(0x08)

	void UpdateTeammateMoney(); // Function WBP_Panel_ShopTeammateVanilla.WBP_Panel_ShopTeammateVanilla_C.UpdateTeammateMoney // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetRequestButtonStates(); // Function WBP_Panel_ShopTeammateVanilla.WBP_Panel_ShopTeammateVanilla_C.SetRequestButtonStates // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateTeammateAbilities(); // Function WBP_Panel_ShopTeammateVanilla.WBP_Panel_ShopTeammateVanilla_C.UpdateTeammateAbilities // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void makeRequestDetails(struct FAresGunRequest Gun Request Details); // Function WBP_Panel_ShopTeammateVanilla.WBP_Panel_ShopTeammateVanilla_C.makeRequestDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_ShopTeammateVanilla.WBP_Panel_ShopTeammateVanilla_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void CacheUIData(struct UCharacterHandle* CharacterHandle); // Function WBP_Panel_ShopTeammateVanilla.WBP_Panel_ShopTeammateVanilla_C.CacheUIData // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnFulfillGunRequest(struct FAresGunRequest UpdatedGunRequest, struct AShooterPlayerState* FulfillingPlayer, struct AShooterPlayerState* RequestingPlayer); // Function WBP_Panel_ShopTeammateVanilla.WBP_Panel_ShopTeammateVanilla_C.OnFulfillGunRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRequestButtonState(); // Function WBP_Panel_ShopTeammateVanilla.WBP_Panel_ShopTeammateVanilla_C.OnRequestButtonState // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_ShopTeammateVanilla.WBP_Panel_ShopTeammateVanilla_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PlayerModelUpdated(); // Function WBP_Panel_ShopTeammateVanilla.WBP_Panel_ShopTeammateVanilla_C.PlayerModelUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_ShopTeammateVanilla(int32_t EntryPoint); // Function WBP_Panel_ShopTeammateVanilla.WBP_Panel_ShopTeammateVanilla_C.ExecuteUbergraph_WBP_Panel_ShopTeammateVanilla // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

