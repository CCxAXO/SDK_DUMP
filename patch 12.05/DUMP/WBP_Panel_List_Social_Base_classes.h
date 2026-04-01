// WidgetBlueprintGeneratedClass WBP_Panel_List_Social_Base.WBP_Panel_List_Social_Base_C
// Size: 0x448 (Inherited: 0x3e0)
struct UWBP_Panel_List_Social_Base_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct USocialListViewModelBase* ListViewModelClass; // 0x3e8(0x08)
	struct TArray<struct USocialSortProviderBase*> SortProviderClasses; // 0x3f0(0x10)
	struct TArray<struct USocialFilterProviderBase*> FilterProviderClasses; // 0x400(0x10)
	struct USocialListViewModelBase* ListViewModel; // 0x410(0x08)
	struct TArray<struct USocialSortProviderBase*> SortProviders; // 0x418(0x10)
	struct TArray<struct USocialFilterProviderBase*> FilterProviders; // 0x428(0x10)
	struct FMulticastInlineDelegate OnListFocusLost; // 0x438(0x10)

	void HandleFilterInvalidated(); // Function WBP_Panel_List_Social_Base.WBP_Panel_List_Social_Base_C.HandleFilterInvalidated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleSortInvalidated(); // Function WBP_Panel_List_Social_Base.WBP_Panel_List_Social_Base_C.HandleSortInvalidated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindOrUnbindProviders(bool bDoBind); // Function WBP_Panel_List_Social_Base.WBP_Panel_List_Social_Base_C.BindOrUnbindProviders // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleListItemsUpdated(struct TArray<struct UObject*>& NewListItems); // Function WBP_Panel_List_Social_Base.WBP_Panel_List_Social_Base_C.HandleListItemsUpdated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindOrUnbindListViewModel(bool bDoBind); // Function WBP_Panel_List_Social_Base.WBP_Panel_List_Social_Base_C.BindOrUnbindListViewModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeListViewModel(struct USocialListViewModelBase* InViewModel); // Function WBP_Panel_List_Social_Base.WBP_Panel_List_Social_Base_C.InitializeListViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddProvidersToListViewModel(struct USocialListViewModelBase* InViewModel); // Function WBP_Panel_List_Social_Base.WBP_Panel_List_Social_Base_C.AddProvidersToListViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateListViewModel(struct USocialListViewModelBase*& Return Value); // Function WBP_Panel_List_Social_Base.WBP_Panel_List_Social_Base_C.CreateListViewModel // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MakeProviders(); // Function WBP_Panel_List_Social_Base.WBP_Panel_List_Social_Base_C.MakeProviders // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_List_Social_Base.WBP_Panel_List_Social_Base_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_List_Social_Base.WBP_Panel_List_Social_Base_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_List_Social_Base.WBP_Panel_List_Social_Base_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_List_Social_Base(int32_t EntryPoint); // Function WBP_Panel_List_Social_Base.WBP_Panel_List_Social_Base_C.ExecuteUbergraph_WBP_Panel_List_Social_Base // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnListFocusLost__DelegateSignature(struct UAresCommonUserWidget* ListWidget); // Function WBP_Panel_List_Social_Base.WBP_Panel_List_Social_Base_C.OnListFocusLost__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

