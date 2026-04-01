// WidgetBlueprintGeneratedClass WBP_KillCalloutHUDElement_Base.WBP_KillCalloutHUDElement_Base_C
// Size: 0x3d8 (Inherited: 0x338)
struct UWBP_KillCalloutHUDElement_Base_C : UKillCalloutHUDElement_Base {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x340(0x08)
	struct TArray<struct UWBP_KillFeedRow_Base_C*> KillCalloutRows; // 0x348(0x10)
	struct UWBP_KillFeedRow_Base_C* KillFeedRowClass; // 0x358(0x08)
	struct TMap<struct AShooterPlayerState*, int32_t> HighestKillNumberPerPlayer; // 0x360(0x50)
	struct TArray<struct FKillRowInfoTimestamped> PendingKillRowInfos; // 0x3b0(0x10)
	struct FTimerHandle TickTimerHandle; // 0x3c0(0x08)
	double PendingKillRowExpirationTime; // 0x3c8(0x08)
	double PendingKillRowTickRate; // 0x3d0(0x08)

	void RegisterKillNumberForPlayer(struct AShooterPlayerState* Killer Player State, int32_t Kill Number in Round for Killer ); // Function WBP_KillCalloutHUDElement_Base.WBP_KillCalloutHUDElement_Base_C.RegisterKillNumberForPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TickPendingKillFeedInfos(); // Function WBP_KillCalloutHUDElement_Base.WBP_KillCalloutHUDElement_Base_C.TickPendingKillFeedInfos // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsEarlierKillNumber(struct FKillFeedRowInfo Kill Feed Info, bool& Result); // Function WBP_KillCalloutHUDElement_Base.WBP_KillCalloutHUDElement_Base_C.IsEarlierKillNumber // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetKillCalloutRow(struct FKillFeedRowInfo KillFeedRowInfo, struct UWBP_KillFeedRow_Base_C*& Kill Feed Row); // Function WBP_KillCalloutHUDElement_Base.WBP_KillCalloutHUDElement_Base_C.GetKillCalloutRow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreallocateKillCalloutRows(int32_t Num to Allocate); // Function WBP_KillCalloutHUDElement_Base.WBP_KillCalloutHUDElement_Base_C.PreallocateKillCalloutRows // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_KillCalloutHUDElement_Base.WBP_KillCalloutHUDElement_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function WBP_KillCalloutHUDElement_Base.WBP_KillCalloutHUDElement_Base_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAnyPlayerKilled(struct AShooterPlayerState* KillerPlayerState, struct AShooterPlayerState* KilledPlayerState, int32_t KillNumberInRoundForKiller, int32_t KillNumberInRoundForKilled, struct UDamageResponse* Response, struct AAresEquippable* EquippableUsed, struct TArray<struct FAresAssist>& AssistsList); // Function WBP_KillCalloutHUDElement_Base.WBP_KillCalloutHUDElement_Base_C.OnAnyPlayerKilled // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAnyPlayerResurrected(struct AShooterPlayerState* ResurrectorPlayerState, struct AShooterPlayerState* ResurrectedPlayerState, int32_t KillNumberInRoundForResurrector, int32_t KillNumberInRoundForResurrected); // Function WBP_KillCalloutHUDElement_Base.WBP_KillCalloutHUDElement_Base_C.OnAnyPlayerResurrected // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCinematicModeUpdated_Event(); // Function WBP_KillCalloutHUDElement_Base.WBP_KillCalloutHUDElement_Base_C.OnCinematicModeUpdated_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAnyPlayerTemporaryDeath(struct AShooterPlayerState* DamagerPlayerState, struct AShooterPlayerState* DownedPlayerState, struct UDamageResponse* DamageResponse, struct AAresEquippable* EquippableUsed, bool bRecoversInstantly); // Function WBP_KillCalloutHUDElement_Base.WBP_KillCalloutHUDElement_Base_C.OnAnyPlayerTemporaryDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPlayerRecovery_Event(struct AShooterPlayerState* RecoveredByPlayerState, struct AShooterPlayerState* RecoveredPlayerState); // Function WBP_KillCalloutHUDElement_Base.WBP_KillCalloutHUDElement_Base_C.OnPlayerRecovery_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void EventTickPendingKillRows(); // Function WBP_KillCalloutHUDElement_Base.WBP_KillCalloutHUDElement_Base_C.EventTickPendingKillRows // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRoundBegin(int32_t NewValue); // Function WBP_KillCalloutHUDElement_Base.WBP_KillCalloutHUDElement_Base_C.OnRoundBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_KillCalloutHUDElement_Base(int32_t EntryPoint); // Function WBP_KillCalloutHUDElement_Base.WBP_KillCalloutHUDElement_Base_C.ExecuteUbergraph_WBP_KillCalloutHUDElement_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

