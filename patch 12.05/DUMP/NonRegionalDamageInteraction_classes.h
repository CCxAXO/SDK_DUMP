// WidgetBlueprintGeneratedClass NonRegionalDamageInteraction.NonRegionalDamageInteraction_C
// Size: 0x380 (Inherited: 0x318)
struct UNonRegionalDamageInteraction_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* AssistImage; // 0x320(0x08)
	struct UTextBlock* DamageDealt; // 0x328(0x08)
	struct UTextBlock* HitCount; // 0x330(0x08)
	struct UImage* Image; // 0x338(0x08)
	struct UImage* KilledImage; // 0x340(0x08)
	struct UImage* SectionDivider; // 0x348(0x08)
	struct UImage* WallPen; // 0x350(0x08)
	bool IsDamageTaken; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct FNonRegionalDamageInteraction NonRegionalDamage; // 0x360(0x20)

	void Construct(); // Function NonRegionalDamageInteraction.NonRegionalDamageInteraction_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_NonRegionalDamageInteraction(int32_t EntryPoint); // Function NonRegionalDamageInteraction.NonRegionalDamageInteraction_C.ExecuteUbergraph_NonRegionalDamageInteraction // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

