// WidgetBlueprintGeneratedClass WBP_Panel_PromoTile_Home.WBP_Panel_PromoTile_Home_C
// Size: 0x460 (Inherited: 0x3e0)
struct UWBP_Panel_PromoTile_Home_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_Panel_PromoTile_C* AgentPromoTile; // 0x3e8(0x08)
	struct UWBP_Panel_PromoTile_C* BattlepassPromoTile; // 0x3f0(0x08)
	struct UWBP_Panel_PromoTile_C* BundlePromoTile; // 0x3f8(0x08)
	struct UWBP_Panel_PromoTile_C* EsportsPromoTile; // 0x400(0x08)
	struct UWBP_Panel_PromoTile_C* MapPromoTile; // 0x408(0x08)
	struct UWBP_Panel_PromoTile_C* NightMarketPromoTile; // 0x410(0x08)
	struct UWBP_Panel_PickEmPromoTile_C* PickEmPromoTile; // 0x418(0x08)
	struct UWidgetSwitcher* PromoTileSwitcher; // 0x420(0x08)
	struct TArray<struct UWBP_Panel_PromoTile_C*> PromoTileCandidates; // 0x428(0x10)
	struct UWBP_Panel_PromoTile_C* PromotedTile; // 0x438(0x08)
	struct FName PromoWidgetConfig; // 0x440(0x0c)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct FMulticastInlineDelegate OnPromoTileSet; // 0x450(0x10)

	void HandleCIATriggered(); // Function WBP_Panel_PromoTile_Home.WBP_Panel_PromoTile_Home_C.HandleCIATriggered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePromotionActivityChanged(); // Function WBP_Panel_PromoTile_Home.WBP_Panel_PromoTile_Home_C.HandlePromotionActivityChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPromoTile(struct UWBP_Panel_PromoTile_C* PromoTile); // Function WBP_Panel_PromoTile_Home.WBP_Panel_PromoTile_Home_C.SetPromoTile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle on Any Config Updated(struct FName& ConfigName); // Function WBP_Panel_PromoTile_Home.WBP_Panel_PromoTile_Home_C.Handle on Any Config Updated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Panel_PromoTile_Home.WBP_Panel_PromoTile_Home_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Pick Promo Tile(struct TArray<struct UWBP_Panel_PromoTile_C*>& PromoTileCandidates, struct UWBP_Panel_PromoTile_C*& PromoTile); // Function WBP_Panel_PromoTile_Home.WBP_Panel_PromoTile_Home_C.Pick Promo Tile // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void HandleOnActivated(); // Function WBP_Panel_PromoTile_Home.WBP_Panel_PromoTile_Home_C.HandleOnActivated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PromoTile_Home.WBP_Panel_PromoTile_Home_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_PromoTile_Home.WBP_Panel_PromoTile_Home_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_PromoTile_Home.WBP_Panel_PromoTile_Home_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_PromoTile_Home.WBP_Panel_PromoTile_Home_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PromoTile_Home(int32_t EntryPoint); // Function WBP_Panel_PromoTile_Home.WBP_Panel_PromoTile_Home_C.ExecuteUbergraph_WBP_Panel_PromoTile_Home // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnPromoTileSet__DelegateSignature(); // Function WBP_Panel_PromoTile_Home.WBP_Panel_PromoTile_Home_C.OnPromoTileSet__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

