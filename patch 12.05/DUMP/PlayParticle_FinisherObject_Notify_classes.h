// BlueprintGeneratedClass PlayParticle_FinisherObject_Notify.PlayParticle_FinisherObject_Notify_C
// Size: 0x184 (Inherited: 0x40)
struct UPlayParticle_FinisherObject_Notify_C : UAnimNotify {
	struct FGunSkinParticleInfo Particle Info; // 0x40(0xb8)
	struct TSoftObjectPtr<UParticleSystem> Particle Template; // 0xf8(0x30)
	struct FName Attach Socket; // 0x128(0x0c)
	char pad_134[0x4]; // 0x134(0x04)
	struct FVector Location Offset; // 0x138(0x18)
	bool Flip Particle Orientation; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	double speedMultiplier; // 0x158(0x08)
	bool setManualRotation; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct FRotator ManualRotation; // 0x168(0x18)
	int32_t TransluencySortPriority; // 0x180(0x04)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference); // Function PlayParticle_FinisherObject_Notify.PlayParticle_FinisherObject_Notify_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
};

