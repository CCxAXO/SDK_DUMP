// BlueprintGeneratedClass Comp_FXC_PlayspaceVisibility.Comp_FXC_PlayspaceVisibility_C
// Size: 0x151 (Inherited: 0xe8)
struct UComp_FXC_PlayspaceVisibility_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TSet<struct UPlayspace*> EffectPlayspaces; // 0xf0(0x50)
	enum class FXCPlayspaceVisibilityParentType InstigatorType; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	struct FName HiddenTag; // 0x144(0x0c)
	bool IsActiveDuringTailTime; // 0x150(0x01)

	void OnViewedPlayspacesChanged(struct APlayerController* ViewingController); // Function Comp_FXC_PlayspaceVisibility.Comp_FXC_PlayspaceVisibility_C.OnViewedPlayspacesChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlayspaceListFromObject(struct UObject* PlayspaceParent); // Function Comp_FXC_PlayspaceVisibility.Comp_FXC_PlayspaceVisibility_C.SetPlayspaceListFromObject // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsInVisiblePlayspace(bool& IsVisible); // Function Comp_FXC_PlayspaceVisibility.Comp_FXC_PlayspaceVisibility_C.IsInVisiblePlayspace // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateVisibility(); // Function Comp_FXC_PlayspaceVisibility.Comp_FXC_PlayspaceVisibility_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Cleanup(); // Function Comp_FXC_PlayspaceVisibility.Comp_FXC_PlayspaceVisibility_C.Cleanup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitPlayspaceVisibility(struct UObject* PlayspaceParent); // Function Comp_FXC_PlayspaceVisibility.Comp_FXC_PlayspaceVisibility_C.InitPlayspaceVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetManualPlayspaceParent(struct UObject* PlayspaceParent); // Function Comp_FXC_PlayspaceVisibility.Comp_FXC_PlayspaceVisibility_C.SetManualPlayspaceParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void FindInstigator(struct UObject* EffectTarget, struct UObject* EffectContext, struct UObject*& PlayspaceParent); // Function Comp_FXC_PlayspaceVisibility.Comp_FXC_PlayspaceVisibility_C.FindInstigator // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_PlayspaceVisibility.Comp_FXC_PlayspaceVisibility_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_PlayspaceVisibility.Comp_FXC_PlayspaceVisibility_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ResetEffect(); // Function Comp_FXC_PlayspaceVisibility.Comp_FXC_PlayspaceVisibility_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Comp_FXC_PlayspaceVisibility.Comp_FXC_PlayspaceVisibility_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Comp_FXC_PlayspaceVisibility(int32_t EntryPoint); // Function Comp_FXC_PlayspaceVisibility.Comp_FXC_PlayspaceVisibility_C.ExecuteUbergraph_Comp_FXC_PlayspaceVisibility // (Final|UbergraphFunction) // @ game+0x1b42740
};

