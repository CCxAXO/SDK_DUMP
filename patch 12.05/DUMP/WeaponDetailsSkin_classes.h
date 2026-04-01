// WidgetBlueprintGeneratedClass WeaponDetailsSkin.WeaponDetailsSkin_C
// Size: 0x448 (Inherited: 0x318)
struct UWeaponDetailsSkin_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* Placeholder; // 0x320(0x08)
	struct UWidgetSwitcher* Switcher; // 0x328(0x08)
	struct UOverlay* SwitcherImage; // 0x330(0x08)
	struct UScaleBox* SwitcherPlaceholder; // 0x338(0x08)
	struct UImage* WeaponDiamondImg; // 0x340(0x08)
	struct UWeaponSkinThumbnail_C* WeaponSkinThumbnail; // 0x348(0x08)
	struct UAkAudioEvent* ClickSound; // 0x350(0x08)
	struct UAkAudioEvent* HoverSound; // 0x358(0x08)
	struct TMap<struct TSoftClassPtr<UObject>, struct FVector2D> GunOffsets; // 0x360(0x50)
	struct FMulticastInlineDelegate OnIsEquippedChanged; // 0x3b0(0x10)
	struct FMulticastInlineDelegate OnIsOwnedChanged; // 0x3c0(0x10)
	struct UEquippableSkinDataAsset* SkinDataAsset; // 0x3d0(0x08)
	struct TSoftClassPtr<UObject> PreviewEquippable; // 0x3d8(0x30)
	struct FMulticastInlineDelegate OnIsLoyaltyContentChanged; // 0x408(0x10)
	struct UMaterialInstanceDynamic* DynamicSkinMaterial; // 0x418(0x08)
	struct FAdditionalCarouselObjectContext IsJuiceContent; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct FMulticastInlineDelegate OnIsFavoritedChanged; // 0x428(0x10)
	struct FMulticastInlineDelegate OnBalanceChanged; // 0x438(0x10)

	void IsFavorited(bool& IsFavorited); // Function WeaponDetailsSkin.WeaponDetailsSkin_C.IsFavorited // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void IsEquipped(bool& Equipped); // Function WeaponDetailsSkin.WeaponDetailsSkin_C.IsEquipped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void IsOwned(bool& IsOwned); // Function WeaponDetailsSkin.WeaponDetailsSkin_C.IsOwned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void ShouldTreatAsJuiceContent(bool& ShouldTreatAsJuiceContent); // Function WeaponDetailsSkin.WeaponDetailsSkin_C.ShouldTreatAsJuiceContent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSkinHandleLoaded(struct UEquippableSkinHandle* Skin Handle); // Function WeaponDetailsSkin.WeaponDetailsSkin_C.OnSkinHandleLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleBalanceChanged(int32_t Balance); // Function WeaponDetailsSkin.WeaponDetailsSkin_C.HandleBalanceChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsLoyaltyContentChanged(); // Function WeaponDetailsSkin.WeaponDetailsSkin_C.HandleIsLoyaltyContentChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsFavoritedChanged(); // Function WeaponDetailsSkin.WeaponDetailsSkin_C.HandleIsFavoritedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsOwnedChanged(); // Function WeaponDetailsSkin.WeaponDetailsSkin_C.HandleIsOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsEquippedChanged(); // Function WeaponDetailsSkin.WeaponDetailsSkin_C.HandleIsEquippedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSkinFromSkinLevelHandle(struct UEquippableSkinLevelHandle* Skin); // Function WeaponDetailsSkin.WeaponDetailsSkin_C.SetSkinFromSkinLevelHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSkin(struct UEquippableSkinDataAsset* NewSkinDataAsset, int32_t Quantity, struct FAdditionalCarouselObjectContext AdditionalContext); // Function WeaponDetailsSkin.WeaponDetailsSkin_C.SetSkin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromSkin(); // Function WeaponDetailsSkin.WeaponDetailsSkin_C.UnbindFromSkin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToSkin(); // Function WeaponDetailsSkin.WeaponDetailsSkin_C.BindToSkin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WeaponDetailsSkin.WeaponDetailsSkin_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WeaponDetailsSkin(int32_t EntryPoint); // Function WeaponDetailsSkin.WeaponDetailsSkin_C.ExecuteUbergraph_WeaponDetailsSkin // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnBalanceChanged__DelegateSignature(int32_t NewBalance); // Function WeaponDetailsSkin.WeaponDetailsSkin_C.OnBalanceChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsFavoritedChanged__DelegateSignature(bool IsFavorited); // Function WeaponDetailsSkin.WeaponDetailsSkin_C.OnIsFavoritedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsLoyaltyContentChanged__DelegateSignature(bool IsLoyaltyContent); // Function WeaponDetailsSkin.WeaponDetailsSkin_C.OnIsLoyaltyContentChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsOwnedChanged__DelegateSignature(bool IsOwned); // Function WeaponDetailsSkin.WeaponDetailsSkin_C.OnIsOwnedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsEquippedChanged__DelegateSignature(bool IsEquipped); // Function WeaponDetailsSkin.WeaponDetailsSkin_C.OnIsEquippedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

