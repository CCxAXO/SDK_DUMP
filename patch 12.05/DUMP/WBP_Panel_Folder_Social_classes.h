// WidgetBlueprintGeneratedClass WBP_Panel_Folder_Social.WBP_Panel_Folder_Social_C
// Size: 0x458 (Inherited: 0x3e0)
struct UWBP_Panel_Folder_Social_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct USocialFolderViewModel* SocialFolderViewModel; // 0x3e8(0x08)
	struct UVerticalBox* VerticalBox_Root; // 0x3f0(0x08)
	struct UWBP_Panel_FolderHeading_Social_Base_C* FolderHeadingClass; // 0x3f8(0x08)
	struct UWBP_Panel_List_Social_Base_C* ListClass; // 0x400(0x08)
	struct UWBP_Panel_FolderHeading_Social_Base_C* FolderHeadingWidget; // 0x408(0x08)
	struct UWBP_Panel_List_Social_Base_C* ListWidget; // 0x410(0x08)
	double FolderHeadingToListPadding; // 0x418(0x08)
	struct FText Title; // 0x420(0x18)
	struct UTexture* Icon; // 0x438(0x08)
	bool bExpandOnConstruct; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct FMulticastInlineDelegate OnFolderFocusLost; // 0x448(0x10)

	void HandleIsExpandedChanged(bool bInIsExpanded); // Function WBP_Panel_Folder_Social.WBP_Panel_Folder_Social_C.HandleIsExpandedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsVisibleChanged(bool bInIsVisible); // Function WBP_Panel_Folder_Social.WBP_Panel_Folder_Social_C.HandleIsVisibleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* GetAdvancedFocusTarget(bool bFocusFolderHeadingWhenCollapsed); // Function WBP_Panel_Folder_Social.WBP_Panel_Folder_Social_C.GetAdvancedFocusTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_Folder_Social.WBP_Panel_Folder_Social_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void InitializeListWidget(struct UWBP_Panel_List_Social_Base_C* InListWidget); // Function WBP_Panel_Folder_Social.WBP_Panel_Folder_Social_C.InitializeListWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeFolderHeadingWidget(struct UWBP_Panel_FolderHeading_Social_Base_C* InFolderHeadingWidget); // Function WBP_Panel_Folder_Social.WBP_Panel_Folder_Social_C.InitializeFolderHeadingWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateListWidget(struct UWBP_Panel_List_Social_Base_C*& OutListWidget); // Function WBP_Panel_Folder_Social.WBP_Panel_Folder_Social_C.CreateListWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateFolderHeadingWidget(struct UWBP_Panel_FolderHeading_Social_Base_C*& OutFolderHeadingWidget); // Function WBP_Panel_Folder_Social.WBP_Panel_Folder_Social_C.CreateFolderHeadingWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIcon(struct UTexture* InIcon); // Function WBP_Panel_Folder_Social.WBP_Panel_Folder_Social_C.SetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTitle(struct FText InTitle); // Function WBP_Panel_Folder_Social.WBP_Panel_Folder_Social_C.SetTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateWidgets(); // Function WBP_Panel_Folder_Social.WBP_Panel_Folder_Social_C.CreateWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_Folder_Social.WBP_Panel_Folder_Social_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_Folder_Social.WBP_Panel_Folder_Social_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnIsVisibleChanged(bool bIsVisible); // Function WBP_Panel_Folder_Social.WBP_Panel_Folder_Social_C.OnIsVisibleChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsExpandedChanged(bool bIsExpanded); // Function WBP_Panel_Folder_Social.WBP_Panel_Folder_Social_C.OnIsExpandedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_Folder_Social(int32_t EntryPoint); // Function WBP_Panel_Folder_Social.WBP_Panel_Folder_Social_C.ExecuteUbergraph_WBP_Panel_Folder_Social // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnFolderFocusLost__DelegateSignature(struct UAresCommonUserWidget* FolderWidget); // Function WBP_Panel_Folder_Social.WBP_Panel_Folder_Social_C.OnFolderFocusLost__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

