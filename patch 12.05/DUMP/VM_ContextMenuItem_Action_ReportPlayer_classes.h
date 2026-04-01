// BlueprintGeneratedClass VM_ContextMenuItem_Action_ReportPlayer.VM_ContextMenuItem_Action_ReportPlayer_C
// Size: 0x1d8 (Inherited: 0x1d0)
struct UVM_ContextMenuItem_Action_ReportPlayer_C : UAresContextMenuItemActionViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d0(0x08)

	void GetMatchID(struct FString& MatchID); // Function VM_ContextMenuItem_Action_ReportPlayer.VM_ContextMenuItem_Action_ReportPlayer_C.GetMatchID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void RefreshState(); // Function VM_ContextMenuItem_Action_ReportPlayer.VM_ContextMenuItem_Action_ReportPlayer_C.RefreshState // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DoPerformAction(); // Function VM_ContextMenuItem_Action_ReportPlayer.VM_ContextMenuItem_Action_ReportPlayer_C.DoPerformAction // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_ContextMenuItem_Action_ReportPlayer(int32_t EntryPoint); // Function VM_ContextMenuItem_Action_ReportPlayer.VM_ContextMenuItem_Action_ReportPlayer_C.ExecuteUbergraph_VM_ContextMenuItem_Action_ReportPlayer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

