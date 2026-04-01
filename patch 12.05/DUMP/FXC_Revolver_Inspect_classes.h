// BlueprintGeneratedClass FXC_Revolver_Inspect.FXC_Revolver_Inspect_C
// Size: 0x671 (Inherited: 0x662)
struct AFXC_Revolver_Inspect_C : AFXC_Gun_Emote_C {
	char pad_662[0x6]; // 0x662(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x668(0x08)
	bool KeepCylinderRotation; // 0x670(0x01)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Revolver_Inspect.FXC_Revolver_Inspect_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_Revolver_Inspect(int32_t EntryPoint); // Function FXC_Revolver_Inspect.FXC_Revolver_Inspect_C.ExecuteUbergraph_FXC_Revolver_Inspect // (Final|UbergraphFunction) // @ game+0x1af5410
};

