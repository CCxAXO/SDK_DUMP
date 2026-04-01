// BlueprintGeneratedClass FXC_Gun_Bounce.FXC_Gun_Bounce_C
// Size: 0x648 (Inherited: 0x630)
struct AFXC_Gun_Bounce_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UComp_FXC_Gun_Bounce_C* Comp_FXC_Gun_Bounce; // 0x638(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x640(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Gun_Bounce.FXC_Gun_Bounce_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_Gun_Bounce(int32_t EntryPoint); // Function FXC_Gun_Bounce.FXC_Gun_Bounce_C.ExecuteUbergraph_FXC_Gun_Bounce // (Final|UbergraphFunction) // @ game+0x1b42740
};

