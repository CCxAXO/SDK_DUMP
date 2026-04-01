// WidgetBlueprintGeneratedClass CharacterListEntryV2.CharacterListEntryV2_C
// Size: 0x408 (Inherited: 0x330)
struct UCharacterListEntryV2_C : UCharacterListEntry_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* Locked; // 0x338(0x08)
	struct UWidgetAnimation* Active; // 0x340(0x08)
	struct UWidgetAnimation* hover; // 0x348(0x08)
	struct UImage* Active_bot; // 0x350(0x08)
	struct UImage* ActiveBG; // 0x358(0x08)
	struct UImage* Border; // 0x360(0x08)
	struct UImage* BorderBottom; // 0x368(0x08)
	struct UImage* BorderLeft; // 0x370(0x08)
	struct UImage* BorderRight; // 0x378(0x08)
	struct UImage* BorderTop; // 0x380(0x08)
	struct UButton* Button; // 0x388(0x08)
	struct UImage* DefaultBG; // 0x390(0x08)
	struct UImage* LockImage; // 0x398(0x08)
	struct UGenericTextTooltipContainer_C* LockImageContainer; // 0x3a0(0x08)
	struct UImage* PipBL; // 0x3a8(0x08)
	struct UImage* PipBR; // 0x3b0(0x08)
	struct UOverlay* Pips; // 0x3b8(0x08)
	struct UImage* PipTL; // 0x3c0(0x08)
	struct UImage* PipTR; // 0x3c8(0x08)
	struct UImage* Portrait; // 0x3d0(0x08)
	struct UBorder* PortraitBorder; // 0x3d8(0x08)
	struct UOverlay* PortraitOverlay; // 0x3e0(0x08)
	struct UCanvasPanel* SelectionBorder; // 0x3e8(0x08)
	struct UImage* SubscriptionIcon; // 0x3f0(0x08)
	struct UAkAudioEvent* AUD_Hover; // 0x3f8(0x08)
	struct UAkAudioEvent* AUD_Click; // 0x400(0x08)

	void UpdateTooltip(); // Function CharacterListEntryV2.CharacterListEntryV2_C.UpdateTooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOwnedOnlyByLoyaltyChanged(); // Function CharacterListEntryV2.CharacterListEntryV2_C.OnOwnedOnlyByLoyaltyChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TriggerClickEffects(); // Function CharacterListEntryV2.CharacterListEntryV2_C.TriggerClickEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateIcon(); // Function CharacterListEntryV2.CharacterListEntryV2_C.UpdateIcon // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsUnlockedChanged(); // Function CharacterListEntryV2.CharacterListEntryV2_C.OnIsUnlockedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetState(enum class CharacterListEntryState NewState); // Function CharacterListEntryV2.CharacterListEntryV2_C.SetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePortrait(); // Function CharacterListEntryV2.CharacterListEntryV2_C.UpdatePortrait // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function CharacterListEntryV2.CharacterListEntryV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function CharacterListEntryV2.CharacterListEntryV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature(); // Function CharacterListEntryV2.CharacterListEntryV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function CharacterListEntryV2.CharacterListEntryV2_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void LocalCharacterSelectChanged_Event_1(struct UCharacterDataAsset* OldCharacter, struct UCharacterDataAsset* NewCharacter); // Function CharacterListEntryV2.CharacterListEntryV2_C.LocalCharacterSelectChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CharacterListEntryV2(int32_t EntryPoint); // Function CharacterListEntryV2.CharacterListEntryV2_C.ExecuteUbergraph_CharacterListEntryV2 // (Final|UbergraphFunction) // @ game+0x1af5410
};

