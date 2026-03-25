// WidgetBlueprintGeneratedClass WBP_View_CharacterSelectTeamState_PC.WBP_View_CharacterSelectTeamState_PC_C
// Size: 0x418 (Inherited: 0x3f0)
struct UWBP_View_CharacterSelectTeamState_PC_C : UWBP_View_CharacterSelectTeamState_C {
	struct UWBP_View_CharacterSelectTeamMemberState_PC_C* TeamMember1; // 0x3f0(0x08)
	struct UWBP_View_CharacterSelectTeamMemberState_PC_C* TeamMember2; // 0x3f8(0x08)
	struct UWBP_View_CharacterSelectTeamMemberState_PC_C* TeamMember3; // 0x400(0x08)
	struct UWBP_View_CharacterSelectTeamMemberState_PC_C* TeamMember4; // 0x408(0x08)
	struct UWBP_View_CharacterSelectTeamMemberState_PC_C* TeamMember5; // 0x410(0x08)

	void GetTeamMemberStatesLeftToRight(struct TArray<struct UWBP_View_CharacterSelectTeamMemberState_C*>& TeamMembers); // Function WBP_View_CharacterSelectTeamState_PC.WBP_View_CharacterSelectTeamState_PC_C.GetTeamMemberStatesLeftToRight // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetTeamMemberStates(struct TArray<struct UWBP_View_CharacterSelectTeamMemberState_C*>& TeamMembers); // Function WBP_View_CharacterSelectTeamState_PC.WBP_View_CharacterSelectTeamState_PC_C.GetTeamMemberStates // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
};

