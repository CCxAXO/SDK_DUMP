// BlueprintGeneratedClass CameraShake_Global_Concussed.CameraShake_Global_Concussed_C
// Size: 0x230 (Inherited: 0x1f0)
struct UCameraShake_Global_Concussed_C : ULegacyCameraShake {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1f0(0x08)
	struct UComp_Actor_Concussable_C* ConcussableComponent; // 0x1f8(0x08)
	double BaseYawAmplitude; // 0x200(0x08)
	double BaseRollAmplitude; // 0x208(0x08)
	double BasePitchAmplitude; // 0x210(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x218(0x08)
	double CurrentYawOffset; // 0x220(0x08)
	double YawFrequency; // 0x228(0x08)

	double GetCurrentConcussLevel(); // Function CameraShake_Global_Concussed.CameraShake_Global_Concussed_C.GetCurrentConcussLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetScopeAdjustmentMultiplier(double& Multiplier); // Function CameraShake_Global_Concussed.CameraShake_Global_Concussed_C.GetScopeAdjustmentMultiplier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, struct FMinimalViewInfo& POV, struct FMinimalViewInfo& ModifiedPOV); // Function CameraShake_Global_Concussed.CameraShake_Global_Concussed_C.BlueprintUpdateCameraShake // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceivePlayShake(float Scale); // Function CameraShake_Global_Concussed.CameraShake_Global_Concussed_C.ReceivePlayShake // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CameraShake_Global_Concussed(int32_t EntryPoint); // Function CameraShake_Global_Concussed.CameraShake_Global_Concussed_C.ExecuteUbergraph_CameraShake_Global_Concussed // (Final|UbergraphFunction) // @ game+0x1b42740
};

