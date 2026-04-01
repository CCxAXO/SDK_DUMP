// BlueprintGeneratedClass BP_SocialExperienceEventAudioPlayer.BP_SocialExperienceEventAudioPlayer_C
// Size: 0x78 (Inherited: 0x38)
struct UBP_SocialExperienceEventAudioPlayer_C : UObjectWithWorldContext {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x38(0x08)
	struct UAkAudioEvent* FriendAddedSound; // 0x40(0x08)
	struct UAkAudioEvent* FriendRequestSentSound; // 0x48(0x08)
	struct UAkAudioEvent* FriendRequestReceivedSound; // 0x50(0x08)
	struct UAkAudioEvent* PartyMessageReceivedSound; // 0x58(0x08)
	struct UAresSocialExperienceEventBuffer* EventBuffer; // 0x60(0x08)
	struct UAkAudioEvent* RosterInviteReceivedSound; // 0x68(0x08)
	struct UAkAudioEvent* LocalPartyMemberAddedSound; // 0x70(0x08)

	void HandleLocalPartyMemberAdded(); // Function BP_SocialExperienceEventAudioPlayer.BP_SocialExperienceEventAudioPlayer_C.HandleLocalPartyMemberAdded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleRosterInviteReceived(); // Function BP_SocialExperienceEventAudioPlayer.BP_SocialExperienceEventAudioPlayer_C.HandleRosterInviteReceived // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePartyMessageReceived(); // Function BP_SocialExperienceEventAudioPlayer.BP_SocialExperienceEventAudioPlayer_C.HandlePartyMessageReceived // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleFriendRequestReceived(); // Function BP_SocialExperienceEventAudioPlayer.BP_SocialExperienceEventAudioPlayer_C.HandleFriendRequestReceived // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleFriendRequestSent(); // Function BP_SocialExperienceEventAudioPlayer.BP_SocialExperienceEventAudioPlayer_C.HandleFriendRequestSent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleFriendAdded(); // Function BP_SocialExperienceEventAudioPlayer.BP_SocialExperienceEventAudioPlayer_C.HandleFriendAdded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToModel(bool bDoBind); // Function BP_SocialExperienceEventAudioPlayer.BP_SocialExperienceEventAudioPlayer_C.BindToModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(); // Function BP_SocialExperienceEventAudioPlayer.BP_SocialExperienceEventAudioPlayer_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Reset(); // Function BP_SocialExperienceEventAudioPlayer.BP_SocialExperienceEventAudioPlayer_C.Reset // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BP_SocialExperienceEventAudioPlayer(int32_t EntryPoint); // Function BP_SocialExperienceEventAudioPlayer.BP_SocialExperienceEventAudioPlayer_C.ExecuteUbergraph_BP_SocialExperienceEventAudioPlayer // (Final|UbergraphFunction) // @ game+0x1b42740
};

