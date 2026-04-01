// WidgetBlueprintGeneratedClass TeamParticipantsWidget.TeamParticipantsWidget_C
// Size: 0x3c8 (Inherited: 0x330)
struct UTeamParticipantsWidget_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UImage* Center; // 0x338(0x08)
	struct UImage* Left; // 0x340(0x08)
	struct UHorizontalBox* PlayerListHBox; // 0x348(0x08)
	struct UPlayerParticipantWidget_C* PlayerParticipantWidget; // 0x350(0x08)
	struct UPlayerParticipantWidget_C* PlayerParticipantWidget_1; // 0x358(0x08)
	struct UPlayerParticipantWidget_C* PlayerParticipantWidget_2; // 0x360(0x08)
	struct UPlayerParticipantWidget_C* PlayerParticipantWidget_3; // 0x368(0x08)
	struct UPlayerParticipantWidget_C* PlayerParticipantWidget_4; // 0x370(0x08)
	struct UImage* Right; // 0x378(0x08)
	struct UImage* teamObjectiveImage_Left; // 0x380(0x08)
	struct UImage* teamObjectiveImage_Right; // 0x388(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x390(0x08)
	bool IsAlliedTeam; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct UObject* attackerIcon; // 0x3a0(0x08)
	struct UObject* defenderIcon; // 0x3a8(0x08)
	bool IsObserver; // 0x3b0(0x01)
	enum class EAresTeamRole TeamRole; // 0x3b1(0x01)
	char pad_3B2[0x6]; // 0x3b2(0x06)
	struct FMulticastInlineDelegate OnStateChanged; // 0x3b8(0x10)

	void UpdateWidgets(); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.UpdateWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsAllyWidget(bool& Ally); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.IsAllyWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void IsLeftWidget(bool& Left); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.IsLeftWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void UpdatePlayersAlignment(); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.UpdatePlayersAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateBackgroundTeamColor(bool IsAllyTeam); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.UpdateBackgroundTeamColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RecreateWidgets(); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.RecreateWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTeamChanged_Event_1(); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.OnTeamChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayerStateChanged_Event_1(struct AAresPlayerStateBase* NewValue); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.PlayerStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnHUDPlayerModelListUpdated_Event_1(); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.OnHUDPlayerModelListUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTeamCompositionsChanged_Event_1(); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.OnTeamCompositionsChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewTargetChanged(struct AActor* NewViewTarget); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.OnViewTargetChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TeamParticipantsWidget(int32_t EntryPoint); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.ExecuteUbergraph_TeamParticipantsWidget // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnStateChanged__DelegateSignature(); // Function TeamParticipantsWidget.TeamParticipantsWidget_C.OnStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

