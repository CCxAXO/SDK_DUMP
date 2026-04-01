// WidgetBlueprintGeneratedClass GenericTextTooltipContractVault.GenericTextTooltipContractVault_C
// Size: 0x348 (Inherited: 0x318)
struct UGenericTextTooltipContractVault_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UGenericTooltipContractVaultWrapper_C* GenericTooltipContractVault_72; // 0x320(0x08)
	struct UTextBlock* TooltipTextBlock; // 0x328(0x08)
	struct FText TooltipTextContent; // 0x330(0x18)

	void SetText(struct FText NewContent); // Function GenericTextTooltipContractVault.GenericTextTooltipContractVault_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayOutroAnimation(); // Function GenericTextTooltipContractVault.GenericTextTooltipContractVault_C.PlayOutroAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function GenericTextTooltipContractVault.GenericTextTooltipContractVault_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_GenericTextTooltipContractVault(int32_t EntryPoint); // Function GenericTextTooltipContractVault.GenericTextTooltipContractVault_C.ExecuteUbergraph_GenericTextTooltipContractVault // (Final|UbergraphFunction) // @ game+0x1af5410
};

