// BlueprintGeneratedClass Comp_Actor_MultiTargetHandler_FXC.Comp_Actor_MultiTargetHandler_FXC_C
// Size: 0x160 (Inherited: 0xd8)
struct UComp_Actor_MultiTargetHandler_FXC_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct AEffectContainer* AppliedFXC; // 0xe0(0x08)
	struct TMap<struct AActor*, struct FEffectID> ActiveActors; // 0xe8(0x50)
	bool RemoveAllActiveFXCsOnEndPlay; // 0x138(0x01)
	bool AllowReapplyIfNoFXCIsAttached; // 0x139(0x01)
	char pad_13A[0x6]; // 0x13a(0x06)
	struct FMulticastInlineDelegate FXC_Applied; // 0x140(0x10)
	struct FMulticastInlineDelegate FXC_Removed; // 0x150(0x10)

	void IsAppliedOnActor(struct AActor*& Actor, bool& IsApplied); // Function Comp_Actor_MultiTargetHandler_FXC.Comp_Actor_MultiTargetHandler_FXC_C.IsAppliedOnActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetAppliedActors(struct TArray<struct AActor*>& Keys); // Function Comp_Actor_MultiTargetHandler_FXC.Comp_Actor_MultiTargetHandler_FXC_C.GetAppliedActors // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	int32_t NumberOfActiveFXCs(); // Function Comp_Actor_MultiTargetHandler_FXC.Comp_Actor_MultiTargetHandler_FXC_C.NumberOfActiveFXCs // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void RemoveAllActiveFXCs(); // Function Comp_Actor_MultiTargetHandler_FXC.Comp_Actor_MultiTargetHandler_FXC_C.RemoveAllActiveFXCs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void FXC_ActiveOnActor(struct AActor*& InActor, bool& FXC_Active); // Function Comp_Actor_MultiTargetHandler_FXC.Comp_Actor_MultiTargetHandler_FXC_C.FXC_ActiveOnActor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void RemoveFXC_FromActor(struct AActor* InActor, enum class EStopEffectType StopEffectType); // Function Comp_Actor_MultiTargetHandler_FXC.Comp_Actor_MultiTargetHandler_FXC_C.RemoveFXC_FromActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplyFXC_ToActor(struct AActor* InActor, struct UObject* InContext, struct FEffectData EffectData, struct FVector Location, struct FRotator Rotation, struct FName AttachSocket, bool bLocalOnly, bool& FXC_Added); // Function Comp_Actor_MultiTargetHandler_FXC.Comp_Actor_MultiTargetHandler_FXC_C.ApplyFXC_ToActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Comp_Actor_MultiTargetHandler_FXC.Comp_Actor_MultiTargetHandler_FXC_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Comp_Actor_MultiTargetHandler_FXC(int32_t EntryPoint); // Function Comp_Actor_MultiTargetHandler_FXC.Comp_Actor_MultiTargetHandler_FXC_C.ExecuteUbergraph_Comp_Actor_MultiTargetHandler_FXC // (Final|UbergraphFunction) // @ game+0x1b42740
	void FXC_Removed__DelegateSignature(struct AActor* RemovedActor); // Function Comp_Actor_MultiTargetHandler_FXC.Comp_Actor_MultiTargetHandler_FXC_C.FXC_Removed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void FXC_Applied__DelegateSignature(struct AActor* AppliedActor, struct FEffectID EffectID); // Function Comp_Actor_MultiTargetHandler_FXC.Comp_Actor_MultiTargetHandler_FXC_C.FXC_Applied__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

