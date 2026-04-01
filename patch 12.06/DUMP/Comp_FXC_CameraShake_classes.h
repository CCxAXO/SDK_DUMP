// BlueprintGeneratedClass Comp_FXC_CameraShake.Comp_FXC_CameraShake_C
// Size: 0x158 (Inherited: 0xe8)
struct UComp_FXC_CameraShake_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct ULegacyCameraShake* Shake; // 0xf0(0x08)
	double Scale; // 0xf8(0x08)
	enum class ECameraShakePlaySpace Playspace; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct FRotator UserPlaySpaceRot; // 0x108(0x18)
	struct UCameraShakeBase* CameraShake; // 0x120(0x08)
	bool ShouldStopOnFinish; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct AShooterCharacter* ShooterCharacter; // 0x130(0x08)
	struct FMulticastInlineDelegate OnCameraShakeStarted; // 0x138(0x10)
	bool AutoStart; // 0x148(0x01)
	bool FXC_Active; // 0x149(0x01)
	char pad_14A[0x6]; // 0x14a(0x06)
	struct UComp_Actor_Concussable_C* ShooterCharacterConcussableComponent; // 0x150(0x08)

	void StartCameraShake(); // Function Comp_FXC_CameraShake.Comp_FXC_CameraShake_C.StartCameraShake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetConcussableComponent(struct UComp_Actor_Concussable_C*& ShooterCharacterConcussableComponent); // Function Comp_FXC_CameraShake.Comp_FXC_CameraShake_C.GetConcussableComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetCameraShake(struct UCameraShakeBase*& CameraShake); // Function Comp_FXC_CameraShake.Comp_FXC_CameraShake_C.GetCameraShake // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_CameraShake.Comp_FXC_CameraShake_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_CameraShake.Comp_FXC_CameraShake_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ManualStart(); // Function Comp_FXC_CameraShake.Comp_FXC_CameraShake_C.ManualStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function Comp_FXC_CameraShake.Comp_FXC_CameraShake_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ResetEffect(); // Function Comp_FXC_CameraShake.Comp_FXC_CameraShake_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Comp_FXC_CameraShake(int32_t EntryPoint); // Function Comp_FXC_CameraShake.Comp_FXC_CameraShake_C.ExecuteUbergraph_Comp_FXC_CameraShake // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnCameraShakeStarted__DelegateSignature(struct UCameraShakeBase* CameraShake); // Function Comp_FXC_CameraShake.Comp_FXC_CameraShake_C.OnCameraShakeStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

