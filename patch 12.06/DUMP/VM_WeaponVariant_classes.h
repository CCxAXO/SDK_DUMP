// BlueprintGeneratedClass VM_WeaponVariant.VM_WeaponVariant_C
// Size: 0xe8 (Inherited: 0x90)
struct UVM_WeaponVariant_C : UAresViewModelBase {
	struct UEquippableSkinChromaHandle* ChromaHandle; // 0x90(0x08)
	struct UTexture* ChromaTexture; // 0x98(0x08)
	bool bIsOwned; // 0xa0(0x01)
	bool bIsEquipped; // 0xa1(0x01)
	bool bIsFavorited; // 0xa2(0x01)
	char pad_A3[0x5]; // 0xa3(0x05)
	struct FMulticastInlineDelegate OnChromaTextureChanged; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnIsOwnedChanged; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnIsEquippedChanged; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnIsFavoritedChanged; // 0xd8(0x10)

	void SetIsFavorited(bool bInIsFavorited); // Function VM_WeaponVariant.VM_WeaponVariant_C.SetIsFavorited // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsEquipped(bool bInIsEquipped); // Function VM_WeaponVariant.VM_WeaponVariant_C.SetIsEquipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsOwned(bool bInIsOwned); // Function VM_WeaponVariant.VM_WeaponVariant_C.SetIsOwned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetChromaTexture(struct UTexture* InTexture); // Function VM_WeaponVariant.VM_WeaponVariant_C.SetChromaTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetChromaHandle(struct UEquippableSkinChromaHandle* InChromaHandle); // Function VM_WeaponVariant.VM_WeaponVariant_C.SetChromaHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateIsFavorited(); // Function VM_WeaponVariant.VM_WeaponVariant_C.UpdateIsFavorited // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateIsEquipped(); // Function VM_WeaponVariant.VM_WeaponVariant_C.UpdateIsEquipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateIsOwned(); // Function VM_WeaponVariant.VM_WeaponVariant_C.UpdateIsOwned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateChromaTexture(); // Function VM_WeaponVariant.VM_WeaponVariant_C.UpdateChromaTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToChromaStateChanged(bool bShouldBind); // Function VM_WeaponVariant.VM_WeaponVariant_C.BindToChromaStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsFavoritedChanged__DelegateSignature(bool OutIsFavorited); // Function VM_WeaponVariant.VM_WeaponVariant_C.OnIsFavoritedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsEquippedChanged__DelegateSignature(bool OutIsEquipped); // Function VM_WeaponVariant.VM_WeaponVariant_C.OnIsEquippedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsOwnedChanged__DelegateSignature(bool OutIsOwned); // Function VM_WeaponVariant.VM_WeaponVariant_C.OnIsOwnedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnChromaTextureChanged__DelegateSignature(struct UTexture* OutTexture); // Function VM_WeaponVariant.VM_WeaponVariant_C.OnChromaTextureChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

