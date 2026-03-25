// WidgetBlueprintGeneratedClass EnemyInteractionWidget.EnemyInteractionWidget_C
// Size: 0x6b9 (Inherited: 0x318)
struct UEnemyInteractionWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* AssistsText; // 0x320(0x08)
	struct UBorder* Border_1; // 0x328(0x08)
	struct UButton* Button_80; // 0x330(0x08)
	struct UCompetitiveTierIconSmall_C* CompetitiveTierIconSmall; // 0x338(0x08)
	struct UWBP_ContextMenuAnchor_SocialPlayer_C* ContextMenuAnchor; // 0x340(0x08)
	struct UTextBlock* DeathsText; // 0x348(0x08)
	struct UHorizontalBox* DetailsBox; // 0x350(0x08)
	struct UTextBlock* DetailsText; // 0x358(0x08)
	struct UImage* EnemyBg; // 0x360(0x08)
	struct UImage* EnemyCharacter; // 0x368(0x08)
	struct UTextBlock* EnemyCharacterName; // 0x370(0x08)
	struct UTextBlock* EnemyTierName; // 0x378(0x08)
	struct UVerticalBox* ExpansionContainer; // 0x380(0x08)
	struct UTextBlock* ExpansionIcon; // 0x388(0x08)
	struct UImage* Image_105; // 0x390(0x08)
	struct UImage* Image_188; // 0x398(0x08)
	struct UImage* Image_190; // 0x3a0(0x08)
	struct UImage* Image_242; // 0x3a8(0x08)
	struct UImage* Image_356; // 0x3b0(0x08)
	struct UImage* Image_530; // 0x3b8(0x08)
	struct UImage* Image_930; // 0x3c0(0x08)
	struct UTextBlock* KillsText; // 0x3c8(0x08)
	struct UImage* RoundsWonStarIcon; // 0x3d0(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x3d8(0x08)
	struct FMatchDetailsEnemyInteractionList EnemyInteractions; // 0x3e0(0x38)
	struct FProcessedMatchDetails ProcessedMatchDetails; // 0x418(0x278)
	bool IsExpanded; // 0x690(0x01)
	char pad_691[0x7]; // 0x691(0x07)
	struct FMulticastInlineDelegate OnInteractionClicked; // 0x698(0x10)
	struct FString TargetSubject; // 0x6a8(0x10)
	bool CanExpand; // 0x6b8(0x01)

	void UpdateContextMenu(); // Function EnemyInteractionWidget.EnemyInteractionWidget_C.UpdateContextMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePlayerName(); // Function EnemyInteractionWidget.EnemyInteractionWidget_C.UpdatePlayerName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CanShowIndividualInteractions(bool& CanShow); // Function EnemyInteractionWidget.EnemyInteractionWidget_C.CanShowIndividualInteractions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function EnemyInteractionWidget.EnemyInteractionWidget_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateStarIcon(); // Function EnemyInteractionWidget.EnemyInteractionWidget_C.UpdateStarIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function EnemyInteractionWidget.EnemyInteractionWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void CustomEvent_1(struct FString Victim, int32_t RoundNum); // Function EnemyInteractionWidget.EnemyInteractionWidget_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function EnemyInteractionWidget.EnemyInteractionWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function EnemyInteractionWidget.EnemyInteractionWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void ShowOrHideDetails(); // Function EnemyInteractionWidget.EnemyInteractionWidget_C.ShowOrHideDetails // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Button_79_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function EnemyInteractionWidget.EnemyInteractionWidget_C.BndEvt__Button_79_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_EnemyInteractionWidget(int32_t EntryPoint); // Function EnemyInteractionWidget.EnemyInteractionWidget_C.ExecuteUbergraph_EnemyInteractionWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnInteractionClicked__DelegateSignature(struct FString Victim, int32_t RoundNum); // Function EnemyInteractionWidget.EnemyInteractionWidget_C.OnInteractionClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

