// BlueprintGeneratedClass Comp_FXC_SpawnParticle_ShooterCharacter_FadeOut.Comp_FXC_SpawnParticle_ShooterCharacter_FadeOut_C
// Size: 0x3b4 (Inherited: 0x278)
struct UComp_FXC_SpawnParticle_ShooterCharacter_FadeOut_C : UComp_FXC_SpawnParticle_ShooterCharacter_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct FExplicitFloatCurve FadeOutCurve1P; // 0x280(0x88)
	double FadeOutStartTime; // 0x308(0x08)
	struct FName ParameterName1P; // 0x310(0x0c)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct FExplicitFloatCurve FadeOutCurve3P; // 0x320(0x88)
	struct FName ParameterName3P; // 0x3a8(0x0c)

	void TickFadeOut(struct UParticleSystemComponent* Emitter, struct FName ParameterName, struct FExplicitFloatCurve& FadeOutCurve); // Function Comp_FXC_SpawnParticle_ShooterCharacter_FadeOut.Comp_FXC_SpawnParticle_ShooterCharacter_FadeOut_C.TickFadeOut // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_SpawnParticle_ShooterCharacter_FadeOut.Comp_FXC_SpawnParticle_ShooterCharacter_FadeOut_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ReceiveTick(float DeltaSeconds); // Function Comp_FXC_SpawnParticle_ShooterCharacter_FadeOut.Comp_FXC_SpawnParticle_ShooterCharacter_FadeOut_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_FXC_SpawnParticle_ShooterCharacter_FadeOut(int32_t EntryPoint); // Function Comp_FXC_SpawnParticle_ShooterCharacter_FadeOut.Comp_FXC_SpawnParticle_ShooterCharacter_FadeOut_C.ExecuteUbergraph_Comp_FXC_SpawnParticle_ShooterCharacter_FadeOut // (Final|UbergraphFunction) // @ game+0x1af5410
};

