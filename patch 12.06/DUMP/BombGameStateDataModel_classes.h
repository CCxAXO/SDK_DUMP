// BlueprintGeneratedClass BombGameStateDataModel.BombGameStateDataModel_C
// Size: 0x5d9 (Inherited: 0x5d0)
struct UBombGameStateDataModel_C : UShooterGameStateDataModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d0(0x08)
	enum class EAresBombStates BombState; // 0x5d8(0x01)

	void OnBombDefuseStart(struct AShooterCharacter* Defuser); // Function BombGameStateDataModel.BombGameStateDataModel_C.OnBombDefuseStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBombDefuseStop(); // Function BombGameStateDataModel.BombGameStateDataModel_C.OnBombDefuseStop // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBombPlantStart(struct AShooterCharacter* Planter, enum class BombSiteEnum PlantSite); // Function BombGameStateDataModel.BombGameStateDataModel_C.OnBombPlantStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBombPlantCancelled(enum class BombSiteEnum PlantSite); // Function BombGameStateDataModel.BombGameStateDataModel_C.OnBombPlantCancelled // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBombPlanted(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function BombGameStateDataModel.BombGameStateDataModel_C.OnBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBombCheckpointReached(struct AShooterCharacter* Defuser, int32_t CheckpointNumber, double DefuseProgress); // Function BombGameStateDataModel.BombGameStateDataModel_C.OnBombCheckpointReached // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOrbPickedUp(struct AShooterCharacter* Orb Gatherer, struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameStateDataModel.BombGameStateDataModel_C.OnOrbPickedUp // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOrbSpawned(struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameStateDataModel.BombGameStateDataModel_C.OnOrbSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOrbUseStarted(struct AShooterCharacter* Orb Gatherer, struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameStateDataModel.BombGameStateDataModel_C.OnOrbUseStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOrbUseCancelled(struct AShooterCharacter* Orb Gatherer, struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameStateDataModel.BombGameStateDataModel_C.OnOrbUseCancelled // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBombStateChanged(enum class EAresBombStates BombState); // Function BombGameStateDataModel.BombGameStateDataModel_C.OnBombStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeModel(struct AShooterGameState* InGameState); // Function BombGameStateDataModel.BombGameStateDataModel_C.InitializeModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnOrbDespawned(struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameStateDataModel.BombGameStateDataModel_C.OnOrbDespawned // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlasmaArmorRegenPoolUpdated(struct AShooterCharacter* OwningPlayer, double New Value); // Function BombGameStateDataModel.BombGameStateDataModel_C.OnPlasmaArmorRegenPoolUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlasmaArmorMaxRegenPoolUpdated(struct AShooterCharacter* OwningPlayer, double NewValue); // Function BombGameStateDataModel.BombGameStateDataModel_C.OnPlasmaArmorMaxRegenPoolUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BombGameStateDataModel(int32_t EntryPoint); // Function BombGameStateDataModel.BombGameStateDataModel_C.ExecuteUbergraph_BombGameStateDataModel // (Final|UbergraphFunction) // @ game+0x1b42740
};

