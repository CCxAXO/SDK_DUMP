// WidgetBlueprintGeneratedClass WBP_Panel_FolderHeading_Social_Base.WBP_Panel_FolderHeading_Social_Base_C
// Size: 0x420 (Inherited: 0x3e0)
struct UWBP_Panel_FolderHeading_Social_Base_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct USocialExperienceOpenStateViewModel* SocialExperienceOpenStateViewModel; // 0x3e8(0x08)
	struct USocialFolderViewModel* SocialFolderViewModel; // 0x3f0(0x08)
	struct FText Title; // 0x3f8(0x18)
	struct UTexture* Icon; // 0x410(0x08)
	int32_t PreviewTotalElementCount; // 0x418(0x04)
	int32_t PreviewVisibleElementCount; // 0x41c(0x04)

	void SetSocialFolderViewModel(struct USocialFolderViewModel* ViewModel); // Function WBP_Panel_FolderHeading_Social_Base.WBP_Panel_FolderHeading_Social_Base_C.SetSocialFolderViewModel // (Final|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetDisplayableCounts(int32_t& TotalElementCount, int32_t& VisibleElementCount); // Function WBP_Panel_FolderHeading_Social_Base.WBP_Panel_FolderHeading_Social_Base_C.GetDisplayableCounts // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetFormattedDisplayText(bool bShowVisibleCount, bool bShowTotalCount, struct FText& DisplayText); // Function WBP_Panel_FolderHeading_Social_Base.WBP_Panel_FolderHeading_Social_Base_C.GetFormattedDisplayText // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetIcon(struct UTexture* InIcon); // Function WBP_Panel_FolderHeading_Social_Base.WBP_Panel_FolderHeading_Social_Base_C.SetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTitle(struct FText InTitle); // Function WBP_Panel_FolderHeading_Social_Base.WBP_Panel_FolderHeading_Social_Base_C.SetTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_FolderHeading_Social_Base.WBP_Panel_FolderHeading_Social_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnTotalElementCountChanged(int32_t TotalElementCount); // Function WBP_Panel_FolderHeading_Social_Base.WBP_Panel_FolderHeading_Social_Base_C.OnTotalElementCountChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnVisibleElementCountChanged(int32_t VisibleElementCount); // Function WBP_Panel_FolderHeading_Social_Base.WBP_Panel_FolderHeading_Social_Base_C.OnVisibleElementCountChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsVisibleChanged(bool bIsVisible); // Function WBP_Panel_FolderHeading_Social_Base.WBP_Panel_FolderHeading_Social_Base_C.OnIsVisibleChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsExpandedChanged(bool bIsExpanded); // Function WBP_Panel_FolderHeading_Social_Base.WBP_Panel_FolderHeading_Social_Base_C.OnIsExpandedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLatestExpansionTransitionChanged(struct FSocialFolderExpansionTransition LatestExpansionTransition); // Function WBP_Panel_FolderHeading_Social_Base.WBP_Panel_FolderHeading_Social_Base_C.OnLatestExpansionTransitionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSocialExperienceIsOpenedChanged(bool bIsOpen); // Function WBP_Panel_FolderHeading_Social_Base.WBP_Panel_FolderHeading_Social_Base_C.OnSocialExperienceIsOpenedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTitleChanged(struct FText InTitle); // Function WBP_Panel_FolderHeading_Social_Base.WBP_Panel_FolderHeading_Social_Base_C.OnTitleChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIconChanged(struct UTexture* InIcon); // Function WBP_Panel_FolderHeading_Social_Base.WBP_Panel_FolderHeading_Social_Base_C.OnIconChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_FolderHeading_Social_Base(int32_t EntryPoint); // Function WBP_Panel_FolderHeading_Social_Base.WBP_Panel_FolderHeading_Social_Base_C.ExecuteUbergraph_WBP_Panel_FolderHeading_Social_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

