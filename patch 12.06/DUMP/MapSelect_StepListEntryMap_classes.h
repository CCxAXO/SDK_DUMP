// WidgetBlueprintGeneratedClass MapSelect_StepListEntryMap.MapSelect_StepListEntryMap_C
// Size: 0x378 (Inherited: 0x318)
struct UMapSelect_StepListEntryMap_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Anim_CurrentStepIntro; // 0x320(0x08)
	struct UWidgetAnimation* Anim_CurrentStep; // 0x328(0x08)
	struct UImage* IMG_BorderBG; // 0x330(0x08)
	struct UImage* IMG_currentStepDots; // 0x338(0x08)
	struct UImage* IMG_CurrentStepGradient; // 0x340(0x08)
	struct UImage* IMG_DarkBG; // 0x348(0x08)
	struct UImage* IMG_DarkMapOverlay; // 0x350(0x08)
	struct UImage* MapImage; // 0x358(0x08)
	struct UTextBlock* MapName; // 0x360(0x08)
	struct UOverlay* O_upcomingElements; // 0x368(0x08)
	struct UOverlay* Upcoming; // 0x370(0x08)

	void InitStepDisplay(); // Function MapSelect_StepListEntryMap.MapSelect_StepListEntryMap_C.InitStepDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCurrentStep(bool isMyTeam); // Function MapSelect_StepListEntryMap.MapSelect_StepListEntryMap_C.SetCurrentStep // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMap(struct UMapUIData* Map, bool bBanned); // Function MapSelect_StepListEntryMap.MapSelect_StepListEntryMap_C.SetMap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void WidgetAnimationEvt_Anim_CurrentStepIntro_K2Node_WidgetAnimationEvent_1(); // Function MapSelect_StepListEntryMap.MapSelect_StepListEntryMap_C.WidgetAnimationEvt_Anim_CurrentStepIntro_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MapSelect_StepListEntryMap(int32_t EntryPoint); // Function MapSelect_StepListEntryMap.MapSelect_StepListEntryMap_C.ExecuteUbergraph_MapSelect_StepListEntryMap // (Final|UbergraphFunction) // @ game+0x1b42740
};

