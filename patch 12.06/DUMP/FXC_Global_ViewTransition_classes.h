// BlueprintGeneratedClass FXC_Global_ViewTransition.FXC_Global_ViewTransition_C
// Size: 0x670 (Inherited: 0x630)
struct AFXC_Global_ViewTransition_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x638(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x640(0x08)
	struct AShooterPlayerController* OwningController; // 0x648(0x08)
	struct UParticleSystemComponent* HUD_Particle; // 0x650(0x08)
	double ObscuredTime; // 0x658(0x08)
	struct AShooterCharacter* GumshoeShooterCharacter; // 0x660(0x08)
	struct UMaterialInstanceDynamic* GlitchMaterial; // 0x668(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Global_ViewTransition.FXC_Global_ViewTransition_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Global_ViewTransition.FXC_Global_ViewTransition_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_Global_ViewTransition(int32_t EntryPoint); // Function FXC_Global_ViewTransition.FXC_Global_ViewTransition_C.ExecuteUbergraph_FXC_Global_ViewTransition // (Final|UbergraphFunction) // @ game+0x1b42740
};

