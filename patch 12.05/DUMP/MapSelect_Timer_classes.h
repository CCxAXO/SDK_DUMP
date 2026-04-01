// WidgetBlueprintGeneratedClass MapSelect_Timer.MapSelect_Timer_C
// Size: 0x331 (Inherited: 0x318)
struct UMapSelect_Timer_C : UUserWidget {
	struct UTextBlock* TB_ActionText; // 0x318(0x08)
	struct UTextBlock* TimeRemainingText; // 0x320(0x08)
	struct UPregameViewController* PregameViewController; // 0x328(0x08)
	enum class EStepType E_StepType; // 0x330(0x01)

	void UpdateActionText(enum class EStepType InStepType); // Function MapSelect_Timer.MapSelect_Timer_C.UpdateActionText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateTimer(); // Function MapSelect_Timer.MapSelect_Timer_C.UpdateTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePregameStateChanged(enum class EPregameMatchState State); // Function MapSelect_Timer.MapSelect_Timer_C.HandlePregameStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleServerTimeChanged(float Time); // Function MapSelect_Timer.MapSelect_Timer_C.HandleServerTimeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(struct UPregameViewController* PregameViewController); // Function MapSelect_Timer.MapSelect_Timer_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

