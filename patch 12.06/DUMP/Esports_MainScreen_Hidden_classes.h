// WidgetBlueprintGeneratedClass Esports_MainScreen_Hidden.Esports_MainScreen_Hidden_C
// Size: 0x600 (Inherited: 0x580)
struct UEsports_MainScreen_Hidden_C : UEsportsHubScreenV2 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	struct UErrorMessageModal_C* ErrorMessageModal; // 0x588(0x08)
	struct UEsports_Loading_C* Esports_Loading; // 0x590(0x08)
	struct UImage* IMG_HermesBG; // 0x598(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* LazyLoader_DebugButton; // 0x5a0(0x08)
	struct ULoadingThrobberSmall_C* LoadingThrobberSmall; // 0x5a8(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x5b0(0x08)
	struct UTabbedContent_C* TabbedContent; // 0x5b8(0x08)
	double ErrorThreshold; // 0x5c0(0x08)
	double ErrorTimer; // 0x5c8(0x08)
	double TimerInterval; // 0x5d0(0x08)
	struct UUserWidget* OverrideStartingTabClass; // 0x5d8(0x08)
	struct TArray<struct FF_EsportsTabDataStruct> TabsDataStructs; // 0x5e0(0x10)
	enum class EEsportsHubTab DesignDisplayTab; // 0x5f0(0x01)
	char pad_5F1[0x7]; // 0x5f1(0x07)
	struct FTimerHandle Timer; // 0x5f8(0x08)

	void SetupDebugButton(); // Function Esports_MainScreen_Hidden.Esports_MainScreen_Hidden_C.SetupDebugButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddDesignTimeTab(struct FF_EsportsTabDataStruct InTabDataStruct); // Function Esports_MainScreen_Hidden.Esports_MainScreen_Hidden_C.AddDesignTimeTab // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetupDesignTimeTabs(); // Function Esports_MainScreen_Hidden.Esports_MainScreen_Hidden_C.SetupDesignTimeTabs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void NavigateToDefaultTab(); // Function Esports_MainScreen_Hidden.Esports_MainScreen_Hidden_C.NavigateToDefaultTab // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetupTabs(); // Function Esports_MainScreen_Hidden.Esports_MainScreen_Hidden_C.SetupTabs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddTab(struct FF_EsportsTabDataStruct InTabDataStruct); // Function Esports_MainScreen_Hidden.Esports_MainScreen_Hidden_C.AddTab // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateScreenVisibility(); // Function Esports_MainScreen_Hidden.Esports_MainScreen_Hidden_C.UpdateScreenVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function Esports_MainScreen_Hidden.Esports_MainScreen_Hidden_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function Esports_MainScreen_Hidden.Esports_MainScreen_Hidden_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature(); // Function Esports_MainScreen_Hidden.Esports_MainScreen_Hidden_C.BndEvt__SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Esports_MainScreen_Hidden_ErrorMessageModal_K2Node_ComponentBoundEvent_1_OnCancelPressed__DelegateSignature(); // Function Esports_MainScreen_Hidden.Esports_MainScreen_Hidden_C.BndEvt__Esports_MainScreen_Hidden_ErrorMessageModal_K2Node_ComponentBoundEvent_1_OnCancelPressed__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Check Esports Data Loaded(); // Function Esports_MainScreen_Hidden.Esports_MainScreen_Hidden_C.Check Esports Data Loaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnScreenReady(); // Function Esports_MainScreen_Hidden.Esports_MainScreen_Hidden_C.OnScreenReady // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Esports_MainScreen_Hidden(int32_t EntryPoint); // Function Esports_MainScreen_Hidden.Esports_MainScreen_Hidden_C.ExecuteUbergraph_Esports_MainScreen_Hidden // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

