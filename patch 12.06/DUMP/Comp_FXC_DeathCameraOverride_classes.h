// BlueprintGeneratedClass Comp_FXC_DeathCameraOverride.Comp_FXC_DeathCameraOverride_C
// Size: 0x128 (Inherited: 0xe8)
struct UComp_FXC_DeathCameraOverride_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0xf0(0x08)
	struct UCameraComponent* Camera; // 0xf8(0x08)
	struct FAresDeathCameraTimings Timings; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct UCurveFloat* FoVCurve; // 0x110(0x08)
	struct UCurveFloat* CameraCurve; // 0x118(0x08)
	struct USpringArmComponent* Spring Arm; // 0x120(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_DeathCameraOverride.Comp_FXC_DeathCameraOverride_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ResetEffect(); // Function Comp_FXC_DeathCameraOverride.Comp_FXC_DeathCameraOverride_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_DeathCameraOverride.Comp_FXC_DeathCameraOverride_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Comp_FXC_DeathCameraOverride(int32_t EntryPoint); // Function Comp_FXC_DeathCameraOverride.Comp_FXC_DeathCameraOverride_C.ExecuteUbergraph_Comp_FXC_DeathCameraOverride // (Final|UbergraphFunction) // @ game+0x1b42740
};

