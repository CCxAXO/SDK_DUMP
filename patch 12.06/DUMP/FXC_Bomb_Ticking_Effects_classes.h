// BlueprintGeneratedClass FXC_Bomb_Ticking_Effects.FXC_Bomb_Ticking_Effects_C
// Size: 0x6d8 (Inherited: 0x630)
struct AFXC_Bomb_Ticking_Effects_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic6; // 0x638(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic5; // 0x640(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic4; // 0x648(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic3; // 0x650(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic2; // 0x658(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic1; // 0x660(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x668(0x08)
	double VFX_Start_01; // 0x670(0x08)
	double VFX_Start_02; // 0x678(0x08)
	double VFX_Start_03; // 0x680(0x08)
	double VFX_Start_04; // 0x688(0x08)
	double VFX_Charge_Finish; // 0x690(0x08)
	double VFX_Bomb_TurnOn; // 0x698(0x08)
	double VFX_Start_GroundTear; // 0x6a0(0x08)
	double RandomTimeVarMIN; // 0x6a8(0x08)
	double RandomTimeVarMAX; // 0x6b0(0x08)
	struct APlantedBomb_C* As Planted Bomb; // 0x6b8(0x08)
	double TimeElapsed; // 0x6c0(0x08)
	struct TArray<struct UParticleSystemComponent*> ParticleSystems; // 0x6c8(0x10)

	void SpawnParticleSystem(struct UParticleSystem* NewParam); // Function FXC_Bomb_Ticking_Effects.FXC_Bomb_Ticking_Effects_C.SpawnParticleSystem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TimeRandomizer(double Time to Modify, double& Final Time); // Function FXC_Bomb_Ticking_Effects.FXC_Bomb_Ticking_Effects_C.TimeRandomizer // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Bomb_Ticking_Effects.FXC_Bomb_Ticking_Effects_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveTick(float DeltaSeconds); // Function FXC_Bomb_Ticking_Effects.FXC_Bomb_Ticking_Effects_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_Bomb_Ticking_Effects(int32_t EntryPoint); // Function FXC_Bomb_Ticking_Effects.FXC_Bomb_Ticking_Effects_C.ExecuteUbergraph_FXC_Bomb_Ticking_Effects // (Final|UbergraphFunction) // @ game+0x1b42740
};

