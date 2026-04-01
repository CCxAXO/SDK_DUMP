// BlueprintGeneratedClass AudBombGameModeVOComponent.AudBombGameModeVOComponent_C
// Size: 0x602 (Inherited: 0x1e8)
struct UAudBombGameModeVOComponent_C : UAudBaseGameModeVOComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1e8(0x08)
	bool AnnouncementTriggered30sec; // 0x1f0(0x01)
	bool AnnouncementTriggered10sec; // 0x1f1(0x01)
	bool AnnouncementMatchPointTriggered; // 0x1f2(0x01)
	char pad_1F3[0x5]; // 0x1f3(0x05)
	struct AShooterCharacter* LastKillInsigator; // 0x1f8(0x08)
	struct AShooterCharacter* BombDefuser; // 0x200(0x08)
	struct AShooterCharacter* ClutchPlayCharacter; // 0x208(0x08)
	struct UAudBasePawnVOComponent_C* MyBasePawnVOComponent; // 0x210(0x08)
	struct TSet<struct FString> AttackerGSBubbleDownLimiter; // 0x218(0x50)
	struct TSet<struct FString> RoundStartLimiter; // 0x268(0x50)
	struct AShooterPlayerState* CeremonyAwardIdentity; // 0x2b8(0x08)
	struct TSet<struct FString> CeremonyLimiter; // 0x2c0(0x50)
	struct TArray<int32_t> RoundStartWon_RandomWeight; // 0x310(0x10)
	struct TArray<int32_t> BubbleDown_RandomWeight; // 0x320(0x10)
	struct TArray<int32_t> MatchStart_RandomWeight; // 0x330(0x10)
	struct FMulticastInlineDelegate PlayedRoundStartVO; // 0x340(0x10)
	struct TArray<int32_t> RoundStartCharSpecific_RandomWeight; // 0x350(0x10)
	struct TArray<int32_t> TEMP_RoundStartCharSpecific_RandomWeight; // 0x360(0x10)
	struct TArray<int32_t> TEMP_RoundStartWon_RandomWeight; // 0x370(0x10)
	struct TArray<int32_t> RoundStartGeneral_ThrottleWeight; // 0x380(0x10)
	struct TArray<struct AShooterCharacter*> RoundStartGenericCharacterArray; // 0x390(0x10)
	struct TArray<struct AShooterCharacter*> BubbleDownCharacterArray; // 0x3a0(0x10)
	bool IndexAndInputAreTheSame; // 0x3b0(0x01)
	char pad_3B1[0x3]; // 0x3b1(0x03)
	int32_t RoundStartGenericCharacterIndex; // 0x3b4(0x04)
	int32_t BubbleDownCharacterIndex; // 0x3b8(0x04)
	enum class EAresAlliance AttackerRelationshipMatchStartAlliance; // 0x3bc(0x01)
	enum class EAresAlliance AttackerRelationshipBubbleDownAlliance; // 0x3bd(0x01)
	enum class EAresAlliance DefenderRelationshipMatchStartAlliance; // 0x3be(0x01)
	enum class EAresAlliance DefenderRelationshipBubbleDownAlliance; // 0x3bf(0x01)
	struct TSet<struct FString> DefenderGSBubbleDownLimiter; // 0x3c0(0x50)
	struct TArray<int32_t> MapMatchWin_RandomWeight; // 0x410(0x10)
	struct TArray<int32_t> LastKillCharSpecific_RandomWeight; // 0x420(0x10)
	enum class CeremonyIdentifier PrevRoundCeremony; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct AShooterPlayerState* PrevRoundCeremonyChar; // 0x438(0x08)
	bool CommendLinePlayed; // 0x440(0x01)
	bool ShouldPlayBombEquippableVO; // 0x441(0x01)
	bool IsQuickMode; // 0x442(0x01)
	enum class CharacterRelationMatchVOEnum AttackerCharRelationMatchEnumPick; // 0x443(0x01)
	enum class CharacterRelationMatchVOEnum DefenderCharRelationMatchEnumPick; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	struct UAudBasePawnVOComponent_C* RoundStartRelationBPVOComp; // 0x448(0x08)
	struct AShooterCharacter* RoundStartRelationSelectedChar; // 0x450(0x08)
	enum class CharacterRelationMatchVOEnum AttackerTagMatchEnumPick; // 0x458(0x01)
	enum class CharacterRelationMatchVOEnum DefenderTagMatchEnumPick; // 0x459(0x01)
	enum class EAresAlliance AttackerTagMatchStartAlliance; // 0x45a(0x01)
	enum class EAresAlliance DefenderTagMatchStartAlliance; // 0x45b(0x01)
	enum class EAresAlliance AttackerTagBubbleDownAlliance; // 0x45c(0x01)
	enum class EAresAlliance DefenderTagBubbleDownAlliance; // 0x45d(0x01)
	enum class CharacterRelationBubbleDownVOEnum AttackerTagBubbleDownEnumPick; // 0x45e(0x01)
	enum class CharacterRelationBubbleDownVOEnum DefenderTagBubbleDownEnumPick; // 0x45f(0x01)
	enum class CharacterRelationBubbleDownVOEnum AttackerCharRelationBubbleDownEnum; // 0x460(0x01)
	enum class CharacterRelationBubbleDownVOEnum DefenderCharRelationBubbleDownEnum; // 0x461(0x01)
	char pad_462[0x6]; // 0x462(0x06)
	struct TArray<int32_t> DefenderBubbleDownSpecific_RandomWeight; // 0x468(0x10)
	struct TArray<int32_t> AttackerBubbleDownSpecific_RandomWeight; // 0x478(0x10)
	struct TArray<int32_t> RoundStartTagCommend_RandomWeight; // 0x488(0x10)
	struct TArray<int32_t> TEMP_Attacker_MatchStart_RandomWeight; // 0x498(0x10)
	struct TArray<int32_t> TEMP_Defender_MatchStart_RandomWeight; // 0x4a8(0x10)
	double CarrierKilledDelay; // 0x4b8(0x08)
	enum class ECalloutSuperRegion CarrierKilledSuperRegion; // 0x4c0(0x01)
	char pad_4C1[0x7]; // 0x4c1(0x07)
	double CarrierKilledCooldown; // 0x4c8(0x08)
	double CarrierKilledTimestamp; // 0x4d0(0x08)
	struct FVector CarrierKilledLocation; // 0x4d8(0x18)
	double CarrierKilledDistThreshold; // 0x4f0(0x08)
	struct FVector CarrierKilledLocationPrev; // 0x4f8(0x18)
	struct TMap<enum class AnnouncerKillsVOEnum, struct UAkAudioEvent*> AnnouncerKillsVO; // 0x510(0x50)
	struct TMap<enum class AnnouncerMatchVOEnum, struct UAkAudioEvent*> AnnouncerMatchVO; // 0x560(0x50)
	struct TMap<enum class MaxbotVOEnum, struct UAkAudioEvent*> MaxbotVO; // 0x5b0(0x50)
	bool bShouldPlayMatchStartVO; // 0x600(0x01)
	bool ShouldPlayRoundStartCharVO; // 0x601(0x01)

	void GetMaxbotVOEvent(struct FString EnumStringOption, struct UAkAudioEvent*& AkEvent); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.GetMaxbotVOEvent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetMaxbotVOCategoryOptions(struct TArray<struct FString>& EnumStringOptions); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.GetMaxbotVOCategoryOptions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetMatchVOEvent(struct FString EnumStringOption, struct UAkAudioEvent*& AkEvent); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.GetMatchVOEvent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetMatchVOCategoryOptions(struct TArray<struct FString>& EnumStringOptions); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.GetMatchVOCategoryOptions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Get KillsVOEvent(struct FString EnumStringOption, struct UAkAudioEvent*& AkEvent); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.Get KillsVOEvent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetKillsVOCategoryOptions(struct TArray<struct FString>& EnumStringOptions); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.GetKillsVOCategoryOptions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetAnnouncerVOComponent(struct UBaseTeamComponent* Team, struct UAnnouncerVOComponent_C*& Announcer VO Component); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.GetAnnouncerVOComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void PlayAnnouncerLineHelper(struct UAkAudioEvent* EventToAttackers, struct UAkAudioEvent* EventToDefenders, enum class VOPriorityEnum Priority, double QueueTimeout); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.PlayAnnouncerLineHelper // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GunSkinVOCheck(struct UAudBasePawnVOComponent_C* Character Component, struct UDamageResponse* Dmg Response, struct UDamageType* DmgType, struct UBaseGunSkinVOComponent_C*& Selected VO Component, struct UAudBasePawnVOComponent_C*& Play On Character); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.GunSkinVOCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Char_ModeSpecificKill(struct AShooterCharacter* Victim Ref, struct AShooterCharacter* Base Pawn Ref, bool WasHeadshot, bool Was100OrMoreDmg, struct UDamageResponse* DamageResponse, struct UDamageType* DamageType, bool& WasLinePlayed); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Char_ModeSpecificKill // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReallowMatchPointAnnouncement(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.ReallowMatchPointAnnouncement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Announcer_Overtime(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_Overtime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InsertVOArray(struct TArray<struct AShooterCharacter*>& Array, struct AShooterCharacter* Character, int32_t Index, int32_t& ReturnIndex); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.InsertVOArray // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsEachIndexEqualToInput(struct TArray<struct AShooterCharacter*>& Array, struct AShooterCharacter* CharacterName, bool& ResultIsSame); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.IsEachIndexEqualToInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Char_ObjectivePlanted(struct AShooterCharacter* Shooter Char Ref); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Char_ObjectivePlanted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Announcer_SuddenDeath(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_SuddenDeath // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void zz_GetCeremonyAwardIdentity(enum class CeremonyIdentifier CeremonyIdentifier, struct ABaseCeremony_C* BaseCeremonyObjectRef, struct AShooterPlayerState*& CeremonyAwardIdentity); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.zz_GetCeremonyAwardIdentity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Announcer_Ceremony(enum class CeremonyIdentifier Ceremony); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_Ceremony // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OtherTeamIsNotDead(struct AShooterCharacter* BasePawn, bool& TRUE); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OtherTeamIsNotDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Char_MatchWin(struct UBaseTeamComponent* WinningTeam, struct FString MapName); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Char_MatchWin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetPrevRoundWinningTeam(struct UBaseTeamComponent*& Winning Team); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.GetPrevRoundWinningTeam // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void FindRoundStartLineCharacter(struct UBaseTeamComponent* Team, struct FString LineName, struct UAudBasePawnVOComponent_C*& Base Pawn VO Component); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.FindRoundStartLineCharacter // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Char_MatchStart(struct FString Map Name); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Char_MatchStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DidLoseRoundX(struct TArray<struct FAresRoundResult>& Array, int32_t Index, struct UBaseTeamComponent* Team, bool& DidLose); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.DidLoseRoundX // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void OnAuth_Char_BubbleDown(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Char_BubbleDown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Char_RoundStart_LastRoundInHalf(enum class EAresAlliance TeamAlliance, struct UBaseTeamComponent* MyTeam); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Char_RoundStart_LastRoundInHalf // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Char_RoundStart(struct UBaseTeamComponent* Team); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Char_RoundStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Char_RoundEnd(struct UBaseTeamComponent* WinningTeam, enum class EBombRoundEndReason BombRoundEndReason, enum class CeremonyIdentifier CeremonyIdentifier, struct ABaseCeremony_C* BaseCeremonyObjectRef, struct AShooterCharacter* Victim, struct UDamageType* Dmg Type, struct AShooterCharacter* Killer, struct UDamageResponse* Dmg Response); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Char_RoundEnd // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Announcer_KillStreak(struct AShooterCharacter* Killer); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_KillStreak // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Announcer_MatchPoint(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_MatchPoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Announcer_RoundEnd(struct UBaseTeamComponent* WinningTeam); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_RoundEnd // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Announcer_ResetTriggers(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_ResetTriggers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Char_DefuseOutofTime(struct AShooterPlayerController* Current Defuser, double Plant Time); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Char_DefuseOutofTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Announcer_10n30SecLeft(enum class EAresBombStates Bomb State, struct AShooterGameMode* ShooterGameMode); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_10n30SecLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Char_ObjectiveDefused(struct AShooterCharacter* Shooter Char Ref); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Char_ObjectiveDefused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Announcer_ObjectivePlanted(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_ObjectivePlanted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Announcer_OneEnemyLastStanding(struct AActor* Last Standing Ref, struct AActor* Killer Ref); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_OneEnemyLastStanding // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Announcer_MatchTeamRedWin(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_MatchTeamRedWin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Announcer_MatchTeamBlueWin(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_MatchTeamBlueWin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Announcer_TeamSwitch(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_TeamSwitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Announcer_LastRoundInHalf(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_LastRoundInHalf // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void CallResponseVO(struct UAudBasePawnVOComponent_C* ResponseVOComp, enum class CharacterID StartConvoCharacterID, struct UBaseVOComponent_C* StartConvoVOComp); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.CallResponseVO // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAuth_Announcer_SpikeCarrierKilled(struct AShooterCharacter* OldBombCarrier, struct ABombEquippable_C* Bomb); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.OnAuth_Announcer_SpikeCarrierKilled // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AudBombGameModeVOComponent(int32_t EntryPoint); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.ExecuteUbergraph_AudBombGameModeVOComponent // (Final|UbergraphFunction) // @ game+0x1b42740
	void PlayedRoundStartVO__DelegateSignature(); // Function AudBombGameModeVOComponent.AudBombGameModeVOComponent_C.PlayedRoundStartVO__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

