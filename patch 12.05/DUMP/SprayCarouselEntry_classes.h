// WidgetBlueprintGeneratedClass SprayCarouselEntry.SprayCarouselEntry_C
// Size: 0x338 (Inherited: 0x318)
struct USprayCarouselEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USizeBox* EntrySizeBox; // 0x320(0x08)
	struct USpray_C* Spray; // 0x328(0x08)
	struct USprayHandle* SprayHandle; // 0x330(0x08)

	struct UObject* GetEntryObject(); // Function SprayCarouselEntry.SprayCarouselEntry_C.GetEntryObject // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void OnCarouselSet(struct UInfiniteCarouselV2* InfiniteCarousel); // Function SprayCarouselEntry.SprayCarouselEntry_C.OnCarouselSet // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSelected(bool bSelected); // Function SprayCarouselEntry.SprayCarouselEntry_C.SetSelected // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEntryObjectSet(struct UObject* EntryObject); // Function SprayCarouselEntry.SprayCarouselEntry_C.OnEntryObjectSet // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDimensions(struct FVector2D Dimensions); // Function SprayCarouselEntry.SprayCarouselEntry_C.SetDimensions // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SprayCarouselEntry(int32_t EntryPoint); // Function SprayCarouselEntry.SprayCarouselEntry_C.ExecuteUbergraph_SprayCarouselEntry // (Final|UbergraphFunction) // @ game+0x1af5410
};

