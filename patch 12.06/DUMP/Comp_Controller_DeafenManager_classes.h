// BlueprintGeneratedClass Comp_Controller_DeafenManager.Comp_Controller_DeafenManager_C
// Size: 0xf0 (Inherited: 0xd8)
struct UComp_Controller_DeafenManager_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct AAresPlayerController* Controller; // 0xe0(0x08)
	struct AActor* ViewTarget; // 0xe8(0x08)

	void BindToViewTarget(struct AActor* Actor); // Function Comp_Controller_DeafenManager.Comp_Controller_DeafenManager_C.BindToViewTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UnbindFromViewTarget(struct AActor* Actor); // Function Comp_Controller_DeafenManager.Comp_Controller_DeafenManager_C.UnbindFromViewTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayEvents(struct TArray<struct UAkAudioEvent*>& Events); // Function Comp_Controller_DeafenManager.Comp_Controller_DeafenManager_C.PlayEvents // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleViewTargetChanged(); // Function Comp_Controller_DeafenManager.Comp_Controller_DeafenManager_C.HandleViewTargetChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function Comp_Controller_DeafenManager.Comp_Controller_DeafenManager_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Comp_Controller_DeafenManager(int32_t EntryPoint); // Function Comp_Controller_DeafenManager.Comp_Controller_DeafenManager_C.ExecuteUbergraph_Comp_Controller_DeafenManager // (Final|UbergraphFunction) // @ game+0x1b42740
};

