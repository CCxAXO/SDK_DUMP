// BlueprintGeneratedClass Comp_Gun_ZoomFiringRateModifier.Comp_Gun_ZoomFiringRateModifier_C
// Size: 0x100 (Inherited: 0xd8)
struct UComp_Gun_ZoomFiringRateModifier_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct AGun_Zoomable_C* OwningGun; // 0xe0(0x08)
	struct UFiringStateComponent* FiringState; // 0xe8(0x08)
	double ZoomFiringRateMultiplier; // 0xf0(0x08)
	double DefaultFiringRate; // 0xf8(0x08)

	bool IsCurrentlyZoomed(); // Function Comp_Gun_ZoomFiringRateModifier.Comp_Gun_ZoomFiringRateModifier_C.IsCurrentlyZoomed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Bind Event Handlers(); // Function Comp_Gun_ZoomFiringRateModifier.Comp_Gun_ZoomFiringRateModifier_C.Bind Event Handlers // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnItemEquipped_Event_1(); // Function Comp_Gun_ZoomFiringRateModifier.Comp_Gun_ZoomFiringRateModifier_C.OnItemEquipped_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnZoomStateReset_Event_1(); // Function Comp_Gun_ZoomFiringRateModifier.Comp_Gun_ZoomFiringRateModifier_C.OnZoomStateReset_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize Equippable Variables(); // Function Comp_Gun_ZoomFiringRateModifier.Comp_Gun_ZoomFiringRateModifier_C.Initialize Equippable Variables // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Firing Rate(); // Function Comp_Gun_ZoomFiringRateModifier.Comp_Gun_ZoomFiringRateModifier_C.Update Firing Rate // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function Comp_Gun_ZoomFiringRateModifier.Comp_Gun_ZoomFiringRateModifier_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnZoomLevelReached_Event(double ZoomLevel); // Function Comp_Gun_ZoomFiringRateModifier.Comp_Gun_ZoomFiringRateModifier_C.OnZoomLevelReached_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_Gun_ZoomFiringRateModifier(int32_t EntryPoint); // Function Comp_Gun_ZoomFiringRateModifier.Comp_Gun_ZoomFiringRateModifier_C.ExecuteUbergraph_Comp_Gun_ZoomFiringRateModifier // (Final|UbergraphFunction) // @ game+0x1af5410
};

