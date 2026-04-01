// WidgetBlueprintGeneratedClass WBP_Button_CurrencyShortcut.WBP_Button_CurrencyShortcut_C
// Size: 0x1b00 (Inherited: 0x1ae0)
struct UWBP_Button_CurrencyShortcut_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWBP_CurrencyWidget_C* AresPointsBalance; // 0x1ae8(0x08)
	struct UWBP_CurrencyWidget_C* DoughBalance; // 0x1af0(0x08)
	struct UWBP_CurrencyWidget_C* UpgradeTokenBalance; // 0x1af8(0x08)

	void BindCurrencyWidget(struct FGuid CurrencyID, struct UWBP_CurrencyWidget_C* CurrencyWidget, struct UWidget* DividerWidget); // Function WBP_Button_CurrencyShortcut.WBP_Button_CurrencyShortcut_C.BindCurrencyWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Button_CurrencyShortcut.WBP_Button_CurrencyShortcut_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_CurrencyShortcut(int32_t EntryPoint); // Function WBP_Button_CurrencyShortcut.WBP_Button_CurrencyShortcut_C.ExecuteUbergraph_WBP_Button_CurrencyShortcut // (Final|UbergraphFunction) // @ game+0x1af5410
};

