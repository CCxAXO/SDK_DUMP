// BlueprintGeneratedClass FXC_Gun_Equip.FXC_Gun_Equip_C
// Size: 0x680 (Inherited: 0x630)
struct AFXC_Gun_Equip_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UComp_FXC_GunSkinAttributeDrivenTimerManager_Equip_C* Comp_FXC_GunSkinAttributeDrivenTimerManager_Equip; // 0x638(0x08)
	struct UComp_FXC_PlayAnimation_Equippable_C* EquippableAnimation; // 0x640(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_C* CharacterAnimation; // 0x648(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x650(0x08)
	struct UWeapon_Skin_Base_C* Owned Gun Skin; // 0x658(0x08)
	struct AAresEquippable* CurrentEquippable; // 0x660(0x08)
	enum class EEquipSpeed CurrentVFXEquipSpeed; // 0x668(0x01)
	char pad_669[0x7]; // 0x669(0x07)
	struct UReadyingStateComponent* Readying State Component; // 0x670(0x08)
	struct AShooterCharacter* Owning Player; // 0x678(0x08)

	void ConvertTimeDilationToTimelinePlayRate(double TimeDilation, struct UTimelineComponent* AffectedTimelineComponent, double& DesiredTimelinePlayRate); // Function FXC_Gun_Equip.FXC_Gun_Equip_C.ConvertTimeDilationToTimelinePlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Get Owning Player Info(struct ABasePlayerCharacter_C*& Owning Player, enum class EAresTeamRole& Team Role, double& Health, double& Shield, bool& isAlive?); // Function FXC_Gun_Equip.FXC_Gun_Equip_C.Get Owning Player Info // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplyAttributeDrivenTimeDilation(double TimeDilation); // Function FXC_Gun_Equip.FXC_Gun_Equip_C.ApplyAttributeDrivenTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Gun_Equip.FXC_Gun_Equip_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Gun_Equip.FXC_Gun_Equip_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_Gun_Equip(int32_t EntryPoint); // Function FXC_Gun_Equip.FXC_Gun_Equip_C.ExecuteUbergraph_FXC_Gun_Equip // (Final|UbergraphFunction) // @ game+0x1b42740
};

