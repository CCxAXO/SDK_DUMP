// BlueprintGeneratedClass FXC_Melee_Parent.FXC_Melee_Parent_C
// Size: 0x640 (Inherited: 0x620)
struct AFXC_Melee_Parent_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UComp_FXC_ManualAttenuationIndicator_C* Comp_FXC_ManualAttenuationIndicator; // 0x628(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x630(0x08)
	struct AAresEquippable* Equippable; // 0x638(0x08)

	void Get Owning Player Info(struct ABasePlayerCharacter_C*& Owning Player, enum class EAresTeamRole& Team Role, double& Health, double& Shield, bool& isAlive?); // Function FXC_Melee_Parent.FXC_Melee_Parent_C.Get Owning Player Info // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Melee_Parent.FXC_Melee_Parent_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_Melee_Parent(int32_t EntryPoint); // Function FXC_Melee_Parent.FXC_Melee_Parent_C.ExecuteUbergraph_FXC_Melee_Parent // (Final|UbergraphFunction) // @ game+0x1af5410
};

