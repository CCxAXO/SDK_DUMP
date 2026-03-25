// WidgetBlueprintGeneratedClass ContractUpgradeButton.ContractUpgradeButton_C
// Size: 0x370 (Inherited: 0x348)
struct UContractUpgradeButton_C : UContractUpgradeButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UCurrencyAmountWidget_C* CurrencyAmountWidget; // 0x350(0x08)
	struct USharedButtonMaster_C* SharedButtonMaster; // 0x358(0x08)
	struct UPurchaseModal_C* PurchaseModal; // 0x360(0x08)
	struct UContractViewModel* CurrentContractViewModel; // 0x368(0x08)

	void Refresh(); // Function ContractUpgradeButton.ContractUpgradeButton_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDisplayFields(bool IsEnabled, struct FText ToolTipText); // Function ContractUpgradeButton.ContractUpgradeButton_C.SetDisplayFields // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitButton(struct UContractViewModel* ContractViewModel); // Function ContractUpgradeButton.ContractUpgradeButton_C.InitButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function ContractUpgradeButton.ContractUpgradeButton_C.BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ContractUpgradeButton(int32_t EntryPoint); // Function ContractUpgradeButton.ContractUpgradeButton_C.ExecuteUbergraph_ContractUpgradeButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

