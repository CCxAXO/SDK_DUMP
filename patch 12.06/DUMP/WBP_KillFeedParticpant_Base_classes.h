// WidgetBlueprintGeneratedClass WBP_KillFeedParticpant_Base.WBP_KillFeedParticpant_Base_C
// Size: 0x438 (Inherited: 0x3b8)
struct UWBP_KillFeedParticpant_Base_C : UKillFeedParticipant_Base {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	bool PreviewAllyColor; // 0x3c0(0x01)
	bool FlipContent; // 0x3c1(0x01)
	char pad_3C2[0x6]; // 0x3c2(0x06)
	struct TMap<enum class EAresAssistType, struct UTexture*> AssistTypeToIcon; // 0x3c8(0x50)
	struct FLinearColor CachedParticipantColor; // 0x418(0x10)
	struct FLinearColor MePortraitBackerColor; // 0x428(0x10)

	void GetKillIconFromDamageClass(struct UShooterDamageType* DamageType, struct FCanvasIcon& KillIcon); // Function WBP_KillFeedParticpant_Base.WBP_KillFeedParticpant_Base_C.GetKillIconFromDamageClass // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateMeBorderVisibility(struct AShooterPlayerState* SubjectPlayerState); // Function WBP_KillFeedParticpant_Base.WBP_KillFeedParticpant_Base_C.UpdateMeBorderVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateOnFireVFXVisibility(int32_t NumberOfKillsInRound); // Function WBP_KillFeedParticpant_Base.WBP_KillFeedParticpant_Base_C.UpdateOnFireVFXVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PopulateUltIndicators(struct AShooterPlayerState* SubjectPlayerState, bool bWasTemporaryDeath, bool bWasResurrection, bool bWasRecovery); // Function WBP_KillFeedParticpant_Base.WBP_KillFeedParticpant_Base_C.PopulateUltIndicators // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetParticipantImage(struct UTexture* CharacterTexture); // Function WBP_KillFeedParticpant_Base.WBP_KillFeedParticpant_Base_C.SetParticipantImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PopulateAssistIcons(struct TArray<struct FAresAssist>& AssistsList); // Function WBP_KillFeedParticpant_Base.WBP_KillFeedParticpant_Base_C.PopulateAssistIcons // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ChooseDamageModifiers(struct UDamageResponse* DamageResponse); // Function WBP_KillFeedParticpant_Base.WBP_KillFeedParticpant_Base_C.ChooseDamageModifiers // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ChooseDamageSource(struct UDamageResponse* DamageResponse, struct AShooterPlayerState* SubjectPlayerState, struct AAresEquippable* UsedEquippable, bool bIsResurrection); // Function WBP_KillFeedParticpant_Base.WBP_KillFeedParticpant_Base_C.ChooseDamageSource // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetParticipantColor(struct FKillFeedColorPalette ParticipantColorPalette, struct AShooterPlayerState* SubjectPlayerState); // Function WBP_KillFeedParticpant_Base.WBP_KillFeedParticpant_Base_C.SetParticipantColor // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PopulatePlayerNames(struct AShooterPlayerState* SubjectPlayerState, struct TArray<struct FAresAssist>& AssistsList); // Function WBP_KillFeedParticpant_Base.WBP_KillFeedParticpant_Base_C.PopulatePlayerNames // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PopulateKillFeedParticipant(struct AShooterPlayerState* SubjectPlayerState, struct UDamageResponse* DamageResponse, struct AAresEquippable* UsedEquippable, struct TArray<struct FAresAssist>& AssistsList, struct FKillFeedColorPalette ParticipantColorPalette, bool bIsResurrection, bool bWasTemporaryDeath, int32_t NumberOfKillsInRound, bool bWasRecovery); // Function WBP_KillFeedParticpant_Base.WBP_KillFeedParticpant_Base_C.PopulateKillFeedParticipant // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetUseAllyColor(bool IsAlly); // Function WBP_KillFeedParticpant_Base.WBP_KillFeedParticpant_Base_C.SetUseAllyColor // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_KillFeedParticpant_Base.WBP_KillFeedParticpant_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_KillFeedParticpant_Base(int32_t EntryPoint); // Function WBP_KillFeedParticpant_Base.WBP_KillFeedParticpant_Base_C.ExecuteUbergraph_WBP_KillFeedParticpant_Base // (Final|UbergraphFunction) // @ game+0x1b42740
};

