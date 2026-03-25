// BlueprintGeneratedClass FXC_Bomb_Plant_Enemy.FXC_Bomb_Plant_Enemy_C
// Size: 0x648 (Inherited: 0x620)
struct AFXC_Bomb_Plant_Enemy_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x628(0x08)
	struct UAkAudioEvent* Default Spike Plant Audio Event; // 0x630(0x08)
	struct UAkAudioEvent* Fast Spike Plant Audio Event; // 0x638(0x08)
	struct AActor* Context Actor; // 0x640(0x08)

	void Get Play Rate From Effect Data(double Max Play Rate, double& Play Rate); // Function FXC_Bomb_Plant_Enemy.FXC_Bomb_Plant_Enemy_C.Get Play Rate From Effect Data // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Bomb_Plant_Enemy.FXC_Bomb_Plant_Enemy_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_Bomb_Plant_Enemy(int32_t EntryPoint); // Function FXC_Bomb_Plant_Enemy.FXC_Bomb_Plant_Enemy_C.ExecuteUbergraph_FXC_Bomb_Plant_Enemy // (Final|UbergraphFunction) // @ game+0x1af5410
};

