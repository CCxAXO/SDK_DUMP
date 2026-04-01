// WidgetBlueprintGeneratedClass RegionalDamageInteraction.RegionalDamageInteraction_C
// Size: 0x380 (Inherited: 0x318)
struct URegionalDamageInteraction_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct FRegionalDamageInteraction RegionalDamage; // 0x320(0x18)
	bool IsDamageTaken; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct UImage* AssistImage; // 0x340(0x08)
	struct UAresCommonText* DamageDealt; // 0x348(0x08)
	struct UAresCommonText* HitCount; // 0x350(0x08)
	struct UImage* KilledImage; // 0x358(0x08)
	struct UImage* PaperDollImage; // 0x360(0x08)
	struct UImage* WallPen; // 0x368(0x08)
	struct UOverlay* KilledOrAssistOverlay; // 0x370(0x08)
	struct UImage* SectionDivider; // 0x378(0x08)

	void Construct(); // Function RegionalDamageInteraction.RegionalDamageInteraction_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_RegionalDamageInteraction(int32_t EntryPoint); // Function RegionalDamageInteraction.RegionalDamageInteraction_C.ExecuteUbergraph_RegionalDamageInteraction // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

