// BlueprintGeneratedClass FXC_ObserverSightLines.FXC_ObserverSightLines_C
// Size: 0x668 (Inherited: 0x630)
struct AFXC_ObserverSightLines_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UParticleSystemComponent* EndPoint; // 0x638(0x08)
	struct UParticleSystemComponent* beam; // 0x640(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x648(0x08)
	struct FVector BeamEnd; // 0x650(0x18)

	void LineShouldBeVisible(bool& Visible); // Function FXC_ObserverSightLines.FXC_ObserverSightLines_C.LineShouldBeVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveTick(float DeltaSeconds); // Function FXC_ObserverSightLines.FXC_ObserverSightLines_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_ObserverSightLines.FXC_ObserverSightLines_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_ObserverSightLines.FXC_ObserverSightLines_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_ObserverSightLines(int32_t EntryPoint); // Function FXC_ObserverSightLines.FXC_ObserverSightLines_C.ExecuteUbergraph_FXC_ObserverSightLines // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

