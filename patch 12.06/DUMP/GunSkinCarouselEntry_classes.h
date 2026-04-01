// WidgetBlueprintGeneratedClass GunSkinCarouselEntry.GunSkinCarouselEntry_C
// Size: 0x348 (Inherited: 0x318)
struct UGunSkinCarouselEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USizeBox* EntrySizeBox; // 0x320(0x08)
	struct UWeaponDetailsSkin_C* WeaponDetailsSkin; // 0x328(0x08)
	struct UEquippableSkinHandle* Skin; // 0x330(0x08)
	struct FMulticastInlineDelegate Clicked; // 0x338(0x10)

	struct UObject* GetEntryObject(); // Function GunSkinCarouselEntry.GunSkinCarouselEntry_C.GetEntryObject // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void OnCarouselSet(struct UInfiniteCarouselV2* InfiniteCarousel); // Function GunSkinCarouselEntry.GunSkinCarouselEntry_C.OnCarouselSet // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSelected(bool bSelected); // Function GunSkinCarouselEntry.GunSkinCarouselEntry_C.SetSelected // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEntryObjectSet(struct UObject* EntryObject); // Function GunSkinCarouselEntry.GunSkinCarouselEntry_C.OnEntryObjectSet // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetDimensions(struct FVector2D Dimensions); // Function GunSkinCarouselEntry.GunSkinCarouselEntry_C.SetDimensions // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GunSkinCarouselEntry(int32_t EntryPoint); // Function GunSkinCarouselEntry.GunSkinCarouselEntry_C.ExecuteUbergraph_GunSkinCarouselEntry // (Final|UbergraphFunction) // @ game+0x1b42740
	void Clicked__DelegateSignature(struct UEquippableSkinHandle* Skin); // Function GunSkinCarouselEntry.GunSkinCarouselEntry_C.Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

