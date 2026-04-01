// WidgetBlueprintGeneratedClass WBP_Panel_ContextMenuItemList.WBP_Panel_ContextMenuItemList_C
// Size: 0x458 (Inherited: 0x3e0)
struct UWBP_Panel_ContextMenuItemList_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UVerticalBox* Vertical_Items; // 0x3e8(0x08)
	struct UAresContextMenuItemListDataAsset* ItemListDataAsset; // 0x3f0(0x08)
	struct UAresContextMenuItemListViewModel* ItemListViewModel; // 0x3f8(0x08)
	struct TArray<struct UAresCommonUserWidget*> MenuItemWidgets; // 0x400(0x10)
	struct FMulticastInlineDelegate OnCloseContextMenuRequested; // 0x410(0x10)
	struct FString ObservedPlayerSubject; // 0x420(0x10)
	struct UAresContextMenuItemAppearanceDataAsset* ItemAppearanceDataAsset; // 0x430(0x08)
	double ItemPadding; // 0x438(0x08)
	struct FString MatchID; // 0x440(0x10)
	struct UAresContextMenuItemFilterDataAsset* ItemFilter; // 0x450(0x08)

	void HandleItemFocusLost (); // Function WBP_Panel_ContextMenuItemList.WBP_Panel_ContextMenuItemList_C.HandleItemFocusLost  // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetItemFilter(struct UAresContextMenuItemFilterDataAsset* ItemFilter); // Function WBP_Panel_ContextMenuItemList.WBP_Panel_ContextMenuItemList_C.SetItemFilter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMatchID(struct FString MatchID); // Function WBP_Panel_ContextMenuItemList.WBP_Panel_ContextMenuItemList_C.SetMatchID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetDesiredFocusTarget(struct UWidget*& Return Value); // Function WBP_Panel_ContextMenuItemList.WBP_Panel_ContextMenuItemList_C.GetDesiredFocusTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetObservedPlayer(struct FString PlayerSubject); // Function WBP_Panel_ContextMenuItemList.WBP_Panel_ContextMenuItemList_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleCloseContextMenuRequested(); // Function WBP_Panel_ContextMenuItemList.WBP_Panel_ContextMenuItemList_C.HandleCloseContextMenuRequested // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RebuildItemList(); // Function WBP_Panel_ContextMenuItemList.WBP_Panel_ContextMenuItemList_C.RebuildItemList // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindOrUnbindViewModel(bool bDoBind); // Function WBP_Panel_ContextMenuItemList.WBP_Panel_ContextMenuItemList_C.BindOrUnbindViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MakeViewModel(); // Function WBP_Panel_ContextMenuItemList.WBP_Panel_ContextMenuItemList_C.MakeViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_ContextMenuItemList.WBP_Panel_ContextMenuItemList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_ContextMenuItemList.WBP_Panel_ContextMenuItemList_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_ContextMenuItemList.WBP_Panel_ContextMenuItemList_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_ContextMenuItemList.WBP_Panel_ContextMenuItemList_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_ContextMenuItemList(int32_t EntryPoint); // Function WBP_Panel_ContextMenuItemList.WBP_Panel_ContextMenuItemList_C.ExecuteUbergraph_WBP_Panel_ContextMenuItemList // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnCloseContextMenuRequested__DelegateSignature(); // Function WBP_Panel_ContextMenuItemList.WBP_Panel_ContextMenuItemList_C.OnCloseContextMenuRequested__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

