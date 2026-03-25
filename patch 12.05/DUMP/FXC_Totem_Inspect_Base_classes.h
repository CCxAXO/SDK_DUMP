// BlueprintGeneratedClass FXC_Totem_Inspect_Base.FXC_Totem_Inspect_Base_C
// Size: 0x690 (Inherited: 0x662)
struct AFXC_Totem_Inspect_Base_C : AFXC_Gun_Emote_C {
	char pad_662[0x6]; // 0x662(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x668(0x08)
	struct UComp_FXC_AudioBasic_PerspectiveEvents_C* Comp_FXC_AudioPerspectiveEvents; // 0x670(0x08)
	struct AShooterCharacter* Owning Player; // 0x678(0x08)
	struct AEquippable_Totem_base_C* Owned Totem; // 0x680(0x08)
	struct UTotem_CosmeticComponent_Base_C* Totem Cosmetic Component; // 0x688(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Totem_Inspect_Base.FXC_Totem_Inspect_Base_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_Totem_Inspect_Base(int32_t EntryPoint); // Function FXC_Totem_Inspect_Base.FXC_Totem_Inspect_Base_C.ExecuteUbergraph_FXC_Totem_Inspect_Base // (Final|UbergraphFunction) // @ game+0x1af5410
};

