// WidgetBlueprintGeneratedClass OneForAll_CharacterSelectPlayerStateV2.OneForAll_CharacterSelectPlayerStateV2_C
// Size: 0x3c0 (Inherited: 0x348)
struct UOneForAll_CharacterSelectPlayerStateV2_C : UCharacterSelectPlayerState_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* LockIn; // 0x350(0x08)
	struct UTextBlock* CharacterName; // 0x358(0x08)
	struct UButton* characterRoleHoverButton; // 0x360(0x08)
	struct UImage* CharacterThumbnail; // 0x368(0x08)
	struct UCompetitiveTierIconSmall_C* CompetitiveTierIconSmall; // 0x370(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher; // 0x378(0x08)
	struct UGenericVoiceActivationWidgetClickable_C* PartyVoice; // 0x380(0x08)
	struct UTextBlock* PickingTextPicking; // 0x388(0x08)
	struct UPlayerNameWidget_C* PlayerNameWidget; // 0x390(0x08)
	struct UImage* RoleIcon; // 0x398(0x08)
	struct UMenuAnchor* RoleTooltipAnchor; // 0x3a0(0x08)
	struct UUI_OneForAll_Picker_C* UI_OneForAll_Picker; // 0x3a8(0x08)
	struct UGenericVoiceActivationWidgetClickable_C* Voice; // 0x3b0(0x08)
	struct UWidgetSwitcher* VoiceSwitcher; // 0x3b8(0x08)

	void SetLotteryFinal(); // Function OneForAll_CharacterSelectPlayerStateV2.OneForAll_CharacterSelectPlayerStateV2_C.SetLotteryFinal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetLotteryActive(bool IsActive); // Function OneForAll_CharacterSelectPlayerStateV2.OneForAll_CharacterSelectPlayerStateV2_C.SetLotteryActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateCharacterWidgets(); // Function OneForAll_CharacterSelectPlayerStateV2.OneForAll_CharacterSelectPlayerStateV2_C.UpdateCharacterWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitVoiceWidgets(); // Function OneForAll_CharacterSelectPlayerStateV2.OneForAll_CharacterSelectPlayerStateV2_C.InitVoiceWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateCompetitiveTier(); // Function OneForAll_CharacterSelectPlayerStateV2.OneForAll_CharacterSelectPlayerStateV2_C.UpdateCompetitiveTier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePlayerName(); // Function OneForAll_CharacterSelectPlayerStateV2.OneForAll_CharacterSelectPlayerStateV2_C.UpdatePlayerName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateNameColor(); // Function OneForAll_CharacterSelectPlayerStateV2.OneForAll_CharacterSelectPlayerStateV2_C.UpdateNameColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCharacterLoaded(struct UCharacterHandle* Handle); // Function OneForAll_CharacterSelectPlayerStateV2.OneForAll_CharacterSelectPlayerStateV2_C.OnCharacterLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateLockedIn(); // Function OneForAll_CharacterSelectPlayerStateV2.OneForAll_CharacterSelectPlayerStateV2_C.UpdateLockedIn // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPartyVoiceSpeakingChanged(bool IsSpeaking); // Function OneForAll_CharacterSelectPlayerStateV2.OneForAll_CharacterSelectPlayerStateV2_C.OnPartyVoiceSpeakingChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* GetRoleTooltip(); // Function OneForAll_CharacterSelectPlayerStateV2.OneForAll_CharacterSelectPlayerStateV2_C.GetRoleTooltip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function OneForAll_CharacterSelectPlayerStateV2.OneForAll_CharacterSelectPlayerStateV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function OneForAll_CharacterSelectPlayerStateV2.OneForAll_CharacterSelectPlayerStateV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function OneForAll_CharacterSelectPlayerStateV2.OneForAll_CharacterSelectPlayerStateV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_OneForAll_CharacterSelectPlayerStateV2(int32_t EntryPoint); // Function OneForAll_CharacterSelectPlayerStateV2.OneForAll_CharacterSelectPlayerStateV2_C.ExecuteUbergraph_OneForAll_CharacterSelectPlayerStateV2 // (Final|UbergraphFunction) // @ game+0x1af5410
};

