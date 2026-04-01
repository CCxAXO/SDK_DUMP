// WidgetBlueprintGeneratedClass WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C
// Size: 0x628 (Inherited: 0x400)
struct UWBP_CharacterListEntryV3_C : UWBP_ContentTile_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* LockedHovered_To_Locked; // 0x408(0x08)
	struct UWidgetAnimation* SelectedHovered_To_LockedHovered; // 0x410(0x08)
	struct UWidgetAnimation* AvailableHovered_To_LockedHovered; // 0x418(0x08)
	struct UWidgetAnimation* HoverLockedByOther; // 0x420(0x08)
	struct UWidgetAnimation* UnhoverUnavailable; // 0x428(0x08)
	struct UWidgetAnimation* PlayerDeselection; // 0x430(0x08)
	struct UWidgetAnimation* UnHoverPlayerSelectDisabled; // 0x438(0x08)
	struct UWidgetAnimation* UnHoverPlayerSelect; // 0x440(0x08)
	struct UWidgetAnimation* PressPlayerSelect; // 0x448(0x08)
	struct UWidgetAnimation* Unhover; // 0x450(0x08)
	struct UWidgetAnimation* HoverUnavailable; // 0x458(0x08)
	struct UWidgetAnimation* HoverAllySelect; // 0x460(0x08)
	struct UWidgetAnimation* HoverPlayerSelect; // 0x468(0x08)
	struct UWidgetAnimation* hover; // 0x470(0x08)
	struct UImage* LockImage; // 0x478(0x08)
	struct UBorder* PortraitBorder; // 0x480(0x08)
	struct USizeBox* SB_CustomizedWrap; // 0x488(0x08)
	struct USizeBox* SB_PlayerLockedInIcon; // 0x490(0x08)
	struct USizeBox* SB_SubscriptionWrap; // 0x498(0x08)
	struct UImage* SubscriptionIcon; // 0x4a0(0x08)
	struct UAkAudioEvent* AUD_Hover; // 0x4a8(0x08)
	struct UAkAudioEvent* AUD_Click; // 0x4b0(0x08)
	enum class CharacterListEntryState CurrentCharacterState; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct UMaterialInstanceDynamic* DMI_AgentTileBG; // 0x4c0(0x08)
	struct FLinearColor Gold; // 0x4c8(0x10)
	struct FLinearColor Cream; // 0x4d8(0x10)
	struct FLinearColor Cream50; // 0x4e8(0x10)
	struct FLinearColor Navy25; // 0x4f8(0x10)
	struct FLinearColor Navy50; // 0x508(0x10)
	struct FLinearColor Navy; // 0x518(0x10)
	bool bPreviouslyFocused; // 0x528(0x01)
	char pad_529[0x7]; // 0x529(0x07)
	struct UAresCommonButton* SelectButton; // 0x530(0x08)
	struct FText TooltipTextContent; // 0x538(0x18)
	struct TMap<enum class ECharacterTileFullState, struct FCharacterTileColorParams> InstantStateTransitions; // 0x550(0x50)
	struct TMap<struct FCharacterTileStateTransition, struct UWidgetAnimation*> AnimatedStateTransitions; // 0x5a0(0x50)
	struct UWBP_Button_CharacterTile_C* CharacterTileButtonRef; // 0x5f0(0x08)
	struct UCharacterHandle* Character Handle; // 0x5f8(0x08)
	struct UVM_CharacterListEntry_C* VM_CharacterList; // 0x600(0x08)
	struct FLinearColor Grey60; // 0x608(0x10)
	struct USubscriptionDataAsset* HighestOwnedSubscription; // 0x618(0x08)
	struct UVM_Subscription_C* VM_Subscription; // 0x620(0x08)

	void On Subscription Handles Loaded(); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.On Subscription Handles Loaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnHighestOwnedSubscriptionChanged(struct USubscriptionDataAsset* SubscriptionDataAsset); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.OnHighestOwnedSubscriptionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsUnlockedOnlyBySubscriptionChanged(bool bIsUnlockedOnlyBySubscription); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.OnIsUnlockedOnlyBySubscriptionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnHasCustomizedPresetChanged(bool bHasCustomizedProfile); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.OnHasCustomizedPresetChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnContentTileViewModelSet(); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.OnContentTileViewModelSet // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCharacterHandle(struct UCharacterHandle* CharacterHandle); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.SetCharacterHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetSelectButtonAsCharacterButton(struct UWBP_Button_CharacterTile_C*& CharacterTileButton); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.GetSelectButtonAsCharacterButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void InitializeTransitions(); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.InitializeTransitions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ToFullState(enum class CharacterListEntryState State, bool Focused, enum class ECharacterTileFullState& Result); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.ToFullState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void TransitionVisuals(enum class CharacterListEntryState PreviousState, enum class CharacterListEntryState NewState, bool PreviousFocus, bool NewFocus); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.TransitionVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerLockedInChanged(bool IsLockedIn); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.OnPlayerLockedInChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshButtonState(); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.RefreshButtonState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetButton(struct UAresCommonButton* Button); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.SetButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Is Focused(bool bIsFocused); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.Set Is Focused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshView(); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.RefreshView // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCharacterTooltipChanged(struct FText ToolTip); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.OnCharacterTooltipChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetViewModelAsCharacterListEntryViewModel(struct UVM_CharacterListEntry_C*& CharacterListEntryViewModel); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.GetViewModelAsCharacterListEntryViewModel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void OnCharacterStateChanged(enum class CharacterListEntryState State); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.OnCharacterStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCharacterPortraitChanged(struct UTexture2D* Portrait); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.OnCharacterPortraitChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsContentUnlockedChanged(bool Unlocked); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.OnIsContentUnlockedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToContentTileViewModel(bool bBind); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.BindToContentTileViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_CharacterListEntryV3(int32_t EntryPoint); // Function WBP_CharacterListEntryV3.WBP_CharacterListEntryV3_C.ExecuteUbergraph_WBP_CharacterListEntryV3 // (Final|UbergraphFunction) // @ game+0x1b42740
};

