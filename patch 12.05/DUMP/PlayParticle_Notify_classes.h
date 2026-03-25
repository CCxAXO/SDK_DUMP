// BlueprintGeneratedClass PlayParticle_Notify.PlayParticle_Notify_C
// Size: 0x89 (Inherited: 0x40)
struct UPlayParticle_Notify_C : UAnimNotify {
	struct TArray<bool> Particle Info; // 0x40(0x10)
	struct TArray<struct UParticleSystemComponent*> SpawnedParticles; // 0x50(0x10)
	bool KillParticlesOnMontageInterrupt; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	double Custom Time Dilation; // 0x68(0x08)
	bool IsTimeDilated; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct UParticleSystemComponent*> ParticlesToDilate; // 0x78(0x10)
	bool IsCharacterAnimation; // 0x88(0x01)

	void Override Time Dilation(double Custom Time Dilation); // Function PlayParticle_Notify.PlayParticle_Notify_C.Override Time Dilation // (Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void State Interrupt(enum class EAresEquippableState State); // Function PlayParticle_Notify.PlayParticle_Notify_C.State Interrupt // (Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void Zoom Interrupt(bool ZoomIn); // Function PlayParticle_Notify.PlayParticle_Notify_C.Zoom Interrupt // (Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void DestroyParticlesOnInterrupt(); // Function PlayParticle_Notify.PlayParticle_Notify_C.DestroyParticlesOnInterrupt // (Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference); // Function PlayParticle_Notify.PlayParticle_Notify_C.Received_Notify // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
};

