// BlueprintGeneratedClass Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C
// Size: 0x158 (Inherited: 0xd8)
struct UComp_PlayerCharacter_SmokeOverlays_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct TMap<struct AActor*, struct FStruct_SmokeAndColorAlphaInfo> ActiveSmokesAndColors; // 0xe0(0x50)
	struct AShooterCharacter* OwningShooterCharacter; // 0x130(0x08)
	struct UStaticMesh* MeshFrameTemplate; // 0x138(0x08)
	struct UStaticMeshComponent* MeshFrame; // 0x140(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x148(0x08)
	struct UMaterialInterface* DynamicMaterialTemplate; // 0x150(0x08)

	void UpdateSmokeOverlay(); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.UpdateSmokeOverlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetSmokeColor(double& HighestAlpha, struct FLinearColor& HighestAlphaColorMain, struct FLinearColor& HighestAlphaColorFringe); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.GetSmokeColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AttemptStopUpdating(bool& Stopped); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.AttemptStopUpdating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateDynamicMaterial(struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.CreateDynamicMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetMeshFrameAndDynamicMaterial(struct UStaticMeshComponent*& MeshFrame, struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.GetMeshFrameAndDynamicMaterial // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddOrUpdateSmokeOverlay(struct AActor* Smoke, double Alpha, struct FLinearColor ColorMain, struct FLinearColor ColorFringe); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.AddOrUpdateSmokeOverlay // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void RemoveSmokeOverlay(struct AActor* Smoke); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.RemoveSmokeOverlay // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveTick(float DeltaSeconds); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnDestroyed_Event_1(struct AActor* DestroyedActor); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.OnDestroyed_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePerspective(); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.UpdatePerspective // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCharacterDeath_Event_1(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.OnCharacterDeath_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_PlayerCharacter_SmokeOverlays(int32_t EntryPoint); // Function Comp_PlayerCharacter_SmokeOverlays.Comp_PlayerCharacter_SmokeOverlays_C.ExecuteUbergraph_Comp_PlayerCharacter_SmokeOverlays // (Final|UbergraphFunction) // @ game+0x1af5410
};

