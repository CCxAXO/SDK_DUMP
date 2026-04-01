// BlueprintGeneratedClass DeathForceModule.DeathForceModule_C
// Size: 0x1c0 (Inherited: 0x190)
struct UDeathForceModule_C : UForceModule {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x190(0x08)
	double MaxForce; // 0x198(0x08)
	struct FRootMotionData CurrentRootMotion; // 0x1a0(0x20)

	bool TickForceModule(float DeltaTime); // Function DeathForceModule.DeathForceModule_C.TickForceModule // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FVector GetAppliedForce(struct FVector DestinationOffset, struct FVector Velocity, float TimeStep); // Function DeathForceModule.DeathForceModule_C.GetAppliedForce // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(); // Function DeathForceModule.DeathForceModule_C.Initialize // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void Shutdown(); // Function DeathForceModule.DeathForceModule_C.Shutdown // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_DeathForceModule(int32_t EntryPoint); // Function DeathForceModule.DeathForceModule_C.ExecuteUbergraph_DeathForceModule // (Final|UbergraphFunction) // @ game+0x1af5410
};

