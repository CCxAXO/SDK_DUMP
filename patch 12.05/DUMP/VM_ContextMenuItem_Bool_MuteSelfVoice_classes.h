// BlueprintGeneratedClass VM_ContextMenuItem_Bool_MuteSelfVoice.VM_ContextMenuItem_Bool_MuteSelfVoice_C
// Size: 0x200 (Inherited: 0x1f8)
struct UVM_ContextMenuItem_Bool_MuteSelfVoice_C : UAresContextMenuItemBoolViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1f8(0x08)

	void Bind And Update For Self Mute Setting(bool bDoBind); // Function VM_ContextMenuItem_Bool_MuteSelfVoice.VM_ContextMenuItem_Bool_MuteSelfVoice_C.Bind And Update For Self Mute Setting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Bool_MuteSelfVoice.VM_ContextMenuItem_Bool_MuteSelfVoice_C.BindToEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Bool_MuteSelfVoice.VM_ContextMenuItem_Bool_MuteSelfVoice_C.UnbindFromEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void RefreshState(); // Function VM_ContextMenuItem_Bool_MuteSelfVoice.VM_ContextMenuItem_Bool_MuteSelfVoice_C.RefreshState // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBoolValue(bool bNewValue); // Function VM_ContextMenuItem_Bool_MuteSelfVoice.VM_ContextMenuItem_Bool_MuteSelfVoice_C.SetBoolValue // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleSelfMuteBoolSettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function VM_ContextMenuItem_Bool_MuteSelfVoice.VM_ContextMenuItem_Bool_MuteSelfVoice_C.HandleSelfMuteBoolSettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_ContextMenuItem_Bool_MuteSelfVoice(int32_t EntryPoint); // Function VM_ContextMenuItem_Bool_MuteSelfVoice.VM_ContextMenuItem_Bool_MuteSelfVoice_C.ExecuteUbergraph_VM_ContextMenuItem_Bool_MuteSelfVoice // (Final|UbergraphFunction) // @ game+0x1af5410
};

