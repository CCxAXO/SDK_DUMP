// WidgetBlueprintGeneratedClass PremiumContractPurchaseIncentive.PremiumContractPurchaseIncentive_C
// Size: 0x351 (Inherited: 0x318)
struct UPremiumContractPurchaseIncentive_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BGBlue; // 0x320(0x08)
	struct UTextBlock* EnabledText; // 0x328(0x08)
	struct UHorizontalBox* HorizontalBox_75; // 0x330(0x08)
	struct UOverlay* Overlay_2; // 0x338(0x08)
	struct UPremiumContractXPIndicator_C* PremiumContractXPIndicator; // 0x340(0x08)
	struct UTextBlock* TextBlock_113; // 0x348(0x08)
	enum class EContractUpgradeState Upgrade State; // 0x350(0x01)

	void UpdateOwnership(); // Function PremiumContractPurchaseIncentive.PremiumContractPurchaseIncentive_C.UpdateOwnership // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function PremiumContractPurchaseIncentive.PremiumContractPurchaseIncentive_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function PremiumContractPurchaseIncentive.PremiumContractPurchaseIncentive_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnIsPremiumOwned(bool NewValue); // Function PremiumContractPurchaseIncentive.PremiumContractPurchaseIncentive_C.OnIsPremiumOwned // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PremiumContractPurchaseIncentive(int32_t EntryPoint); // Function PremiumContractPurchaseIncentive.PremiumContractPurchaseIncentive_C.ExecuteUbergraph_PremiumContractPurchaseIncentive // (Final|UbergraphFunction) // @ game+0x1b42740
};

