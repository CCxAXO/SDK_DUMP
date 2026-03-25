// BlueprintGeneratedClass VM_ContextMenuItem_Action_ReportTeam.VM_ContextMenuItem_Action_ReportTeam_C
// Size: 0x1d8 (Inherited: 0x1d0)
struct UVM_ContextMenuItem_Action_ReportTeam_C : UAresContextMenuItemActionViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d0(0x08)

	void DoPerformAction(); // Function VM_ContextMenuItem_Action_ReportTeam.VM_ContextMenuItem_Action_ReportTeam_C.DoPerformAction // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BindToEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_ReportTeam.VM_ContextMenuItem_Action_ReportTeam_C.BindToEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_ReportTeam.VM_ContextMenuItem_Action_ReportTeam_C.UnbindFromEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void RefreshState(); // Function VM_ContextMenuItem_Action_ReportTeam.VM_ContextMenuItem_Action_ReportTeam_C.RefreshState // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePlatformPlayerPropertyChanged(struct UPlatformPlayer* PlatformPlayer); // Function VM_ContextMenuItem_Action_ReportTeam.VM_ContextMenuItem_Action_ReportTeam_C.HandlePlatformPlayerPropertyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_ContextMenuItem_Action_ReportTeam(int32_t EntryPoint); // Function VM_ContextMenuItem_Action_ReportTeam.VM_ContextMenuItem_Action_ReportTeam_C.ExecuteUbergraph_VM_ContextMenuItem_Action_ReportTeam // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

