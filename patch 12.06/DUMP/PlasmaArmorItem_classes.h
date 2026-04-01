// BlueprintGeneratedClass PlasmaArmorItem.PlasmaArmorItem_C
// Size: 0x6a8 (Inherited: 0x59c)
struct APlasmaArmorItem_C : ABasicArmorItem_C {
	char pad_59C[0x4]; // 0x59c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5a0(0x08)
	bool RegenActive; // 0x5a8(0x01)
	char pad_5A9[0x7]; // 0x5a9(0x07)
	double DelayBeforeRegen; // 0x5b0(0x08)
	double RegenPerSecond; // 0x5b8(0x08)
	struct FActiveGameplayEffectHandle HealingBuff; // 0x5c0(0x08)
	double MaxRegenPool; // 0x5c8(0x08)
	double CurrentRegenPool; // 0x5d0(0x08)
	double RegenThisTick; // 0x5d8(0x08)
	struct AActor* OwnerController; // 0x5e0(0x08)
	double RegenPoolEmptyFloor; // 0x5e8(0x08)
	struct FEffectID FXCHealingHandle; // 0x5f0(0x18)
	struct UAkAudioEvent* PlasmaHitConfirmEvent; // 0x608(0x08)
	struct UAkAudioEvent* PlasmaHitConfirmHeadshot; // 0x610(0x08)
	struct FMulticastInlineDelegate OnShieldDepleted; // 0x618(0x10)
	struct FMulticastInlineDelegate OnRegenStart; // 0x628(0x10)
	struct FMulticastInlineDelegate OnRegenEnd; // 0x638(0x10)
	struct FMulticastInlineDelegate OnPoolDepleted; // 0x648(0x10)
	struct TMap<struct FName, double> PreResetRegenPoolMap; // 0x658(0x50)

	void UpdateMaxRegenPool(double NewMax); // Function PlasmaArmorItem.PlasmaArmorItem_C.UpdateMaxRegenPool // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetRegenActive(bool Active); // Function PlasmaArmorItem.PlasmaArmorItem_C.SetRegenActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClearArmorValueSavesOnRoundEnd(int32_t RoundNumberEnded); // Function PlasmaArmorItem.PlasmaArmorItem_C.ClearArmorValueSavesOnRoundEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateCurrentRegenPool(double NewValue); // Function PlasmaArmorItem.PlasmaArmorItem_C.UpdateCurrentRegenPool // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Restore Status(struct FName ReferenceKey); // Function PlasmaArmorItem.PlasmaArmorItem_C.Restore Status // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Save Status(struct FName ReferenceKey); // Function PlasmaArmorItem.PlasmaArmorItem_C.Save Status // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TryRegen(double RegenAmount); // Function PlasmaArmorItem.PlasmaArmorItem_C.TryRegen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsArmorFull(bool& IsFull); // Function PlasmaArmorItem.PlasmaArmorItem_C.IsArmorFull // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetAndTriggerRegenFXC(); // Function PlasmaArmorItem.PlasmaArmorItem_C.SetAndTriggerRegenFXC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetAndTriggerBreakFXC(); // Function PlasmaArmorItem.PlasmaArmorItem_C.SetAndTriggerBreakFXC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayHitConfirmOverride(struct AShooterCharacter* ShooterCharacter, enum class EAresHitConfirmLocality HitLocality, enum class EAresRegionalDamage RegionalDamage, double FalloffMultiplier, bool& HitConfirmOverridden); // Function PlasmaArmorItem.PlasmaArmorItem_C.PlayHitConfirmOverride // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePersistence(); // Function PlasmaArmorItem.PlasmaArmorItem_C.UpdatePersistence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function PlasmaArmorItem.PlasmaArmorItem_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PlasmaArmorItem_AttachedDamageSection_K2Node_ComponentBoundEvent_0_OnSectionLifeChangedSignature__DelegateSignature(struct UDamageSectionComponent* Component, float LifeChange); // Function PlasmaArmorItem.PlasmaArmorItem_C.BndEvt__PlasmaArmorItem_AttachedDamageSection_K2Node_ComponentBoundEvent_0_OnSectionLifeChangedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ReceiveTick(float DeltaSeconds); // Function PlasmaArmorItem.PlasmaArmorItem_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void TurnOnRegen(); // Function PlasmaArmorItem.PlasmaArmorItem_C.TurnOnRegen // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthOnSectionDamaged(struct UDamageSectionComponent* Component, float LifeChange); // Function PlasmaArmorItem.PlasmaArmorItem_C.AuthOnSectionDamaged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRoundStart(int32_t RoundNumberBeginning); // Function PlasmaArmorItem.PlasmaArmorItem_C.OnRoundStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ForceRegenPoolUpdate(double RegenPool); // Function PlasmaArmorItem.PlasmaArmorItem_C.ForceRegenPoolUpdate // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MulticastRegenStart(); // Function PlasmaArmorItem.PlasmaArmorItem_C.MulticastRegenStart // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MulticastRegenEnd(); // Function PlasmaArmorItem.PlasmaArmorItem_C.MulticastRegenEnd // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MulticastOnPoolDepleted(); // Function PlasmaArmorItem.PlasmaArmorItem_C.MulticastOnPoolDepleted // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MulticastShieldDepleted(); // Function PlasmaArmorItem.PlasmaArmorItem_C.MulticastShieldDepleted // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleOnResurrected(struct AOwnerExclusivePlayerInfo* Resurrector); // Function PlasmaArmorItem.PlasmaArmorItem_C.HandleOnResurrected // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSetItemOwner(struct AAresItem* Item, struct AActor* PrevOwner, struct AActor* NewOwner); // Function PlasmaArmorItem.PlasmaArmorItem_C.OnSetItemOwner // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StartRegenTimer(); // Function PlasmaArmorItem.PlasmaArmorItem_C.StartRegenTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ForceMaxRegenPoolUpdate(double RegenPoolMax); // Function PlasmaArmorItem.PlasmaArmorItem_C.ForceMaxRegenPoolUpdate // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PlasmaArmorItem(int32_t EntryPoint); // Function PlasmaArmorItem.PlasmaArmorItem_C.ExecuteUbergraph_PlasmaArmorItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnPoolDepleted__DelegateSignature(); // Function PlasmaArmorItem.PlasmaArmorItem_C.OnPoolDepleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRegenEnd__DelegateSignature(); // Function PlasmaArmorItem.PlasmaArmorItem_C.OnRegenEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRegenStart__DelegateSignature(); // Function PlasmaArmorItem.PlasmaArmorItem_C.OnRegenStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnShieldDepleted__DelegateSignature(); // Function PlasmaArmorItem.PlasmaArmorItem_C.OnShieldDepleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

