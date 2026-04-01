// BlueprintGeneratedClass FXC_Bomb_While_Defusing.FXC_Bomb_While_Defusing_C
// Size: 0x668 (Inherited: 0x620)
struct AFXC_Bomb_While_Defusing_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UCompFXC_AudioVisualizer_Signal_C* CompFXC_AudioVisualizer_Signal; // 0x628(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x630(0x08)
	struct UMaterialInterface* OriginalMaterial; // 0x638(0x08)
	struct FTimerHandle AudioTimer; // 0x640(0x08)
	struct APlantedBomb_C* Bomb; // 0x648(0x08)
	struct AShooterCharacter* Context Character; // 0x650(0x08)
	struct UAkAudioEvent* Default Spike Defuse Audio Event; // 0x658(0x08)
	struct UAkAudioEvent* Fast Spike Defuse Audio Event; // 0x660(0x08)

	void Visualize Audio(); // Function FXC_Bomb_While_Defusing.FXC_Bomb_While_Defusing_C.Visualize Audio // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Dynamic Material(); // Function FXC_Bomb_While_Defusing.FXC_Bomb_While_Defusing_C.Set Dynamic Material // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Play Bomb Defuse Audio Event(); // Function FXC_Bomb_While_Defusing.FXC_Bomb_While_Defusing_C.Play Bomb Defuse Audio Event // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	double Get Play Rate From Effect Data(double Max Play Rate); // Function FXC_Bomb_While_Defusing.FXC_Bomb_While_Defusing_C.Get Play Rate From Effect Data // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Bomb_While_Defusing.FXC_Bomb_While_Defusing_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Bomb_While_Defusing.FXC_Bomb_While_Defusing_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_Bomb_While_Defusing(int32_t EntryPoint); // Function FXC_Bomb_While_Defusing.FXC_Bomb_While_Defusing_C.ExecuteUbergraph_FXC_Bomb_While_Defusing // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

