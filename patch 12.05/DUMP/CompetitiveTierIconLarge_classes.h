// WidgetBlueprintGeneratedClass CompetitiveTierIconLarge.CompetitiveTierIconLarge_C
// Size: 0x38a (Inherited: 0x318)
struct UCompetitiveTierIconLarge_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Default; // 0x320(0x08)
	struct UWidgetAnimation* Demoted; // 0x328(0x08)
	struct UWidgetAnimation* Promoted; // 0x330(0x08)
	struct UWidgetAnimation* Stable; // 0x338(0x08)
	struct UWidgetAnimation* MinorDecrease; // 0x340(0x08)
	struct UWidgetAnimation* MajorIncrease; // 0x348(0x08)
	struct UWidgetAnimation* MinorIncrease; // 0x350(0x08)
	struct UButton* Button_174; // 0x358(0x08)
	struct UMenuAnchor* MenuAnchor_152; // 0x360(0x08)
	struct UImage* TierIcon; // 0x368(0x08)
	struct UTextBlock* TierName; // 0x370(0x08)
	struct UTextBlock* TierNameLargeText; // 0x378(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x380(0x08)
	bool ArrowEnabledFlag; // 0x388(0x01)
	bool LargeTextEnabledFlag; // 0x389(0x01)

	void SequenceEvent__ENTRYPOINTCompetitiveTierIconLarge_4(); // Function CompetitiveTierIconLarge.CompetitiveTierIconLarge_C.SequenceEvent__ENTRYPOINTCompetitiveTierIconLarge_4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent__ENTRYPOINTCompetitiveTierIconLarge_3(); // Function CompetitiveTierIconLarge.CompetitiveTierIconLarge_C.SequenceEvent__ENTRYPOINTCompetitiveTierIconLarge_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent__ENTRYPOINTCompetitiveTierIconLarge_2(); // Function CompetitiveTierIconLarge.CompetitiveTierIconLarge_C.SequenceEvent__ENTRYPOINTCompetitiveTierIconLarge_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent__ENTRYPOINTCompetitiveTierIconLarge_1(); // Function CompetitiveTierIconLarge.CompetitiveTierIconLarge_C.SequenceEvent__ENTRYPOINTCompetitiveTierIconLarge_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent__ENTRYPOINTCompetitiveTierIconLarge(); // Function CompetitiveTierIconLarge.CompetitiveTierIconLarge_C.SequenceEvent__ENTRYPOINTCompetitiveTierIconLarge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceAudioEvent_MajorIncrease(); // Function CompetitiveTierIconLarge.CompetitiveTierIconLarge_C.SequenceAudioEvent_MajorIncrease // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceAudioEvent_MajorDecrease(); // Function CompetitiveTierIconLarge.CompetitiveTierIconLarge_C.SequenceAudioEvent_MajorDecrease // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceAudioEvent_MinorDecrease(); // Function CompetitiveTierIconLarge.CompetitiveTierIconLarge_C.SequenceAudioEvent_MinorDecrease // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceAudioEvent_MinorIncrease(); // Function CompetitiveTierIconLarge.CompetitiveTierIconLarge_C.SequenceAudioEvent_MinorIncrease // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceAudioEvent_Demoted(); // Function CompetitiveTierIconLarge.CompetitiveTierIconLarge_C.SequenceAudioEvent_Demoted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceAudioEvent_Promoted(); // Function CompetitiveTierIconLarge.CompetitiveTierIconLarge_C.SequenceAudioEvent_Promoted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* OnGetMenuContent_2(); // Function CompetitiveTierIconLarge.CompetitiveTierIconLarge_C.OnGetMenuContent_2 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTierAndMovementWithAnimation(int32_t Tier); // Function CompetitiveTierIconLarge.CompetitiveTierIconLarge_C.SetTierAndMovementWithAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTier(int32_t Tier); // Function CompetitiveTierIconLarge.CompetitiveTierIconLarge_C.SetTier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function CompetitiveTierIconLarge.CompetitiveTierIconLarge_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Button_173_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function CompetitiveTierIconLarge.CompetitiveTierIconLarge_C.BndEvt__Button_173_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Button_173_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function CompetitiveTierIconLarge.CompetitiveTierIconLarge_C.BndEvt__Button_173_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Button_173_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function CompetitiveTierIconLarge.CompetitiveTierIconLarge_C.BndEvt__Button_173_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CompetitiveTierIconLarge(int32_t EntryPoint); // Function CompetitiveTierIconLarge.CompetitiveTierIconLarge_C.ExecuteUbergraph_CompetitiveTierIconLarge // (Final|UbergraphFunction) // @ game+0x1af5410
};

