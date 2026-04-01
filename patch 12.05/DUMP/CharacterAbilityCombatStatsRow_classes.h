// WidgetBlueprintGeneratedClass CharacterAbilityCombatStatsRow.CharacterAbilityCombatStatsRow_C
// Size: 0x3e8 (Inherited: 0x318)
struct UCharacterAbilityCombatStatsRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* AbilityIcon; // 0x320(0x08)
	struct UTextBlock* CastsText; // 0x328(0x08)
	struct UTextBlock* EffectValueText; // 0x330(0x08)
	struct UTextBlock* TextSeperator; // 0x338(0x08)
	struct UMenuAnchor* TooltipAnchor; // 0x340(0x08)
	enum class ECharacterAbilitySlot EquipmentSlot; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct TMap<struct FString, int32_t> Effects; // 0x350(0x50)
	struct FString EffectName; // 0x3a0(0x10)
	double EffectValue; // 0x3b0(0x08)
	struct FText AbilityName; // 0x3b8(0x18)
	struct FText ToolTipToUse; // 0x3d0(0x18)

	struct UWidget* OnGetMenuContent_1(); // Function CharacterAbilityCombatStatsRow.CharacterAbilityCombatStatsRow_C.OnGetMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(struct FProcessedMatchDetails& MatchDetails, struct FString TargetSubject); // Function CharacterAbilityCombatStatsRow.CharacterAbilityCombatStatsRow_C.Initialize // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function CharacterAbilityCombatStatsRow.CharacterAbilityCombatStatsRow_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function CharacterAbilityCombatStatsRow.CharacterAbilityCombatStatsRow_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CharacterAbilityCombatStatsRow(int32_t EntryPoint); // Function CharacterAbilityCombatStatsRow.CharacterAbilityCombatStatsRow_C.ExecuteUbergraph_CharacterAbilityCombatStatsRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

