// BlueprintGeneratedClass CameraShake_SimpleMovement.CameraShake_SimpleMovement_C
// Size: 0x288 (Inherited: 0x1f0)
struct UCameraShake_SimpleMovement_C : ULegacyCameraShake {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1f0(0x08)
	struct UShooterCharacterMovement* ShooterCharacterMovement; // 0x1f8(0x08)
	struct FExplicitFloatCurve VelocityFrequencyCurve; // 0x200(0x88)

	double GetDesiredFrequency(); // Function CameraShake_SimpleMovement.CameraShake_SimpleMovement_C.GetDesiredFrequency // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, struct FMinimalViewInfo& POV, struct FMinimalViewInfo& ModifiedPOV); // Function CameraShake_SimpleMovement.CameraShake_SimpleMovement_C.BlueprintUpdateCameraShake // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceivePlayShake(float Scale); // Function CameraShake_SimpleMovement.CameraShake_SimpleMovement_C.ReceivePlayShake // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CameraShake_SimpleMovement(int32_t EntryPoint); // Function CameraShake_SimpleMovement.CameraShake_SimpleMovement_C.ExecuteUbergraph_CameraShake_SimpleMovement // (Final|UbergraphFunction) // @ game+0x1b42740
};

