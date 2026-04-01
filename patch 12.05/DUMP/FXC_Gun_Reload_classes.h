// BlueprintGeneratedClass FXC_Gun_Reload.FXC_Gun_Reload_C
// Size: 0x670 (Inherited: 0x620)
struct AFXC_Gun_Reload_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UComp_FXC_GunSkinAttributeDrivenTimerManager_Reload_C* Comp_FXC_GunSkinAttributeDrivenTimerManager_Reload; // 0x628(0x08)
	struct UComp_FXC_ManualAttenuationIndicator_C* Comp_FXC_ManualAttenuationIndicator; // 0x630(0x08)
	struct UComp_FXC_PlayAnimation_Equippable_C* EquippableAnimation; // 0x638(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_C* CharacterAnimation; // 0x640(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x648(0x08)
	int32_t NumReloadCycles; // 0x650(0x04)
	char pad_654[0x4]; // 0x654(0x04)
	struct UWeapon_Skin_Base_C* Owned Gun Skin; // 0x658(0x08)
	struct AAresEquippable* CurrentEquippable; // 0x660(0x08)
	struct UReloadStateComponent* ReloadStateComponent; // 0x668(0x08)

	void ConvertTimeDilationToTimelinePlayRate(double TimeDilation, struct UTimelineComponent* AffectedTimelineComponent, double& DesiredTimelinePlayRate); // Function FXC_Gun_Reload.FXC_Gun_Reload_C.ConvertTimeDilationToTimelinePlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Get Particle Component(struct UPlayerGun_Particle_Component_C*& Particle Component); // Function FXC_Gun_Reload.FXC_Gun_Reload_C.Get Particle Component // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnReloadLoopComplete(); // Function FXC_Gun_Reload.FXC_Gun_Reload_C.OnReloadLoopComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyAttributeDrivenTimeDilation(double TimeDilation); // Function FXC_Gun_Reload.FXC_Gun_Reload_C.ApplyAttributeDrivenTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Gun_Reload.FXC_Gun_Reload_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Gun_Reload.FXC_Gun_Reload_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_Gun_Reload(int32_t EntryPoint); // Function FXC_Gun_Reload.FXC_Gun_Reload_C.ExecuteUbergraph_FXC_Gun_Reload // (Final|UbergraphFunction) // @ game+0x1af5410
};

