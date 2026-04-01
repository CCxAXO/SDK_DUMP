// BlueprintGeneratedClass FXC_DS_Gun_ReloadEmptyNoOverheat.FXC_DS_Gun_ReloadEmptyNoOverheat_C
// Size: 0x720 (Inherited: 0x680)
struct AFXC_DS_Gun_ReloadEmptyNoOverheat_C : AFXC_Gun_Reload_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x680(0x08)
	double OverheatDuration; // 0x688(0x08)
	struct FTimerHandle OverheatTimerHandle; // 0x690(0x08)
	struct FExplicitFloatCurve OverheatAudioVolumeCurve; // 0x698(0x88)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_DS_Gun_ReloadEmptyNoOverheat.FXC_DS_Gun_ReloadEmptyNoOverheat_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_DS_Gun_ReloadEmptyNoOverheat(int32_t EntryPoint); // Function FXC_DS_Gun_ReloadEmptyNoOverheat.FXC_DS_Gun_ReloadEmptyNoOverheat_C.ExecuteUbergraph_FXC_DS_Gun_ReloadEmptyNoOverheat // (Final|UbergraphFunction) // @ game+0x1b42740
};

