// BlueprintGeneratedClass VM_WeaponSkinLevels.VM_WeaponSkinLevels_C
// Size: 0xd0 (Inherited: 0x90)
struct UVM_WeaponSkinLevels_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FMulticastInlineDelegate SkinHandleChanged; // 0x98(0x10)
	struct UEquippableSkinHandle* SkinHandle; // 0xa8(0x08)
	int32_t SelectedLevel; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct UOfferDTO* OfferDTO; // 0xb8(0x08)
	int32_t CurrentLevel; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct UEquippableSkinHandle* RequestedHandle; // 0xc8(0x08)

	void InitFromOfferDTO(struct UOfferDTO* OfferDTO); // Function VM_WeaponSkinLevels.VM_WeaponSkinLevels_C.InitFromOfferDTO // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateHasValidData(); // Function VM_WeaponSkinLevels.VM_WeaponSkinLevels_C.UpdateHasValidData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromSkinHandle(struct UEquippableSkinHandle* InSkinHandle); // Function VM_WeaponSkinLevels.VM_WeaponSkinLevels_C.InitFromSkinHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSkinHandle(struct UEquippableSkinHandle* InSkinHandle); // Function VM_WeaponSkinLevels.VM_WeaponSkinLevels_C.SetSkinHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetSkinHandle(struct UEquippableSkinHandle*& SkinHandle); // Function VM_WeaponSkinLevels.VM_WeaponSkinLevels_C.GetSkinHandle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void On Equippable Skin Loaded(struct UEquippableSkinHandle* EquippableSkinHandle); // Function VM_WeaponSkinLevels.VM_WeaponSkinLevels_C.On Equippable Skin Loaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetHighestLevelForSkin(struct UEquippableSkinHandle* SkinHandle, int32_t& HighestLevel); // Function VM_WeaponSkinLevels.VM_WeaponSkinLevels_C.GetHighestLevelForSkin // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void LoadSkinsFromEquippable(struct UEquippableSkinHandle* EquippableSkinHandle); // Function VM_WeaponSkinLevels.VM_WeaponSkinLevels_C.LoadSkinsFromEquippable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Reset(); // Function VM_WeaponSkinLevels.VM_WeaponSkinLevels_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_WeaponSkinLevels.VM_WeaponSkinLevels_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_WeaponSkinLevels(int32_t EntryPoint); // Function VM_WeaponSkinLevels.VM_WeaponSkinLevels_C.ExecuteUbergraph_VM_WeaponSkinLevels // (Final|UbergraphFunction) // @ game+0x1b42740
	void SkinHandleChanged__DelegateSignature(struct UEquippableSkinHandle* SkinHandle, int32_t SelectedLevel, int32_t CurrentLevel); // Function VM_WeaponSkinLevels.VM_WeaponSkinLevels_C.SkinHandleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

