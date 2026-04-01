// BlueprintGeneratedClass BombOutOfBoundsVolume.BombOutOfBoundsVolume_C
// Size: 0x478 (Inherited: 0x460)
struct ABombOutOfBoundsVolume_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UBoxComponent* Box; // 0x468(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x470(0x08)

	void BndEvt__BombKillVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BombOutOfBoundsVolume.BombOutOfBoundsVolume_C.BndEvt__BombKillVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__BombKillVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BombOutOfBoundsVolume.BombOutOfBoundsVolume_C.BndEvt__BombKillVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BombOutOfBoundsVolume(int32_t EntryPoint); // Function BombOutOfBoundsVolume.BombOutOfBoundsVolume_C.ExecuteUbergraph_BombOutOfBoundsVolume // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

