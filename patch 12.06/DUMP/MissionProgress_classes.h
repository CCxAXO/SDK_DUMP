// WidgetBlueprintGeneratedClass MissionProgress.MissionProgress_C
// Size: 0x3a8 (Inherited: 0x318)
struct UMissionProgress_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* CompleteImmediately; // 0x320(0x08)
	struct UWidgetAnimation* Default; // 0x328(0x08)
	struct UWidgetAnimation* Completed; // 0x330(0x08)
	struct UProgressBar* Bar; // 0x338(0x08)
	struct UImage* Icon; // 0x340(0x08)
	struct UImage* Image_118; // 0x348(0x08)
	struct UTextBlock* Objective; // 0x350(0x08)
	struct UTextBlock* Progress; // 0x358(0x08)
	struct UXPCounter_C* XPCounter; // 0x360(0x08)
	struct UMissionDataAsset* MissionDataAsset; // 0x368(0x08)
	bool AnimatingProgress; // 0x370(0x01)
	char pad_371[0x3]; // 0x371(0x03)
	int32_t AnimatingProgressFrom; // 0x374(0x04)
	int32_t AnimatingProgressTo; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct FDateTime AnimatingSince; // 0x380(0x08)
	double XPModifier; // 0x388(0x08)
	struct UMissionDeltaViewModel* MissionDeltaViewModel; // 0x390(0x08)
	struct FDateTime AnimatingUntil; // 0x398(0x08)
	double CurrentProgress; // 0x3a0(0x08)

	void SequenceEvent__ENTRYPOINTMissionProgress(); // Function MissionProgress.MissionProgress_C.SequenceEvent__ENTRYPOINTMissionProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SequenceEvent_1(); // Function MissionProgress.MissionProgress_C.SequenceEvent_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShowEndState(); // Function MissionProgress.MissionProgress_C.ShowEndState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetProgressToComplete(int32_t& ProgressToComplete); // Function MissionProgress.MissionProgress_C.GetProgressToComplete // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetProgressAfterMatch(int32_t& Progress); // Function MissionProgress.MissionProgress_C.GetProgressAfterMatch // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Reset(); // Function MissionProgress.MissionProgress_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetProgressBeforeMatch(int32_t& Progress); // Function MissionProgress.MissionProgress_C.GetProgressBeforeMatch // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void TickProgressAnimation(); // Function MissionProgress.MissionProgress_C.TickProgressAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetProgress(double NewProgress); // Function MissionProgress.MissionProgress_C.SetProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AnimateProgress(struct FTimespan& Duration); // Function MissionProgress.MissionProgress_C.AnimateProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetMissionTypeName(enum class EAresMissionType Type, struct FText& Name); // Function MissionProgress.MissionProgress_C.GetMissionTypeName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function MissionProgress.MissionProgress_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function MissionProgress.MissionProgress_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleMissionLoaded(struct UMissionHandle* MissionHandle); // Function MissionProgress.MissionProgress_C.HandleMissionLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function MissionProgress.MissionProgress_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MissionProgress(int32_t EntryPoint); // Function MissionProgress.MissionProgress_C.ExecuteUbergraph_MissionProgress // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

