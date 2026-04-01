// WidgetBlueprintGeneratedClass SharedBlurBg.SharedBlurBg_C
// Size: 0x420 (Inherited: 0x318)
struct USharedBlurBg_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Background; // 0x320(0x08)
	struct UBackgroundBlur* BackgroundBlur_205; // 0x328(0x08)
	double BlurStrength; // 0x330(0x08)
	struct FLinearColor bgcolor; // 0x338(0x10)
	char pad_348[0x8]; // 0x348(0x08)
	struct FSlateBrush LowQualityFallbackBrush; // 0x350(0xd0)

	void PreConstruct(bool IsDesignTime); // Function SharedBlurBg.SharedBlurBg_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SharedBlurBg(int32_t EntryPoint); // Function SharedBlurBg.SharedBlurBg_C.ExecuteUbergraph_SharedBlurBg // (Final|UbergraphFunction) // @ game+0x1af5410
};

