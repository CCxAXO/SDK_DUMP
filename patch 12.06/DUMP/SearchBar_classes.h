// WidgetBlueprintGeneratedClass SearchBar.SearchBar_C
// Size: 0x3f8 (Inherited: 0x318)
struct USearchBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UButton* ClearSearchButton; // 0x320(0x08)
	struct USizeBox* ClearSearchSizeBox; // 0x328(0x08)
	struct UImage* Image; // 0x330(0x08)
	struct UEditableText* SearchBox; // 0x338(0x08)
	struct USizeBox* SearchIconSizeBox; // 0x340(0x08)
	struct FMulticastInlineDelegate OnSearchTextChanged; // 0x348(0x10)
	struct FText SearchHintText; // 0x358(0x18)
	struct FAresFontStyle Font; // 0x370(0x68)
	struct FMulticastInlineDelegate OnMouseHoverOff; // 0x3d8(0x10)
	struct FMulticastInlineDelegate OnMouseHoverOn; // 0x3e8(0x10)

	void SetHintText(struct FText HintText); // Function SearchBar.SearchBar_C.SetHintText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsSearchActive(bool& bIsSearching); // Function SearchBar.SearchBar_C.IsSearchActive // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void ClearSearch(); // Function SearchBar.SearchBar_C.ClearSearch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__SearchBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Function SearchBar.SearchBar_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function SearchBar.SearchBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ClearSearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SearchBar.SearchBar_C.BndEvt__ClearSearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SearchBar.SearchBar_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SearchBar.SearchBar_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SearchBar(int32_t EntryPoint); // Function SearchBar.SearchBar_C.ExecuteUbergraph_SearchBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnMouseHoverOn__DelegateSignature(struct FGeometry Geometry, struct FPointerEvent MouseEvent); // Function SearchBar.SearchBar_C.OnMouseHoverOn__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMouseHoverOff__DelegateSignature(struct FPointerEvent MouseEvent); // Function SearchBar.SearchBar_C.OnMouseHoverOff__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSearchTextChanged__DelegateSignature(struct FText SearchText); // Function SearchBar.SearchBar_C.OnSearchTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

