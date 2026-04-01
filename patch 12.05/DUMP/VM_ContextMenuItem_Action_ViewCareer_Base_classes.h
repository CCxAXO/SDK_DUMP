// BlueprintGeneratedClass VM_ContextMenuItem_Action_ViewCareer_Base.VM_ContextMenuItem_Action_ViewCareer_Base_C
// Size: 0x1d8 (Inherited: 0x1d0)
struct UVM_ContextMenuItem_Action_ViewCareer_Base_C : UAresContextMenuItemActionViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d0(0x08)

	void PerformActionPC(); // Function VM_ContextMenuItem_Action_ViewCareer_Base.VM_ContextMenuItem_Action_ViewCareer_Base_C.PerformActionPC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetVisiblityCondition(bool& bIsVisible); // Function VM_ContextMenuItem_Action_ViewCareer_Base.VM_ContextMenuItem_Action_ViewCareer_Base_C.GetVisiblityCondition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DoPerformAction(); // Function VM_ContextMenuItem_Action_ViewCareer_Base.VM_ContextMenuItem_Action_ViewCareer_Base_C.DoPerformAction // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void RefreshState(); // Function VM_ContextMenuItem_Action_ViewCareer_Base.VM_ContextMenuItem_Action_ViewCareer_Base_C.RefreshState // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_ViewCareer_Base.VM_ContextMenuItem_Action_ViewCareer_Base_C.BindToEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_ViewCareer_Base.VM_ContextMenuItem_Action_ViewCareer_Base_C.UnbindFromEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void HandleGameFlowStateChanged(enum class EGameFlowStateType NewState); // Function VM_ContextMenuItem_Action_ViewCareer_Base.VM_ContextMenuItem_Action_ViewCareer_Base_C.HandleGameFlowStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePlatformPlayerPropertyChanged(struct UPlatformPlayer* PlatformPlayer); // Function VM_ContextMenuItem_Action_ViewCareer_Base.VM_ContextMenuItem_Action_ViewCareer_Base_C.HandlePlatformPlayerPropertyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_ContextMenuItem_Action_ViewCareer_Base(int32_t EntryPoint); // Function VM_ContextMenuItem_Action_ViewCareer_Base.VM_ContextMenuItem_Action_ViewCareer_Base_C.ExecuteUbergraph_VM_ContextMenuItem_Action_ViewCareer_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

