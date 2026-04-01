// BlueprintGeneratedClass Comp_FXC_PlayAnimation_Gun_CycleZoom.Comp_FXC_PlayAnimation_Gun_CycleZoom_C
// Size: 0x118 (Inherited: 0xe8)
struct UComp_FXC_PlayAnimation_Gun_CycleZoom_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct AGun_Zoomable_C* OwningGun; // 0xf0(0x08)
	struct UAnimMontage* ZoomIn_1P_Anim; // 0xf8(0x08)
	struct UAnimMontage* ZoomOut_1P_Anim; // 0x100(0x08)
	struct UAnimMontage* ZoomIn_3P_Anim; // 0x108(0x08)
	struct UAnimMontage* ZoomOut_3P_Anim; // 0x110(0x08)

	void SelectAndPlayMontage(bool IsZoomed, bool Is1P); // Function Comp_FXC_PlayAnimation_Gun_CycleZoom.Comp_FXC_PlayAnimation_Gun_CycleZoom_C.SelectAndPlayMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_PlayAnimation_Gun_CycleZoom.Comp_FXC_PlayAnimation_Gun_CycleZoom_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_FXC_PlayAnimation_Gun_CycleZoom(int32_t EntryPoint); // Function Comp_FXC_PlayAnimation_Gun_CycleZoom.Comp_FXC_PlayAnimation_Gun_CycleZoom_C.ExecuteUbergraph_Comp_FXC_PlayAnimation_Gun_CycleZoom // (Final|UbergraphFunction) // @ game+0x1af5410
};

