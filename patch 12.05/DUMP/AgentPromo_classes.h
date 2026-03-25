// WidgetBlueprintGeneratedClass AgentPromo.AgentPromo_C
// Size: 0x380 (Inherited: 0x318)
struct UAgentPromo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* UnHoverAnim; // 0x320(0x08)
	struct UWidgetAnimation* HoverAnim; // 0x328(0x08)
	struct UImage* BundleImage; // 0x330(0x08)
	struct UImage* Focus; // 0x338(0x08)
	struct UImage* Image_530; // 0x340(0x08)
	struct UTelemetryButton* PopupButton; // 0x348(0x08)
	struct UTextBlock* PrimaryText; // 0x350(0x08)
	struct UTextBlock* SecondaryText; // 0x358(0x08)
	struct UAkAudioEvent* SoundClick; // 0x360(0x08)
	struct UAkAudioEvent* SoundHover; // 0x368(0x08)
	struct URecruitmentEventModel* RecruitmentEventModel; // 0x370(0x08)
	struct UCharacterHandle* CharacterHandle; // 0x378(0x08)

	void GetPromoTileText(struct UCharacterUIData* UIData, struct FText& Primary, struct FText& Secondary); // Function AgentPromo.AgentPromo_C.GetPromoTileText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void OnCharacterLoaded(struct UCharacterHandle* CharacterHandle); // Function AgentPromo.AgentPromo_C.OnCharacterLoaded // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitRecruitmentEvent(); // Function AgentPromo.AgentPromo_C.InitRecruitmentEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PopupButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function AgentPromo.AgentPromo_C.BndEvt__PopupButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PopupButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function AgentPromo.AgentPromo_C.BndEvt__PopupButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PopupButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function AgentPromo.AgentPromo_C.BndEvt__PopupButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function AgentPromo.AgentPromo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AgentPromo(int32_t EntryPoint); // Function AgentPromo.AgentPromo_C.ExecuteUbergraph_AgentPromo // (Final|UbergraphFunction) // @ game+0x1af5410
};

