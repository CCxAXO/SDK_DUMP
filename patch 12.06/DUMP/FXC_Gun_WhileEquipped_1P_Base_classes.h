// BlueprintGeneratedClass FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C
// Size: 0x6b6 (Inherited: 0x658)
struct AFXC_Gun_WhileEquipped_1P_Base_C : AFXC_Equippable_WhileEquipped_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x658(0x08)
	struct UComp_FXC_GunSkinAttributeDrivenTimerManager_C* Comp_FXC_GunSkinAttributeDrivenTimerManager; // 0x660(0x08)
	float Timeline_0_Alpha_5AA82E094131F77AF9A6A0BFBFD1EC1B; // 0x668(0x04)
	enum class ETimelineDirection Timeline_0__Direction_5AA82E094131F77AF9A6A0BFBFD1EC1B; // 0x66c(0x01)
	char pad_66D[0x3]; // 0x66d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x670(0x08)
	struct UParticleSystem* SmokeEffect; // 0x678(0x08)
	struct UParticleSystemComponent* ParticleEffect; // 0x680(0x08)
	bool CurrentlyFiring; // 0x688(0x01)
	char pad_689[0x7]; // 0x689(0x07)
	double Stability Threshold; // 0x690(0x08)
	double StopTimestamp; // 0x698(0x08)
	double StopDelay; // 0x6a0(0x08)
	struct FName AttachPoint; // 0x6a8(0x0c)
	bool Attach To VFX_Camera; // 0x6b4(0x01)
	enum class Variant_Color_Enum Variant Color; // 0x6b5(0x01)

	void ConvertTimeDilationToTimelinePlayRate(double TimeDilation, struct UTimelineComponent* AffectedTimelineComponent, double& DesiredTimelinePlayRate); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.ConvertTimeDilationToTimelinePlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleFiringStateExit(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.HandleFiringStateExit // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleFiringStateEnter(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.HandleFiringStateEnter // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleReloadStateExit(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.HandleReloadStateExit // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleReloadStateEnter(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.HandleReloadStateEnter // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleEquipStateExit(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.HandleEquipStateExit // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleEquipStateEnter(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.HandleEquipStateEnter // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeTimeDilationBindings(); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.InitializeTimeDilationBindings // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Override Variant Color(); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.Override Variant Color // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Timeline_0__FinishedFunc(); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1b42740
	void Timeline_0__UpdateFunc(); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1b42740
	void ApplyAttributeDrivenTimeDilation(double TimeDilation); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.ApplyAttributeDrivenTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveTick(float DeltaSeconds); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void StartFiringEffect(); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.StartFiringEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StopFiringEffect(); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.StopFiringEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TickFiringEffect(double DeltaTime, struct AAresEquippable* Equippable); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.TickFiringEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void FadeInEffect(); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.FadeInEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ResetEffect(); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_Gun_WhileEquipped_1P_Base(int32_t EntryPoint); // Function FXC_Gun_WhileEquipped_1P_Base.FXC_Gun_WhileEquipped_1P_Base_C.ExecuteUbergraph_FXC_Gun_WhileEquipped_1P_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

