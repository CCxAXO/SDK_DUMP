// BlueprintGeneratedClass FXC_Revolver_Inspect.FXC_Revolver_Inspect_C
// Size: 0x681 (Inherited: 0x672)
struct AFXC_Revolver_Inspect_C : AFXC_Gun_Emote_C {
	char pad_672[0x6]; // 0x672(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x678(0x08)
	bool KeepCylinderRotation; // 0x680(0x01)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Revolver_Inspect.FXC_Revolver_Inspect_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_Revolver_Inspect(int32_t EntryPoint); // Function FXC_Revolver_Inspect.FXC_Revolver_Inspect_C.ExecuteUbergraph_FXC_Revolver_Inspect // (Final|UbergraphFunction) // @ game+0x1b42740
};

