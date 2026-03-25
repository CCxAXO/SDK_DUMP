// WidgetBlueprintGeneratedClass WBP_CurrencyWallet.WBP_CurrencyWallet_C
// Size: 0x400 (Inherited: 0x3e0)
struct UWBP_CurrencyWallet_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_CurrencyWidget_C* AresPointsBalance; // 0x3e8(0x08)
	struct UWBP_CurrencyWidget_C* DoughBalance; // 0x3f0(0x08)
	struct UWBP_CurrencyWidget_C* UpgradeTokenBalance; // 0x3f8(0x08)

	void BindCurrencyWidget(struct FGuid CurrencyID, struct UWBP_CurrencyWidget_C* CurrencyWidget, struct UWidget* DividerWidget); // Function WBP_CurrencyWallet.WBP_CurrencyWallet_C.BindCurrencyWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_CurrencyWallet.WBP_CurrencyWallet_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_CurrencyWallet.WBP_CurrencyWallet_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_CurrencyWallet(int32_t EntryPoint); // Function WBP_CurrencyWallet.WBP_CurrencyWallet_C.ExecuteUbergraph_WBP_CurrencyWallet // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

