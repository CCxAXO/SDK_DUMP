// WidgetBlueprintGeneratedClass WeaponSkinThumbnail.WeaponSkinThumbnail_C
// Size: 0x3b8 (Inherited: 0x318)
struct UWeaponSkinThumbnail_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* Amount; // 0x320(0x08)
	struct UImage* SkinImage; // 0x328(0x08)
	struct UScaleBox* ThumbnailScaleBox; // 0x330(0x08)
	struct TSoftClassPtr<UObject> PreviewEquippable; // 0x338(0x30)
	struct TMap<struct TSoftClassPtr<UObject>, struct FVector2D> GunOffsets; // 0x368(0x50)

	void ApplyPerGunOffset(struct TSoftClassPtr<UObject> Equippable); // Function WeaponSkinThumbnail.WeaponSkinThumbnail_C.ApplyPerGunOffset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WeaponSkinThumbnail.WeaponSkinThumbnail_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WeaponSkinThumbnail.WeaponSkinThumbnail_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WeaponSkinThumbnail(int32_t EntryPoint); // Function WeaponSkinThumbnail.WeaponSkinThumbnail_C.ExecuteUbergraph_WeaponSkinThumbnail // (Final|UbergraphFunction) // @ game+0x1af5410
};

