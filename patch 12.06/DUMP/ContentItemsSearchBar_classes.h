// WidgetBlueprintGeneratedClass ContentItemsSearchBar.ContentItemsSearchBar_C
// Size: 0x360 (Inherited: 0x318)
struct UContentItemsSearchBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* IMG_Border; // 0x320(0x08)
	struct USearchBar_C* SearchBar; // 0x328(0x08)
	struct UContentItemsSearchBarFilterProvider_C* FilterProvider; // 0x330(0x08)
	struct FText SearchHintText; // 0x338(0x18)
	struct FMulticastInlineDelegate TextSearchCompleted; // 0x350(0x10)

	void OnInitialized(); // Function ContentItemsSearchBar.ContentItemsSearchBar_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SearchTextChanged(struct FText SearchText); // Function ContentItemsSearchBar.ContentItemsSearchBar_C.SearchTextChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function ContentItemsSearchBar.ContentItemsSearchBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void MouseHoverOff(struct FPointerEvent MouseEvent); // Function ContentItemsSearchBar.ContentItemsSearchBar_C.MouseHoverOff // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MouseHoverOn(struct FGeometry Geometry, struct FPointerEvent MouseEvent); // Function ContentItemsSearchBar.ContentItemsSearchBar_C.MouseHoverOn // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ContentItemsSearchBar(int32_t EntryPoint); // Function ContentItemsSearchBar.ContentItemsSearchBar_C.ExecuteUbergraph_ContentItemsSearchBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void TextSearchCompleted__DelegateSignature(); // Function ContentItemsSearchBar.ContentItemsSearchBar_C.TextSearchCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

