// BlueprintGeneratedClass RegenArmorItem.RegenArmorItem_C
// Size: 0x650 (Inherited: 0x59c)
struct ARegenArmorItem_C : ABasicArmorItem_C {
	char pad_59C[0x4]; // 0x59c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5a0(0x08)
	struct UShotBlockerArmorCharacterHudComponent_C* ShotBlockerArmorCharacterHudComponent; // 0x5a8(0x08)
	struct UJuggernautArmorAttachedDamageSection_C* JuggernautArmorAttachedDamageSection; // 0x5b0(0x08)
	struct URegenArmorCharacterHudComponent_C* RegenArmorCharacterHudComponent; // 0x5b8(0x08)
	struct AShooterCharacter* MyCharacter; // 0x5c0(0x08)
	double PersistedHealingPool; // 0x5c8(0x08)
	double InitialHealthReduction; // 0x5d0(0x08)
	double StartingHealPool; // 0x5d8(0x08)
	struct FEffectID RegenEffectID; // 0x5e0(0x18)
	struct AEffectContainer* RegenActiveEffect; // 0x5f8(0x08)
	double DeltaSeconds; // 0x600(0x08)
	bool Healing; // 0x608(0x01)
	char pad_609[0x7]; // 0x609(0x07)
	double LastTookDamageTime; // 0x610(0x08)
	double HealingPerSecond; // 0x618(0x08)
	double TimeBeforeHealing; // 0x620(0x08)
	bool ItemDestroyed; // 0x628(0x01)
	char pad_629[0x7]; // 0x629(0x07)
	struct FEffectID PassiveFX; // 0x630(0x18)
	struct AShooterCharacter* PassiveEffectTarget; // 0x648(0x08)

	void AuthSetLifePool(double NewLifeValue); // Function RegenArmorItem.RegenArmorItem_C.AuthSetLifePool // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetLifePool(double& Life); // Function RegenArmorItem.RegenArmorItem_C.GetLifePool // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetCharacterHudComponent(struct UCharacterHudComponent*& CharacterHudComponent); // Function RegenArmorItem.RegenArmorItem_C.GetCharacterHudComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	int32_t GetSellPrice(int32_t BasePrice); // Function RegenArmorItem.RegenArmorItem_C.GetSellPrice // (BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveAuthSetOwningCharacter(struct AShooterCharacter* NewCharacter); // Function RegenArmorItem.RegenArmorItem_C.ReceiveAuthSetOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ReceiveAuthClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function RegenArmorItem.RegenArmorItem_C.ReceiveAuthClearOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnArmorBreak(struct UDamageType* DamageTypeClass, struct AController* Instigator, struct AActor* DamageCauser); // Function RegenArmorItem.RegenArmorItem_C.OnArmorBreak // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuthTookDamage_Event(struct AShooterCharacter* VictimCharacter, struct AController* DamageInstigator, struct AActor* DamagCauser, float Damage); // Function RegenArmorItem.RegenArmorItem_C.OnAuthTookDamage_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRoundEnd(int32_t RoundNumberEnding); // Function RegenArmorItem.RegenArmorItem_C.OnRoundEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DestroyItem(); // Function RegenArmorItem.RegenArmorItem_C.DestroyItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DisableItem(); // Function RegenArmorItem.RegenArmorItem_C.DisableItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateRegen(); // Function RegenArmorItem.RegenArmorItem_C.UpdateRegen // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EnableItem(); // Function RegenArmorItem.RegenArmorItem_C.EnableItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePassiveFX(bool Enable); // Function RegenArmorItem.RegenArmorItem_C.UpdatePassiveFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__JuggernautArmorAttachedDamageSection_K2Node_ComponentBoundEvent_2_OnSectionDamagedSignature__DelegateSignature(struct UDamageSectionComponent* Component, float LifeChange); // Function RegenArmorItem.RegenArmorItem_C.BndEvt__JuggernautArmorAttachedDamageSection_K2Node_ComponentBoundEvent_2_OnSectionDamagedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__JuggernautArmorAttachedDamageSection_K2Node_ComponentBoundEvent_1_OnSectionDamagedSignature__DelegateSignature(struct UDamageSectionComponent* Component, float LifeChange); // Function RegenArmorItem.RegenArmorItem_C.BndEvt__JuggernautArmorAttachedDamageSection_K2Node_ComponentBoundEvent_1_OnSectionDamagedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnCharacterDeath_Event(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function RegenArmorItem.RegenArmorItem_C.OnCharacterDeath_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_RegenArmorItem(int32_t EntryPoint); // Function RegenArmorItem.RegenArmorItem_C.ExecuteUbergraph_RegenArmorItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

