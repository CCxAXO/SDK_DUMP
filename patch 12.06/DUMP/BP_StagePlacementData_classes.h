// BlueprintGeneratedClass BP_StagePlacementData.BP_StagePlacementData_C
// Size: 0x60 (Inherited: 0x30)
struct UBP_StagePlacementData_C : UObject {
	struct UEsportsMatchupViewModelV2* MatchupViewModelV2; // 0x30(0x08)
	struct UWidget* StageAdvancementWidget; // 0x38(0x08)
	struct FString StageName; // 0x40(0x10)
	bool bIsFirstSeed; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct UEsportsValidDataVMHelper* ValidDataVMHelper; // 0x58(0x08)

	void OnStageMatchupPlacementReady(struct UObject* Data); // Function BP_StagePlacementData.BP_StagePlacementData_C.OnStageMatchupPlacementReady // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClearValidDataVMHelper(); // Function BP_StagePlacementData.BP_StagePlacementData_C.ClearValidDataVMHelper // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetValidDataVMHelper(struct UEsportsValidDataVMHelper* InVMHelper); // Function BP_StagePlacementData.BP_StagePlacementData_C.SetValidDataVMHelper // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct UEsportsMatchupViewModelV2* InMatchupViewModelV2, struct UWidget* InStageAdvancementWidget, struct FString InStageName, bool bInIsFirstSeed); // Function BP_StagePlacementData.BP_StagePlacementData_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

