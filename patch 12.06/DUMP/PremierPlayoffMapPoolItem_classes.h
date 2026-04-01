// WidgetBlueprintGeneratedClass PremierPlayoffMapPoolItem.PremierPlayoffMapPoolItem_C
// Size: 0x34a (Inherited: 0x318)
struct UPremierPlayoffMapPoolItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Hoverborder; // 0x320(0x08)
	struct UImage* IMG_MapBG; // 0x328(0x08)
	struct UImage* IMG_NameBG; // 0x330(0x08)
	struct UTextBlock* MapTitleText; // 0x338(0x08)
	struct UImage* Outline; // 0x340(0x08)
	bool LoadedUIData; // 0x348(0x01)
	bool LoadedSplashTexture; // 0x349(0x01)

	void OnLoaded_CC47ABD340A6BB3ED1B603BE2C24CF97(struct UObject* Loaded); // Function PremierPlayoffMapPoolItem.PremierPlayoffMapPoolItem_C.OnLoaded_CC47ABD340A6BB3ED1B603BE2C24CF97 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLoaded_7E9BA0EA4858AF0472671299D8D1672F(struct UObject* Loaded); // Function PremierPlayoffMapPoolItem.PremierPlayoffMapPoolItem_C.OnLoaded_7E9BA0EA4858AF0472671299D8D1672F // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct UMapDataAsset* MapDataAsset); // Function PremierPlayoffMapPoolItem.PremierPlayoffMapPoolItem_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShowIfLoaded(); // Function PremierPlayoffMapPoolItem.PremierPlayoffMapPoolItem_C.ShowIfLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PremierPlayoffMapPoolItem(int32_t EntryPoint); // Function PremierPlayoffMapPoolItem.PremierPlayoffMapPoolItem_C.ExecuteUbergraph_PremierPlayoffMapPoolItem // (Final|UbergraphFunction) // @ game+0x1b42740
};

