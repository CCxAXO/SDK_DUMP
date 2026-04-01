// WidgetBlueprintGeneratedClass HUDMoneyReadoutReward.HUDMoneyReadoutReward_C
// Size: 0x370 (Inherited: 0x318)
struct UHUDMoneyReadoutReward_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* incomeEvent; // 0x320(0x08)
	struct UTextBlock* IncomeMoneyText; // 0x328(0x08)
	struct UHorizontalBox* IncomeTextContainer; // 0x330(0x08)
	struct FText RewardDescription; // 0x338(0x18)
	int32_t RewardMoney; // 0x350(0x04)
	int32_t RewardCount; // 0x354(0x04)
	struct FText multipleSymbolText; // 0x358(0x18)

	void PreConstruct(bool IsDesignTime); // Function HUDMoneyReadoutReward.HUDMoneyReadoutReward_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Init(); // Function HUDMoneyReadoutReward.HUDMoneyReadoutReward_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_HUDMoneyReadoutReward(int32_t EntryPoint); // Function HUDMoneyReadoutReward.HUDMoneyReadoutReward_C.ExecuteUbergraph_HUDMoneyReadoutReward // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

