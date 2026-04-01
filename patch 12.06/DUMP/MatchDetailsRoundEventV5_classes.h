// WidgetBlueprintGeneratedClass MatchDetailsRoundEventV5.MatchDetailsRoundEventV5_C
// Size: 0x818 (Inherited: 0x318)
struct UMatchDetailsRoundEventV5_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Background; // 0x320(0x08)
	struct UButton* Button_1; // 0x328(0x08)
	struct UImage* HoverColor; // 0x330(0x08)
	struct UImage* InitiatorCharacter; // 0x338(0x08)
	struct UImage* ItemIcon; // 0x340(0x08)
	struct UTextBlock* ItemTypeText; // 0x348(0x08)
	struct UTextBlock* KillDistanceText; // 0x350(0x08)
	struct UImage* KillfeedDirection; // 0x358(0x08)
	struct UImage* ReceiverCharacter; // 0x360(0x08)
	struct UImage* TeamBarLeft; // 0x368(0x08)
	struct UImage* TeamBarLeft2; // 0x370(0x08)
	struct UImage* TeamBarRight; // 0x378(0x08)
	struct UImage* TeamBarRight2; // 0x380(0x08)
	struct UTextBlock* TimestampMinutes; // 0x388(0x08)
	struct UTextBlock* TimestampSeconds; // 0x390(0x08)
	struct FString EventType; // 0x398(0x10)
	struct FMulticastInlineDelegate OnEventHovered; // 0x3a8(0x10)
	struct FMulticastInlineDelegate OnEventUnhovered; // 0x3b8(0x10)
	struct FProcessedKillEvent KillEvent; // 0x3c8(0xa8)
	struct FProcessedRoundResult RoundResult; // 0x470(0x120)
	struct FProcessedMatchDetails ProcessedMatchDetails; // 0x590(0x278)
	struct FString TargetSubject; // 0x808(0x10)

	void GetVictimSubject(struct FString& Victim); // Function MatchDetailsRoundEventV5.MatchDetailsRoundEventV5_C.GetVictimSubject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetKillerSubject(struct FString& Killer); // Function MatchDetailsRoundEventV5.MatchDetailsRoundEventV5_C.GetKillerSubject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetKillerUIData(struct UCharacterUIData*& UIData); // Function MatchDetailsRoundEventV5.MatchDetailsRoundEventV5_C.GetKillerUIData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetVictimTeam(struct FName& Team); // Function MatchDetailsRoundEventV5.MatchDetailsRoundEventV5_C.GetVictimTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetKillerTeam(struct FName& Team); // Function MatchDetailsRoundEventV5.MatchDetailsRoundEventV5_C.GetKillerTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetEventTime(int32_t& RoundTime); // Function MatchDetailsRoundEventV5.MatchDetailsRoundEventV5_C.GetEventTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Construct(); // Function MatchDetailsRoundEventV5.MatchDetailsRoundEventV5_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function MatchDetailsRoundEventV5.MatchDetailsRoundEventV5_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function MatchDetailsRoundEventV5.MatchDetailsRoundEventV5_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MatchDetailsRoundEventV5(int32_t EntryPoint); // Function MatchDetailsRoundEventV5.MatchDetailsRoundEventV5_C.ExecuteUbergraph_MatchDetailsRoundEventV5 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnEventUnhovered__DelegateSignature(); // Function MatchDetailsRoundEventV5.MatchDetailsRoundEventV5_C.OnEventUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEventHovered__DelegateSignature(struct FString EventType, struct FProcessedRoundResult RoundResult, struct FProcessedKillEvent KillEvent); // Function MatchDetailsRoundEventV5.MatchDetailsRoundEventV5_C.OnEventHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

