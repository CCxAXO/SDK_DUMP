// WidgetBlueprintGeneratedClass WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C
// Size: 0x550 (Inherited: 0x520)
struct UWBP_Screen_CharacterSelect_Base_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UVM_CharacterSelectTimer_C* ViewModelTimer; // 0x528(0x08)
	struct UVM_CharacterSelectLockIn_C* ViewModelLockIn; // 0x530(0x08)
	struct UVM_CharacterSelectTeamState_C* ViewModelTeamState; // 0x538(0x08)
	struct UPregameViewController* PregameViewController; // 0x540(0x08)
	struct UVM_CharacterSelectGameDetails_C* ViewModelGameDetails; // 0x548(0x08)

	void GetLowTimeVFX(struct UImage*& VFX); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.GetLowTimeVFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetNotSelectedTimerAnimation(struct UWidgetAnimation*& Anim); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.GetNotSelectedTimerAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetLockinResetAnim(struct UWidgetAnimation*& LockedInResetAnim); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.GetLockinResetAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetLockedInAnimation(struct UWidgetAnimation*& LockedInAnimation); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.GetLockedInAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetLockinButtonEnabled(bool bNewIsEnabled); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.SetLockinButtonEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleTimerTextChanged(struct FText newText); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.HandleTimerTextChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsLocalPlayerCoachChanged(); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.HandleIsLocalPlayerCoachChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToViewModelGameDetails(bool bBind); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.BindToViewModelGameDetails // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindAndInitTeamStateComponents(); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.BindAndInitTeamStateComponents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MakeViewModelGameDetails(); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.MakeViewModelGameDetails // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetGameDetailsWidget(struct UWBP_View_CharacterSelectGameDetails_C*& DetailsWidget); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.GetGameDetailsWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetEnemyLockInWidget(struct UWBP_View_CharacterSelectEnemyLockIn_C*& EnemyLockIn); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.GetEnemyLockInWidget // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetTeamStateWidget(struct UWBP_View_CharacterSelectTeamState_C*& TeamState); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.GetTeamStateWidget // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetCountdownTimer(struct UWBP_CharacterSelectCountdownTimer_C*& TimerText); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.GetCountdownTimer // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void InitViewModelEnemyLockIn(); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.InitViewModelEnemyLockIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MakeViewModelTeamState(); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.MakeViewModelTeamState // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshViewTimer(); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.RefreshViewTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CanBndToViewModelTimer(bool& bCanBind); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.CanBndToViewModelTimer // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void BindToViewModelTimer(bool bBind); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.BindToViewModelTimer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MakeViewModelTimer(); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.MakeViewModelTimer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MakeViewModelLockIn(); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.MakeViewModelLockIn // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CanBndToViewModelLockIn(bool& bCanBind); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.CanBndToViewModelLockIn // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void RefreshViewLockIn(); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.RefreshViewLockIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshView(); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.RefreshView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToViewModelLockin(bool bBind); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.BindToViewModelLockin // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool bBind); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetLockInButton(struct UAresCommonButton*& LockInButton); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.GetLockInButton // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void MakeViewModels(); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.MakeViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleNotSelectedAlertCancelled(); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.HandleNotSelectedAlertCancelled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleNotSelectedAlert(); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.HandleNotSelectedAlert // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnLockedInAnimationFinished(); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.OnLockedInAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLocalPlayerLockedInChanged(bool LockedIn); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.OnLocalPlayerLockedInChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLocalPlayerLockingInChanged(bool LockingIn); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.OnLocalPlayerLockingInChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ResetLockIn(); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.ResetLockIn // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLockedInResetAnimFinished(); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.OnLockedInResetAnimFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnNumTeammatesLockedInChanged(int32_t NumLockedIn); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.OnNumTeammatesLockedInChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_CharacterSelect_Base(int32_t EntryPoint); // Function WBP_Screen_CharacterSelect_Base.WBP_Screen_CharacterSelect_Base_C.ExecuteUbergraph_WBP_Screen_CharacterSelect_Base // (Final|UbergraphFunction) // @ game+0x1af5410
};

