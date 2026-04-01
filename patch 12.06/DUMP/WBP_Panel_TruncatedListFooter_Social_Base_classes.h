// WidgetBlueprintGeneratedClass WBP_Panel_TruncatedListFooter_Social_Base.WBP_Panel_TruncatedListFooter_Social_Base_C
// Size: 0x408 (Inherited: 0x3e0)
struct UWBP_Panel_TruncatedListFooter_Social_Base_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct USocialExperienceOpenStateViewModel* SocialExperienceOpenStateViewModel; // 0x3e8(0x08)
	struct USocialListViewModelBase* ListViewModel; // 0x3f0(0x08)
	int32_t PreviewFilteredElementCount; // 0x3f8(0x04)
	int32_t PreviewVisibleElementCount; // 0x3fc(0x04)
	struct UWBP_Panel_TruncatedList_Social_Base_C* TruncatedListWidget; // 0x400(0x08)

	void SetListViewModel(struct USocialListViewModelBase* ViewModel); // Function WBP_Panel_TruncatedListFooter_Social_Base.WBP_Panel_TruncatedListFooter_Social_Base_C.SetListViewModel // (Final|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Truncated List Widget(struct UWBP_Panel_TruncatedList_Social_Base_C* InTruncatedListWidget); // Function WBP_Panel_TruncatedListFooter_Social_Base.WBP_Panel_TruncatedListFooter_Social_Base_C.Set Truncated List Widget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetDisplayableCounts(int32_t& FilteredElementCount, int32_t& VisibleElementCount); // Function WBP_Panel_TruncatedListFooter_Social_Base.WBP_Panel_TruncatedListFooter_Social_Base_C.GetDisplayableCounts // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetHiddenElementCount(int32_t& HiddenElementCount); // Function WBP_Panel_TruncatedListFooter_Social_Base.WBP_Panel_TruncatedListFooter_Social_Base_C.GetHiddenElementCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnFilteredElementCountChanged(int32_t FilteredElementCount); // Function WBP_Panel_TruncatedListFooter_Social_Base.WBP_Panel_TruncatedListFooter_Social_Base_C.OnFilteredElementCountChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnVisibleElementCountChanged(int32_t VisibleElementCount); // Function WBP_Panel_TruncatedListFooter_Social_Base.WBP_Panel_TruncatedListFooter_Social_Base_C.OnVisibleElementCountChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSocialExperienceOpenInterpolationChanged(double OpenInterpolation); // Function WBP_Panel_TruncatedListFooter_Social_Base.WBP_Panel_TruncatedListFooter_Social_Base_C.OnSocialExperienceOpenInterpolationChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSocialExperienceIsOpenChanged(bool bIsOpen); // Function WBP_Panel_TruncatedListFooter_Social_Base.WBP_Panel_TruncatedListFooter_Social_Base_C.OnSocialExperienceIsOpenChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_TruncatedListFooter_Social_Base(int32_t EntryPoint); // Function WBP_Panel_TruncatedListFooter_Social_Base.WBP_Panel_TruncatedListFooter_Social_Base_C.ExecuteUbergraph_WBP_Panel_TruncatedListFooter_Social_Base // (Final|UbergraphFunction) // @ game+0x1b42740
};

