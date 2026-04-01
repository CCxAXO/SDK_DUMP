// WidgetBlueprintGeneratedClass BundlePreviewWidget.BundlePreviewWidget_C
// Size: 0x36c (Inherited: 0x318)
struct UBundlePreviewWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* BundleNameText; // 0x320(0x08)
	struct UImage* DotBL; // 0x328(0x08)
	struct UImage* DotBR; // 0x330(0x08)
	struct UImage* DotTL; // 0x338(0x08)
	struct UImage* DotTR; // 0x340(0x08)
	struct UImage* FeaturedImage; // 0x348(0x08)
	struct UImage* Image_94; // 0x350(0x08)
	struct UAresScrollBox* ItemBox; // 0x358(0x08)
	bool ShowName; // 0x360(0x01)
	bool ShowImage; // 0x361(0x01)
	char pad_362[0x2]; // 0x362(0x02)
	int32_t TotalBundleItems; // 0x364(0x04)
	int32_t BundleItemsLoaded; // 0x368(0x04)

	void SetVisibleWhenItemsLoaded(); // Function BundlePreviewWidget.BundlePreviewWidget_C.SetVisibleWhenItemsLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnStorefrontItemLoaded(struct UStorefrontItemHandle* StorefrontItem); // Function BundlePreviewWidget.BundlePreviewWidget_C.OnStorefrontItemLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplyVisibility(); // Function BundlePreviewWidget.BundlePreviewWidget_C.ApplyVisibility // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreviewBundle(struct UBundleViewModel* Bundle); // Function BundlePreviewWidget.BundlePreviewWidget_C.PreviewBundle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function BundlePreviewWidget.BundlePreviewWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BundlePreviewWidget(int32_t EntryPoint); // Function BundlePreviewWidget.BundlePreviewWidget_C.ExecuteUbergraph_BundlePreviewWidget // (Final|UbergraphFunction) // @ game+0x1b42740
};

