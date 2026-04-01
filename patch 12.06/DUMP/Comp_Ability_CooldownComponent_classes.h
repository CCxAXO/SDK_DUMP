// BlueprintGeneratedClass Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C
// Size: 0x142 (Inherited: 0xd8)
struct UComp_Ability_CooldownComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	double CooldownSeconds; // 0xe0(0x08)
	bool AutoCooldown; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct FMulticastInlineDelegate OnCooldownStarted; // 0xf0(0x10)
	struct FTimerHandle CooldownTimer; // 0x100(0x08)
	bool PlaySignatureReplenishVisuals; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct FMulticastInlineDelegate OnCooldownComplete; // 0x110(0x10)
	double DPT_Cooldown; // 0x120(0x08)
	enum class EGameFeatureToggleName DPT_FeatureToggle; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	int32_t AuthMaxChargesThisRound; // 0x12c(0x04)
	bool ReplenishTempCharges; // 0x130(0x01)
	bool AllowPreRoundUse; // 0x131(0x01)
	bool RechargeDisabled; // 0x132(0x01)
	bool PauseDuringPreRound; // 0x133(0x01)
	bool InstantCooldownOnRecall; // 0x134(0x01)
	bool AuthInRoundTransition; // 0x135(0x01)
	char pad_136[0x2]; // 0x136(0x02)
	double StartTimeStamp; // 0x138(0x08)
	bool CooldownActive; // 0x140(0x01)
	bool CooldownPausedDuringPreRound; // 0x141(0x01)

	void CooldownStatus(bool& OnCooldown, double& TimeRemaining); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.CooldownStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void AuthShouldPreventAbilityRecharge(bool& bShouldPrevent); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthShouldPreventAbilityRecharge // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void OnRep_CooldownActive(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.OnRep_CooldownActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetRemainingTime(double& RemainingTime); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.GetRemainingTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void GetElapsedTime(double& ElapsedTime); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.GetElapsedTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void GetCooldownStatus(bool& InCooldown, double& SecondsRemaining); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.GetCooldownStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	bool AuthCanCooldownStart(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthCanCooldownStart // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthPlayReplenishVisuals(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthPlayReplenishVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthReplenishCharge(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthReplenishCharge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthUpdateCooldownTimeForDPT(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthUpdateCooldownTimeForDPT // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthSetCooldownDuration(double NewCooldownSeconds); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthSetCooldownDuration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthCancelCooldown(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthCancelCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthFinishCooldown(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthFinishCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthRestartCooldown(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthRestartCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthStartCooldown(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthStartCooldown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthStartCooldownOrReplenishCharge(bool AbilityDestroyed); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthStartCooldownOrReplenishCharge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthAttemptToStartCooldown(bool AbilityDestroyed); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthAttemptToStartCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void AuthOnResourceChanged(struct UResourceComponent* ResourceComponent); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthOnResourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRoundEnd(int32_t RoundNumberEnded); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.OnRoundEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthOnGameplayActiveChanged(bool NewGameplayActive); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthOnGameplayActiveChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthOnGameFeatureToggleChanged(enum class EGameFeatureToggleName GameFeatureToggleName, bool bEnabled); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthOnGameFeatureToggleChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthOnRoundBegin(int32_t RoundNumberBeginning); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthOnRoundBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Comp_Ability_CooldownComponent(int32_t EntryPoint); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.ExecuteUbergraph_Comp_Ability_CooldownComponent // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnCooldownComplete__DelegateSignature(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.OnCooldownComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCooldownStarted__DelegateSignature(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.OnCooldownStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

