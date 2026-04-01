// WidgetBlueprintGeneratedClass WBP_Panel_VoiceIndicator_Base.WBP_Panel_VoiceIndicator_Base_C
// Size: 0x402 (Inherited: 0x3e0)
struct UWBP_Panel_VoiceIndicator_Base_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresVoiceParticipantViewModel* VoiceParticipantViewModel; // 0x3e8(0x08)
	struct FString PlayerSubject; // 0x3f0(0x10)
	bool bReactToPartyVoice; // 0x400(0x01)
	bool bReactToTeamVoice; // 0x401(0x01)

	void BindOrUnbindViewModels(bool bDoBind); // Function WBP_Panel_VoiceIndicator_Base.WBP_Panel_VoiceIndicator_Base_C.BindOrUnbindViewModels // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetObservedPlayer(struct FString PlayerSubject); // Function WBP_Panel_VoiceIndicator_Base.WBP_Panel_VoiceIndicator_Base_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_VoiceIndicator_Base.WBP_Panel_VoiceIndicator_Base_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_VoiceIndicator_Base.WBP_Panel_VoiceIndicator_Base_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandlePrimaryVoiceSessionTypeChanged(enum class EVoiceSessionType PrimaryVoiceSessionType); // Function WBP_Panel_VoiceIndicator_Base.WBP_Panel_VoiceIndicator_Base_C.HandlePrimaryVoiceSessionTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_VoiceIndicator_Base.WBP_Panel_VoiceIndicator_Base_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleIsInRoomChanged(bool bIsInRoom); // Function WBP_Panel_VoiceIndicator_Base.WBP_Panel_VoiceIndicator_Base_C.HandleIsInRoomChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsMutedChanged(bool bIsMuted); // Function WBP_Panel_VoiceIndicator_Base.WBP_Panel_VoiceIndicator_Base_C.HandleIsMutedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsRestrictedChanged(bool bIsRestricted); // Function WBP_Panel_VoiceIndicator_Base.WBP_Panel_VoiceIndicator_Base_C.HandleIsRestrictedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsPTTPressedChanged(bool bIsPTTPressed); // Function WBP_Panel_VoiceIndicator_Base.WBP_Panel_VoiceIndicator_Base_C.HandleIsPTTPressedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsSpeakingChanged(bool bIsSpeaking); // Function WBP_Panel_VoiceIndicator_Base.WBP_Panel_VoiceIndicator_Base_C.HandleIsSpeakingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleEnergyChanged(int32_t Energy, float NormalizedEnergy); // Function WBP_Panel_VoiceIndicator_Base.WBP_Panel_VoiceIndicator_Base_C.HandleEnergyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleVolumeChanged(int32_t Volume, float NormalizedVolume); // Function WBP_Panel_VoiceIndicator_Base.WBP_Panel_VoiceIndicator_Base_C.HandleVolumeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_VoiceIndicator_Base(int32_t EntryPoint); // Function WBP_Panel_VoiceIndicator_Base.WBP_Panel_VoiceIndicator_Base_C.ExecuteUbergraph_WBP_Panel_VoiceIndicator_Base // (Final|UbergraphFunction) // @ game+0x1af5410
};

