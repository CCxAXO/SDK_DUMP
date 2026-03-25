// WidgetBlueprintGeneratedClass PlayScreenPartyMemberListingV2_PC.PlayScreenPartyMemberListingV2_PC_C
// Size: 0x430 (Inherited: 0x378)
struct UPlayScreenPartyMemberListingV2_PC_C : UPlayScreenPartyMemberListing_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UWidgetAnimation* EmptySlotReveal; // 0x380(0x08)
	struct UWidgetAnimation* hover; // 0x388(0x08)
	struct UWidgetAnimation* SelfWidget; // 0x390(0x08)
	struct UWidgetAnimation* NewPlayerAdded; // 0x398(0x08)
	struct UImage* BG; // 0x3a0(0x08)
	struct UImage* bg_pattern; // 0x3a8(0x08)
	struct UOverlay* CallingCardOverlay; // 0x3b0(0x08)
	struct UWBP_ContextMenuAnchor_SocialPlayer_C* ContextMenuAnchor; // 0x3b8(0x08)
	struct UOverlay* EmptyInvitePanel; // 0x3c0(0x08)
	struct UGamePodPreferenceOptions_PC_C* GamePodPreferenceOptions_PC; // 0x3c8(0x08)
	struct UImage* HoverBacking; // 0x3d0(0x08)
	struct UImage* Image_87; // 0x3d8(0x08)
	struct UImage* Image_88; // 0x3e0(0x08)
	struct UImage* Image_89; // 0x3e8(0x08)
	struct UImage* Image_90; // 0x3f0(0x08)
	struct UButton* InviteButton; // 0x3f8(0x08)
	struct ULargeDetailedPlayerCardV3_PC_C* LargeDetailedPlayerCardV2PC; // 0x400(0x08)
	struct UWidgetSwitcher* PlayerStateSwitcher; // 0x408(0x08)
	struct UImage* TopBar; // 0x410(0x08)
	struct UAkAudioEvent* HoverSound; // 0x418(0x08)
	struct UMaterialInstanceDynamic* GlowMaterial; // 0x420(0x08)
	struct UMaterialInstanceDynamic* BgWipeMaterial; // 0x428(0x08)

	void SequenceEvent__ENTRYPOINTPlayScreenPartyMemberListingV2_PC_1(); // Function PlayScreenPartyMemberListingV2_PC.PlayScreenPartyMemberListingV2_PC_C.SequenceEvent__ENTRYPOINTPlayScreenPartyMemberListingV2_PC_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent__ENTRYPOINTPlayScreenPartyMemberListingV2_PC(); // Function PlayScreenPartyMemberListingV2_PC.PlayScreenPartyMemberListingV2_PC_C.SequenceEvent__ENTRYPOINTPlayScreenPartyMemberListingV2_PC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPartyModel(struct UPartyModel* NewValue); // Function PlayScreenPartyMemberListingV2_PC.PlayScreenPartyMemberListingV2_PC_C.SetPartyModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeEmpty(); // Function PlayScreenPartyMemberListingV2_PC.PlayScreenPartyMemberListingV2_PC_C.InitializeEmpty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPartyPlayerModelChanged(); // Function PlayScreenPartyMemberListingV2_PC.PlayScreenPartyMemberListingV2_PC_C.OnPartyPlayerModelChanged // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent_1(); // Function PlayScreenPartyMemberListingV2_PC.PlayScreenPartyMemberListingV2_PC_C.SequenceEvent_1 // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HoverAudio(); // Function PlayScreenPartyMemberListingV2_PC.PlayScreenPartyMemberListingV2_PC_C.HoverAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__InviteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function PlayScreenPartyMemberListingV2_PC.PlayScreenPartyMemberListingV2_PC_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__InviteButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function PlayScreenPartyMemberListingV2_PC.PlayScreenPartyMemberListingV2_PC_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__InviteButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function PlayScreenPartyMemberListingV2_PC.PlayScreenPartyMemberListingV2_PC_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function PlayScreenPartyMemberListingV2_PC.PlayScreenPartyMemberListingV2_PC_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PlayScreenPartyMemberListingV2_PC(int32_t EntryPoint); // Function PlayScreenPartyMemberListingV2_PC.PlayScreenPartyMemberListingV2_PC_C.ExecuteUbergraph_PlayScreenPartyMemberListingV2_PC // (Final|UbergraphFunction) // @ game+0x1af5410
};

