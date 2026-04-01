// WidgetBlueprintGeneratedClass WBP_Screen_PickemGroup.WBP_Screen_PickemGroup_C
// Size: 0x598 (Inherited: 0x520)
struct UWBP_Screen_PickemGroup_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UWBP_Button_Esports_Secondary_C* Button_GPR; // 0x528(0x08)
	struct UEsports_Loading_C* Esports_Loading; // 0x530(0x08)
	struct UWBP_Panel_PickemGroupHeader_C* WBP_Panel_PickemGroupHeader; // 0x538(0x08)
	struct UWBP_Panel_PickemGroupSectionList_C* WBP_Panel_PickemGroupsGroupList; // 0x540(0x08)
	struct UWBP_Panel_PickemProgressBar_Detailed_C* WBP_Panel_PickemProgressBar_Detailed; // 0x548(0x08)
	struct UWidgetSwitcher* WS_GroupList; // 0x550(0x08)
	struct FMulticastInlineDelegate ShowOverview; // 0x558(0x10)
	struct FString TournamentSlug; // 0x568(0x10)
	double GroupHorizontalPadding; // 0x578(0x08)
	struct UPickemGroupAutosaveViewModel* PickemGroupAutosaveViewModel; // 0x580(0x08)
	struct FString TournamentID; // 0x588(0x10)

	void InitFromNavigationParam(); // Function WBP_Screen_PickemGroup.WBP_Screen_PickemGroup_C.InitFromNavigationParam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StyleForChampionsGroupsStage(); // Function WBP_Screen_PickemGroup.WBP_Screen_PickemGroup_C.StyleForChampionsGroupsStage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSectionItemsLoadingChanged(bool bLoadingCompleted); // Function WBP_Screen_PickemGroup.WBP_Screen_PickemGroup_C.OnSectionItemsLoadingChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(struct FString InTournamentSlug, struct FString InTournamentID); // Function WBP_Screen_PickemGroup.WBP_Screen_PickemGroup_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Screen_PickemGroup.WBP_Screen_PickemGroup_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Screen_PickemGroup.WBP_Screen_PickemGroup_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Screen_PickemGroup.WBP_Screen_PickemGroup_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Screen_PickemGroup_WBP_Button_Esports_Secondary_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Screen_PickemGroup.WBP_Screen_PickemGroup_C.BndEvt__WBP_Screen_PickemGroup_WBP_Button_Esports_Secondary_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Screen_PickemGroup.WBP_Screen_PickemGroup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnActivated(); // Function WBP_Screen_PickemGroup.WBP_Screen_PickemGroup_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Screen_PickemGroup(int32_t EntryPoint); // Function WBP_Screen_PickemGroup.WBP_Screen_PickemGroup_C.ExecuteUbergraph_WBP_Screen_PickemGroup // (Final|UbergraphFunction) // @ game+0x1b42740
	void ShowOverview__DelegateSignature(); // Function WBP_Screen_PickemGroup.WBP_Screen_PickemGroup_C.ShowOverview__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

