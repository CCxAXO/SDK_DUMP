// WidgetBlueprintGeneratedClass MapSelect_InfoModal.MapSelect_InfoModal_C
// Size: 0x368 (Inherited: 0x318)
struct UMapSelect_InfoModal_C : UUserWidget {
	struct UBorder* Bor_ActiveTeamMessageWrap; // 0x318(0x08)
	struct UProgressBar* Prog_FuseLine; // 0x320(0x08)
	struct UTextBlock* T_ActiveTeam; // 0x328(0x08)
	struct UTextBlock* T_InformationalText; // 0x330(0x08)
	struct FText InfoText; // 0x338(0x18)
	bool NewVar_1; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct UPregameViewController* Pregame View Controller; // 0x358(0x08)
	double TotalTime; // 0x360(0x08)

	void HandlePregameStateChanged(enum class EPregameMatchState State); // Function MapSelect_InfoModal.MapSelect_InfoModal_C.HandlePregameStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleServerTimeChanged(float Time); // Function MapSelect_InfoModal.MapSelect_InfoModal_C.HandleServerTimeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateTimer(); // Function MapSelect_InfoModal.MapSelect_InfoModal_C.UpdateTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeForStep(enum class EStepType StepType, bool IsYourTeam, int32_t NumActions, struct UPregameViewController* PregameViewController); // Function MapSelect_InfoModal.MapSelect_InfoModal_C.InitializeForStep // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

