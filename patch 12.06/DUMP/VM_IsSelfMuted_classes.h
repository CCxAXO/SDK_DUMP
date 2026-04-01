// BlueprintGeneratedClass VM_IsSelfMuted.VM_IsSelfMuted_C
// Size: 0xa9 (Inherited: 0x90)
struct UVM_IsSelfMuted_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FMulticastInlineDelegate OnIsSelfMutedChanged; // 0x98(0x10)
	bool bIsSelfMuted; // 0xa8(0x01)

	void GetIsSelfMuted(bool& bIsSelfMuted); // Function VM_IsSelfMuted.VM_IsSelfMuted_C.GetIsSelfMuted // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetIsSelfMuted(bool bNewValue); // Function VM_IsSelfMuted.VM_IsSelfMuted_C.SetIsSelfMuted // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateIsSelfMuted(); // Function VM_IsSelfMuted.VM_IsSelfMuted_C.UpdateIsSelfMuted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsSelfMutedChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function VM_IsSelfMuted.VM_IsSelfMuted_C.HandleIsSelfMutedChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Reset(); // Function VM_IsSelfMuted.VM_IsSelfMuted_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(); // Function VM_IsSelfMuted.VM_IsSelfMuted_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_IsSelfMuted(int32_t EntryPoint); // Function VM_IsSelfMuted.VM_IsSelfMuted_C.ExecuteUbergraph_VM_IsSelfMuted // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnIsSelfMutedChanged__DelegateSignature(bool bIsSelfMuted); // Function VM_IsSelfMuted.VM_IsSelfMuted_C.OnIsSelfMutedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

