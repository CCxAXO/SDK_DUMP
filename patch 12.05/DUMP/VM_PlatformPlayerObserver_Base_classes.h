// BlueprintGeneratedClass VM_PlatformPlayerObserver_Base.VM_PlatformPlayerObserver_Base_C
// Size: 0x98 (Inherited: 0x90)
struct UVM_PlatformPlayerObserver_Base_C : UAresViewModelBase {
	struct UPlatformPlayer* ObservedPlayer; // 0x90(0x08)

	void RefreshAllData(); // Function VM_PlatformPlayerObserver_Base.VM_PlatformPlayerObserver_Base_C.RefreshAllData // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetObservedPlayer(struct UPlatformPlayer*& ObservedPlayer); // Function VM_PlatformPlayerObserver_Base.VM_PlatformPlayerObserver_Base_C.GetObservedPlayer // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetObservedPlayer(struct FString PlayerSubject); // Function VM_PlatformPlayerObserver_Base.VM_PlatformPlayerObserver_Base_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromPlayer(struct UPlatformPlayer* Player); // Function VM_PlatformPlayerObserver_Base.VM_PlatformPlayerObserver_Base_C.UnbindFromPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToPlayer(struct UPlatformPlayer* Player); // Function VM_PlatformPlayerObserver_Base.VM_PlatformPlayerObserver_Base_C.BindToPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

