// BlueprintGeneratedClass RegenArmorCharacterHudComponent.RegenArmorCharacterHudComponent_C
// Size: 0x110 (Inherited: 0xf0)
struct URegenArmorCharacterHudComponent_C : UCharacterHudComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	struct FLinearColor armorTextColor; // 0xf8(0x10)
	int32_t OutValue; // 0x108(0x04)
	int32_t MaxOutValue; // 0x10c(0x04)

	void SetMaxValue(double MaxValue); // Function RegenArmorCharacterHudComponent.RegenArmorCharacterHudComponent_C.SetMaxValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCurrentValue(double CurrentValue); // Function RegenArmorCharacterHudComponent.RegenArmorCharacterHudComponent_C.SetCurrentValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetCharacterHudDrawValues(struct FCharacterHudDrawValues& Out); // Function RegenArmorCharacterHudComponent.RegenArmorCharacterHudComponent_C.GetCharacterHudDrawValues // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void SetCurrentValueRep(double CurrentValue); // Function RegenArmorCharacterHudComponent.RegenArmorCharacterHudComponent_C.SetCurrentValueRep // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMaxValueRep(double MaxValue); // Function RegenArmorCharacterHudComponent.RegenArmorCharacterHudComponent_C.SetMaxValueRep // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_RegenArmorCharacterHudComponent(int32_t EntryPoint); // Function RegenArmorCharacterHudComponent.RegenArmorCharacterHudComponent_C.ExecuteUbergraph_RegenArmorCharacterHudComponent // (Final|UbergraphFunction) // @ game+0x1b42740
};

