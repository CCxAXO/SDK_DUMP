// BlueprintGeneratedClass VM_WeaponSlot.VM_WeaponSlot_C
// Size: 0x178 (Inherited: 0x90)
struct UVM_WeaponSlot_C : UAresViewModelBase {
	struct UTexture* SkinImage; // 0x90(0x08)
	struct FText WeaponSlotName; // 0x98(0x18)
	struct UTexture* BuddyImage; // 0xb0(0x08)
	struct FMulticastInlineDelegate OnSkinImageChanged; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnWeaponSlotNameChanged; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnBuddyImageChanged; // 0xd8(0x10)
	struct UEquippableInventoryModel* InventoryModel; // 0xe8(0x08)
	bool bShowBuddy; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct FMulticastInlineDelegate OnShowBuddyChanged; // 0xf8(0x10)
	struct UEquippableSkinInventoryModel* EquippedSkin; // 0x108(0x08)
	struct FMulticastInlineDelegate OnEquippableClassChanged; // 0x110(0x10)
	struct UEquippableDataAsset* EquippableClass; // 0x120(0x08)
	struct TMap<struct UEquippableDataAsset*, struct FText> DataClassToCategory; // 0x128(0x50)

	void NavigateToWeaponDetails(struct UCommonButtonBase* Button); // Function VM_WeaponSlot.VM_WeaponSlot_C.NavigateToWeaponDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetEquippableClass(struct UEquippableDataAsset* NewEquippableClass); // Function VM_WeaponSlot.VM_WeaponSlot_C.SetEquippableClass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Refresh(); // Function VM_WeaponSlot.VM_WeaponSlot_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetShowBuddy(bool NewShowBuddy); // Function VM_WeaponSlot.VM_WeaponSlot_C.SetShowBuddy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEquippedChromaChanged(); // Function VM_WeaponSlot.VM_WeaponSlot_C.OnEquippedChromaChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEquippableSkinChromaLoaded(struct UEquippableSkinChromaHandle* EquippableSkinChromaHandle); // Function VM_WeaponSlot.VM_WeaponSlot_C.OnEquippableSkinChromaLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEquippedCharmChanged(); // Function VM_WeaponSlot.VM_WeaponSlot_C.OnEquippedCharmChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEquippableCharmLoaded(struct UEquippableCharmHandle* EquippableCharmHandle); // Function VM_WeaponSlot.VM_WeaponSlot_C.OnEquippableCharmLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEquippedSkinChanged(); // Function VM_WeaponSlot.VM_WeaponSlot_C.OnEquippedSkinChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEquippableLoaded(struct UEquippableHandle* EquippableHandle); // Function VM_WeaponSlot.VM_WeaponSlot_C.OnEquippableLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromEquippable(struct UEquippableDataAsset* WeaponSlot); // Function VM_WeaponSlot.VM_WeaponSlot_C.InitFromEquippable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBuddyImage(struct UTexture* NewBuddyImage); // Function VM_WeaponSlot.VM_WeaponSlot_C.SetBuddyImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetWeaponSlotName(struct FText NewWeaponSlotName); // Function VM_WeaponSlot.VM_WeaponSlot_C.SetWeaponSlotName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSkinImage(struct UTexture* NewSkinImage); // Function VM_WeaponSlot.VM_WeaponSlot_C.SetSkinImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEquippableClassChanged__DelegateSignature(struct UEquippableDataAsset* NewEquippableClass); // Function VM_WeaponSlot.VM_WeaponSlot_C.OnEquippableClassChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnShowBuddyChanged__DelegateSignature(bool bShowBuddy); // Function VM_WeaponSlot.VM_WeaponSlot_C.OnShowBuddyChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBuddyImageChanged__DelegateSignature(struct UTexture* NewBuddyImage); // Function VM_WeaponSlot.VM_WeaponSlot_C.OnBuddyImageChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnWeaponSlotNameChanged__DelegateSignature(struct FText NewWeaponSlotName); // Function VM_WeaponSlot.VM_WeaponSlot_C.OnWeaponSlotNameChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSkinImageChanged__DelegateSignature(struct UTexture* NewSkinImage); // Function VM_WeaponSlot.VM_WeaponSlot_C.OnSkinImageChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

