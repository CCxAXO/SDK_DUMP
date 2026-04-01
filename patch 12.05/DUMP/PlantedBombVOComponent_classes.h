// BlueprintGeneratedClass PlantedBombVOComponent.PlantedBombVOComponent_C
// Size: 0x158 (Inherited: 0xd8)
struct UPlantedBombVOComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct APlantedBomb_C* PlantedBomb; // 0xe0(0x08)
	bool PlayedOutOfTimeVO; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct TMap<struct AShooterCharacter*, int32_t> CharactersThatHaveBegunDefuse; // 0xf0(0x50)
	bool PlayedResumeDefuseVO; // 0x140(0x01)
	bool PlayedDefuseThankVO; // 0x141(0x01)
	char pad_142[0x6]; // 0x142(0x06)
	struct TArray<struct AShooterCharacter*> LastTwoDefusers; // 0x148(0x10)

	void IsPreviousDefuserAlive(bool& Alive); // Function PlantedBombVOComponent.PlantedBombVOComponent_C.IsPreviousDefuserAlive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnBombUseStarted(struct UInteractableUserComponent* User); // Function PlantedBombVOComponent.PlantedBombVOComponent_C.OnBombUseStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayDefuseOutOfTimeVOIfNeeded(struct AShooterCharacter* ShooterCharacter); // Function PlantedBombVOComponent.PlantedBombVOComponent_C.PlayDefuseOutOfTimeVOIfNeeded // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayDefuseResumedVOIfNeeded(struct AShooterCharacter* ShooterCharacter); // Function PlantedBombVOComponent.PlantedBombVOComponent_C.PlayDefuseResumedVOIfNeeded // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function PlantedBombVOComponent.PlantedBombVOComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PlayDefuseThankVOIfNeeded(struct AShooterCharacter* ShooterCharacter); // Function PlantedBombVOComponent.PlantedBombVOComponent_C.PlayDefuseThankVOIfNeeded // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PlantedBombVOComponent(int32_t EntryPoint); // Function PlantedBombVOComponent.PlantedBombVOComponent_C.ExecuteUbergraph_PlantedBombVOComponent // (Final|UbergraphFunction) // @ game+0x1af5410
};

