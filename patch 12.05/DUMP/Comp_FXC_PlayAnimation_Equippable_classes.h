// BlueprintGeneratedClass Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C
// Size: 0x158 (Inherited: 0xe8)
struct UComp_FXC_PlayAnimation_Equippable_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct UAnimMontage* 1P_Animation; // 0xf0(0x08)
	struct UAnimMontage* 3P_Animation; // 0xf8(0x08)
	struct UAnimMontage* 1P_Cosmetic_Animation; // 0x100(0x08)
	bool StopAnimWhenEffectIsDestroyed; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	double 1P_PlayRate; // 0x110(0x08)
	double 3P_PlayRate; // 0x118(0x08)
	struct AShooterCharacter* OwningShooterCharacter; // 0x120(0x08)
	struct AAresEquippable* OwningEquippable; // 0x128(0x08)
	double TimeModifier; // 0x130(0x08)
	struct TArray<struct FStruct_PlayingMontage> ActiveMontages; // 0x138(0x10)
	bool bManualStart; // 0x148(0x01)
	bool DestroyEffectIfEquippableUnequipped; // 0x149(0x01)
	char pad_14A[0x6]; // 0x14a(0x06)
	double StartTime; // 0x150(0x08)

	void Update Play Rates(double New 1P Play Rate, double New 3P Play Rate); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.Update Play Rates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetMontagePosition(struct UAnimMontage* InMontage, double& OutMontagePosition); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.GetMontagePosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTimeDilation(double TimeDilation); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.SetTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool ShouldPlayAnimation(); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.ShouldPlayAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GoToMontageSection(struct FString SectionName); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.GoToMontageSection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetPlayRate(double BasePlayRate, double TimeModifier, double& PlayRate); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.GetPlayRate // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetEquippable(struct UObject* OnObject, struct AAresEquippable*& Equippable); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.GetEquippable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PlayAnimation(double StartTime); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.PlayAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ResetEffect(); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PlayEquippableAnimation(struct UAnimMontage* Montage, struct USkeletalMeshComponent* Mesh, double PlayRate, double StartTime); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.PlayEquippableAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StopActiveMontages(); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.StopActiveMontages // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UnbindMontageEvents(); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.UnbindMontageEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MontageStopped(struct UAnimMontage* Montage, bool bInterrupted); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.MontageStopped // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TriggerManualStart(); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.TriggerManualStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnItemUnequipped_Event_1(); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.OnItemUnequipped_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyAttributeDrivenTimeDilation(float TimeDilation); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.ApplyAttributeDrivenTimeDilation // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_FXC_PlayAnimation_Equippable(int32_t EntryPoint); // Function Comp_FXC_PlayAnimation_Equippable.Comp_FXC_PlayAnimation_Equippable_C.ExecuteUbergraph_Comp_FXC_PlayAnimation_Equippable // (Final|UbergraphFunction) // @ game+0x1af5410
};

