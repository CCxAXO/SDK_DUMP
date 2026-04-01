// BlueprintGeneratedClass BaseCollectableOrb.BaseCollectableOrb_C
// Size: 0x604 (Inherited: 0x4f8)
struct ABaseCollectableOrb_C : AOrb_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f8(0x08)
	struct USimpleReplicationSleepComponent* SimpleReplicationSleep; // 0x500(0x08)
	struct USceneComponent* InWorldUsablePivot; // 0x508(0x08)
	struct USphereComponent* Sphere; // 0x510(0x08)
	struct UParticleSystemComponent* Amb_OrbEnergy_VFX; // 0x518(0x08)
	struct UUsableComponent* Usable; // 0x520(0x08)
	struct AEffectContainer* OrbCollectEffect; // 0x528(0x08)
	struct UParticleSystem* OrbDestroyedVFX; // 0x530(0x08)
	struct FName TelemtryLabel; // 0x538(0x0c)
	char pad_544[0x4]; // 0x544(0x04)
	struct AEffectContainer* CollectOrbEffect; // 0x548(0x08)
	struct FEffectID CollectOrbFriendlyID; // 0x550(0x18)
	struct FEffectID CollectOrbEnemyID; // 0x568(0x18)
	struct AActor* OrbUser; // 0x580(0x08)
	struct AEffectContainer* OrbDestroyedEffect; // 0x588(0x08)
	struct AEffectContainer* OrbCancelEffect; // 0x590(0x08)
	int32_t NumCollectors; // 0x598(0x04)
	char pad_59C[0x4]; // 0x59c(0x04)
	struct FEffectData OrbCollectEffectData; // 0x5a0(0x58)
	struct FName ClassFName; // 0x5f8(0x0c)

	void On Hide Outlines Setting Updated(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function BaseCollectableOrb.BaseCollectableOrb_C.On Hide Outlines Setting Updated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetClassFName(struct FName& Class FName); // Function BaseCollectableOrb.BaseCollectableOrb_C.GetClassFName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void CallCollectionEvent(struct AShooterCharacter* Character); // Function BaseCollectableOrb.BaseCollectableOrb_C.CallCollectionEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GrantOrbEffect(struct AShooterCharacter* ShooterCharacter); // Function BaseCollectableOrb.BaseCollectableOrb_C.GrantOrbEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Usable1_K2Node_ComponentBoundEvent_181_UsableComponentUseSuccessful__DelegateSignature(struct UInteractableUserComponent* User); // Function BaseCollectableOrb.BaseCollectableOrb_C.BndEvt__Usable1_K2Node_ComponentBoundEvent_181_UsableComponentUseSuccessful__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnAuthRoundEnd(); // Function BaseCollectableOrb.BaseCollectableOrb_C.OnAuthRoundEnd // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function BaseCollectableOrb.BaseCollectableOrb_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ReceiveDestroyed(); // Function BaseCollectableOrb.BaseCollectableOrb_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Server Win Round Event(struct UBaseTeamComponent* Winning Team); // Function BaseCollectableOrb.BaseCollectableOrb_C.Server Win Round Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsableComponentUseCanceled__DelegateSignature(struct UInteractableUserComponent* User, enum class EUsableCancelReason CancelReason); // Function BaseCollectableOrb.BaseCollectableOrb_C.BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsableComponentUseCanceled__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnBombPlanted(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function BaseCollectableOrb.BaseCollectableOrb_C.OnBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableComponentUseStarted__DelegateSignature(struct UInteractableUserComponent* User); // Function BaseCollectableOrb.BaseCollectableOrb_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableComponentUseStarted__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__BaseCollectableOrb_Usable_K2Node_ComponentBoundEvent_2_UsableComponentCurrentUsable__DelegateSignature(struct UInteractableUserComponent* User); // Function BaseCollectableOrb.BaseCollectableOrb_C.BndEvt__BaseCollectableOrb_Usable_K2Node_ComponentBoundEvent_2_UsableComponentCurrentUsable__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__UltPointOrb_Usable_K2Node_ComponentBoundEvent_1_UsableComponentCurrentUsable__DelegateSignature(struct UInteractableUserComponent* User); // Function BaseCollectableOrb.BaseCollectableOrb_C.BndEvt__UltPointOrb_Usable_K2Node_ComponentBoundEvent_1_UsableComponentCurrentUsable__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnResetHighlighting(); // Function BaseCollectableOrb.BaseCollectableOrb_C.OnResetHighlighting // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BaseCollectableOrb(int32_t EntryPoint); // Function BaseCollectableOrb.BaseCollectableOrb_C.ExecuteUbergraph_BaseCollectableOrb // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

