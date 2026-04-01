// WidgetBlueprintGeneratedClass HomeScreenMissionProgress.HomeScreenMissionProgress_C
// Size: 0x360 (Inherited: 0x318)
struct UHomeScreenMissionProgress_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UProgressBar* Bar; // 0x320(0x08)
	struct UOverlay* ExpirationOverlay; // 0x328(0x08)
	struct UImage* missionTypeIcon; // 0x330(0x08)
	struct UTextBlock* Objective; // 0x338(0x08)
	struct UTextBlock* Progress; // 0x340(0x08)
	struct UTextBlock* Reward; // 0x348(0x08)
	struct UMissionViewModel* MissionViewModel; // 0x350(0x08)
	struct UMissionDataAsset* MissionDataAsset; // 0x358(0x08)

	void SetExpiration(bool Expired); // Function HomeScreenMissionProgress.HomeScreenMissionProgress_C.SetExpiration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetProgress(double CurrentProgress); // Function HomeScreenMissionProgress.HomeScreenMissionProgress_C.SetProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateObjective(struct UMissionHandle* MissionHandle); // Function HomeScreenMissionProgress.HomeScreenMissionProgress_C.UpdateObjective // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateProgress(struct UObjectiveViewModel* Objective); // Function HomeScreenMissionProgress.HomeScreenMissionProgress_C.UpdateProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetMissionTypeName(enum class EAresMissionType Type, struct FText& Name); // Function HomeScreenMissionProgress.HomeScreenMissionProgress_C.GetMissionTypeName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function HomeScreenMissionProgress.HomeScreenMissionProgress_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function HomeScreenMissionProgress.HomeScreenMissionProgress_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleProgressChanged(int32_t NewValue); // Function HomeScreenMissionProgress.HomeScreenMissionProgress_C.HandleProgressChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleMissionLoaded(struct UMissionHandle* MissionHandle); // Function HomeScreenMissionProgress.HomeScreenMissionProgress_C.HandleMissionLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleExpirationTimeChanged(struct FDateTime& NewValue); // Function HomeScreenMissionProgress.HomeScreenMissionProgress_C.HandleExpirationTimeChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_HomeScreenMissionProgress(int32_t EntryPoint); // Function HomeScreenMissionProgress.HomeScreenMissionProgress_C.ExecuteUbergraph_HomeScreenMissionProgress // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

