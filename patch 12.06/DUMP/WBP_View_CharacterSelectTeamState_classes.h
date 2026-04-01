// WidgetBlueprintGeneratedClass WBP_View_CharacterSelectTeamState.WBP_View_CharacterSelectTeamState_C
// Size: 0x3f0 (Inherited: 0x3e0)
struct UWBP_View_CharacterSelectTeamState_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* LockIn; // 0x3e8(0x08)

	void GetTeamMemberStatesLeftToRight(struct TArray<struct UWBP_View_CharacterSelectTeamMemberState_C*>& TeamMembers); // Function WBP_View_CharacterSelectTeamState.WBP_View_CharacterSelectTeamState_C.GetTeamMemberStatesLeftToRight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetRightMostTeamMember(struct UWBP_View_CharacterSelectTeamMemberState_C*& Result); // Function WBP_View_CharacterSelectTeamState.WBP_View_CharacterSelectTeamState_C.GetRightMostTeamMember // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetLeftMostTeamMember(struct UWBP_View_CharacterSelectTeamMemberState_C*& Result); // Function WBP_View_CharacterSelectTeamState.WBP_View_CharacterSelectTeamState_C.GetLeftMostTeamMember // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetTeamMember5(struct UWBP_View_CharacterSelectTeamMemberState_C*& TeamMember); // Function WBP_View_CharacterSelectTeamState.WBP_View_CharacterSelectTeamState_C.GetTeamMember5 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetTeamMember4(struct UWBP_View_CharacterSelectTeamMemberState_C*& TeamMember); // Function WBP_View_CharacterSelectTeamState.WBP_View_CharacterSelectTeamState_C.GetTeamMember4 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetTeamMember3(struct UWBP_View_CharacterSelectTeamMemberState_C*& TeamMember); // Function WBP_View_CharacterSelectTeamState.WBP_View_CharacterSelectTeamState_C.GetTeamMember3 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetTeamMember2(struct UWBP_View_CharacterSelectTeamMemberState_C*& TeamMember); // Function WBP_View_CharacterSelectTeamState.WBP_View_CharacterSelectTeamState_C.GetTeamMember2 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetTeamMember1(struct UWBP_View_CharacterSelectTeamMemberState_C*& TeamMember); // Function WBP_View_CharacterSelectTeamState.WBP_View_CharacterSelectTeamState_C.GetTeamMember1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetTeamMemberStates(struct TArray<struct UWBP_View_CharacterSelectTeamMemberState_C*>& TeamMembers); // Function WBP_View_CharacterSelectTeamState.WBP_View_CharacterSelectTeamState_C.GetTeamMemberStates // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_View_CharacterSelectTeamState.WBP_View_CharacterSelectTeamState_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_View_CharacterSelectTeamState(int32_t EntryPoint); // Function WBP_View_CharacterSelectTeamState.WBP_View_CharacterSelectTeamState_C.ExecuteUbergraph_WBP_View_CharacterSelectTeamState // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

