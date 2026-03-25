// BlueprintGeneratedClass FXC_RevolverPistol_Reload.FXC_RevolverPistol_Reload_C
// Size: 0x679 (Inherited: 0x670)
struct AFXC_RevolverPistol_Reload_C : AFXC_Gun_Reload_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x670(0x08)
	bool KeepCylinderRotation; // 0x678(0x01)

	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_RevolverPistol_Reload.FXC_RevolverPistol_Reload_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_RevolverPistol_Reload.FXC_RevolverPistol_Reload_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_RevolverPistol_Reload(int32_t EntryPoint); // Function FXC_RevolverPistol_Reload.FXC_RevolverPistol_Reload_C.ExecuteUbergraph_FXC_RevolverPistol_Reload // (Final|UbergraphFunction) // @ game+0x1af5410
};

