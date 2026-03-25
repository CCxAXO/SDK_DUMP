// BlueprintGeneratedClass FXC_DefuseBomb_Defuser.FXC_DefuseBomb_Defuser_C
// Size: 0x660 (Inherited: 0x620)
struct AFXC_DefuseBomb_Defuser_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UStaticMeshComponent* geo_defuserScreen_01; // 0x628(0x08)
	struct UParticleSystemComponent* ps_defuse_rays_01; // 0x630(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_C* Comp_FXC_PlayAnimation_ShooterCharacter; // 0x638(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x640(0x08)
	struct UMaterialInstanceDynamic* DynamicScreenMaterial; // 0x648(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x650(0x08)
	struct AAresEquippable* Equippable; // 0x658(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_DefuseBomb_Defuser.FXC_DefuseBomb_Defuser_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FXC_DefuseBomb_Defuser.FXC_DefuseBomb_Defuser_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ReceiveTick(float DeltaSeconds); // Function FXC_DefuseBomb_Defuser.FXC_DefuseBomb_Defuser_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_DefuseBomb_Defuser(int32_t EntryPoint); // Function FXC_DefuseBomb_Defuser.FXC_DefuseBomb_Defuser_C.ExecuteUbergraph_FXC_DefuseBomb_Defuser // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

