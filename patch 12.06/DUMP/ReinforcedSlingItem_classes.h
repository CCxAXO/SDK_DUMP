// BlueprintGeneratedClass ReinforcedSlingItem.ReinforcedSlingItem_C
// Size: 0x5b0 (Inherited: 0x59c)
struct AReinforcedSlingItem_C : ABasicArmorItem_C {
	char pad_59C[0x4]; // 0x59c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5a0(0x08)
	struct FActiveGameplayEffectHandle BuffHandle; // 0x5a8(0x08)

	void ReceiveAuthSetOwningCharacter(struct AShooterCharacter* NewCharacter); // Function ReinforcedSlingItem.ReinforcedSlingItem_C.ReceiveAuthSetOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ReceiveAuthClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function ReinforcedSlingItem.ReinforcedSlingItem_C.ReceiveAuthClearOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ReinforcedSlingItem(int32_t EntryPoint); // Function ReinforcedSlingItem.ReinforcedSlingItem_C.ExecuteUbergraph_ReinforcedSlingItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

