// WidgetBlueprintGeneratedClass BlindedSourcePoint.BlindedSourcePoint_C
// Size: 0x350 (Inherited: 0x318)
struct UBlindedSourcePoint_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Point; // 0x320(0x08)
	struct UImage* PointOverlay; // 0x328(0x08)
	struct UMaterialInstanceDynamic* PointMaterial; // 0x330(0x08)
	struct UMaterialInstanceDynamic* OverlayMaterial; // 0x338(0x08)
	struct FVector2D Size; // 0x340(0x10)

	void Construct(); // Function BlindedSourcePoint.BlindedSourcePoint_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BlindedSourcePoint(int32_t EntryPoint); // Function BlindedSourcePoint.BlindedSourcePoint_C.ExecuteUbergraph_BlindedSourcePoint // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

