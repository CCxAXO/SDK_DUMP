// BlueprintGeneratedClass FXC_HMG_WhileEquipped_1P_Smoke.FXC_HMG_WhileEquipped_1P_Smoke_C
// Size: 0x728 (Inherited: 0x6b6)
struct AFXC_HMG_WhileEquipped_1P_Smoke_C : AFXC_Gun_WhileEquipped_1P_Base_C {
	char pad_6B6[0x2]; // 0x6b6(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	struct UStaticMeshComponent* BarrelHeat; // 0x6c0(0x08)
	float Barrel_Heat_Heat_Up_3E6679F64AC0459984C89B8E6120221F; // 0x6c8(0x04)
	enum class ETimelineDirection Barrel_Heat__Direction_3E6679F64AC0459984C89B8E6120221F; // 0x6cc(0x01)
	char pad_6CD[0x3]; // 0x6cd(0x03)
	struct UTimelineComponent* Barrel Heat; // 0x6d0(0x08)
	struct UParticleSystemComponent* Heat; // 0x6d8(0x08)
	struct UMaterialInstanceDynamic* Barrel Heat Material; // 0x6e0(0x08)
	struct FName BarrelHeat_SocketName; // 0x6e8(0x0c)
	enum class HMG_BarrelHeat_Attachment BarrelHeat_Attachment; // 0x6f4(0x01)
	char pad_6F5[0x3]; // 0x6f5(0x03)
	struct FVector BarrelHeat_LocalPosition; // 0x6f8(0x18)
	struct FRotator BarrelHeat_LocalRotation; // 0x710(0x18)

	void GetBarrelHeatAttachment(struct USkeletalMeshComponent*& Mesh); // Function FXC_HMG_WhileEquipped_1P_Smoke.FXC_HMG_WhileEquipped_1P_Smoke_C.GetBarrelHeatAttachment // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Barrel Heat__FinishedFunc(); // Function FXC_HMG_WhileEquipped_1P_Smoke.FXC_HMG_WhileEquipped_1P_Smoke_C.Barrel Heat__FinishedFunc // (BlueprintEvent) // @ game+0x1b42740
	void Barrel Heat__UpdateFunc(); // Function FXC_HMG_WhileEquipped_1P_Smoke.FXC_HMG_WhileEquipped_1P_Smoke_C.Barrel Heat__UpdateFunc // (BlueprintEvent) // @ game+0x1b42740
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_HMG_WhileEquipped_1P_Smoke.FXC_HMG_WhileEquipped_1P_Smoke_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void EffectDataUpdated(); // Function FXC_HMG_WhileEquipped_1P_Smoke.FXC_HMG_WhileEquipped_1P_Smoke_C.EffectDataUpdated // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void StartFiringEffect(); // Function FXC_HMG_WhileEquipped_1P_Smoke.FXC_HMG_WhileEquipped_1P_Smoke_C.StartFiringEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StopFiringEffect(); // Function FXC_HMG_WhileEquipped_1P_Smoke.FXC_HMG_WhileEquipped_1P_Smoke_C.StopFiringEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_HMG_WhileEquipped_1P_Smoke.FXC_HMG_WhileEquipped_1P_Smoke_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_HMG_WhileEquipped_1P_Smoke(int32_t EntryPoint); // Function FXC_HMG_WhileEquipped_1P_Smoke.FXC_HMG_WhileEquipped_1P_Smoke_C.ExecuteUbergraph_FXC_HMG_WhileEquipped_1P_Smoke // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

