// BlueprintGeneratedClass FXC_AK_Golem_Equip_Lv1.FXC_AK_Golem_Equip_Lv1_C
// Size: 0x690 (Inherited: 0x670)
struct AFXC_AK_Golem_Equip_Lv1_C : AFXC_AK_Equip_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x670(0x08)
	struct AAresEquippable* Gun; // 0x678(0x08)
	struct AShooterCharacter* As Shooter Character; // 0x680(0x08)
	struct UComp_Golem_State_Info_C* ComponentGolemStateInfo; // 0x688(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_AK_Golem_Equip_Lv1.FXC_AK_Golem_Equip_Lv1_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_AK_Golem_Equip_Lv1(int32_t EntryPoint); // Function FXC_AK_Golem_Equip_Lv1.FXC_AK_Golem_Equip_Lv1_C.ExecuteUbergraph_FXC_AK_Golem_Equip_Lv1 // (Final|UbergraphFunction) // @ game+0x1af5410
};

