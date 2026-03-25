// BlueprintGeneratedClass Comp_FXC_AudioBasic_PerspectiveEvents.Comp_FXC_AudioBasic_PerspectiveEvents_C
// Size: 0x230 (Inherited: 0x218)
struct UComp_FXC_AudioBasic_PerspectiveEvents_C : UComp_FXC_AudioBasic_C {
	struct UAkAudioEvent* PlayOnStart1P; // 0x218(0x08)
	struct UAkAudioEvent* PlayOnStart3PAlly; // 0x220(0x08)
	struct UAkAudioEvent* PlayOnStart3PEnemy; // 0x228(0x08)

	void GetPlayOnStartEvent(bool FirstPerson, struct UAkAudioEvent*& PlayOnStart); // Function Comp_FXC_AudioBasic_PerspectiveEvents.Comp_FXC_AudioBasic_PerspectiveEvents_C.GetPlayOnStartEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
};

