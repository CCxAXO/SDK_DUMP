// WidgetBlueprintGeneratedClass CharacterSelectAbilityV2.CharacterSelectAbilityV2_C
// Size: 0x331 (Inherited: 0x320)
struct UCharacterSelectAbilityV2_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UCharacterSelectAbilityDescriptionV2_C* CharacterSelectAbilityDescriptionV2; // 0x328(0x08)
	enum class ECharacterAbilitySlot AbilitySlot; // 0x330(0x01)

	void SetAbilitySlot(enum class ECharacterAbilitySlot AbilitySlot); // Function CharacterSelectAbilityV2.CharacterSelectAbilityV2_C.SetAbilitySlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetAbility(struct UCharacterAbilityUIData* AbilityData); // Function CharacterSelectAbilityV2.CharacterSelectAbilityV2_C.SetAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function CharacterSelectAbilityV2.CharacterSelectAbilityV2_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CharacterSelectAbilityV2(int32_t EntryPoint); // Function CharacterSelectAbilityV2.CharacterSelectAbilityV2_C.ExecuteUbergraph_CharacterSelectAbilityV2 // (Final|UbergraphFunction) // @ game+0x1af5410
};

