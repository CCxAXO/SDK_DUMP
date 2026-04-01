// WidgetBlueprintGeneratedClass ActiveTimeoutWidget.ActiveTimeoutWidget_C
// Size: 0x3f0 (Inherited: 0x330)
struct UActiveTimeoutWidget_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* 10_Seconds_Left_Loop; // 0x338(0x08)
	struct UWidgetAnimation* Timeout_Intro; // 0x340(0x08)
	struct UImage* BottomBar; // 0x348(0x08)
	struct UImage* BottomBar_2; // 0x350(0x08)
	struct UImage* BottomBar_3; // 0x358(0x08)
	struct UImage* BottomBar_4; // 0x360(0x08)
	struct UImage* BottomLeft_2; // 0x368(0x08)
	struct UImage* BottomRight_2; // 0x370(0x08)
	struct UImage* Gradient; // 0x378(0x08)
	struct UImage* Material; // 0x380(0x08)
	struct UProgressBar* ProgressBar_49; // 0x388(0x08)
	struct UImage* SizedImage; // 0x390(0x08)
	struct UTextBlock* TextBlock_Attackers; // 0x398(0x08)
	struct UTextBlock* TextBlock_Defenders; // 0x3a0(0x08)
	struct UTextBlock* TimeoutCaller; // 0x3a8(0x08)
	struct UTextBlock* TimeoutCountdownText; // 0x3b0(0x08)
	struct UTextBlock* TimeoutText; // 0x3b8(0x08)
	struct UTextBlock* TimeoutTimer_2; // 0x3c0(0x08)
	struct UTextBlock* TimeoutTimer_AnimatedNumerals; // 0x3c8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_CallingTeam; // 0x3d0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_TimeoutText; // 0x3d8(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x3e0(0x08)
	double Duration; // 0x3e8(0x08)

	void SetVisible(bool Visible); // Function ActiveTimeoutWidget.ActiveTimeoutWidget_C.SetVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ActiveTimeoutWidget.ActiveTimeoutWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function ActiveTimeoutWidget.ActiveTimeoutWidget_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function ActiveTimeoutWidget.ActiveTimeoutWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnMatchTimeoutStateChanged(enum class EAresMatchTimeoutState TimeoutState, float Duration); // Function ActiveTimeoutWidget.ActiveTimeoutWidget_C.OnMatchTimeoutStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShouldShowWidgetPostTimejump(struct FReplayTimeJumpRequestDetails& RequestDetails); // Function ActiveTimeoutWidget.ActiveTimeoutWidget_C.ShouldShowWidgetPostTimejump // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ActiveTimeoutWidget(int32_t EntryPoint); // Function ActiveTimeoutWidget.ActiveTimeoutWidget_C.ExecuteUbergraph_ActiveTimeoutWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

