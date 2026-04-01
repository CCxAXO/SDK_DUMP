// BlueprintGeneratedClass ForceModule_RopeAscender.ForceModule_RopeAscender_C
// Size: 0x358 (Inherited: 0x1a0)
struct UForceModule_RopeAscender_C : UForceModule_RopeAscenderBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1a0(0x08)
	struct USplineComponent* Spline; // 0x1a8(0x08)
	struct UCurveFloat* DesiredSpeedVsRange; // 0x1b0(0x08)
	bool CanJumpOff; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct FVector AttachOffset; // 0x1c0(0x18)
	struct FEffectID MoveUpEffectID; // 0x1d8(0x18)
	struct FEffectID MoveDownEffectID; // 0x1f0(0x18)
	bool PlayingMovingUp; // 0x208(0x01)
	bool PlayingMovingDown; // 0x209(0x01)
	char pad_20A[0x6]; // 0x20a(0x06)
	struct FTransform CurrentSplineTransform; // 0x210(0x60)
	struct FVector DesiredSplineVelocity; // 0x270(0x18)
	struct UStaticMeshComponent* MovementThresholdPlane; // 0x288(0x08)
	struct FExplicitFloatCurve AngleToPlaneVsSpeed; // 0x290(0x88)
	double CreationTime; // 0x318(0x08)
	double MinimumDetachTime; // 0x320(0x08)
	double FixedMovementDirection; // 0x328(0x08)
	bool JumpPressed; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	double TagModifier; // 0x338(0x08)
	struct FGameplayTag DisableAscenderTag; // 0x340(0x0c)
	bool ShouldDropOff; // 0x34c(0x01)
	char pad_34D[0x3]; // 0x34d(0x03)
	double LastAINoiseTime; // 0x350(0x08)

	void ReportAINoise(); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.ReportAINoise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RequestDropOff(); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.RequestDropOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetMovementSpeed(double& Speed, bool& Walking); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.GetMovementSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void FindNearestSplineTransform(struct FTransform& Distance, double& Key); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.FindNearestSplineTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void JumpOff(); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.JumpOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool TickForceModule(float DeltaTime); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.TickForceModule // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetSplineOffset(double SplineDistance, struct FVector& Offset); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.GetSplineOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct FVector GetAppliedForce(struct FVector DestinationOffset, struct FVector Velocity, float TimeStep); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.GetAppliedForce // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.Initialize // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Shutdown(); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.Shutdown // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ResetFallDamage(); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.ResetFallDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void JumpPressedEvent(struct AShooterCharacter* Character); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.JumpPressedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ForceModule_RopeAscender(int32_t EntryPoint); // Function ForceModule_RopeAscender.ForceModule_RopeAscender_C.ExecuteUbergraph_ForceModule_RopeAscender // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

