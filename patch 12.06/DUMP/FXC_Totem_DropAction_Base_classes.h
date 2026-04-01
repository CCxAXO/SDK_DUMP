// BlueprintGeneratedClass FXC_Totem_DropAction_Base.FXC_Totem_DropAction_Base_C
// Size: 0x6c0 (Inherited: 0x6a0)
struct AFXC_Totem_DropAction_Base_C : AFXC_Totem_Inspect_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6a0(0x08)
	struct AActor* Projectile Class; // 0x6a8(0x08)
	struct FMulticastInlineDelegate DestroyLastActor; // 0x6b0(0x10)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Totem_DropAction_Base.FXC_Totem_DropAction_Base_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_Totem_DropAction_Base(int32_t EntryPoint); // Function FXC_Totem_DropAction_Base.FXC_Totem_DropAction_Base_C.ExecuteUbergraph_FXC_Totem_DropAction_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void DestroyLastActor__DelegateSignature(); // Function FXC_Totem_DropAction_Base.FXC_Totem_DropAction_Base_C.DestroyLastActor__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

