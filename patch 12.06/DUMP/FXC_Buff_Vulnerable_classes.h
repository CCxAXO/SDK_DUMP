// BlueprintGeneratedClass FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C
// Size: 0x6a0 (Inherited: 0x630)
struct AFXC_Buff_Vulnerable_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x638(0x08)
	struct UComp_FXC_HUD_Particle_C* Comp_FXC_HUD_Particle; // 0x640(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x648(0x08)
	float Timeline_1_Opacity_7FD3158E4BB4A5DC4798E1AD2A0C4F05; // 0x650(0x04)
	enum class ETimelineDirection Timeline_1__Direction_7FD3158E4BB4A5DC4798E1AD2A0C4F05; // 0x654(0x01)
	char pad_655[0x3]; // 0x655(0x03)
	struct UTimelineComponent* Timeline_2; // 0x658(0x08)
	float Timeline_0_Opacity_B38A8C8D45CB03B87A2CE382D1BADAAD; // 0x660(0x04)
	enum class ETimelineDirection Timeline_0__Direction_B38A8C8D45CB03B87A2CE382D1BADAAD; // 0x664(0x01)
	char pad_665[0x3]; // 0x665(0x03)
	struct UTimelineComponent* Timeline_1; // 0x668(0x08)
	struct AShooterCharacter* OwningShooterCharacter; // 0x670(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> Dynamic3P_Materials; // 0x678(0x10)
	struct FName BoneTargetDefault; // 0x688(0x0c)
	struct FGameplayTag VulnerableVisualTag; // 0x694(0x0c)

	void TrySetOwnerBoneOverride(struct FName& BoneOverride); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.TrySetOwnerBoneOverride // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UnbindToDamageTaken(); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.UnbindToDamageTaken // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToDamageTaken(); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.BindToDamageTaken // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Timeline_0__FinishedFunc(); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1b42740
	void Timeline_0__UpdateFunc(); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1b42740
	void Timeline_1__FinishedFunc(); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x1b42740
	void Timeline_1__UpdateFunc(); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x1b42740
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnDamaged_Event_1(struct UDamageResponse* Response); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.OnDamaged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_Buff_Vulnerable(int32_t EntryPoint); // Function FXC_Buff_Vulnerable.FXC_Buff_Vulnerable_C.ExecuteUbergraph_FXC_Buff_Vulnerable // (Final|UbergraphFunction) // @ game+0x1b42740
};

