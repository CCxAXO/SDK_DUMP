// BlueprintGeneratedClass VM_ModelViewerPrompt.VM_ModelViewerPrompt_C
// Size: 0xc9 (Inherited: 0x90)
struct UVM_ModelViewerPrompt_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UBaseHandle* Base Handle; // 0x98(0x08)
	struct UEquippableSkinHandle* Skin Handle; // 0xa0(0x08)
	struct UEquippableSkinChromaHandle* Chroma Handle; // 0xa8(0x08)
	struct UEquippableCharmHandle* Equippable Charm Handle; // 0xb0(0x08)
	struct FMulticastInlineDelegate OnShouldShowPromptChanged; // 0xb8(0x10)
	bool ShouldShowPrompt; // 0xc8(0x01)

	void EvaluateShouldShowPrompt(); // Function VM_ModelViewerPrompt.VM_ModelViewerPrompt_C.EvaluateShouldShowPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void NavigateTo3DModelInspector(bool ShowVariantSelector, bool ShowFavoriteActionForSkins, bool ShowEquipActionForSkins, bool ShowFavoriteActionForOtherTypes, bool ShowEquipActionForOtherTypes); // Function VM_ModelViewerPrompt.VM_ModelViewerPrompt_C.NavigateTo3DModelInspector // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromSprayHandle(struct USprayHandle* In Spray Handle); // Function VM_ModelViewerPrompt.VM_ModelViewerPrompt_C.InitFromSprayHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromChromaHandle(struct UEquippableSkinChromaHandle* InChromaHandle); // Function VM_ModelViewerPrompt.VM_ModelViewerPrompt_C.InitFromChromaHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromCharmHandle(struct UEquippableCharmHandle* InCharmHandle); // Function VM_ModelViewerPrompt.VM_ModelViewerPrompt_C.InitFromCharmHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromSkinHandle(struct UEquippableSkinHandle* InSkinHandle); // Function VM_ModelViewerPrompt.VM_ModelViewerPrompt_C.InitFromSkinHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromBaseHandle(struct UBaseHandle* In Base Handle); // Function VM_ModelViewerPrompt.VM_ModelViewerPrompt_C.InitFromBaseHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetShouldShowPrompt(bool bShouldShowPrompt); // Function VM_ModelViewerPrompt.VM_ModelViewerPrompt_C.SetShouldShowPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Reset(); // Function VM_ModelViewerPrompt.VM_ModelViewerPrompt_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_ModelViewerPrompt(int32_t EntryPoint); // Function VM_ModelViewerPrompt.VM_ModelViewerPrompt_C.ExecuteUbergraph_VM_ModelViewerPrompt // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnShouldShowPromptChanged__DelegateSignature(bool bShouldShowPrompt); // Function VM_ModelViewerPrompt.VM_ModelViewerPrompt_C.OnShouldShowPromptChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

