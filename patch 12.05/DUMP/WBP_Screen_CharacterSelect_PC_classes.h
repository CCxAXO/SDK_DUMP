// WidgetBlueprintGeneratedClass WBP_Screen_CharacterSelect_PC.WBP_Screen_CharacterSelect_PC_C
// Size: 0x5d0 (Inherited: 0x550)
struct UWBP_Screen_CharacterSelect_PC_C : UWBP_Screen_CharacterSelect_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* NotSelected_Alert_Loop; // 0x558(0x08)
	struct UWidgetAnimation* LockInFailure_ResetState; // 0x560(0x08)
	struct UWidgetAnimation* LockedInAnim; // 0x568(0x08)
	struct UWBP_Button_Hero_C* ButtonLockIn; // 0x570(0x08)
	struct UWBP_CharacterSelectGrid_PC_C* CharacterGrid; // 0x578(0x08)
	struct UWBP_CharacterSelectCountdownTimer_C* CountdownTimer; // 0x580(0x08)
	struct UImage* Low_Time_VFX; // 0x588(0x08)
	struct UPlayerFacingPerfTextGroup_C* PlayerFacingPerfTextGroup; // 0x590(0x08)
	struct UWBP_View_CharacterSelectTeamState_PC_C* TeamState; // 0x598(0x08)
	struct UWBP_View_CharacterSelectGameDetails_C* WBP_GameDetails; // 0x5a0(0x08)
	struct UWBP_View_CharacterSelect_CharacterInfoPanel_C* WBP_View_CharacterSelect_CharacterInfoPanel; // 0x5a8(0x08)
	struct UWBP_View_CharacterSelectEnemyLockIn_C* WBP_View_CharacterSelectEnemyLockIn; // 0x5b0(0x08)
	struct FMargin CharacterInfoButtonPadding; // 0x5b8(0x10)
	struct UBP_SocialExperienceEventAudioPlayer_C* SocialEventAudioPlayer; // 0x5c8(0x08)

	void GetNotSelectedTimerAnimation(struct UWidgetAnimation*& Anim); // Function WBP_Screen_CharacterSelect_PC.WBP_Screen_CharacterSelect_PC_C.GetNotSelectedTimerAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetLowTimeVFX(struct UImage*& VFX); // Function WBP_Screen_CharacterSelect_PC.WBP_Screen_CharacterSelect_PC_C.GetLowTimeVFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetLockinResetAnim(struct UWidgetAnimation*& LockedInResetAnim); // Function WBP_Screen_CharacterSelect_PC.WBP_Screen_CharacterSelect_PC_C.GetLockinResetAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetLockedInAnimation(struct UWidgetAnimation*& LockedInAnimation); // Function WBP_Screen_CharacterSelect_PC.WBP_Screen_CharacterSelect_PC_C.GetLockedInAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void HandleIsLocalPlayerCoachChanged(); // Function WBP_Screen_CharacterSelect_PC.WBP_Screen_CharacterSelect_PC_C.HandleIsLocalPlayerCoachChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetGameDetailsWidget(struct UWBP_View_CharacterSelectGameDetails_C*& DetailsWidget); // Function WBP_Screen_CharacterSelect_PC.WBP_Screen_CharacterSelect_PC_C.GetGameDetailsWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetEnemyLockInWidget(struct UWBP_View_CharacterSelectEnemyLockIn_C*& EnemyLockIn); // Function WBP_Screen_CharacterSelect_PC.WBP_Screen_CharacterSelect_PC_C.GetEnemyLockInWidget // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetCountdownTimer(struct UWBP_CharacterSelectCountdownTimer_C*& TimerText); // Function WBP_Screen_CharacterSelect_PC.WBP_Screen_CharacterSelect_PC_C.GetCountdownTimer // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetTeamStateWidget(struct UWBP_View_CharacterSelectTeamState_C*& TeamState); // Function WBP_Screen_CharacterSelect_PC.WBP_Screen_CharacterSelect_PC_C.GetTeamStateWidget // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetLockInButton(struct UAresCommonButton*& LockInButton); // Function WBP_Screen_CharacterSelect_PC.WBP_Screen_CharacterSelect_PC_C.GetLockInButton // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Screen_CharacterSelect_PC.WBP_Screen_CharacterSelect_PC_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Screen_CharacterSelect_PC_ButtonLockIn_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Screen_CharacterSelect_PC.WBP_Screen_CharacterSelect_PC_C.BndEvt__WBP_Screen_CharacterSelect_PC_ButtonLockIn_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Screen_CharacterSelect_PC.WBP_Screen_CharacterSelect_PC_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Screen_CharacterSelect_PC.WBP_Screen_CharacterSelect_PC_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PlayBlinkingAnimation(); // Function WBP_Screen_CharacterSelect_PC.WBP_Screen_CharacterSelect_PC_C.PlayBlinkingAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StopAnimations(); // Function WBP_Screen_CharacterSelect_PC.WBP_Screen_CharacterSelect_PC_C.StopAnimations // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Screen_CharacterSelect_PC.WBP_Screen_CharacterSelect_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Screen_CharacterSelect_PC.WBP_Screen_CharacterSelect_PC_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_CharacterSelect_PC(int32_t EntryPoint); // Function WBP_Screen_CharacterSelect_PC.WBP_Screen_CharacterSelect_PC_C.ExecuteUbergraph_WBP_Screen_CharacterSelect_PC // (Final|UbergraphFunction) // @ game+0x1af5410
};

