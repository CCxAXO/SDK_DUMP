// WidgetBlueprintGeneratedClass TeamVoiceActivity.TeamVoiceActivity_C
// Size: 0x430 (Inherited: 0x330)
struct UTeamVoiceActivity_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWBP_Panel_ClutchMuteIndicators_C* ClutchMuteIndicatorsV2; // 0x338(0x08)
	struct UVerticalBox* ClutchMuteSection; // 0x340(0x08)
	struct UKeyboardKeyBTN_C* KeyboardKeyBTN; // 0x348(0x08)
	struct UKeyboardKeyBTN_C* KeyboardKeyBTN_167; // 0x350(0x08)
	struct UTextBlock* PartyClutchMuteText; // 0x358(0x08)
	struct UHorizontalBox* PartyMuteSection; // 0x360(0x08)
	struct UTextBlock* TeamClutchMuteText; // 0x368(0x08)
	struct UHorizontalBox* TeamMuteSection; // 0x370(0x08)
	struct UVerticalBox* VoiceEntryContainer; // 0x378(0x08)
	struct TMap<struct FString, struct UTeamVoiceEntry_C*> TeamVoiceParticipantsBySubject; // 0x380(0x50)
	struct TMap<struct FString, struct UTeamVoiceEntry_C*> PartyVoiceParticipantsBySubject; // 0x3d0(0x50)
	int32_t ActiveWidgetCounter; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct FTimerHandle PendingRebuildTimerHandle; // 0x428(0x08)

	void IsClutchMuteIndicatorsV2Enabled(bool& bIsEnabled); // Function TeamVoiceActivity.TeamVoiceActivity_C.IsClutchMuteIndicatorsV2Enabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	bool IsValidKeyBinding(struct FKey& Key); // Function TeamVoiceActivity.TeamVoiceActivity_C.IsValidKeyBinding // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void BuildSessionParticipants(struct TArray<struct UVoiceSessionParticipantModel*>& Array); // Function TeamVoiceActivity.TeamVoiceActivity_C.BuildSessionParticipants // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateActiveForParticipantWidgets(struct TMap<struct FString, struct UTeamVoiceEntry_C*>& TargetMap); // Function TeamVoiceActivity.TeamVoiceActivity_C.UpdateActiveForParticipantWidgets // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ClutchMuteIndicatorShouldBeVisible(bool IsMuted, bool LastAlive, bool TeammateTalking, bool HasBind, bool& ShouldShow); // Function TeamVoiceActivity.TeamVoiceActivity_C.ClutchMuteIndicatorShouldBeVisible // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetActionBinding(struct FName Action, struct FKey& Key); // Function TeamVoiceActivity.TeamVoiceActivity_C.GetActionBinding // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetClutchMuteIndicatorVisibility(struct UHorizontalBox* SectionWidget, struct UTextBlock* TextWidget, struct FText MuteText, struct FText UnmuteText, bool IsMuted, bool LastAlive, bool TeammateTalking, bool HasBind); // Function TeamVoiceActivity.TeamVoiceActivity_C.SetClutchMuteIndicatorVisibility // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Active Widgets Counter(enum class SpeakingStates NewState, enum class SpeakingStates OldState, int32_t NewEnergy); // Function TeamVoiceActivity.TeamVoiceActivity_C.Update Active Widgets Counter // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Clutch Mute Icon Visibility(); // Function TeamVoiceActivity.TeamVoiceActivity_C.Update Clutch Mute Icon Visibility // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitClutchMuteIcons(); // Function TeamVoiceActivity.TeamVoiceActivity_C.InitClutchMuteIcons // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetOrCreateParticipantWidget(struct FString Subject, enum class EVoiceSessionType SessionType, struct UTeamVoiceEntry_C*& Participant); // Function TeamVoiceActivity.TeamVoiceActivity_C.GetOrCreateParticipantWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RebuildEntries(); // Function TeamVoiceActivity.TeamVoiceActivity_C.RebuildEntries // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function TeamVoiceActivity.TeamVoiceActivity_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnParticipantChanged(struct UVoiceSessionParticipantModel* VoiceSessionParticipant); // Function TeamVoiceActivity.TeamVoiceActivity_C.OnParticipantChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnChannelMuteChanged(enum class EVoiceSessionType SessionType, bool bMuted); // Function TeamVoiceActivity.TeamVoiceActivity_C.OnChannelMuteChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnFlushPendingRebuildEntriesTimerExpired(); // Function TeamVoiceActivity.TeamVoiceActivity_C.OnFlushPendingRebuildEntriesTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function TeamVoiceActivity.TeamVoiceActivity_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function TeamVoiceActivity.TeamVoiceActivity_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TeamVoiceActivity(int32_t EntryPoint); // Function TeamVoiceActivity.TeamVoiceActivity_C.ExecuteUbergraph_TeamVoiceActivity // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

