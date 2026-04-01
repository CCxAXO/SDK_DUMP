// WidgetBlueprintGeneratedClass TeamParticipantsWidget_v2.TeamParticipantsWidget_v2_C
// Size: 0x3ca (Inherited: 0x330)
struct UTeamParticipantsWidget_v2_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UImage* Center; // 0x338(0x08)
	struct UInvalidationBox* InvalidationBox_center; // 0x340(0x08)
	struct UInvalidationBox* InvalidationBox_ObjectiveLeft; // 0x348(0x08)
	struct UInvalidationBox* InvalidationBox_ObjectiveRight; // 0x350(0x08)
	struct UImage* Left; // 0x358(0x08)
	struct UHorizontalBox* PlayerListHBox; // 0x360(0x08)
	struct UPlayerParticipantWidget_v2_C* PlayerParticipantWidget_v2_1; // 0x368(0x08)
	struct UPlayerParticipantWidget_v2_C* PlayerParticipantWidget_v2_2; // 0x370(0x08)
	struct UPlayerParticipantWidget_v2_C* PlayerParticipantWidget_v2_3; // 0x378(0x08)
	struct UPlayerParticipantWidget_v2_C* PlayerParticipantWidget_v2_4; // 0x380(0x08)
	struct UPlayerParticipantWidget_v2_C* PlayerParticipantWidget_v2_5; // 0x388(0x08)
	struct UImage* Right; // 0x390(0x08)
	struct UImage* teamObjectiveImage_Left; // 0x398(0x08)
	struct UImage* teamObjectiveImage_Right; // 0x3a0(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x3a8(0x08)
	bool IsAlliedTeam; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct UObject* attackerIcon; // 0x3b8(0x08)
	struct UObject* defenderIcon; // 0x3c0(0x08)
	bool IsObserver; // 0x3c8(0x01)
	enum class EAresTeamRole TeamRole; // 0x3c9(0x01)

	void UpdateWidgets(); // Function TeamParticipantsWidget_v2.TeamParticipantsWidget_v2_C.UpdateWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsAllyWidget(bool& Ally); // Function TeamParticipantsWidget_v2.TeamParticipantsWidget_v2_C.IsAllyWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void IsLeftWidget(bool& Left); // Function TeamParticipantsWidget_v2.TeamParticipantsWidget_v2_C.IsLeftWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdatePlayersAlignment(); // Function TeamParticipantsWidget_v2.TeamParticipantsWidget_v2_C.UpdatePlayersAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateBackgroundTeamColor(bool IsAllyTeam); // Function TeamParticipantsWidget_v2.TeamParticipantsWidget_v2_C.UpdateBackgroundTeamColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RecreateWidgets(); // Function TeamParticipantsWidget_v2.TeamParticipantsWidget_v2_C.RecreateWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function TeamParticipantsWidget_v2.TeamParticipantsWidget_v2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function TeamParticipantsWidget_v2.TeamParticipantsWidget_v2_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTeamChanged_Event_1(); // Function TeamParticipantsWidget_v2.TeamParticipantsWidget_v2_C.OnTeamChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayerStateChanged_Event_1(struct AAresPlayerStateBase* NewValue); // Function TeamParticipantsWidget_v2.TeamParticipantsWidget_v2_C.PlayerStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnHUDPlayerModelListUpdated_Event_1(); // Function TeamParticipantsWidget_v2.TeamParticipantsWidget_v2_C.OnHUDPlayerModelListUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTeamCompositionsChanged_Event_1(); // Function TeamParticipantsWidget_v2.TeamParticipantsWidget_v2_C.OnTeamCompositionsChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewTargetChanged(struct AActor* NewViewTarget); // Function TeamParticipantsWidget_v2.TeamParticipantsWidget_v2_C.OnViewTargetChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function TeamParticipantsWidget_v2.TeamParticipantsWidget_v2_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TeamParticipantsWidget_v2(int32_t EntryPoint); // Function TeamParticipantsWidget_v2.TeamParticipantsWidget_v2_C.ExecuteUbergraph_TeamParticipantsWidget_v2 // (Final|UbergraphFunction) // @ game+0x1b42740
};

