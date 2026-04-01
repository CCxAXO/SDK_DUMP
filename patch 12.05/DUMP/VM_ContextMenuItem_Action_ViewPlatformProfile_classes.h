// BlueprintGeneratedClass VM_ContextMenuItem_Action_ViewPlatformProfile.VM_ContextMenuItem_Action_ViewPlatformProfile_C
// Size: 0x208 (Inherited: 0x1d0)
struct UVM_ContextMenuItem_Action_ViewPlatformProfile_C : UAresContextMenuItemActionViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d0(0x08)
	struct FText PlayStationLabel; // 0x1d8(0x18)
	struct FText XboxLabel; // 0x1f0(0x18)

	void HandleOnStringChanged(struct FString NewValue); // Function VM_ContextMenuItem_Action_ViewPlatformProfile.VM_ContextMenuItem_Action_ViewPlatformProfile_C.HandleOnStringChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindOrUnbindEvents(bool bDoBind); // Function VM_ContextMenuItem_Action_ViewPlatformProfile.VM_ContextMenuItem_Action_ViewPlatformProfile_C.BindOrUnbindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DoPerformAction(); // Function VM_ContextMenuItem_Action_ViewPlatformProfile.VM_ContextMenuItem_Action_ViewPlatformProfile_C.DoPerformAction // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void RefreshState(); // Function VM_ContextMenuItem_Action_ViewPlatformProfile.VM_ContextMenuItem_Action_ViewPlatformProfile_C.RefreshState // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_ViewPlatformProfile.VM_ContextMenuItem_Action_ViewPlatformProfile_C.BindToEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_ViewPlatformProfile.VM_ContextMenuItem_Action_ViewPlatformProfile_C.UnbindFromEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelCreated(); // Function VM_ContextMenuItem_Action_ViewPlatformProfile.VM_ContextMenuItem_Action_ViewPlatformProfile_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void HandleViewPlatformProfileSuccess(); // Function VM_ContextMenuItem_Action_ViewPlatformProfile.VM_ContextMenuItem_Action_ViewPlatformProfile_C.HandleViewPlatformProfileSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleViewPlatformProfileError(); // Function VM_ContextMenuItem_Action_ViewPlatformProfile.VM_ContextMenuItem_Action_ViewPlatformProfile_C.HandleViewPlatformProfileError // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_ContextMenuItem_Action_ViewPlatformProfile(int32_t EntryPoint); // Function VM_ContextMenuItem_Action_ViewPlatformProfile.VM_ContextMenuItem_Action_ViewPlatformProfile_C.ExecuteUbergraph_VM_ContextMenuItem_Action_ViewPlatformProfile // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

