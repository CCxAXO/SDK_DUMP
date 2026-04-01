// WidgetBlueprintGeneratedClass KillBanner_PieSlice.KillBanner_PieSlice_C
// Size: 0x38c (Inherited: 0x318)
struct UKillBanner_PieSlice_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* AnimateIn; // 0x320(0x08)
	struct UWidgetAnimation* State3_PreviouslyLit; // 0x328(0x08)
	struct UWidgetAnimation* State2_CurrentlyLit; // 0x330(0x08)
	struct UWidgetAnimation* State1_NotLit; // 0x338(0x08)
	struct UBorder* Colorizer; // 0x340(0x08)
	struct UImage* hover; // 0x348(0x08)
	struct USpacer* SpaceMaker; // 0x350(0x08)
	struct UImage* Up; // 0x358(0x08)
	double Height; // 0x360(0x08)
	struct UTexture2D* SliceUp; // 0x368(0x08)
	struct UTexture2D* SliceHover; // 0x370(0x08)
	int32_t State; // 0x378(0x04)
	struct FLinearColor PrimaryColor; // 0x37c(0x10)

	void SetSize(double Height); // Function KillBanner_PieSlice.KillBanner_PieSlice_C.SetSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void LightenColor(struct FLinearColor PrimaryColor, struct FLinearColor& DarkColor); // Function KillBanner_PieSlice.KillBanner_PieSlice_C.LightenColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void DarkenColor(struct FLinearColor PrimaryColor, struct FLinearColor& DarkColor); // Function KillBanner_PieSlice.KillBanner_PieSlice_C.DarkenColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetTextures(struct UTexture2D* SliceUp, struct UTexture2D* SliceHover); // Function KillBanner_PieSlice.KillBanner_PieSlice_C.SetTextures // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetColor(struct FLinearColor ColorOverride); // Function KillBanner_PieSlice.KillBanner_PieSlice_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPipState(int32_t State); // Function KillBanner_PieSlice.KillBanner_PieSlice_C.SetPipState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function KillBanner_PieSlice.KillBanner_PieSlice_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function KillBanner_PieSlice.KillBanner_PieSlice_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_KillBanner_PieSlice(int32_t EntryPoint); // Function KillBanner_PieSlice.KillBanner_PieSlice_C.ExecuteUbergraph_KillBanner_PieSlice // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

