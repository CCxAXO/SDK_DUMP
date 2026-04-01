// BlueprintGeneratedClass Comp_Actor_Concussable.Comp_Actor_Concussable_C
// Size: 0x130 (Inherited: 0xe0)
struct UComp_Actor_Concussable_C : UBaseConcussComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe0(0x08)
	struct TArray<struct FStruct_ConcussRequest> ActiveConcussArray; // 0xe8(0x10)
	struct AShooterCharacter* ShooterCharacter; // 0xf8(0x08)
	struct FActiveGameplayEffectHandle BuffHandle; // 0x100(0x08)
	bool IsBuffActive; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	double ConcussLevel; // 0x110(0x08)
	double PostConcussAssistDuration; // 0x118(0x08)
	double PostConcussAssistDurationV2; // 0x120(0x08)
	struct AActor* LatestConcussCauser; // 0x128(0x08)

	void AuthStopAllConcuss(); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C.AuthStopAllConcuss // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetConcussLevel(double& Level); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C.GetConcussLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void ApplyConcuss(double Duration, struct AActor* Owner); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C.ApplyConcuss // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateConcussBuff(); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C.UpdateConcussBuff // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	double GetConcussLevelForRequest(struct FStruct_ConcussRequest& Struct_ConcussRequest); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C.GetConcussLevelForRequest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void HasConcussRequestExpired(struct FStruct_ConcussRequest& concuss, bool& HasExpired); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C.HasConcussRequestExpired // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Tick Concuss Array(); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C.Tick Concuss Array // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveTick(float DeltaSeconds); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void DelayStartTicking(); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C.DelayStartTicking // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnConcussActiveTagChanged(struct UAresAbilitySystemComponent* AbilitySystem, struct FGameplayTag Tag, bool TagActive); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C.OnConcussActiveTagChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_Actor_Concussable(int32_t EntryPoint); // Function Comp_Actor_Concussable.Comp_Actor_Concussable_C.ExecuteUbergraph_Comp_Actor_Concussable // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

