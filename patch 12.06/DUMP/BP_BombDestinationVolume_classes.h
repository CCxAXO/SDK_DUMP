// BlueprintGeneratedClass BP_BombDestinationVolume.BP_BombDestinationVolume_C
// Size: 0x4c8 (Inherited: 0x4b0)
struct ABP_BombDestinationVolume_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UStaticMeshComponent* TriggerBox; // 0x4b8(0x08)
	struct UBillboardComponent* Billboard; // 0x4c0(0x08)

	void IsOverlappingShooterCharacter(struct AShooterCharacter* ShooterCharacter, bool& Overlapping); // Function BP_BombDestinationVolume.BP_BombDestinationVolume_C.IsOverlappingShooterCharacter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function BP_BombDestinationVolume.BP_BombDestinationVolume_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BP_BombDestinationVolume(int32_t EntryPoint); // Function BP_BombDestinationVolume.BP_BombDestinationVolume_C.ExecuteUbergraph_BP_BombDestinationVolume // (Final|UbergraphFunction) // @ game+0x1b42740
};

