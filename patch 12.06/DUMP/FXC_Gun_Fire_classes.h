// BlueprintGeneratedClass FXC_Gun_Fire.FXC_Gun_Fire_C
// Size: 0x688 (Inherited: 0x630)
struct AFXC_Gun_Fire_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UComp_FXC_GunSkinAttributeDrivenTimerManager_Fire_C* Comp_FXC_GunSkinAttributeDrivenTimerManager_Fire; // 0x638(0x08)
	struct UCompFXC_AudioVisualizer_Signal_C* CompFXC_AudioVisualizer_Signal; // 0x640(0x08)
	struct UFiringEffectComponent* FiringEffectComponent; // 0x648(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_GunFire_C* Comp_FXC_PlayAnimation_ShooterCharacter_GunFire; // 0x650(0x08)
	struct UComp_FXC_PlayAnimation_Gun_C* Comp_FXC_PlayAnimation_Gun; // 0x658(0x08)
	struct UComp_FXC_Gun_Firing_VFX_C* Comp_FXC_Gun_Firing_VFX; // 0x660(0x08)
	struct UComp_FXC_Gun_Firing_Audio_C* Comp_FXC_Gun_Audio; // 0x668(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x670(0x08)
	struct UWeapon_Skin_Base_C* Owned Gun Skin; // 0x678(0x08)
	struct UObject* Context; // 0x680(0x08)

	void ConvertTimeDilationToTimelinePlayRate(double TimeDilation, struct UTimelineComponent* AffectedTimelineComponent, double& DesiredTimelinePlayRate); // Function FXC_Gun_Fire.FXC_Gun_Fire_C.ConvertTimeDilationToTimelinePlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Get Owning Player Info(struct ABasePlayerCharacter_C*& Owning Player, enum class EAresTeamRole& Team Role, double& Health, double& Shield, bool& isAlive?); // Function FXC_Gun_Fire.FXC_Gun_Fire_C.Get Owning Player Info // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplyAttributeDrivenTimeDilation(double TimeDilation); // Function FXC_Gun_Fire.FXC_Gun_Fire_C.ApplyAttributeDrivenTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Gun_Fire.FXC_Gun_Fire_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_Gun_Fire(int32_t EntryPoint); // Function FXC_Gun_Fire.FXC_Gun_Fire_C.ExecuteUbergraph_FXC_Gun_Fire // (Final|UbergraphFunction) // @ game+0x1b42740
};

