// BlueprintGeneratedClass BaseMovementSoundComponent.BaseMovementSoundComponent_C
// Size: 0x188 (Inherited: 0xd8)
struct UBaseMovementSoundComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct TMap<enum class ArmMovementType, struct UAkAudioEvent*> MovementSounds; // 0xe0(0x50)
	bool MovementSetSwitch; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct TMap<enum class ArmMovementType, struct UAkAudioEvent*> MovementSetOverride; // 0x138(0x50)

	void GetMovementAkEvent(enum class ArmMovementType& Key, struct TMap<enum class ArmMovementType, struct UAkAudioEvent*>& TargetMap, struct UAkAudioEvent*& Value); // Function BaseMovementSoundComponent.BaseMovementSoundComponent_C.GetMovementAkEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnArmMovementAnimNotify(struct UAnimSequenceBase* AnimSequence, struct USkeletalMeshComponent* SkelMeshComp, enum class ArmMovementType MovementType); // Function BaseMovementSoundComponent.BaseMovementSoundComponent_C.OnArmMovementAnimNotify // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BaseMovementSoundComponent(int32_t EntryPoint); // Function BaseMovementSoundComponent.BaseMovementSoundComponent_C.ExecuteUbergraph_BaseMovementSoundComponent // (Final|UbergraphFunction) // @ game+0x1af5410
};

