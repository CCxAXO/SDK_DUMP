// BlueprintGeneratedClass Comp_Gun_FlaggedStability.Comp_Gun_FlaggedStability_C
// Size: 0x146 (Inherited: 0xd8)
struct UComp_Gun_FlaggedStability_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct AAresEquippable* OwningGun; // 0xe0(0x08)
	struct UStabilityComponent* DefaultStability; // 0xe8(0x08)
	struct UStabilityComponent* PrototypeStability; // 0xf0(0x08)
	struct UFiringStateComponent* FiringState; // 0xf8(0x08)
	struct UStabilityVisualizationComponent* DefaultStabilityVisualization; // 0x100(0x08)
	struct UStabilityVisualizationComponent* PrototypeStabilityVisualization; // 0x108(0x08)
	struct UStabilityVisualizationManagerComponent* StabilityVisualizationManager; // 0x110(0x08)
	bool IsEnabled; // 0x118(0x01)
	enum class EGameRuleBoolName GameRule; // 0x119(0x01)
	char pad_11A[0x6]; // 0x11a(0x06)
	double DefaultFiringRate; // 0x120(0x08)
	bool ShouldOverrideZoomStability; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	struct FName PrototypeTag; // 0x12c(0x0c)
	struct FName DefaultTag; // 0x138(0x0c)
	bool ShouldOverrideVisualization; // 0x144(0x01)
	bool IsInitialized; // 0x145(0x01)

	void IsSiblingFlaggedStabilityEnabled(bool& IsSiblingEnabled, struct UComp_Gun_FlaggedStability_C*& FlaggedStabilityComponent); // Function Comp_Gun_FlaggedStability.Comp_Gun_FlaggedStability_C.IsSiblingFlaggedStabilityEnabled // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool IsStabilityEnabled(); // Function Comp_Gun_FlaggedStability.Comp_Gun_FlaggedStability_C.IsStabilityEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void FindComponentWithTag(struct UActorComponent* ComponentClass, struct FName TagFilter, struct UActorComponent*& FoundComponent); // Function Comp_Gun_FlaggedStability.Comp_Gun_FlaggedStability_C.FindComponentWithTag // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool IsCurrentlyZoomed(); // Function Comp_Gun_FlaggedStability.Comp_Gun_FlaggedStability_C.IsCurrentlyZoomed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Initialize Stability Visualization(); // Function Comp_Gun_FlaggedStability.Comp_Gun_FlaggedStability_C.Initialize Stability Visualization // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function Comp_Gun_FlaggedStability.Comp_Gun_FlaggedStability_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Initialize Equippable Variables(); // Function Comp_Gun_FlaggedStability.Comp_Gun_FlaggedStability_C.Initialize Equippable Variables // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize Feature Toggle(); // Function Comp_Gun_FlaggedStability.Comp_Gun_FlaggedStability_C.Initialize Feature Toggle // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnItemEquipped_Event_1(); // Function Comp_Gun_FlaggedStability.Comp_Gun_FlaggedStability_C.OnItemEquipped_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnZoomStateReset_Event_1(); // Function Comp_Gun_FlaggedStability.Comp_Gun_FlaggedStability_C.OnZoomStateReset_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Stability Component(); // Function Comp_Gun_FlaggedStability.Comp_Gun_FlaggedStability_C.Update Stability Component // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Event Bindings(); // Function Comp_Gun_FlaggedStability.Comp_Gun_FlaggedStability_C.Update Event Bindings // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Check For Other Stability Flags(); // Function Comp_Gun_FlaggedStability.Comp_Gun_FlaggedStability_C.Check For Other Stability Flags // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Current Stability(); // Function Comp_Gun_FlaggedStability.Comp_Gun_FlaggedStability_C.Update Current Stability // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnGameRuleBoolChanged_NotifyBlueprint_Event_1(enum class EGameRuleBoolName GameRuleName, bool bEnabled); // Function Comp_Gun_FlaggedStability.Comp_Gun_FlaggedStability_C.OnGameRuleBoolChanged_NotifyBlueprint_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize Component(); // Function Comp_Gun_FlaggedStability.Comp_Gun_FlaggedStability_C.Initialize Component // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnZoomLevelReached_Event_1(double ZoomLevel); // Function Comp_Gun_FlaggedStability.Comp_Gun_FlaggedStability_C.OnZoomLevelReached_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_Gun_FlaggedStability(int32_t EntryPoint); // Function Comp_Gun_FlaggedStability.Comp_Gun_FlaggedStability_C.ExecuteUbergraph_Comp_Gun_FlaggedStability // (Final|UbergraphFunction) // @ game+0x1af5410
};

