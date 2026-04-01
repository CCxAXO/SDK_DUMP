// WidgetBlueprintGeneratedClass CharacterSelectPlayerStateV2.CharacterSelectPlayerStateV2_C
// Size: 0x3d8 (Inherited: 0x348)
struct UCharacterSelectPlayerStateV2_C : UCharacterSelectPlayerState_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* CharacterSelectHover; // 0x350(0x08)
	struct UWidgetAnimation* LockIn; // 0x358(0x08)
	struct UBorder* BorderGradient; // 0x360(0x08)
	struct UTextBlock* CharacterName; // 0x368(0x08)
	struct UButton* characterRoleHoverButton; // 0x370(0x08)
	struct UImage* CharacterThumbnail; // 0x378(0x08)
	struct UCompetitiveTierIconSmall_C* CompetitiveTierIconSmall; // 0x380(0x08)
	struct UWBP_ContextMenuAnchor_SocialPlayer_C* ContextMenuAnchor; // 0x388(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher; // 0x390(0x08)
	struct UTextBlock* PickingTextPicking; // 0x398(0x08)
	struct UButton* PlayerHoverButton; // 0x3a0(0x08)
	struct UPlayerNameWidget_C* PlayerNameWidget; // 0x3a8(0x08)
	struct UImage* RoleIcon; // 0x3b0(0x08)
	struct UMenuAnchor* RoleTooltipAnchor; // 0x3b8(0x08)
	struct UWidgetSwitcher* VoiceSwitcher; // 0x3c0(0x08)
	struct UGenericVoiceActivationWidgetClickable_C* Voice; // 0x3c8(0x08)
	struct UGenericVoiceActivationWidgetClickable_C* PartyVoice; // 0x3d0(0x08)

	void SetPlayerModel(struct UPregamePlayerModel* Player); // Function CharacterSelectPlayerStateV2.CharacterSelectPlayerStateV2_C.SetPlayerModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitContextMenu(); // Function CharacterSelectPlayerStateV2.CharacterSelectPlayerStateV2_C.InitContextMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateCharacterWidgets(); // Function CharacterSelectPlayerStateV2.CharacterSelectPlayerStateV2_C.UpdateCharacterWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitVoiceWidgets(); // Function CharacterSelectPlayerStateV2.CharacterSelectPlayerStateV2_C.InitVoiceWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateCompetitiveTier(); // Function CharacterSelectPlayerStateV2.CharacterSelectPlayerStateV2_C.UpdateCompetitiveTier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePlayerName(); // Function CharacterSelectPlayerStateV2.CharacterSelectPlayerStateV2_C.UpdatePlayerName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateNameColor(); // Function CharacterSelectPlayerStateV2.CharacterSelectPlayerStateV2_C.UpdateNameColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCharacterLoaded(struct UCharacterHandle* Handle); // Function CharacterSelectPlayerStateV2.CharacterSelectPlayerStateV2_C.OnCharacterLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateLockedIn(); // Function CharacterSelectPlayerStateV2.CharacterSelectPlayerStateV2_C.UpdateLockedIn // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPartyVoiceSpeakingChanged(bool IsSpeaking); // Function CharacterSelectPlayerStateV2.CharacterSelectPlayerStateV2_C.OnPartyVoiceSpeakingChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* GetRoleTooltip(); // Function CharacterSelectPlayerStateV2.CharacterSelectPlayerStateV2_C.GetRoleTooltip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Construct(); // Function CharacterSelectPlayerStateV2.CharacterSelectPlayerStateV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function CharacterSelectPlayerStateV2.CharacterSelectPlayerStateV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function CharacterSelectPlayerStateV2.CharacterSelectPlayerStateV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PlayerHoverButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function CharacterSelectPlayerStateV2.CharacterSelectPlayerStateV2_C.BndEvt__PlayerHoverButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PlayerHoverButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function CharacterSelectPlayerStateV2.CharacterSelectPlayerStateV2_C.BndEvt__PlayerHoverButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CharacterSelectPlayerStateV2(int32_t EntryPoint); // Function CharacterSelectPlayerStateV2.CharacterSelectPlayerStateV2_C.ExecuteUbergraph_CharacterSelectPlayerStateV2 // (Final|UbergraphFunction) // @ game+0x1af5410
};

