// BlueprintGeneratedClass FXC_Bomb_Defused.FXC_Bomb_Defused_C
// Size: 0x638 (Inherited: 0x620)
struct AFXC_Bomb_Defused_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x628(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x630(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Bomb_Defused.FXC_Bomb_Defused_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_Bomb_Defused(int32_t EntryPoint); // Function FXC_Bomb_Defused.FXC_Bomb_Defused_C.ExecuteUbergraph_FXC_Bomb_Defused // (Final|UbergraphFunction) // @ game+0x1af5410
};

