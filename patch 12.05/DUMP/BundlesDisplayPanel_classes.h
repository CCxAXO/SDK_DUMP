// WidgetBlueprintGeneratedClass BundlesDisplayPanel.BundlesDisplayPanel_C
// Size: 0x391 (Inherited: 0x318)
struct UBundlesDisplayPanel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UFeaturedBundleStoreItemV2_C* FeaturedBundlePreview; // 0x320(0x08)
	struct UFeaturedBundleStoreItemV2_C* FeaturedBundlePreviewForTransition; // 0x328(0x08)
	struct UTabTimerConductor_C* TabTimerConductor; // 0x330(0x08)
	struct UBundleViewModel* SelectedBundle; // 0x338(0x08)
	int32_t CurrentBundleIndex; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct TArray<None> FeaturedBundles; // 0x348(0x10)
	bool IsPlatformTouch; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct UUserWidget* BundleDetailsWidgetClass; // 0x360(0x08)
	struct FGuid EsportsCTABundleStorefrontItemID; // 0x368(0x10)
	struct UStorefrontItemDataAsset* EsportsCTABundleStorefrontItemDataAsset; // 0x378(0x08)
	struct UCurrencyDataAsset* EsportsCTAPurchaseCurrencyDataAsset; // 0x380(0x08)
	struct UBundleViewModel* EsportsCTAMockedBundleModel; // 0x388(0x08)
	bool EsportsCTABundleInjected; // 0x390(0x01)

	void ResetCTABundle(); // Function BundlesDisplayPanel.BundlesDisplayPanel_C.ResetCTABundle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayFeaturedBundles(); // Function BundlesDisplayPanel.BundlesDisplayPanel_C.DisplayFeaturedBundles // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnConfigChanged(struct FName& ConfigName); // Function BundlesDisplayPanel.BundlesDisplayPanel_C.OnConfigChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShouldAddCTABundle(bool& ShouldAdd); // Function BundlesDisplayPanel.BundlesDisplayPanel_C.ShouldAddCTABundle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void OnCTABundleCurrencyLoaded(struct UCurrencyHandle* CurrencyHandle); // Function BundlesDisplayPanel.BundlesDisplayPanel_C.OnCTABundleCurrencyLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCTABundleLoaded(struct UStorefrontItemHandle* StorefrontItemHandle); // Function BundlesDisplayPanel.BundlesDisplayPanel_C.OnCTABundleLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnUndoBundleFadeoutComplete(); // Function BundlesDisplayPanel.BundlesDisplayPanel_C.OnUndoBundleFadeoutComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnBundleFadeoutComplete(); // Function BundlesDisplayPanel.BundlesDisplayPanel_C.OnBundleFadeoutComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HasBundle(struct UBundleViewModel* Bundle, bool& IsFeatured); // Function BundlesDisplayPanel.BundlesDisplayPanel_C.HasBundle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TryToDisplayBundleDetails(struct UBundleViewModel* BundleToDisplay); // Function BundlesDisplayPanel.BundlesDisplayPanel_C.TryToDisplayBundleDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateBundleExpirationTime(struct FDateTime New Expiration Time); // Function BundlesDisplayPanel.BundlesDisplayPanel_C.UpdateBundleExpirationTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayBundleWithTransition(struct UBundleViewModel* BundleToDisplay); // Function BundlesDisplayPanel.BundlesDisplayPanel_C.DisplayBundleWithTransition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayBundle(struct UBundleViewModel* BundleToDisplay); // Function BundlesDisplayPanel.BundlesDisplayPanel_C.DisplayBundle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void LoadBundles(struct TArray<struct UBundleViewModel*>& InputBundles); // Function BundlesDisplayPanel.BundlesDisplayPanel_C.LoadBundles // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function BundlesDisplayPanel.BundlesDisplayPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function BundlesDisplayPanel.BundlesDisplayPanel_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BundlesDisplayPanel(int32_t EntryPoint); // Function BundlesDisplayPanel.BundlesDisplayPanel_C.ExecuteUbergraph_BundlesDisplayPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

