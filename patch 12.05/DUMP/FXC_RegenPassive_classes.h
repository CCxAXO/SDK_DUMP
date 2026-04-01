// BlueprintGeneratedClass FXC_RegenPassive.FXC_RegenPassive_C
// Size: 0x640 (Inherited: 0x620)
struct AFXC_RegenPassive_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UStaticMeshComponent* Sphere1P; // 0x628(0x08)
	struct UStaticMeshComponent* Sphere3P; // 0x630(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x638(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_RegenPassive.FXC_RegenPassive_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_RegenPassive.FXC_RegenPassive_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_RegenPassive(int32_t EntryPoint); // Function FXC_RegenPassive.FXC_RegenPassive_C.ExecuteUbergraph_FXC_RegenPassive // (Final|UbergraphFunction) // @ game+0x1af5410
};

