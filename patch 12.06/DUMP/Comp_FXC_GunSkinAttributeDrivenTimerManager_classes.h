// BlueprintGeneratedClass Comp_FXC_GunSkinAttributeDrivenTimerManager.Comp_FXC_GunSkinAttributeDrivenTimerManager_C
// Size: 0x160 (Inherited: 0x148)
struct UComp_FXC_GunSkinAttributeDrivenTimerManager_C : UGunSkinAttributeDrivenTimerManagerComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x148(0x08)
	struct TArray<struct UActorComponent*> ComponentsAffectedByTimeDilation; // 0x150(0x10)

	void TimeDilationChanged(float TimeDilation); // Function Comp_FXC_GunSkinAttributeDrivenTimerManager.Comp_FXC_GunSkinAttributeDrivenTimerManager_C.TimeDilationChanged // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function Comp_FXC_GunSkinAttributeDrivenTimerManager.Comp_FXC_GunSkinAttributeDrivenTimerManager_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Comp_FXC_GunSkinAttributeDrivenTimerManager(int32_t EntryPoint); // Function Comp_FXC_GunSkinAttributeDrivenTimerManager.Comp_FXC_GunSkinAttributeDrivenTimerManager_C.ExecuteUbergraph_Comp_FXC_GunSkinAttributeDrivenTimerManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

