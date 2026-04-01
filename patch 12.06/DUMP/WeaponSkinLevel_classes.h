// WidgetBlueprintGeneratedClass WeaponSkinLevel.WeaponSkinLevel_C
// Size: 0x3a8 (Inherited: 0x318)
struct UWeaponSkinLevel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWeaponSkinThumbnail_C* WeaponSkinThumbnail; // 0x320(0x08)
	struct FStorefrontBundleItem BundleDetails; // 0x328(0x48)
	struct FMulticastInlineDelegate OnIsOwnedChanged; // 0x370(0x10)
	struct UEquippableSkinLevelDataAsset* SkinLevelDataAsset; // 0x380(0x08)
	struct FMulticastInlineDelegate OnIsEquippedChanged; // 0x388(0x10)
	struct FMulticastInlineDelegate OnIsLoyaltyContentChanged; // 0x398(0x10)

	void HandleIsLoyaltyContentChanged(); // Function WeaponSkinLevel.WeaponSkinLevel_C.HandleIsLoyaltyContentChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UnbindSkinLevel(); // Function WeaponSkinLevel.WeaponSkinLevel_C.UnbindSkinLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindSkinLevel(); // Function WeaponSkinLevel.WeaponSkinLevel_C.BindSkinLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsEquippedChanged(); // Function WeaponSkinLevel.WeaponSkinLevel_C.HandleIsEquippedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsOwnedChanged(); // Function WeaponSkinLevel.WeaponSkinLevel_C.HandleIsOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsEquipped(bool& IsEquipped); // Function WeaponSkinLevel.WeaponSkinLevel_C.IsEquipped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void IsOwned(bool& IsOwned); // Function WeaponSkinLevel.WeaponSkinLevel_C.IsOwned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void HandleSkinLoaded(struct UEquippableSkinHandle* Skin Handle); // Function WeaponSkinLevel.WeaponSkinLevel_C.HandleSkinLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSkinLevel(struct UEquippableSkinLevelDataAsset* NewSkinLevelDataAsset); // Function WeaponSkinLevel.WeaponSkinLevel_C.SetSkinLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WeaponSkinLevel.WeaponSkinLevel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WeaponSkinLevel(int32_t EntryPoint); // Function WeaponSkinLevel.WeaponSkinLevel_C.ExecuteUbergraph_WeaponSkinLevel // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnIsLoyaltyContentChanged__DelegateSignature(bool IsLoyaltyContent); // Function WeaponSkinLevel.WeaponSkinLevel_C.OnIsLoyaltyContentChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsEquippedChanged__DelegateSignature(bool IsEquipped); // Function WeaponSkinLevel.WeaponSkinLevel_C.OnIsEquippedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsOwnedChanged__DelegateSignature(bool IsOwned); // Function WeaponSkinLevel.WeaponSkinLevel_C.OnIsOwnedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

