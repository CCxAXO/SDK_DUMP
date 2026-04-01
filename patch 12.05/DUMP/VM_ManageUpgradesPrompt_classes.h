// BlueprintGeneratedClass VM_ManageUpgradesPrompt.VM_ManageUpgradesPrompt_C
// Size: 0xb9 (Inherited: 0x90)
struct UVM_ManageUpgradesPrompt_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UBaseHandle* Base Handle; // 0x98(0x08)
	struct UEquippableSkinHandle* Skin Handle; // 0xa0(0x08)
	struct FMulticastInlineDelegate OnShouldShowPromptChanged; // 0xa8(0x10)
	bool ShouldShowPrompt; // 0xb8(0x01)

	void EvaluateShouldShowPrompt(); // Function VM_ManageUpgradesPrompt.VM_ManageUpgradesPrompt_C.EvaluateShouldShowPrompt // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromSkinHandle(struct UEquippableSkinHandle* InSkinHandle); // Function VM_ManageUpgradesPrompt.VM_ManageUpgradesPrompt_C.InitFromSkinHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetShouldShowPrompt(bool bShouldShowPrompt); // Function VM_ManageUpgradesPrompt.VM_ManageUpgradesPrompt_C.SetShouldShowPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Reset(); // Function VM_ManageUpgradesPrompt.VM_ManageUpgradesPrompt_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_ManageUpgradesPrompt(int32_t EntryPoint); // Function VM_ManageUpgradesPrompt.VM_ManageUpgradesPrompt_C.ExecuteUbergraph_VM_ManageUpgradesPrompt // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnShouldShowPromptChanged__DelegateSignature(bool bShouldShowPrompt); // Function VM_ManageUpgradesPrompt.VM_ManageUpgradesPrompt_C.OnShouldShowPromptChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

