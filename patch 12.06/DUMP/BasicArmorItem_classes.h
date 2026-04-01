// BlueprintGeneratedClass BasicArmorItem.BasicArmorItem_C
// Size: 0x59c (Inherited: 0x4d0)
struct ABasicArmorItem_C : AAresItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d0(0x08)
	struct UBasicArmorAttachedDamageSection_C* AttachedDamageSection; // 0x4d8(0x08)
	struct UShieldArmorCharacterHudComponent_C* ShieldArmorCharacterHudComponent; // 0x4e0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4e8(0x08)
	struct TMap<struct FName, double> PreResetHealthMap; // 0x4f0(0x50)
	struct TMap<struct FName, enum class ERoundPersistenceBehavior> PreResetPersistenceBehaviorMap; // 0x540(0x50)
	struct FName DamagedPersistenceRefKey; // 0x590(0x0c)

	void ClearArmorValueSavesOnRoundEnd(int32_t RoundNumberEnded); // Function BasicArmorItem.BasicArmorItem_C.ClearArmorValueSavesOnRoundEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Restore Break Persist Behavior(struct FName ReferenceKey); // Function BasicArmorItem.BasicArmorItem_C.Restore Break Persist Behavior // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Save Break Persist Behavior(struct FName ReferenceKey); // Function BasicArmorItem.BasicArmorItem_C.Save Break Persist Behavior // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsArmorFull(bool& IsFull); // Function BasicArmorItem.BasicArmorItem_C.IsArmorFull // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayHitConfirmOverride(struct AShooterCharacter* ShooterCharacter, enum class EAresHitConfirmLocality HitLocality, enum class EAresRegionalDamage RegionalDamage, double FalloffMultiplier, bool& HitConfirmOverridden); // Function BasicArmorItem.BasicArmorItem_C.PlayHitConfirmOverride // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Restore Status(struct FName ReferenceKey); // Function BasicArmorItem.BasicArmorItem_C.Restore Status // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Save Status(struct FName ReferenceKey); // Function BasicArmorItem.BasicArmorItem_C.Save Status // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetCharacterHudComponent(struct UCharacterHudComponent*& CharacterHudComponent); // Function BasicArmorItem.BasicArmorItem_C.GetCharacterHudComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	int32_t GetSellPrice(int32_t BasePrice); // Function BasicArmorItem.BasicArmorItem_C.GetSellPrice // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveAuthSetOwningCharacter(struct AShooterCharacter* NewCharacter); // Function BasicArmorItem.BasicArmorItem_C.ReceiveAuthSetOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ReceiveAuthClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function BasicArmorItem.BasicArmorItem_C.ReceiveAuthClearOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ReceiveClientSetOwningCharacter(struct AShooterCharacter* NewCharacter); // Function BasicArmorItem.BasicArmorItem_C.ReceiveClientSetOwningCharacter // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ReceiveClientClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function BasicArmorItem.BasicArmorItem_C.ReceiveClientClearOwningCharacter // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnArmorBreak(struct UDamageType* DamageTypeClass, struct AController* Instigator, struct AActor* DamageCauser); // Function BasicArmorItem.BasicArmorItem_C.OnArmorBreak // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthOnSectionDamaged(struct UDamageSectionComponent* Component, float LifeChange); // Function BasicArmorItem.BasicArmorItem_C.AuthOnSectionDamaged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthOnSectionHealed(struct UDamageSectionComponent* Component, float LifeChange); // Function BasicArmorItem.BasicArmorItem_C.AuthOnSectionHealed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function BasicArmorItem.BasicArmorItem_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BasicArmorItem(int32_t EntryPoint); // Function BasicArmorItem.BasicArmorItem_C.ExecuteUbergraph_BasicArmorItem // (Final|UbergraphFunction) // @ game+0x1b42740
};

