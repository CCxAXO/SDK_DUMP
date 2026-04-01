// BlueprintGeneratedClass FXC_Gun_Emote.FXC_Gun_Emote_C
// Size: 0x672 (Inherited: 0x630)
struct AFXC_Gun_Emote_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UComp_FXC_PlayAnimation_Equippable_C* EquippableAnimation; // 0x638(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_C* CharacterAnimation; // 0x640(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x648(0x08)
	struct AAresEquippable* Equippable; // 0x650(0x08)
	struct UScriptStateComponent* ScriptState; // 0x658(0x08)
	struct UWeapon_Skin_Base_C* Owned Gun Skin; // 0x660(0x08)
	struct UMelee_Skin_Base_C* Owned Melee Skin; // 0x668(0x08)
	bool PlayingInspect VO; // 0x670(0x01)
	bool TestVariable; // 0x671(0x01)

	void Get Owning Player Info(struct ABasePlayerCharacter_C*& Owning Player, enum class EAresTeamRole& Team Role, double& Health, double& Shield, bool& isAlive?); // Function FXC_Gun_Emote.FXC_Gun_Emote_C.Get Owning Player Info // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Gun_Emote.FXC_Gun_Emote_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Gun_Emote.FXC_Gun_Emote_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_Gun_Emote(int32_t EntryPoint); // Function FXC_Gun_Emote.FXC_Gun_Emote_C.ExecuteUbergraph_FXC_Gun_Emote // (Final|UbergraphFunction) // @ game+0x1b42740
};

