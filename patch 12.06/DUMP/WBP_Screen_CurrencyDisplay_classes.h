// WidgetBlueprintGeneratedClass WBP_Screen_CurrencyDisplay.WBP_Screen_CurrencyDisplay_C
// Size: 0x618 (Inherited: 0x520)
struct UWBP_Screen_CurrencyDisplay_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UWBP_Button_CurrencyInfo_C* AresPointsButton; // 0x528(0x08)
	struct UImage* Filigree; // 0x530(0x08)
	struct UWBP_Button_CurrencyInfo_C* KingdomCreditsButton; // 0x538(0x08)
	struct UWBP_Button_CurrencyInfo_C* RadianiteButton; // 0x540(0x08)
	struct FName EnabledVpPanelConfigName; // 0x548(0x0c)
	struct FName EnabledRadptPanelConfigName; // 0x554(0x0c)
	struct FAresConditionalInputAction ShowAccessoriesConditionalInputAction; // 0x560(0x28)
	struct FAresConditionalInputAction ShowAgentsConditionalInputAction; // 0x588(0x28)
	struct FName DisabledPurchaseRPConfigName; // 0x5b0(0x0c)
	char pad_5BC[0x4]; // 0x5bc(0x04)
	struct FAresConditionalInputAction BuyRadianiteConditionalInputAction; // 0x5c0(0x28)
	struct FAresConditionalInputAction ShowVPConditionalInputAction; // 0x5e8(0x28)
	struct UVM_CurrencyScreen_C* VM_CurrencyScreen; // 0x610(0x08)

	void HandleButtonVisibilityStates(); // Function WBP_Screen_CurrencyDisplay.WBP_Screen_CurrencyDisplay_C.HandleButtonVisibilityStates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateKCButton(); // Function WBP_Screen_CurrencyDisplay.WBP_Screen_CurrencyDisplay_C.UpdateKCButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindCurrencyScreenVM(bool Bind); // Function WBP_Screen_CurrencyDisplay.WBP_Screen_CurrencyDisplay_C.BindCurrencyScreenVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void NavigateToVPPurchase(struct FName ActionName); // Function WBP_Screen_CurrencyDisplay.WBP_Screen_CurrencyDisplay_C.NavigateToVPPurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void NavigateToRadianitePurchase(struct FName ActionName); // Function WBP_Screen_CurrencyDisplay.WBP_Screen_CurrencyDisplay_C.NavigateToRadianitePurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void NavigateToBattlepass(struct FName ActionName); // Function WBP_Screen_CurrencyDisplay.WBP_Screen_CurrencyDisplay_C.NavigateToBattlepass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateRadianiteButton(); // Function WBP_Screen_CurrencyDisplay.WBP_Screen_CurrencyDisplay_C.UpdateRadianiteButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void NavigateToAgents(struct FName ActionName); // Function WBP_Screen_CurrencyDisplay.WBP_Screen_CurrencyDisplay_C.NavigateToAgents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void NavigateToAccessories(struct FName ActionName); // Function WBP_Screen_CurrencyDisplay.WBP_Screen_CurrencyDisplay_C.NavigateToAccessories // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleConfigUpdated(struct FName& ConfigName); // Function WBP_Screen_CurrencyDisplay.WBP_Screen_CurrencyDisplay_C.HandleConfigUpdated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindConfigUpdates(bool Bind); // Function WBP_Screen_CurrencyDisplay.WBP_Screen_CurrencyDisplay_C.BindConfigUpdates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindCurrencyWidget(struct FGuid CurrencyID, struct UWBP_Button_CurrencyInfo_C* CurrencyButton, struct UWidget* DividerWidget); // Function WBP_Screen_CurrencyDisplay.WBP_Screen_CurrencyDisplay_C.BindCurrencyWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_CurrencyDisplay.WBP_Screen_CurrencyDisplay_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Screen_CurrencyDisplay.WBP_Screen_CurrencyDisplay_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Screen_CurrencyDisplay.WBP_Screen_CurrencyDisplay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Screen_CurrencyDisplay.WBP_Screen_CurrencyDisplay_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Screen_CurrencyDisplay(int32_t EntryPoint); // Function WBP_Screen_CurrencyDisplay.WBP_Screen_CurrencyDisplay_C.ExecuteUbergraph_WBP_Screen_CurrencyDisplay // (Final|UbergraphFunction) // @ game+0x1b42740
};

