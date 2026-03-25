// WidgetBlueprintGeneratedClass DynamicConfigSwitcher.DynamicConfigSwitcher_C
// Size: 0x345 (Inherited: 0x318)
struct UDynamicConfigSwitcher_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UNamedSlot* DisabledSlot; // 0x320(0x08)
	struct UNamedSlot* EnabledSlot; // 0x328(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x330(0x08)
	struct FName ConfigName; // 0x338(0x0c)
	bool DefaultValue; // 0x344(0x01)

	struct UWidget* GetActiveSlotChild(); // Function DynamicConfigSwitcher.DynamicConfigSwitcher_C.GetActiveSlotChild // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Construct(); // Function DynamicConfigSwitcher.DynamicConfigSwitcher_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnConfigUpdated(struct FName& ConfigName); // Function DynamicConfigSwitcher.DynamicConfigSwitcher_C.OnConfigUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_DynamicConfigSwitcher(int32_t EntryPoint); // Function DynamicConfigSwitcher.DynamicConfigSwitcher_C.ExecuteUbergraph_DynamicConfigSwitcher // (Final|UbergraphFunction) // @ game+0x1af5410
};

