// WidgetBlueprintGeneratedClass WBP_TeamSocialSettings_Base.WBP_TeamSocialSettings_Base_C
// Size: 0x408 (Inherited: 0x368)
struct UWBP_TeamSocialSettings_Base_C : UTeamSocialSettingsContentBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct USocialParentalPermissionsViewModel* SocialParentalPermissionsViewModel; // 0x370(0x08)
	struct TSoftClassPtr<UObject> SURRENDERVOTE; // 0x378(0x30)
	struct TSoftClassPtr<UObject> RemakeVote; // 0x3a8(0x30)
	struct TSoftClassPtr<UObject> Timeout Vote; // 0x3d8(0x30)

	void ShouldShowVoteForLocalPlayer(struct AGameplayVote* VoteType, bool& ShouldShow); // Function WBP_TeamSocialSettings_Base.WBP_TeamSocialSettings_Base_C.ShouldShowVoteForLocalPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void TimeoutButton_OnClicked(); // Function WBP_TeamSocialSettings_Base.WBP_TeamSocialSettings_Base_C.TimeoutButton_OnClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SurrenderButton_OnClicked(); // Function WBP_TeamSocialSettings_Base.WBP_TeamSocialSettings_Base_C.SurrenderButton_OnClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RemakeButton_OnClicked(); // Function WBP_TeamSocialSettings_Base.WBP_TeamSocialSettings_Base_C.RemakeButton_OnClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MuteObserverSettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function WBP_TeamSocialSettings_Base.WBP_TeamSocialSettings_Base_C.MuteObserverSettingChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MuteObserverChatButton_OnClicked(); // Function WBP_TeamSocialSettings_Base.WBP_TeamSocialSettings_Base_C.MuteObserverChatButton_OnClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MuteEnemyChatButton_OnClicked(); // Function WBP_TeamSocialSettings_Base.WBP_TeamSocialSettings_Base_C.MuteEnemyChatButton_OnClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreatePlayerWidget(bool IsAlly, struct AShooterPlayerState* PlayerState, struct UWBP_IndividualSocialSettings_Base_C*& CreatedWidget); // Function WBP_TeamSocialSettings_Base.WBP_TeamSocialSettings_Base_C.CreatePlayerWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddChildToContainer(bool IsAlly, struct AShooterPlayerState* PlayerState); // Function WBP_TeamSocialSettings_Base.WBP_TeamSocialSettings_Base_C.AddChildToContainer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_TeamSocialSettings_Base.WBP_TeamSocialSettings_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_TeamSocialSettings_Base.WBP_TeamSocialSettings_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnOpen(); // Function WBP_TeamSocialSettings_Base.WBP_TeamSocialSettings_Base_C.OnOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function WBP_TeamSocialSettings_Base.WBP_TeamSocialSettings_Base_C.SettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateSurrenderVisibility(); // Function WBP_TeamSocialSettings_Base.WBP_TeamSocialSettings_Base_C.UpdateSurrenderVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateTextChatRelatedUIVisibility(enum class EAresTextChatPermission TextChatPermissionType); // Function WBP_TeamSocialSettings_Base.WBP_TeamSocialSettings_Base_C.UpdateTextChatRelatedUIVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_TeamSocialSettings_Base(int32_t EntryPoint); // Function WBP_TeamSocialSettings_Base.WBP_TeamSocialSettings_Base_C.ExecuteUbergraph_WBP_TeamSocialSettings_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

