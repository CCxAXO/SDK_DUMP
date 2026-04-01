// WidgetBlueprintGeneratedClass ProgressionSummaryMissionType.ProgressionSummaryMissionType_C
// Size: 0x3a3 (Inherited: 0x318)
struct UProgressionSummaryMissionType_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHorizontalBox* AllComplete; // 0x320(0x08)
	struct UProgressionSummaryHeader_C* Header; // 0x328(0x08)
	struct UVerticalBox* List; // 0x330(0x08)
	struct UWidgetSwitcher* StateSwitcher; // 0x338(0x08)
	struct FMargin MissionPadding; // 0x340(0x10)
	struct TMap<struct UMissionViewModel*, struct UHomeScreenMissionProgress_C*> MissionWidgets; // 0x350(0x50)
	enum class EAresMissionType MissionType; // 0x3a0(0x01)
	bool Is Design Time; // 0x3a1(0x01)
	bool Preview Completed; // 0x3a2(0x01)

	void UpdateCountdown(); // Function ProgressionSummaryMissionType.ProgressionSummaryMissionType_C.UpdateCountdown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateCompletion(); // Function ProgressionSummaryMissionType.ProgressionSummaryMissionType_C.UpdateCompletion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddMissionWidget(struct UHomeScreenMissionProgress_C* MissionWidget, struct UMissionViewModel* MissionViewModel); // Function ProgressionSummaryMissionType.ProgressionSummaryMissionType_C.AddMissionWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function ProgressionSummaryMissionType.ProgressionSummaryMissionType_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function ProgressionSummaryMissionType.ProgressionSummaryMissionType_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void MissionAdded(struct UMissionViewModel* Mission); // Function ProgressionSummaryMissionType.ProgressionSummaryMissionType_C.MissionAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MissionRemoved(struct UMissionViewModel* Mission); // Function ProgressionSummaryMissionType.ProgressionSummaryMissionType_C.MissionRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ProgressionSummaryMissionType(int32_t EntryPoint); // Function ProgressionSummaryMissionType.ProgressionSummaryMissionType_C.ExecuteUbergraph_ProgressionSummaryMissionType // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

