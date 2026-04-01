// WidgetBlueprintGeneratedClass GamePodPreferenceOptions_PC.GamePodPreferenceOptions_PC_C
// Size: 0x3a0 (Inherited: 0x380)
struct UGamePodPreferenceOptions_PC_C : UGamePodPreferenceOptions_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct UButton* HoverButton; // 0x388(0x08)
	struct UMenuAnchor* MenuAnchor; // 0x390(0x08)
	struct UPartyMemberPingIcon_C* PartyMemberPingIcon; // 0x398(0x08)

	void OnOwnerChanged(bool NewValue); // Function GamePodPreferenceOptions_PC.GamePodPreferenceOptions_PC_C.OnOwnerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(struct UPartyModel* Party Model, struct UPartyViewController* View Controller, struct UPartyPlayerModel* Player Party Model, bool Is Self, struct FString Subject); // Function GamePodPreferenceOptions_PC.GamePodPreferenceOptions_PC_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__MenuButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function GamePodPreferenceOptions_PC.GamePodPreferenceOptions_PC_C.BndEvt__MenuButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__OwnerHoverButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function GamePodPreferenceOptions_PC.GamePodPreferenceOptions_PC_C.BndEvt__OwnerHoverButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnMatchmakingChanged_Event_1(bool NewValue); // Function GamePodPreferenceOptions_PC.GamePodPreferenceOptions_PC_C.OnMatchmakingChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function GamePodPreferenceOptions_PC.GamePodPreferenceOptions_PC_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnRosterPartyChanged(bool NewValue); // Function GamePodPreferenceOptions_PC.GamePodPreferenceOptions_PC_C.OnRosterPartyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_GamePodPreferenceOptions_PC(int32_t EntryPoint); // Function GamePodPreferenceOptions_PC.GamePodPreferenceOptions_PC_C.ExecuteUbergraph_GamePodPreferenceOptions_PC // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

