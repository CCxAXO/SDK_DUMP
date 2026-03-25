// WidgetBlueprintGeneratedClass WBP_Button_CurrencyInfo.WBP_Button_CurrencyInfo_C
// Size: 0x1b30 (Inherited: 0x1ae0)
struct UWBP_Button_CurrencyInfo_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* PressedOn; // 0x1ae8(0x08)
	struct UWidgetAnimation* FocusOff; // 0x1af0(0x08)
	struct UWidgetAnimation* FocusOn; // 0x1af8(0x08)
	struct UAresButtonTextComponent* CurrencyText; // 0x1b00(0x08)
	struct UImage* Filigree; // 0x1b08(0x08)
	struct UImage* TopRadialGradient; // 0x1b10(0x08)
	struct UCurrencyViewModel_C* CurrencyViewModel; // 0x1b18(0x08)
	bool bShouldBeVisibleWhenDisabled; // 0x1b20(0x01)
	bool bShouldNegateConfig; // 0x1b21(0x01)
	bool bShouldSurfaceCapacity; // 0x1b22(0x01)
	char pad_1B23[0x1]; // 0x1b23(0x01)
	struct FName DisplayConfigName; // 0x1b24(0x0c)

	void OnTextAndCapacityUpdated(struct FText Amount, bool bAtCapacity, bool bIsNegative); // Function WBP_Button_CurrencyInfo.WBP_Button_CurrencyInfo_C.OnTextAndCapacityUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnImageUpdated(struct UTexture* Image); // Function WBP_Button_CurrencyInfo.WBP_Button_CurrencyInfo_C.OnImageUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BP_OnHovered(); // Function WBP_Button_CurrencyInfo.WBP_Button_CurrencyInfo_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionHovered(); // Function WBP_Button_CurrencyInfo.WBP_Button_CurrencyInfo_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionUnHovered(); // Function WBP_Button_CurrencyInfo.WBP_Button_CurrencyInfo_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionPressed(); // Function WBP_Button_CurrencyInfo.WBP_Button_CurrencyInfo_C.BP_OnTransitionPressed // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionReleased(); // Function WBP_Button_CurrencyInfo.WBP_Button_CurrencyInfo_C.BP_OnTransitionReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_CurrencyInfo(int32_t EntryPoint); // Function WBP_Button_CurrencyInfo.WBP_Button_CurrencyInfo_C.ExecuteUbergraph_WBP_Button_CurrencyInfo // (Final|UbergraphFunction) // @ game+0x1af5410
};

