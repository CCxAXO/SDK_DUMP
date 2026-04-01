// BlueprintGeneratedClass BaseController.BaseController_C
// Size: 0x10b8 (Inherited: 0xf98)
struct ABaseController_C : AShooterPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf98(0x08)
	struct UComp_Controller_DeafenManager_C* Comp_Controller_DeafenManager; // 0xfa0(0x08)
	struct UAresMovementToolingTuningComponent* MovementToolingTuningComponent; // 0xfa8(0x08)
	struct URateLimiterComponent* RPCDisconnectRateLimiter; // 0xfb0(0x08)
	struct URateLimiterComponent* VORateLimiter; // 0xfb8(0x08)
	struct URateLimiterComponent* PingRateLimiter; // 0xfc0(0x08)
	struct UGameModeControllerData* GameModeControllerData; // 0xfc8(0x08)
	struct UAresAimToolingTuningComponent* AimToolingTuningComponent; // 0xfd0(0x08)
	struct UPlayerNonverbalChatComponent_C* PlayerNonVerbalChatComponent; // 0xfd8(0x08)
	struct UThrottledMapPingComponent_C* ThrottledMapPingComponent; // 0xfe0(0x08)
	struct UAud_Base_UI_Component_C* Aud_Base_UI_Component; // 0xfe8(0x08)
	struct UAudioComponent* TeamSelectMusicAudioComponent; // 0xff0(0x08)
	bool AutoHealing; // 0xff8(0x01)
	char pad_FF9[0x7]; // 0xff9(0x07)
	struct FTimerHandle AutoHealHandle; // 0x1000(0x08)
	struct FMulticastInlineDelegate OnControllerRessed; // 0x1008(0x10)
	double zPressTimeStamp; // 0x1018(0x08)
	bool zPressed; // 0x1020(0x01)
	bool lastInfoScreenVisibility; // 0x1021(0x01)
	bool zHeld; // 0x1022(0x01)
	bool pressedRecently; // 0x1023(0x01)
	char pad_1024[0x4]; // 0x1024(0x04)
	struct FText controllerPlayerName; // 0x1028(0x18)
	struct FText controllerCharacterName; // 0x1040(0x18)
	bool combatReportToggledOff; // 0x1058(0x01)
	bool teammatesStillAlive; // 0x1059(0x01)
	char pad_105A[0x6]; // 0x105a(0x06)
	double Adjustment; // 0x1060(0x08)
	struct ATextRenderActor* RangeSensitivityDisplay; // 0x1068(0x08)
	struct FMulticastInlineDelegate PlayerCommunicated; // 0x1070(0x10)
	enum class NonVerbalCommTypesEnum CommOptionsEnum; // 0x1080(0x01)
	char pad_1081[0x7]; // 0x1081(0x07)
	struct FText CharacterName; // 0x1088(0x18)
	int32_t ShopButtonAction; // 0x10a0(0x04)
	bool LocalIsScoreboardVisible; // 0x10a4(0x01)
	char pad_10A5[0x3]; // 0x10a5(0x03)
	struct FMulticastInlineDelegate OnOptionsScreenToggled; // 0x10a8(0x10)

	void GetPlantedBomb(struct APlantedBomb_C*& PlantedBomb); // Function BaseController.BaseController_C.GetPlantedBomb // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateInvertSetting(bool Invert); // Function BaseController.BaseController_C.UpdateInvertSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ValidateRPCFrequency(); // Function BaseController.BaseController_C.ValidateRPCFrequency // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TryConsumeBroadcastVO(bool& bSuccess); // Function BaseController.BaseController_C.TryConsumeBroadcastVO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CanPlayerBraodcastVO(bool& bSuccess); // Function BaseController.BaseController_C.CanPlayerBraodcastVO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TryConsumeBroadcastPing(bool& bSuccess); // Function BaseController.BaseController_C.TryConsumeBroadcastPing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CanPlayerBroadcastPing(bool& bSuccess); // Function BaseController.BaseController_C.CanPlayerBroadcastPing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthBroadcastTacCalloutChatMessageToTeam(struct FText ChatMessage, struct AShooterPlayerState* Source, struct AShooterPlayerState* Target, bool IsManuallyTriggered); // Function BaseController.BaseController_C.AuthBroadcastTacCalloutChatMessageToTeam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GenerateChatMessageWithRegions(enum class NonVerbalCommTypesEnum VO, struct FText& ChatMessageText); // Function BaseController.BaseController_C.GenerateChatMessageWithRegions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRep_PlayerCommunicated(); // Function BaseController.BaseController_C.OnRep_PlayerCommunicated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CalculateSensitivity(bool Up, bool BIG); // Function BaseController.BaseController_C.CalculateSensitivity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthBroadcastChatMessageToTeam(struct FText ChatMessage, struct AShooterPlayerState* Source, struct AShooterPlayerState* Target); // Function BaseController.BaseController_C.AuthBroadcastChatMessageToTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateSmokeFrameTick(); // Function BaseController.BaseController_C.UpdateSmokeFrameTick // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplySmokeThisFrame(double SmokeScreenObstructionPercent); // Function BaseController.BaseController_C.ApplySmokeThisFrame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	float GetSmokeOverlay(); // Function BaseController.BaseController_C.GetSmokeOverlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void AudSetupComponents(); // Function BaseController.BaseController_C.AudSetupComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SpawnInCharacter(struct AShooterCharacter* ShooterCharacterRef); // Function BaseController.BaseController_C.SpawnInCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DistanceFromEyes(struct AShooterCharacter* ShooterCharacter, struct AActor* OtherActor, double& Distance); // Function BaseController.BaseController_C.DistanceFromEyes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void GetOwnedPawnOrSpectatePawn(struct AShooterCharacter*& OutPawn); // Function BaseController.BaseController_C.GetOwnedPawnOrSpectatePawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void AuthToggleAutoHeal(); // Function BaseController.BaseController_C.AuthToggleAutoHeal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InpActEvt_InformationalHUD_K2Node_InputActionEvent_1(struct FKey Key); // Function BaseController.BaseController_C.InpActEvt_InformationalHUD_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function BaseController.BaseController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void AutoHeal(); // Function BaseController.BaseController_C.AutoHeal // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void NewRound(int32_t RoundNumberBeginning); // Function BaseController.BaseController_C.NewRound // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void makeBasePing(struct FVector Location, bool upgrade); // Function BaseController.BaseController_C.makeBasePing // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MarkGroundObjectForTeammates(struct AAresOnGroundEquippable* Equippable, struct FEffectData MarkerData); // Function BaseController.BaseController_C.MarkGroundObjectForTeammates // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AdjustSensitivity(bool Up, bool BIG); // Function BaseController.BaseController_C.AdjustSensitivity // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MarkOrbForTeammates(struct AActor* Orb); // Function BaseController.BaseController_C.MarkOrbForTeammates // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnScreenTransitionUpdated_Event_1(bool TransitionActive); // Function BaseController.BaseController_C.OnScreenTransitionUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveTick(float DeltaSeconds); // Function BaseController.BaseController_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void UpdateInvert(bool Invert); // Function BaseController.BaseController_C.UpdateInvert // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnScoreboardVisibilityUpdated(bool Visible); // Function BaseController.BaseController_C.OnScoreboardVisibilityUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOptionsScreenToggled_Event(bool IsVisible); // Function BaseController.BaseController_C.OnOptionsScreenToggled_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnGameFeatureToggleChanged(enum class EGameFeatureToggleName GameFeatureToggleName, bool bEnabled); // Function BaseController.BaseController_C.OnGameFeatureToggleChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BaseController(int32_t EntryPoint); // Function BaseController.BaseController_C.ExecuteUbergraph_BaseController // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnOptionsScreenToggled__DelegateSignature(bool IsVisible); // Function BaseController.BaseController_C.OnOptionsScreenToggled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayerCommunicated__DelegateSignature(); // Function BaseController.BaseController_C.PlayerCommunicated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnControllerRessed__DelegateSignature(struct FVector Location, bool CanTriggerMultiRes); // Function BaseController.BaseController_C.OnControllerRessed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

