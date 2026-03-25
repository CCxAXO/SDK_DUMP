// WidgetBlueprintGeneratedClass WBP_Panel_Teams_Roster_Container.WBP_Panel_Teams_Roster_Container_C
// Size: 0x488 (Inherited: 0x3e0)
struct UWBP_Panel_Teams_Roster_Container_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonScrollBox* ScrollBox_TeamMembers; // 0x3e8(0x08)
	struct TMap<struct UWBP_Panel_Teams_Member_Card_C*, bool> TeamMemberLoadingMap; // 0x3f0(0x50)
	struct FMulticastInlineDelegate OnTeamMemberLoadingChanged; // 0x440(0x10)
	struct FMulticastInlineDelegate OnError; // 0x450(0x10)
	int32_t Num Members; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
	struct FMulticastInlineDelegate OnBackFromPlayerProfiles; // 0x468(0x10)
	struct FMulticastInlineDelegate OnEnterPlayerProfiles; // 0x478(0x10)

	void TakeFocus(); // Function WBP_Panel_Teams_Roster_Container.WBP_Panel_Teams_Roster_Container_C.TakeFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_Teams_Roster_Container.WBP_Panel_Teams_Roster_Container_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void CheckLoadingComplete(); // Function WBP_Panel_Teams_Roster_Container.WBP_Panel_Teams_Roster_Container_C.CheckLoadingComplete // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTeamMemberError(); // Function WBP_Panel_Teams_Roster_Container.WBP_Panel_Teams_Roster_Container_C.OnTeamMemberError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnHasValidDataLoadingChanged(struct UWBP_Panel_Teams_Member_Card_C* Widget, bool bLoadingCompleted); // Function WBP_Panel_Teams_Roster_Container.WBP_Panel_Teams_Roster_Container_C.OnHasValidDataLoadingChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PopulateTeamMembersV2(struct FString TeamID, struct TArray<struct FString>& TeamMemberIDs); // Function WBP_Panel_Teams_Roster_Container.WBP_Panel_Teams_Roster_Container_C.PopulateTeamMembersV2 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_Teams_Roster_Container.WBP_Panel_Teams_Roster_Container_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_Teams_Roster_Container(int32_t EntryPoint); // Function WBP_Panel_Teams_Roster_Container.WBP_Panel_Teams_Roster_Container_C.ExecuteUbergraph_WBP_Panel_Teams_Roster_Container // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnEnterPlayerProfiles__DelegateSignature(); // Function WBP_Panel_Teams_Roster_Container.WBP_Panel_Teams_Roster_Container_C.OnEnterPlayerProfiles__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnBackFromPlayerProfiles__DelegateSignature(); // Function WBP_Panel_Teams_Roster_Container.WBP_Panel_Teams_Roster_Container_C.OnBackFromPlayerProfiles__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnError__DelegateSignature(); // Function WBP_Panel_Teams_Roster_Container.WBP_Panel_Teams_Roster_Container_C.OnError__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTeamMemberLoadingChanged__DelegateSignature(bool bLoadingCompleted); // Function WBP_Panel_Teams_Roster_Container.WBP_Panel_Teams_Roster_Container_C.OnTeamMemberLoadingChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

