// WidgetBlueprintGeneratedClass WBP_Panel_TruncatedList_Social_Base.WBP_Panel_TruncatedList_Social_Base_C
// Size: 0x434 (Inherited: 0x3e0)
struct UWBP_Panel_TruncatedList_Social_Base_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct USocialListViewModelBase* ListViewModel; // 0x3e8(0x08)
	struct UVerticalBox* VerticalBox_Root; // 0x3f0(0x08)
	struct UWBP_Panel_List_Social_Base_C* ListClass; // 0x3f8(0x08)
	struct UWBP_Panel_TruncatedListFooter_Social_Base_C* FooterClass; // 0x400(0x08)
	struct UWBP_Panel_List_Social_Base_C* ListWidget; // 0x408(0x08)
	struct UWBP_Panel_TruncatedListFooter_Social_Base_C* FooterWidget; // 0x410(0x08)
	double ListToFooterPadding; // 0x418(0x08)
	struct FMulticastInlineDelegate OnTruncatedListFocusLost; // 0x420(0x10)
	int32_t InitialMaxVisibleListItemCount; // 0x430(0x04)

	void SetListViewModel(struct USocialListViewModelBase* ViewModel); // Function WBP_Panel_TruncatedList_Social_Base.WBP_Panel_TruncatedList_Social_Base_C.SetListViewModel // (Final|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateFooterVisibility(); // Function WBP_Panel_TruncatedList_Social_Base.WBP_Panel_TruncatedList_Social_Base_C.UpdateFooterVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSelfVisibility(); // Function WBP_Panel_TruncatedList_Social_Base.WBP_Panel_TruncatedList_Social_Base_C.UpdateSelfVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowAllListItems(); // Function WBP_Panel_TruncatedList_Social_Base.WBP_Panel_TruncatedList_Social_Base_C.ShowAllListItems // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetMaxVisibleListItemCount(int32_t InMaxVisibleListItemCount); // Function WBP_Panel_TruncatedList_Social_Base.WBP_Panel_TruncatedList_Social_Base_C.SetMaxVisibleListItemCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ResetMaxVisibleListItemCount(); // Function WBP_Panel_TruncatedList_Social_Base.WBP_Panel_TruncatedList_Social_Base_C.ResetMaxVisibleListItemCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_TruncatedList_Social_Base.WBP_Panel_TruncatedList_Social_Base_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void InitializeFooterWidget(struct UWBP_Panel_TruncatedListFooter_Social_Base_C* InFooterWidget); // Function WBP_Panel_TruncatedList_Social_Base.WBP_Panel_TruncatedList_Social_Base_C.InitializeFooterWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeListWidget(struct UWBP_Panel_List_Social_Base_C* InListWidget); // Function WBP_Panel_TruncatedList_Social_Base.WBP_Panel_TruncatedList_Social_Base_C.InitializeListWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateFooterWidget(struct UWBP_Panel_TruncatedListFooter_Social_Base_C*& OutFooterWidget); // Function WBP_Panel_TruncatedList_Social_Base.WBP_Panel_TruncatedList_Social_Base_C.CreateFooterWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateListWidget(struct UWBP_Panel_List_Social_Base_C*& OutListWidget); // Function WBP_Panel_TruncatedList_Social_Base.WBP_Panel_TruncatedList_Social_Base_C.CreateListWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateWidgets(); // Function WBP_Panel_TruncatedList_Social_Base.WBP_Panel_TruncatedList_Social_Base_C.CreateWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_TruncatedList_Social_Base.WBP_Panel_TruncatedList_Social_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_TruncatedList_Social_Base.WBP_Panel_TruncatedList_Social_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnFilteredListItemCountChanged(int32_t InFilteredListItemCount); // Function WBP_Panel_TruncatedList_Social_Base.WBP_Panel_TruncatedList_Social_Base_C.OnFilteredListItemCountChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnVisibleListItemCountChanged(int32_t InVisibleListItemCount); // Function WBP_Panel_TruncatedList_Social_Base.WBP_Panel_TruncatedList_Social_Base_C.OnVisibleListItemCountChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_TruncatedList_Social_Base(int32_t EntryPoint); // Function WBP_Panel_TruncatedList_Social_Base.WBP_Panel_TruncatedList_Social_Base_C.ExecuteUbergraph_WBP_Panel_TruncatedList_Social_Base // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnTruncatedListFocusLost__DelegateSignature(struct UAresCommonUserWidget* TruncatedListWidget); // Function WBP_Panel_TruncatedList_Social_Base.WBP_Panel_TruncatedList_Social_Base_C.OnTruncatedListFocusLost__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

