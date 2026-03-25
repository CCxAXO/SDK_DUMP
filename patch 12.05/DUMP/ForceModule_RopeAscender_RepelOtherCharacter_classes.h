// BlueprintGeneratedClass ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C
// Size: 0x1f0 (Inherited: 0x1a0)
struct UForceModule_RopeAscender_RepelOtherCharacter_C : UForceModule_RopeAscenderBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1a0(0x08)
	double RepelRadiusSquared; // 0x1a8(0x08)
	double RepelRadius; // 0x1b0(0x08)
	double RepelSpringiness; // 0x1b8(0x08)
	bool bRepelOtherHitCharacters; // 0x1c0(0x01)
	char pad_1C1[0x3]; // 0x1c1(0x03)
	struct FForceModuleHandle SourceCharacterAscenderForceModule; // 0x1c4(0x08)
	char pad_1CC[0x4]; // 0x1cc(0x04)
	double ForceModuleActiveRadius; // 0x1d0(0x08)
	double ForceModuleActiveRadiusSquared; // 0x1d8(0x08)
	bool bRepelForceIsActive; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
	double SourceToTargetDistSquared; // 0x1e8(0x08)

	void GetSourceToTargetVector(struct FVector& GetSourceToTargetVector); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C.GetSourceToTargetVector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	bool TickForceModule(float DeltaTime); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C.TickForceModule // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FVector GetAppliedForce(struct FVector DestinationOffset, struct FVector Velocity, float TimeStep); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C.GetAppliedForce // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C.Initialize // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnMovementBlocked(struct FHitResult& BlockingHit); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C.OnMovementBlocked // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ForceModule_RopeAscender_RepelOtherCharacter(int32_t EntryPoint); // Function ForceModule_RopeAscender_RepelOtherCharacter.ForceModule_RopeAscender_RepelOtherCharacter_C.ExecuteUbergraph_ForceModule_RopeAscender_RepelOtherCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

