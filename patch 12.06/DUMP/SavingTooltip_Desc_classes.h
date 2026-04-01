// WidgetBlueprintGeneratedClass SavingTooltip_Desc.SavingTooltip_Desc_C
// Size: 0x3e8 (Inherited: 0x318)
struct USavingTooltip_Desc_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Delay; // 0x320(0x08)
	struct UImage* Arrow; // 0x328(0x08)
	struct UImage* BG; // 0x330(0x08)
	struct UImage* Image_192; // 0x338(0x08)
	struct UImage* line_top; // 0x340(0x08)
	struct UTextBlock* MinCredsHeaderText; // 0x348(0x08)
	struct UTextBlock* RewardsDetailsText; // 0x350(0x08)
	struct UTextBlock* RewardsHeaderText; // 0x358(0x08)
	struct USizeBox* SizeBox_3; // 0x360(0x08)
	struct UTextBlock* tooltipDesc; // 0x368(0x08)
	struct UTextBlock* tooltipTitle; // 0x370(0x08)
	struct FText nameData; // 0x378(0x18)
	struct FText descData; // 0x390(0x18)
	struct FText Empty Text; // 0x3a8(0x18)
	int32_t MinimumIncomeForLoss; // 0x3c0(0x04)
	int32_t MinimumIncomeForWin; // 0x3c4(0x04)
	int32_t SaveLossIncome; // 0x3c8(0x04)
	int32_t WinMoney; // 0x3cc(0x04)
	int32_t 1xLossMoney; // 0x3d0(0x04)
	int32_t 2XLossMoney; // 0x3d4(0x04)
	int32_t 3xLossMoney; // 0x3d8(0x04)
	int32_t KillMoney; // 0x3dc(0x04)
	int32_t PlantSpikePlayerMoney; // 0x3e0(0x04)
	int32_t PlantSpikeTeamMoneyOnLoss; // 0x3e4(0x04)

	void getEquippableDataForToolTip(struct UShopPurchasableModel* Model); // Function SavingTooltip_Desc.SavingTooltip_Desc_C.getEquippableDataForToolTip // (Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Construct(); // Function SavingTooltip_Desc.SavingTooltip_Desc_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SavingTooltip_Desc(int32_t EntryPoint); // Function SavingTooltip_Desc.SavingTooltip_Desc_C.ExecuteUbergraph_SavingTooltip_Desc // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

