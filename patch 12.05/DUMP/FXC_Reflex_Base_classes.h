// BlueprintGeneratedClass FXC_Reflex_Base.FXC_Reflex_Base_C
// Size: 0x660 (Inherited: 0x620)
struct AFXC_Reflex_Base_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x628(0x08)
	struct UAnimMontage* RedDot_Montage; // 0x630(0x08)
	struct USkeletalMeshComponent* Current Mesh; // 0x638(0x08)
	struct TArray<struct FStruct_PlayingMontage> Active Montages; // 0x640(0x10)
	bool StopAnimWhenEffectIsDestroyed; // 0x650(0x01)
	bool StartEffectWithGunEquipAnimation; // 0x651(0x01)
	char pad_652[0x6]; // 0x652(0x06)
	double Time In; // 0x658(0x08)

	void ConvertTimeDilationToTimelinePlayRate(double TimeDilation, struct UTimelineComponent* AffectedTimelineComponent, double& DesiredTimelinePlayRate); // Function FXC_Reflex_Base.FXC_Reflex_Base_C.ConvertTimeDilationToTimelinePlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	double GetAttributeDrivenTimeDilation(); // Function FXC_Reflex_Base.FXC_Reflex_Base_C.GetAttributeDrivenTimeDilation // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	double GetMontagePlayRate(struct UActorComponent* EffectContxt); // Function FXC_Reflex_Base.FXC_Reflex_Base_C.GetMontagePlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void OnNotifyEnd_19D5FED24D166E56EF07CA8142E26F93(struct FName NotifyName); // Function FXC_Reflex_Base.FXC_Reflex_Base_C.OnNotifyEnd_19D5FED24D166E56EF07CA8142E26F93 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnNotifyBegin_19D5FED24D166E56EF07CA8142E26F93(struct FName NotifyName); // Function FXC_Reflex_Base.FXC_Reflex_Base_C.OnNotifyBegin_19D5FED24D166E56EF07CA8142E26F93 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInterrupted_19D5FED24D166E56EF07CA8142E26F93(struct FName NotifyName); // Function FXC_Reflex_Base.FXC_Reflex_Base_C.OnInterrupted_19D5FED24D166E56EF07CA8142E26F93 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnBlendOut_19D5FED24D166E56EF07CA8142E26F93(struct FName NotifyName); // Function FXC_Reflex_Base.FXC_Reflex_Base_C.OnBlendOut_19D5FED24D166E56EF07CA8142E26F93 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCompleted_19D5FED24D166E56EF07CA8142E26F93(struct FName NotifyName); // Function FXC_Reflex_Base.FXC_Reflex_Base_C.OnCompleted_19D5FED24D166E56EF07CA8142E26F93 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Reflex_Base.FXC_Reflex_Base_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Reflex_Base.FXC_Reflex_Base_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_Reflex_Base.FXC_Reflex_Base_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StopActiveMontages(); // Function FXC_Reflex_Base.FXC_Reflex_Base_C.StopActiveMontages // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MontageStopped(struct UAnimMontage* Montage, bool bInterrupted); // Function FXC_Reflex_Base.FXC_Reflex_Base_C.MontageStopped // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyAttributeDrivenTimeDilation(double TimeDilation); // Function FXC_Reflex_Base.FXC_Reflex_Base_C.ApplyAttributeDrivenTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_Reflex_Base(int32_t EntryPoint); // Function FXC_Reflex_Base.FXC_Reflex_Base_C.ExecuteUbergraph_FXC_Reflex_Base // (Final|UbergraphFunction) // @ game+0x1af5410
};

