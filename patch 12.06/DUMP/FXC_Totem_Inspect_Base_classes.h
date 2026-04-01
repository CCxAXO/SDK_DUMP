// BlueprintGeneratedClass FXC_Totem_Inspect_Base.FXC_Totem_Inspect_Base_C
// Size: 0x6a0 (Inherited: 0x672)
struct AFXC_Totem_Inspect_Base_C : AFXC_Gun_Emote_C {
	char pad_672[0x6]; // 0x672(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x678(0x08)
	struct UComp_FXC_AudioBasic_PerspectiveEvents_C* Comp_FXC_AudioPerspectiveEvents; // 0x680(0x08)
	struct AShooterCharacter* Owning Player; // 0x688(0x08)
	struct AEquippable_Totem_base_C* Owned Totem; // 0x690(0x08)
	struct UTotem_CosmeticComponent_Base_C* Totem Cosmetic Component; // 0x698(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Totem_Inspect_Base.FXC_Totem_Inspect_Base_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_Totem_Inspect_Base(int32_t EntryPoint); // Function FXC_Totem_Inspect_Base.FXC_Totem_Inspect_Base_C.ExecuteUbergraph_FXC_Totem_Inspect_Base // (Final|UbergraphFunction) // @ game+0x1b42740
};

