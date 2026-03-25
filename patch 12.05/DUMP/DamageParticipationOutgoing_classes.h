// BlueprintGeneratedClass DamageParticipationOutgoing.DamageParticipationOutgoing_C
// Size: 0x4f0 (Inherited: 0x4e0)
struct ADamageParticipationOutgoing_C : ABehaviorScoreTrackerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	double TotalDamageToEnemies; // 0x4e8(0x08)

	void BuildDebugStringParticipantInteractions(struct FCharacterCombatReport Report, int32_t Index, struct FString& CombatReportsDebugString); // Function DamageParticipationOutgoing.DamageParticipationOutgoing_C.BuildDebugStringParticipantInteractions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void BuildDebugStringTotalCombatReports(struct TArray<struct FCharacterCombatReport>& Reports, int32_t Round, struct FString& CombatReportsDebugString); // Function DamageParticipationOutgoing.DamageParticipationOutgoing_C.BuildDebugStringTotalCombatReports // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void BuildDebugStringTotalDamage(struct FString& DamageDebugString); // Function DamageParticipationOutgoing.DamageParticipationOutgoing_C.BuildDebugStringTotalDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void BuildDebugStringRoundNum(struct FString& RoundNumDebugString); // Function DamageParticipationOutgoing.DamageParticipationOutgoing_C.BuildDebugStringRoundNum // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	double CalculateFactor(enum class EMatchCompletionState CompletionState, struct FString& OverrideFactorName); // Function DamageParticipationOutgoing.DamageParticipationOutgoing_C.CalculateFactor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BeginTracking(); // Function DamageParticipationOutgoing.DamageParticipationOutgoing_C.BeginTracking // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void EndTracking(); // Function DamageParticipationOutgoing.DamageParticipationOutgoing_C.EndTracking // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_DamageParticipationOutgoing(int32_t EntryPoint); // Function DamageParticipationOutgoing.DamageParticipationOutgoing_C.ExecuteUbergraph_DamageParticipationOutgoing // (Final|UbergraphFunction) // @ game+0x1af5410
};

