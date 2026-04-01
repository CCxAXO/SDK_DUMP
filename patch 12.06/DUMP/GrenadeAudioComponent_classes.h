// BlueprintGeneratedClass GrenadeAudioComponent.GrenadeAudioComponent_C
// Size: 0x191 (Inherited: 0xd8)
struct UGrenadeAudioComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct UAkAudioEvent* ProjectileStartEvent; // 0xe0(0x08)
	struct UAkAudioEvent* ProjectileStopEvent; // 0xe8(0x08)
	struct UAkAudioEvent* ProjectileLandAtLocation; // 0xf0(0x08)
	struct UAkAudioEvent* BounceLocationEvent; // 0xf8(0x08)
	struct UAkAudioEvent* BouncePawnEvent; // 0x100(0x08)
	bool TriggerProjectileLandOnEndPlay; // 0x108(0x01)
	bool EndPlayOnOwnerDeath; // 0x109(0x01)
	bool EnableDopplerRTPC; // 0x10a(0x01)
	char pad_10B[0x5]; // 0x10b(0x05)
	struct AProjectile* Projectile; // 0x110(0x08)
	struct FEffectID ContinuousFXC_Handle; // 0x118(0x18)
	bool HitPawn; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FVector Impact Location; // 0x138(0x18)
	struct FVector Impact Velocity; // 0x150(0x18)
	double BounceVolume; // 0x168(0x08)
	struct UAkAudioEvent* BounceEvent; // 0x170(0x08)
	struct FVector StopLocation; // 0x178(0x18)
	bool AudioStopped; // 0x190(0x01)

	void ReceiveBeginPlay(); // Function GrenadeAudioComponent.GrenadeAudioComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ProjectileStop(); // Function GrenadeAudioComponent.GrenadeAudioComponent_C.ProjectileStop // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnProjectileBounce(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity); // Function GrenadeAudioComponent.GrenadeAudioComponent_C.OnProjectileBounce // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BounceAudio(struct FVector ImpactLocation, struct FVector ImpactVelocity); // Function GrenadeAudioComponent.GrenadeAudioComponent_C.BounceAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function GrenadeAudioComponent.GrenadeAudioComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void TriggerStopAudio(struct FVector StopLocation, bool bIsEndPlay); // Function GrenadeAudioComponent.GrenadeAudioComponent_C.TriggerStopAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GrenadeAudioComponent(int32_t EntryPoint); // Function GrenadeAudioComponent.GrenadeAudioComponent_C.ExecuteUbergraph_GrenadeAudioComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

