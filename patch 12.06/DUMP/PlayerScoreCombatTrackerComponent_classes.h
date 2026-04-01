// BlueprintGeneratedClass PlayerScoreCombatTrackerComponent.PlayerScoreCombatTrackerComponent_C
// Size: 0x13c (Inherited: 0xe0)
struct UPlayerScoreCombatTrackerComponent_C : UPlayerScoreCombatTrackerComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe0(0x08)
	struct FClassInclusionExclusionFilter CharacterFilter; // 0xe8(0x50)
	int32_t EnemiesAlive; // 0x138(0x04)

	void ScoredKill(struct FScoreKillData& ScoreKillData); // Function PlayerScoreCombatTrackerComponent.PlayerScoreCombatTrackerComponent_C.ScoredKill // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void ScoredAssist(struct UDamageResponse* KillingBlow, struct FAresAssist& AssistInfo, struct AOwnerExclusivePlayerInfo* Killer, struct AOwnerExclusivePlayerInfo* Assister); // Function PlayerScoreCombatTrackerComponent.PlayerScoreCombatTrackerComponent_C.ScoredAssist // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void ScoredDeath(struct UDamageResponse* Response, struct AOwnerExclusivePlayerInfo* Killer, struct TArray<struct FAresAssist>& AssistsList); // Function PlayerScoreCombatTrackerComponent.PlayerScoreCombatTrackerComponent_C.ScoredDeath // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void DealtDamage(struct UDamageResponse* Response); // Function PlayerScoreCombatTrackerComponent.PlayerScoreCombatTrackerComponent_C.DealtDamage // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceivedDamage(struct UDamageResponse* Response); // Function PlayerScoreCombatTrackerComponent.PlayerScoreCombatTrackerComponent_C.ReceivedDamage // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PlayerScoreCombatTrackerComponent(int32_t EntryPoint); // Function PlayerScoreCombatTrackerComponent.PlayerScoreCombatTrackerComponent_C.ExecuteUbergraph_PlayerScoreCombatTrackerComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

