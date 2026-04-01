// BlueprintGeneratedClass FXC_Totem_Equip_Base.FXC_Totem_Equip_Base_C
// Size: 0x670 (Inherited: 0x630)
struct AFXC_Totem_Equip_Base_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UComp_FXC_PlayAnimation_Equippable_C* EquippableAnimation; // 0x638(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_C* CharacterAnimation; // 0x640(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x648(0x08)
	struct AShooterCharacter* Owning Player; // 0x650(0x08)
	struct UTotem_CosmeticComponent_Base_C* Totem Component; // 0x658(0x08)
	struct AEquippable_Totem_base_C* Owned Totem; // 0x660(0x08)
	struct UTotem_CosmeticComponent_Base_C* Totem Cosmetic Component; // 0x668(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Totem_Equip_Base.FXC_Totem_Equip_Base_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Totem_Equip_Base.FXC_Totem_Equip_Base_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_Totem_Equip_Base(int32_t EntryPoint); // Function FXC_Totem_Equip_Base.FXC_Totem_Equip_Base_C.ExecuteUbergraph_FXC_Totem_Equip_Base // (Final|UbergraphFunction) // @ game+0x1b42740
};

