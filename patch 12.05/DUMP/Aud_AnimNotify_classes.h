// BlueprintGeneratedClass Aud_AnimNotify.Aud_AnimNotify_C
// Size: 0x80 (Inherited: 0x40)
struct UAud_AnimNotify_C : UAnimNotify {
	struct UAkAudioEvent* event; // 0x40(0x08)
	struct FName AttachName; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
	struct FVector Offset; // 0x58(0x18)
	bool SetPerspetiveAndTeamSwitch; // 0x70(0x01)
	bool ForceStopOnMontageInterrupted; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
	double MontageEndAudioDurationThreshold; // 0x78(0x08)

	void PostAudioPlayed(struct UAresAudioComponent* AudioComponent, struct UAnimSequenceBase* Animation, struct USkeletalMeshComponent* MeshComponent, double AudioEventDuration); // Function Aud_AnimNotify.Aud_AnimNotify_C.PostAudioPlayed // (Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference); // Function Aud_AnimNotify.Aud_AnimNotify_C.Received_Notify // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
};

