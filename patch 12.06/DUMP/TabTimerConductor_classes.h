// WidgetBlueprintGeneratedClass TabTimerConductor.TabTimerConductor_C
// Size: 0x3aa (Inherited: 0x318)
struct UTabTimerConductor_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHorizontalBox* BundleTimerBox; // 0x320(0x08)
	struct TMap<struct UAnimatedTimerButton_C*, struct UBundleViewModel*> TimerToBundleMap; // 0x328(0x50)
	struct FMulticastInlineDelegate OnNewBundleTimerStarted; // 0x378(0x10)
	int32_t CurrentBundleIndex; // 0x388(0x04)
	int32_t MaxBundleIndex; // 0x38c(0x04)
	struct FMulticastInlineDelegate OnBundleTimerClicked; // 0x390(0x10)
	struct UAnimatedTimerButton_C* CurrentRunningTimer; // 0x3a0(0x08)
	bool ConductorTurnedOff; // 0x3a8(0x01)
	bool TimersPaused; // 0x3a9(0x01)

	void TryToSelectTabForBundle(struct UBundleViewModel* BundleToSelect); // Function TabTimerConductor.TabTimerConductor_C.TryToSelectTabForBundle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool ShouldConductorRun(); // Function TabTimerConductor.TabTimerConductor_C.ShouldConductorRun // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TurnTimerConductorOff(); // Function TabTimerConductor.TabTimerConductor_C.TurnTimerConductorOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TurnTimerConductorOn(); // Function TabTimerConductor.TabTimerConductor_C.TurnTimerConductorOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetTimerSlotFromIndex(int32_t Index, struct UBundleViewModel*& Bundle, struct UAnimatedTimerButton_C*& Timer, bool& FoundBundle); // Function TabTimerConductor.TabTimerConductor_C.GetTimerSlotFromIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTimerNameFromStorefront(struct UStorefrontItemHandle* StorefrontItemHandle); // Function TabTimerConductor.TabTimerConductor_C.SetTimerNameFromStorefront // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCurrentBundleIndexToNextBundle(); // Function TabTimerConductor.TabTimerConductor_C.SetCurrentBundleIndexToNextBundle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DisplayBundleFromClick(struct UAnimatedTimerButton_C* Timer); // Function TabTimerConductor.TabTimerConductor_C.DisplayBundleFromClick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleAnimationStateChange(enum class ETimerAnimationState AnimationState); // Function TabTimerConductor.TabTimerConductor_C.HandleAnimationStateChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitAndStartFirstTimer(struct UBundleViewModel*& ArrayItem); // Function TabTimerConductor.TabTimerConductor_C.InitAndStartFirstTimer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClearTimers(); // Function TabTimerConductor.TabTimerConductor_C.ClearTimers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StartTimer(struct UAnimatedTimerButton_C* Timer, bool ResumeExistingTimer); // Function TabTimerConductor.TabTimerConductor_C.StartTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PauseCurrentRunningTimer(); // Function TabTimerConductor.TabTimerConductor_C.PauseCurrentRunningTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ResumeCurrentRunningTimerIfPaused(); // Function TabTimerConductor.TabTimerConductor_C.ResumeCurrentRunningTimerIfPaused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateTimerAndBindEvents(struct UBundleViewModel* Bundle, double Time, struct UAnimatedTimerButton_C*& BundleTimerWidget); // Function TabTimerConductor.TabTimerConductor_C.CreateTimerAndBindEvents // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateAllTimers(struct TArray<struct UBundleViewModel*>& InputBundles, double Time); // Function TabTimerConductor.TabTimerConductor_C.CreateAllTimers // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function TabTimerConductor.TabTimerConductor_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function TabTimerConductor.TabTimerConductor_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TabTimerConductor(int32_t EntryPoint); // Function TabTimerConductor.TabTimerConductor_C.ExecuteUbergraph_TabTimerConductor // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnBundleTimerClicked__DelegateSignature(struct UBundleViewModel* Bundle); // Function TabTimerConductor.TabTimerConductor_C.OnBundleTimerClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnNewBundleTimerStarted__DelegateSignature(struct UBundleViewModel* Bundle); // Function TabTimerConductor.TabTimerConductor_C.OnNewBundleTimerStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

