// BlueprintGeneratedClass ShieldArmorCharacterHudComponent.ShieldArmorCharacterHudComponent_C
// Size: 0x120 (Inherited: 0xf0)
struct UShieldArmorCharacterHudComponent_C : UCharacterHudComponent {
	struct FSlateColor armorTextColor; // 0xf0(0x14)
	char pad_104[0x4]; // 0x104(0x04)
	struct UTexture* ArmorIcon; // 0x108(0x08)
	struct UTexture* ArmorIcon_Teemo; // 0x110(0x08)
	struct UArmorHUDElement_Base_C* ArmorWidgetClass; // 0x118(0x08)

	void GetCharacterHudDrawValuesImplV2(int32_t& OutValue, struct FLinearColor& SpecifiedColor, int32_t& OutMaxValue, struct UTexture*& ArmorIcon); // Function ShieldArmorCharacterHudComponent.ShieldArmorCharacterHudComponent_C.GetCharacterHudDrawValuesImplV2 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void GetCharacterHudDrawValues(struct FCharacterHudDrawValues& Out); // Function ShieldArmorCharacterHudComponent.ShieldArmorCharacterHudComponent_C.GetCharacterHudDrawValues // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
};

