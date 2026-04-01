// WidgetBlueprintGeneratedClass ContractDetailsHeaderDefault.ContractDetailsHeaderDefault_C
// Size: 0x338 (Inherited: 0x318)
struct UContractDetailsHeaderDefault_C : UContractDetailsHeaderBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UExpirationTimer_C* ExpirationTimer; // 0x320(0x08)
	struct UTextBlock* Name; // 0x328(0x08)
	struct UPremiumContractPurchaseIncentive_C* PremiumContractPurchaseIncentive; // 0x330(0x08)

	void SetPurchaseIncentiveVisible(bool Visible); // Function ContractDetailsHeaderDefault.ContractDetailsHeaderDefault_C.SetPurchaseIncentiveVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTitle(struct FText Title); // Function ContractDetailsHeaderDefault.ContractDetailsHeaderDefault_C.SetTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTimerVisible(bool Visible); // Function ContractDetailsHeaderDefault.ContractDetailsHeaderDefault_C.SetTimerVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetExpirationTime(struct FDateTime ExpirationTime); // Function ContractDetailsHeaderDefault.ContractDetailsHeaderDefault_C.SetExpirationTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function ContractDetailsHeaderDefault.ContractDetailsHeaderDefault_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ContractDetailsHeaderDefault(int32_t EntryPoint); // Function ContractDetailsHeaderDefault.ContractDetailsHeaderDefault_C.ExecuteUbergraph_ContractDetailsHeaderDefault // (Final|UbergraphFunction) // @ game+0x1b42740
};

