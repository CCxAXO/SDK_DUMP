// BlueprintGeneratedClass FXC_Bomb_Plant.FXC_Bomb_Plant_C
// Size: 0x6b0 (Inherited: 0x630)
struct AFXC_Bomb_Plant_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UComp_FXC_AudioBasic_PerspectiveEvents_C* Comp_FXC_AudioBasic_PerspectiveEvents; // 0x638(0x08)
	struct UCompFXC_AudioVisualizer_Signal_C* CompFXC_AudioVisualizer_Signal; // 0x640(0x08)
	struct UComp_FXC_PlayAnimation_Equippable_C* Comp_FXC_PlayAnimation_Equippable; // 0x648(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_C* Comp_FXC_PlayAnimation_ShooterCharacter; // 0x650(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x658(0x08)
	float PlantTimeline_EmissivePower_74322124498433080CF5F5A3F1DCC4B0; // 0x660(0x04)
	enum class ETimelineDirection PlantTimeline__Direction_74322124498433080CF5F5A3F1DCC4B0; // 0x664(0x01)
	char pad_665[0x3]; // 0x665(0x03)
	struct UTimelineComponent* PlantTimeline; // 0x668(0x08)
	struct AActor* Target; // 0x670(0x08)
	struct AAresEquippable* Context Equippable; // 0x678(0x08)
	struct AActor* Context Owner; // 0x680(0x08)
	struct UAkAudioEvent* Default Spike Plant Audio Event; // 0x688(0x08)
	struct UAkAudioEvent* Fast Spike Plant Audio Event; // 0x690(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> Dynamic Materials; // 0x698(0x10)
	double Current Play Rate; // 0x6a8(0x08)

	void Play Bomb Plant Audio Event(); // Function FXC_Bomb_Plant.FXC_Bomb_Plant_C.Play Bomb Plant Audio Event // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update FX Play Rates(); // Function FXC_Bomb_Plant.FXC_Bomb_Plant_C.Update FX Play Rates // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize Dynamic Materials(); // Function FXC_Bomb_Plant.FXC_Bomb_Plant_C.Initialize Dynamic Materials // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Get Play Rate(double Max Play Rate, double& Play Rate); // Function FXC_Bomb_Plant.FXC_Bomb_Plant_C.Get Play Rate // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void PlantTimeline__FinishedFunc(); // Function FXC_Bomb_Plant.FXC_Bomb_Plant_C.PlantTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1b42740
	void PlantTimeline__UpdateFunc(); // Function FXC_Bomb_Plant.FXC_Bomb_Plant_C.PlantTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1b42740
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Bomb_Plant.FXC_Bomb_Plant_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Start Emissive Pulse Timeline(); // Function FXC_Bomb_Plant.FXC_Bomb_Plant_C.Start Emissive Pulse Timeline // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveTick(float DeltaSeconds); // Function FXC_Bomb_Plant.FXC_Bomb_Plant_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Bomb_Plant.FXC_Bomb_Plant_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ResetEffect(); // Function FXC_Bomb_Plant.FXC_Bomb_Plant_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_Bomb_Plant(int32_t EntryPoint); // Function FXC_Bomb_Plant.FXC_Bomb_Plant_C.ExecuteUbergraph_FXC_Bomb_Plant // (Final|UbergraphFunction) // @ game+0x1b42740
};

