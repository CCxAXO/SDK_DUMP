// WidgetBlueprintGeneratedClass MatchDetailsSkillRatingTab.MatchDetailsSkillRatingTab_C
// Size: 0x640 (Inherited: 0x5a9)
struct UMatchDetailsSkillRatingTab_C : UMatchDetailsTabBase_C {
	char pad_5A9[0x7]; // 0x5a9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5b0(0x08)
	struct UCharacterAbilityCombatStatsRow_C* CharacterAbilityCombatStatsRow; // 0x5b8(0x08)
	struct UCharacterAbilityCombatStatsRow_C* CharacterAbilityCombatStatsRow_C_8; // 0x5c0(0x08)
	struct UCharacterAbilityCombatStatsRow_C* CharacterAbilityCombatStatsRow_C_9; // 0x5c8(0x08)
	struct UCharacterAbilityCombatStatsRow_C* CharacterAbilityCombatStatsRow_C_10; // 0x5d0(0x08)
	struct UTextBlock* CharacterName; // 0x5d8(0x08)
	struct UEnemyInteractionWidget_C* EnemyInteractionWidget; // 0x5e0(0x08)
	struct UEnemyInteractionWidget_C* EnemyInteractionWidget_51; // 0x5e8(0x08)
	struct UEnemyInteractionWidget_C* EnemyInteractionWidget_119; // 0x5f0(0x08)
	struct UEnemyInteractionWidget_C* EnemyInteractionWidget_187; // 0x5f8(0x08)
	struct UEnemyInteractionWidget_C* EnemyInteractionWidget_C_4; // 0x600(0x08)
	struct UOverlay* NameAbilitiesOverlay; // 0x608(0x08)
	struct UWrapBox* PerformanceWrapBox; // 0x610(0x08)
	struct UScrollBox* ScrollBox_1; // 0x618(0x08)
	struct TArray<struct FMatchDetailsEnemyInteractionList> EnemyInteractions; // 0x620(0x10)
	struct FMulticastInlineDelegate OnInteractionClicked; // 0x630(0x10)

	void Construct(); // Function MatchDetailsSkillRatingTab.MatchDetailsSkillRatingTab_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void EventOnInit(); // Function MatchDetailsSkillRatingTab.MatchDetailsSkillRatingTab_C.EventOnInit // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CustomEvent_2(struct FString Victim, int32_t RoundNum); // Function MatchDetailsSkillRatingTab.MatchDetailsSkillRatingTab_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MatchDetailsSkillRatingTab(int32_t EntryPoint); // Function MatchDetailsSkillRatingTab.MatchDetailsSkillRatingTab_C.ExecuteUbergraph_MatchDetailsSkillRatingTab // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnInteractionClicked__DelegateSignature(struct FString Victim, int32_t RoundNum); // Function MatchDetailsSkillRatingTab.MatchDetailsSkillRatingTab_C.OnInteractionClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

