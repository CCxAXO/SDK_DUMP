// WidgetBlueprintGeneratedClass WBP_Panel_VoiceIndicator_CommHalo.WBP_Panel_VoiceIndicator_CommHalo_C
// Size: 0x4c8 (Inherited: 0x402)
struct UWBP_Panel_VoiceIndicator_CommHalo_C : UWBP_Panel_VoiceIndicator_Base_C {
	char pad_402[0x6]; // 0x402(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UImage* Image_IconShadow; // 0x410(0x08)
	struct UImage* Image_IconSolid; // 0x418(0x08)
	struct FSlateColor DefaultColor; // 0x420(0x14)
	struct FSlateColor TeamColor; // 0x434(0x14)
	struct FSlateColor PartyColor; // 0x448(0x14)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct UTexture2D* ConnectedSolidTexture; // 0x460(0x08)
	struct UTexture2D* ConnectedShadowTexture; // 0x468(0x08)
	struct UTexture2D* MutedSolidTexture; // 0x470(0x08)
	struct UTexture2D* MutedShadowTexture; // 0x478(0x08)
	struct UTexture2D* DisconnectedSolidTexture; // 0x480(0x08)
	struct UTexture2D* DisconnectedShadowTexture; // 0x488(0x08)
	struct TArray<struct UTexture2D*> SpeakingSolidTextures; // 0x490(0x10)
	struct TArray<struct UTexture2D*> SpeakingShadowTextures; // 0x4a0(0x10)
	double DisconnectedOpacity; // 0x4b0(0x08)
	bool bShowForNonRealPlayers; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct UVM_PlayerIsReal_C* IsRealPlayerViewModel; // 0x4c0(0x08)

	void SetObservedPlayer(struct FString PlayerSubject); // Function WBP_Panel_VoiceIndicator_CommHalo.WBP_Panel_VoiceIndicator_CommHalo_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindOrUnbindViewModels(bool bDoBind); // Function WBP_Panel_VoiceIndicator_CommHalo.WBP_Panel_VoiceIndicator_CommHalo_C.BindOrUnbindViewModels // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Get Texture for Energy(struct TArray<struct UTexture2D*>& TextureArray, double NormalizedEnergy, struct UTexture2D*& Return Value); // Function WBP_Panel_VoiceIndicator_CommHalo.WBP_Panel_VoiceIndicator_CommHalo_C.Get Texture for Energy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void DeriveCurrentIconTextures(struct UTexture2D*& Solid Texture, struct UTexture2D*& Shadow Texture); // Function WBP_Panel_VoiceIndicator_CommHalo.WBP_Panel_VoiceIndicator_CommHalo_C.DeriveCurrentIconTextures // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateIcon(); // Function WBP_Panel_VoiceIndicator_CommHalo.WBP_Panel_VoiceIndicator_CommHalo_C.UpdateIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateOpacity(); // Function WBP_Panel_VoiceIndicator_CommHalo.WBP_Panel_VoiceIndicator_CommHalo_C.UpdateOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_VoiceIndicator_CommHalo.WBP_Panel_VoiceIndicator_CommHalo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandlePrimaryVoiceSessionTypeChanged(enum class EVoiceSessionType PrimaryVoiceSessionType); // Function WBP_Panel_VoiceIndicator_CommHalo.WBP_Panel_VoiceIndicator_CommHalo_C.HandlePrimaryVoiceSessionTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsInRoomChanged(bool bIsInRoom); // Function WBP_Panel_VoiceIndicator_CommHalo.WBP_Panel_VoiceIndicator_CommHalo_C.HandleIsInRoomChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsMutedChanged(bool bIsMuted); // Function WBP_Panel_VoiceIndicator_CommHalo.WBP_Panel_VoiceIndicator_CommHalo_C.HandleIsMutedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsSpeakingChanged(bool bIsSpeaking); // Function WBP_Panel_VoiceIndicator_CommHalo.WBP_Panel_VoiceIndicator_CommHalo_C.HandleIsSpeakingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleEnergyChanged(int32_t Energy, float NormalizedEnergy); // Function WBP_Panel_VoiceIndicator_CommHalo.WBP_Panel_VoiceIndicator_CommHalo_C.HandleEnergyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_VoiceIndicator_CommHalo.WBP_Panel_VoiceIndicator_CommHalo_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_VoiceIndicator_CommHalo.WBP_Panel_VoiceIndicator_CommHalo_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleIsRealPlayerChanged(bool bIsRealPlayer); // Function WBP_Panel_VoiceIndicator_CommHalo.WBP_Panel_VoiceIndicator_CommHalo_C.HandleIsRealPlayerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_VoiceIndicator_CommHalo(int32_t EntryPoint); // Function WBP_Panel_VoiceIndicator_CommHalo.WBP_Panel_VoiceIndicator_CommHalo_C.ExecuteUbergraph_WBP_Panel_VoiceIndicator_CommHalo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

