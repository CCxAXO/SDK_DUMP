// BlueprintGeneratedClass Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C
// Size: 0x4b0 (Inherited: 0x460)
struct AActor_SimpleWarmupTransition_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UPostProcessComponent* PostProcess; // 0x468(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x470(0x08)
	float FadeInTimeline_Alpha_6DE345CF45066CFED934EE870B0BBEE8; // 0x478(0x04)
	enum class ETimelineDirection FadeInTimeline__Direction_6DE345CF45066CFED934EE870B0BBEE8; // 0x47c(0x01)
	char pad_47D[0x3]; // 0x47d(0x03)
	struct UTimelineComponent* FadeInTimeline; // 0x480(0x08)
	double FadeInDuration; // 0x488(0x08)
	double FadeOutDuration; // 0x490(0x08)
	bool ShouldDestroyOnFinish; // 0x498(0x01)
	char pad_499[0x7]; // 0x499(0x07)
	double FadeOutDelay; // 0x4a0(0x08)
	double FadeInDurationNoSlow; // 0x4a8(0x08)

	void GetFadeInDuration(double& FadeInDuration); // Function Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C.GetFadeInDuration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void FadeInTimeline__FinishedFunc(); // Function Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C.FadeInTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1af5410
	void FadeInTimeline__UpdateFunc(); // Function Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C.FadeInTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void Event Fade Out(); // Function Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C.Event Fade Out // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnWarmupRoundChanged_Event_1(bool IsWarmupRound); // Function Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C.OnWarmupRoundChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Actor_SimpleWarmupTransition(int32_t EntryPoint); // Function Actor_SimpleWarmupTransition.Actor_SimpleWarmupTransition_C.ExecuteUbergraph_Actor_SimpleWarmupTransition // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

