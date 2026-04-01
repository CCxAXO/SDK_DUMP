// BlueprintGeneratedClass ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C
// Size: 0x230 (Inherited: 0x190)
struct UForceModule_JumpLandSlow_C : UForceModule {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x190(0x08)
	double JumpSlowIntensity; // 0x198(0x08)
	struct FExplicitFloatCurve IntensityByFallDistance; // 0x1a0(0x88)
	double LandSlowDuration; // 0x228(0x08)

	void CalculateJumpIntensity(); // Function ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C.CalculateJumpIntensity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	float GetAttributeModifier(enum class EForceModuleAttribute Type, float Time); // Function ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C.GetAttributeModifier // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool TickForceModule(float DeltaTime); // Function ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C.TickForceModule // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(); // Function ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C.Initialize // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ForceModule_JumpLandSlow(int32_t EntryPoint); // Function ForceModule_JumpLandSlow.ForceModule_JumpLandSlow_C.ExecuteUbergraph_ForceModule_JumpLandSlow // (Final|UbergraphFunction) // @ game+0x1b42740
};

