// BlueprintGeneratedClass FXC_Golem_Equip_1P_Base.FXC_Golem_Equip_1P_Base_C
// Size: 0x6fc (Inherited: 0x690)
struct AFXC_Golem_Equip_1P_Base_C : AFXC_AK_Golem_Equip_Lv1_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x690(0x08)
	struct UPlayerGun_Particle_Component_C* PlayerGun_Particle_Component; // 0x698(0x08)
	struct FLinearColor Timeline_0_Color_134C034948619394CE96A2ABD87DB6BD; // 0x6a0(0x10)
	struct FVector Timeline_0_GlowSourceOffset_134C034948619394CE96A2ABD87DB6BD; // 0x6b0(0x18)
	float Timeline_0_GlowIntensity_134C034948619394CE96A2ABD87DB6BD; // 0x6c8(0x04)
	float Timeline_0_Position_134C034948619394CE96A2ABD87DB6BD; // 0x6cc(0x04)
	enum class ETimelineDirection Timeline_0__Direction_134C034948619394CE96A2ABD87DB6BD; // 0x6d0(0x01)
	char pad_6D1[0x7]; // 0x6d1(0x07)
	struct UTimelineComponent* Timeline_1; // 0x6d8(0x08)
	struct UGolem_Skin_Base_C* GolemSkin; // 0x6e0(0x08)
	struct UMaterialInstanceDynamic* FirstPersonDynamicMaterial; // 0x6e8(0x08)
	int32_t PlayerStateColorIndex; // 0x6f0(0x04)
	int32_t CrystalMaterialIndex; // 0x6f4(0x04)
	int32_t GunColorIndex; // 0x6f8(0x04)

	void ColorIndexEvaluation(int32_t WeaponColorIndex); // Function FXC_Golem_Equip_1P_Base.FXC_Golem_Equip_1P_Base_C.ColorIndexEvaluation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CheckLocalOnly(bool& Is Local Client); // Function FXC_Golem_Equip_1P_Base.FXC_Golem_Equip_1P_Base_C.CheckLocalOnly // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void InitializeColor(); // Function FXC_Golem_Equip_1P_Base.FXC_Golem_Equip_1P_Base_C.InitializeColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Timeline_0__FinishedFunc(); // Function FXC_Golem_Equip_1P_Base.FXC_Golem_Equip_1P_Base_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1af5410
	void Timeline_0__UpdateFunc(); // Function FXC_Golem_Equip_1P_Base.FXC_Golem_Equip_1P_Base_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1af5410
	void InitialColor(); // Function FXC_Golem_Equip_1P_Base.FXC_Golem_Equip_1P_Base_C.InitialColor // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_Golem_Equip_1P_Base.FXC_Golem_Equip_1P_Base_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Golem_Equip_1P_Base.FXC_Golem_Equip_1P_Base_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Golem_Equip_1P_Base.FXC_Golem_Equip_1P_Base_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_Golem_Equip_1P_Base(int32_t EntryPoint); // Function FXC_Golem_Equip_1P_Base.FXC_Golem_Equip_1P_Base_C.ExecuteUbergraph_FXC_Golem_Equip_1P_Base // (Final|UbergraphFunction) // @ game+0x1af5410
};

