// BlueprintGeneratedClass Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C
// Size: 0x150 (Inherited: 0xe8)
struct UComp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct UAnimMontage* ZoomIn_1P_Animation; // 0xf0(0x08)
	struct UAnimMontage* ZoomIn_3P_Animation; // 0xf8(0x08)
	struct UAnimMontage* ZoomOut_1P_Animation; // 0x100(0x08)
	struct UAnimMontage* ZoomOut_3P_Animation; // 0x108(0x08)
	bool StopAnimWhenEffectIsDestroyed; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	double 1P_PlayRate; // 0x118(0x08)
	double 3P_PlayRate; // 0x120(0x08)
	struct AShooterCharacter* OwningShooterCharacter; // 0x128(0x08)
	double StartTime; // 0x130(0x08)
	double TimeModifier; // 0x138(0x08)
	bool bZoomed; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct UAnimMontage* MontageToPlay; // 0x148(0x08)

	void GetCurrentMontageInfo(bool bZoomed, struct UAnimMontage*& Montage, double& PlayRate, struct UAnimInstance*& AnimInstance); // Function Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C.GetCurrentMontageInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetPlayRate(double BasePlayRate, double TimeModifier, double& PlayRate); // Function Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C.GetPlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void StopAnims(); // Function Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C.StopAnims // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ResetEffect(); // Function Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom(int32_t EntryPoint); // Function Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom.Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom_C.ExecuteUbergraph_Comp_FXC_PlayAnimation_ShooterCharacter_Gun_CycleZoom // (Final|UbergraphFunction) // @ game+0x1b42740
};

