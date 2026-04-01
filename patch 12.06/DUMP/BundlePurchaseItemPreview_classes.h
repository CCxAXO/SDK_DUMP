// WidgetBlueprintGeneratedClass BundlePurchaseItemPreview.BundlePurchaseItemPreview_C
// Size: 0x370 (Inherited: 0x318)
struct UBundlePurchaseItemPreview_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetSwitcher* AlignmentSwitcher; // 0x320(0x08)
	struct UTextBlock* ItemName; // 0x328(0x08)
	struct UTextBlock* ItemName2; // 0x330(0x08)
	struct UOverlay* Left-RightWidget; // 0x338(0x08)
	struct UTextBlock* Price; // 0x340(0x08)
	struct UTextBlock* Price2; // 0x348(0x08)
	struct UOverlay* Right-LeftWidget; // 0x350(0x08)
	struct UBundleItemViewModel* BundleItem; // 0x358(0x08)
	struct FMulticastInlineDelegate ItemPreviewLoaded; // 0x360(0x10)

	void SetTextJustificationByLocale(); // Function BundlePurchaseItemPreview.BundlePurchaseItemPreview_C.SetTextJustificationByLocale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DisplayItem(struct UBaseHandle* Reward Handle); // Function BundlePurchaseItemPreview.BundlePurchaseItemPreview_C.DisplayItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function BundlePurchaseItemPreview.BundlePurchaseItemPreview_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BundlePurchaseItemPreview(int32_t EntryPoint); // Function BundlePurchaseItemPreview.BundlePurchaseItemPreview_C.ExecuteUbergraph_BundlePurchaseItemPreview // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void ItemPreviewLoaded__DelegateSignature(); // Function BundlePurchaseItemPreview.BundlePurchaseItemPreview_C.ItemPreviewLoaded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

