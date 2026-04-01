// WidgetBlueprintGeneratedClass UpgradeCurrencyPopup.UpgradeCurrencyPopup_C
// Size: 0x338 (Inherited: 0x318)
struct UUpgradeCurrencyPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct ULargeModal_C* LargeModal; // 0x320(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x328(0x08)
	struct UUpgradeCurrencyPurchase_C* upgradecurrencypurchase; // 0x330(0x08)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function UpgradeCurrencyPopup.UpgradeCurrencyPopup_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	bool HandleBackRequest(); // Function UpgradeCurrencyPopup.UpgradeCurrencyPopup_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function UpgradeCurrencyPopup.UpgradeCurrencyPopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_UpgradeCurrencyPopup(int32_t EntryPoint); // Function UpgradeCurrencyPopup.UpgradeCurrencyPopup_C.ExecuteUbergraph_UpgradeCurrencyPopup // (Final|UbergraphFunction) // @ game+0x1b42740
};

