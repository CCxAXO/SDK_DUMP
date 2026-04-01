// BlueprintGeneratedClass FXC_BombDetonation_TwoStage.FXC_BombDetonation_TwoStage_C
// Size: 0x710 (Inherited: 0x630)
struct AFXC_BombDetonation_TwoStage_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UComp_FXC_AudioBasic_C* ExplosionBlastSound; // 0x638(0x08)
	struct UStaticMeshComponent* Sphere; // 0x640(0x08)
	struct UComp_FXC_AudioBasic_C* RadialExplosionSound; // 0x648(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x650(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x658(0x08)
	double Explosion Delay; // 0x660(0x08)
	double Windup; // 0x668(0x08)
	struct FTimerHandle WindUp Timer; // 0x670(0x08)
	struct FTimerHandle Blow up timer; // 0x678(0x08)
	struct FTimerHandle Dome Timer; // 0x680(0x08)
	struct FVector VFX Scale; // 0x688(0x18)
	struct FVector original Character Direction; // 0x6a0(0x18)
	struct ABombDetonationActor_TwoStage_C* Detonation Actor; // 0x6b8(0x08)
	struct FVector Bomb Location; // 0x6c0(0x18)
	struct FTimerHandle Return timer handle; // 0x6d8(0x08)
	struct FVector Current Sound Location; // 0x6e0(0x18)
	struct FVector OriginalCharacter_Location; // 0x6f8(0x18)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_BombDetonation_TwoStage.FXC_BombDetonation_TwoStage_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveTick(float DeltaSeconds); // Function FXC_BombDetonation_TwoStage.FXC_BombDetonation_TwoStage_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_BombDetonation_TwoStage(int32_t EntryPoint); // Function FXC_BombDetonation_TwoStage.FXC_BombDetonation_TwoStage_C.ExecuteUbergraph_FXC_BombDetonation_TwoStage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

