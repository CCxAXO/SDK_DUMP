// WidgetBlueprintGeneratedClass WBP_CurrencyWidget.WBP_CurrencyWidget_C
// Size: 0x1b20 (Inherited: 0x1ae0)
struct UWBP_CurrencyWidget_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UCurrencyViewModel_C* CurrencyViewModel; // 0x1ae8(0x08)
	bool bShouldBeVisibleWhenDisabled; // 0x1af0(0x01)
	char pad_1AF1[0x7]; // 0x1af1(0x07)
	struct UCommonTextStyle* NormalTextStyle; // 0x1af8(0x08)
	struct UCommonTextStyle* AtCapacityTextStyle; // 0x1b00(0x08)
	struct FName DisplayConfigName; // 0x1b08(0x0c)
	bool bShouldNegateConfig; // 0x1b14(0x01)
	bool bShouldSurfaceCapacity; // 0x1b15(0x01)
	char pad_1B16[0x2]; // 0x1b16(0x02)
	struct UCommonTextStyle* NegativeTextStyle; // 0x1b18(0x08)

	void OnTextAndCapacityUpdated(struct FText Amount, bool bAtCapacity, bool bIsNegative); // Function WBP_CurrencyWidget.WBP_CurrencyWidget_C.OnTextAndCapacityUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnImageUpdated(struct UTexture* Image); // Function WBP_CurrencyWidget.WBP_CurrencyWidget_C.OnImageUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BP_OnHovered(); // Function WBP_CurrencyWidget.WBP_CurrencyWidget_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnUnhovered(); // Function WBP_CurrencyWidget.WBP_CurrencyWidget_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnClicked(); // Function WBP_CurrencyWidget.WBP_CurrencyWidget_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_CurrencyWidget(int32_t EntryPoint); // Function WBP_CurrencyWidget.WBP_CurrencyWidget_C.ExecuteUbergraph_WBP_CurrencyWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};

