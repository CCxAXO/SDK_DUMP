// WidgetBlueprintGeneratedClass WBP_KillFeedRow_Base.WBP_KillFeedRow_Base_C
// Size: 0x4b0 (Inherited: 0x368)
struct UWBP_KillFeedRow_Base_C : UKillFeedRow_Base {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct FKillFeedColorPalette AllyDefaultColorPalette; // 0x370(0x40)
	struct FKillFeedColorPalette EnemyDefaultColorPalette; // 0x3b0(0x40)
	struct FKillFeedColorPalette SelfDefaultColorPalette; // 0x3f0(0x40)
	struct FKillFeedColorPalette CachedLeftParticipantPalette; // 0x430(0x40)
	struct FKillFeedColorPalette CachedRightParticipantPalette; // 0x470(0x40)

	void PlayOutAnimation(); // Function WBP_KillFeedRow_Base.WBP_KillFeedRow_Base_C.PlayOutAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayInAnimation(); // Function WBP_KillFeedRow_Base.WBP_KillFeedRow_Base_C.PlayInAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateVFXVisibility(int32_t KillerNumber, int32_t VictimNumber); // Function WBP_KillFeedRow_Base.WBP_KillFeedRow_Base_C.UpdateVFXVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Get Participant Colors(struct AShooterPlayerState* SubjectPlayerState, bool bIsBothParticipantsSameTeam, bool bIsRight, struct FKillFeedColorPalette& OutPalette); // Function WBP_KillFeedRow_Base.WBP_KillFeedRow_Base_C.Get Participant Colors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetArrowColor(); // Function WBP_KillFeedRow_Base.WBP_KillFeedRow_Base_C.SetArrowColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTextForKillNumber(int32_t KillNumber); // Function WBP_KillFeedRow_Base.WBP_KillFeedRow_Base_C.SetTextForKillNumber // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PopulateKillFeedRow(struct FKillFeedRowInfo KillFeedRowInfo); // Function WBP_KillFeedRow_Base.WBP_KillFeedRow_Base_C.PopulateKillFeedRow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EndKillFeedEntry(); // Function WBP_KillFeedRow_Base.WBP_KillFeedRow_Base_C.EndKillFeedEntry // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_KillFeedRow_Base(int32_t EntryPoint); // Function WBP_KillFeedRow_Base.WBP_KillFeedRow_Base_C.ExecuteUbergraph_WBP_KillFeedRow_Base // (Final|UbergraphFunction) // @ game+0x1b42740
};

