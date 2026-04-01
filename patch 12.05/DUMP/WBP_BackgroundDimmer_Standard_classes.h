// WidgetBlueprintGeneratedClass WBP_BackgroundDimmer_Standard.WBP_BackgroundDimmer_Standard_C
// Size: 0x388 (Inherited: 0x349)
struct UWBP_BackgroundDimmer_Standard_C : UWBP_BackgroundDimmer_Base_C {
	char pad_349[0x7]; // 0x349(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct UWidgetAnimation* Anim_Show; // 0x358(0x08)
	struct UBackgroundBlur* BackgroundBlur; // 0x360(0x08)
	struct UBorder* Border_ColorFill; // 0x368(0x08)
	struct FLinearColor BackgroundColor; // 0x370(0x10)
	double BlurStrength; // 0x380(0x08)

	void PreConstruct(bool IsDesignTime); // Function WBP_BackgroundDimmer_Standard.WBP_BackgroundDimmer_Standard_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_BackgroundDimmer_Standard.WBP_BackgroundDimmer_Standard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_BackgroundDimmer_Standard(int32_t EntryPoint); // Function WBP_BackgroundDimmer_Standard.WBP_BackgroundDimmer_Standard_C.ExecuteUbergraph_WBP_BackgroundDimmer_Standard // (Final|UbergraphFunction) // @ game+0x1af5410
};

