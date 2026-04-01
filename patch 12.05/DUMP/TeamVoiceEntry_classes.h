// WidgetBlueprintGeneratedClass TeamVoiceEntry.TeamVoiceEntry_C
// Size: 0x408 (Inherited: 0x359)
struct UTeamVoiceEntry_C : UBaseVoiceActivationWidget_C {
	char pad_359[0x7]; // 0x359(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	struct UWidgetAnimation* Animation; // 0x368(0x08)
	struct UImage* AudioWave; // 0x370(0x08)
	struct UWidgetSwitcher* IconSwitcher; // 0x378(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x380(0x08)
	struct UInvalidationBox* InvalidationBox_2; // 0x388(0x08)
	struct UInvalidationBox* InvalidationBox_3; // 0x390(0x08)
	struct UInvalidationBox* InvalidationBox_4; // 0x398(0x08)
	struct UInvalidationBox* InvalidationBox_5; // 0x3a0(0x08)
	struct UInvalidationBox* InvalidationBox_6; // 0x3a8(0x08)
	struct UInvalidationBox* InvalidationBox_7; // 0x3b0(0x08)
	struct UWidgetSwitcher* NameSwitcher; // 0x3b8(0x08)
	struct UPlayerCard_C* PlayerCard; // 0x3c0(0x08)
	struct UTextBlock* PlayerName; // 0x3c8(0x08)
	struct UPlayerNameWidget_C* PlayerNameWidget; // 0x3d0(0x08)
	struct UImage* Portrait; // 0x3d8(0x08)
	struct UTextBlock* RegionText; // 0x3e0(0x08)
	struct UImage* whitebar; // 0x3e8(0x08)
	struct AShooterPlayerState* PlayerState; // 0x3f0(0x08)
	struct FTimerHandle SpeakingTimerHandle; // 0x3f8(0x08)
	double SpeakingUpdatePeriod; // 0x400(0x08)

	void SetRegionText(struct FText Region); // Function TeamVoiceEntry.TeamVoiceEntry_C.SetRegionText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateWidget(enum class SpeakingStates Speaking State); // Function TeamVoiceEntry.TeamVoiceEntry_C.UpdateWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnVoiceStateChanged(enum class SpeakingStates NewState, enum class SpeakingStates OldState, int32_t NewEnergy); // Function TeamVoiceEntry.TeamVoiceEntry_C.OnVoiceStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function TeamVoiceEntry.TeamVoiceEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function TeamVoiceEntry.TeamVoiceEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnTimerWhileSpeaking(); // Function TeamVoiceEntry.TeamVoiceEntry_C.OnTimerWhileSpeaking // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function TeamVoiceEntry.TeamVoiceEntry_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TeamVoiceEntry(int32_t EntryPoint); // Function TeamVoiceEntry.TeamVoiceEntry_C.ExecuteUbergraph_TeamVoiceEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

