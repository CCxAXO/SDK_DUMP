// BlueprintGeneratedClass FXC_RadianiteBombKill.FXC_RadianiteBombKill_C
// Size: 0x6a1 (Inherited: 0x630)
struct AFXC_RadianiteBombKill_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UComp_FXC_Audio_Location_C* Comp_FXC_Audio_Location_1P; // 0x638(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x640(0x08)
	struct UComp_FXC_HUD_Particle_C* Comp_FXC_HUD_Particle; // 0x648(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x650(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_RandomPlayRate_C* Comp_FXC_PlayAnimation_ShooterCharacter_RandomPlayRate; // 0x658(0x08)
	struct UParticleSystemComponent* HunterUlt_EnemyDestroyed_VFX; // 0x660(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x668(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x670(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x678(0x08)
	double MaxMaterialTime; // 0x680(0x08)
	double MinMaterialTime; // 0x688(0x08)
	double LifeSpan; // 0x690(0x08)
	struct AShooterCharacter* Hunter; // 0x698(0x08)
	bool IsFirstPerson; // 0x6a0(0x01)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_RadianiteBombKill.FXC_RadianiteBombKill_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_RadianiteBombKill.FXC_RadianiteBombKill_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_RadianiteBombKill(int32_t EntryPoint); // Function FXC_RadianiteBombKill.FXC_RadianiteBombKill_C.ExecuteUbergraph_FXC_RadianiteBombKill // (Final|UbergraphFunction) // @ game+0x1b42740
};

