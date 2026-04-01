// WidgetBlueprintGeneratedClass WalletSummary_PC.WalletSummary_PC_C
// Size: 0x360 (Inherited: 0x318)
struct UWalletSummary_PC_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCurrencyAmountWidget_C* AresPointsBalance; // 0x320(0x08)
	struct UImage* DiamondDividerImage; // 0x328(0x08)
	struct UImage* DiamondDividerImage_2; // 0x330(0x08)
	struct USharedButtonWithPopout_C* DoughBalance; // 0x338(0x08)
	struct UCurrencyAmountWidget_C* UpgradeTokenBalance; // 0x340(0x08)
	struct UCurrencyHandle* DoughCurrencyHandle; // 0x348(0x08)
	struct UCurrencyHandle* AresPointsCurrencyHandle; // 0x350(0x08)
	struct UCurrencyHandle* UpgradeTokensCurrencyHandle; // 0x358(0x08)

	void Open Dough Info Modal(); // Function WalletSummary_PC.WalletSummary_PC_C.Open Dough Info Modal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCurrencyLoaded(struct UCurrencyHandle* CurrencyHandle, struct UCurrencyAmountWidget_C* CurrencyWidget); // Function WalletSummary_PC.WalletSummary_PC_C.OnCurrencyLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleWalletUpdated(); // Function WalletSummary_PC.WalletSummary_PC_C.HandleWalletUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleConfigUpdated(); // Function WalletSummary_PC.WalletSummary_PC_C.HandleConfigUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WalletSummary_PC.WalletSummary_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnAnyConfigUpdated(struct FName& ConfigName); // Function WalletSummary_PC.WalletSummary_PC_C.OnAnyConfigUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleUpgradeTokenClicked(); // Function WalletSummary_PC.WalletSummary_PC_C.HandleUpgradeTokenClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleAresPointsClicked(); // Function WalletSummary_PC.WalletSummary_PC_C.HandleAresPointsClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleDoughClicked(); // Function WalletSummary_PC.WalletSummary_PC_C.HandleDoughClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void LoadAresPoints(struct UCurrencyHandle* CurrencyHandle); // Function WalletSummary_PC.WalletSummary_PC_C.LoadAresPoints // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAresPointsChanged(int32_t NewBalance); // Function WalletSummary_PC.WalletSummary_PC_C.OnAresPointsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnUpgradeTokensLoaded(struct UCurrencyHandle* CurrencyHandle); // Function WalletSummary_PC.WalletSummary_PC_C.OnUpgradeTokensLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnUpgradeTokensUpdated(int32_t NewBalance); // Function WalletSummary_PC.WalletSummary_PC_C.OnUpgradeTokensUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnDoughLoaded(struct UCurrencyHandle* CurrencyHandle); // Function WalletSummary_PC.WalletSummary_PC_C.OnDoughLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnDoughUpdated(int32_t NewBalance); // Function WalletSummary_PC.WalletSummary_PC_C.OnDoughUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnWalletUpdated(); // Function WalletSummary_PC.WalletSummary_PC_C.OnWalletUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CustomEvent_1(int32_t NewBalance); // Function WalletSummary_PC.WalletSummary_PC_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UnbindWalletEvent(); // Function WalletSummary_PC.WalletSummary_PC_C.UnbindWalletEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WalletSummary_PC(int32_t EntryPoint); // Function WalletSummary_PC.WalletSummary_PC_C.ExecuteUbergraph_WalletSummary_PC // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

