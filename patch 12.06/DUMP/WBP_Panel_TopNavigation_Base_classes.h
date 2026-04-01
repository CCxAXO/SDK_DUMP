// WidgetBlueprintGeneratedClass WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C
// Size: 0x408 (Inherited: 0x3e0)
struct UWBP_Panel_TopNavigation_Base_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UVM_NavigationBar_C* NavigationBarViewModel; // 0x3e8(0x08)
	struct FMulticastInlineDelegate OnSetNavigationIndex; // 0x3f0(0x10)
	struct UVM_TopNavigation_C* TopNavigationViewModel; // 0x400(0x08)

	void UpdateMissionProgressionVisibility(enum class EWidgetVisibilityOption InOption); // Function WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C.UpdateMissionProgressionVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateBonusStoreVisibility(enum class EWidgetVisibilityOption InOption); // Function WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C.UpdateBonusStoreVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePersistentNavigationBarVisibility(enum class EWidgetVisibilityOption InOption); // Function WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C.UpdatePersistentNavigationBarVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateGeneralAlertStatusVisibility(enum class EWidgetVisibilityOption InOption); // Function WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C.UpdateGeneralAlertStatusVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateGlobalQueueViewModel(); // Function WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C.CreateGlobalQueueViewModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateWalletVisibility(enum class EWidgetVisibilityOption InOption); // Function WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C.UpdateWalletVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateOptionsButtonVisibility(enum class EWidgetVisibilityOption InOption); // Function WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C.UpdateOptionsButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateSocialEntranceVisibility(enum class EWidgetVisibilityOption InOption); // Function WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C.UpdateSocialEntranceVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateLoyaltyVisibility(enum class EWidgetVisibilityOption InOption); // Function WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C.UpdateLoyaltyVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateNavigationBarVisibility(enum class EWidgetVisibilityOption InOption); // Function WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C.UpdateNavigationBarVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePlayButtonVisibility(enum class EWidgetVisibilityOption InOption); // Function WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C.UpdatePlayButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateBreadcrumbVisibility(enum class EWidgetVisibilityOption InOption); // Function WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C.UpdateBreadcrumbVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateIsNavigationBarEnabled(bool bIsEnabled); // Function WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C.UpdateIsNavigationBarEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToTopNavigationViewModel(bool bShouldBind); // Function WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C.BindToTopNavigationViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateNavigationBarIndex(int32_t ScreenIndex); // Function WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C.UpdateNavigationBarIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToNavigationBarViewModel(bool bShouldBind); // Function WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C.BindToNavigationBarViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateNavigationBar(struct TArray<struct FRGICommonNavBarDetails>& InNavigationBarData); // Function WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C.UpdateNavigationBar // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_TopNavigation_Base(int32_t EntryPoint); // Function WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C.ExecuteUbergraph_WBP_Panel_TopNavigation_Base // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnSetNavigationIndex__DelegateSignature(int32_t InNavigationIndex); // Function WBP_Panel_TopNavigation_Base.WBP_Panel_TopNavigation_Base_C.OnSetNavigationIndex__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

