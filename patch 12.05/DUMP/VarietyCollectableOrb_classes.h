// BlueprintGeneratedClass VarietyCollectableOrb.VarietyCollectableOrb_C
// Size: 0x64c (Inherited: 0x604)
struct AVarietyCollectableOrb_C : ABaseCollectableOrb_C {
	char pad_604[0x4]; // 0x604(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x608(0x08)
	struct UActorVisibilityComponent* ActorVisibility; // 0x610(0x08)
	struct UBaseMinimapComponent_Parent_C* BaseMinimapComponent; // 0x618(0x08)
	struct UMaterialInstanceDynamic* DyamicMaterial; // 0x620(0x08)
	double OrbCountdownTime; // 0x628(0x08)
	struct UParticleSystem* OrbProgressTemplate; // 0x630(0x08)
	struct UParticleSystem* OrbIdleTemplate; // 0x638(0x08)
	double OrbDuration; // 0x640(0x08)
	int32_t UltimatePointsGranted; // 0x648(0x04)

	void SetParametersVFX(); // Function VarietyCollectableOrb.VarietyCollectableOrb_C.SetParametersVFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeMinimap(); // Function VarietyCollectableOrb.VarietyCollectableOrb_C.InitializeMinimap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function VarietyCollectableOrb.VarietyCollectableOrb_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void GrantOrbEffect(struct AShooterCharacter* ShooterCharacter); // Function VarietyCollectableOrb.VarietyCollectableOrb_C.GrantOrbEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VarietyCollectableOrb(int32_t EntryPoint); // Function VarietyCollectableOrb.VarietyCollectableOrb_C.ExecuteUbergraph_VarietyCollectableOrb // (Final|UbergraphFunction) // @ game+0x1af5410
};

