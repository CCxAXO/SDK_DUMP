// WidgetBlueprintGeneratedClass MapSelect_MapListEntry.MapSelect_MapListEntry_C
// Size: 0x3b9 (Inherited: 0x318)
struct UMapSelect_MapListEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* OnHover; // 0x320(0x08)
	struct UButton* But_MapButton; // 0x328(0x08)
	struct UImage* IMG_DarkOverlay; // 0x330(0x08)
	struct UImage* IMG_HoverBorder; // 0x338(0x08)
	struct UImage* IMG_HoverGradient; // 0x340(0x08)
	struct UImage* IMG_MapBG; // 0x348(0x08)
	struct UImage* IMG_NameBG; // 0x350(0x08)
	struct UTextBlock* MapTitleText; // 0x358(0x08)
	struct UOverlay* O_BannedOverlay; // 0x360(0x08)
	struct UImage* Outline; // 0x368(0x08)
	struct UMapSelect_VotePips_C* Pips; // 0x370(0x08)
	struct UWidgetSwitcher* WS_HoverAndBannedElements; // 0x378(0x08)
	struct FText MapName; // 0x380(0x18)
	struct UMapDataAsset* MapData; // 0x398(0x08)
	bool bBanned; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct FMulticastInlineDelegate OnMapButtonClicked; // 0x3a8(0x10)
	bool bSelected; // 0x3b8(0x01)

	void SetBackgroundImage(struct UTexture2D* MapTexture); // Function MapSelect_MapListEntry.MapSelect_MapListEntry_C.SetBackgroundImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsInteractable(bool IsInteractable); // Function MapSelect_MapListEntry.MapSelect_MapListEntry_C.SetIsInteractable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StyleOnHover(); // Function MapSelect_MapListEntry.MapSelect_MapListEntry_C.StyleOnHover // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StyleBannedButton(); // Function MapSelect_MapListEntry.MapSelect_MapListEntry_C.StyleBannedButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StyleButtonSelectionState(bool IsSelected); // Function MapSelect_MapListEntry.MapSelect_MapListEntry_C.StyleButtonSelectionState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSelected(bool bInSelected); // Function MapSelect_MapListEntry.MapSelect_MapListEntry_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BanMap(); // Function MapSelect_MapListEntry.MapSelect_MapListEntry_C.BanMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMapData(struct UMapDataAsset* InMapData); // Function MapSelect_MapListEntry.MapSelect_MapListEntry_C.SetMapData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetMapData(struct UMapDataAsset*& Data); // Function MapSelect_MapListEntry.MapSelect_MapListEntry_C.GetMapData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void OnLoaded_CC19DDB146D9BDD4BBE9FD96F43A8400(struct UObject* Loaded); // Function MapSelect_MapListEntry.MapSelect_MapListEntry_C.OnLoaded_CC19DDB146D9BDD4BBE9FD96F43A8400 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__MapButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function MapSelect_MapListEntry.MapSelect_MapListEntry_C.BndEvt__MapButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__MapButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function MapSelect_MapListEntry.MapSelect_MapListEntry_C.BndEvt__MapButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__MapButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function MapSelect_MapListEntry.MapSelect_MapListEntry_C.BndEvt__MapButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function MapSelect_MapListEntry.MapSelect_MapListEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void On Request Map Load Async(struct TSoftObjectPtr<UTexture2D> Level); // Function MapSelect_MapListEntry.MapSelect_MapListEntry_C.On Request Map Load Async // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MapSelect_MapListEntry(int32_t EntryPoint); // Function MapSelect_MapListEntry.MapSelect_MapListEntry_C.ExecuteUbergraph_MapSelect_MapListEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnMapButtonClicked__DelegateSignature(struct UMapSelect_MapListEntry_C* ListEntry); // Function MapSelect_MapListEntry.MapSelect_MapListEntry_C.OnMapButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

