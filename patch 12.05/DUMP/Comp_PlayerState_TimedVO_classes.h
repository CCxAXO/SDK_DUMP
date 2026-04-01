// BlueprintGeneratedClass Comp_PlayerState_TimedVO.Comp_PlayerState_TimedVO_C
// Size: 0xf8 (Inherited: 0xd8)
struct UComp_PlayerState_TimedVO_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct UAudBasePawnVOComponent_C* VOComponent; // 0xe0(0x08)
	struct TArray<struct UAkAudioEvent*> AudioEvents; // 0xe8(0x10)

	void PlayDelayedSounds(double Delay, struct TArray<struct UAkAudioEvent*>& Sounds); // Function Comp_PlayerState_TimedVO.Comp_PlayerState_TimedVO_C.PlayDelayedSounds // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlaySounds(); // Function Comp_PlayerState_TimedVO.Comp_PlayerState_TimedVO_C.PlaySounds // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_PlayerState_TimedVO(int32_t EntryPoint); // Function Comp_PlayerState_TimedVO.Comp_PlayerState_TimedVO_C.ExecuteUbergraph_Comp_PlayerState_TimedVO // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

