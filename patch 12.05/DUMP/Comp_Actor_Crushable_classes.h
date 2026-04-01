// BlueprintGeneratedClass Comp_Actor_Crushable.Comp_Actor_Crushable_C
// Size: 0x130 (Inherited: 0xd8)
struct UComp_Actor_Crushable_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct FClassInclusionExclusionFilter CrushingActorFilter; // 0xe0(0x50)

	void AuthApplyCrushDamage(struct AActor* CrushingObject, double DamageAmount); // Function Comp_Actor_Crushable.Comp_Actor_Crushable_C.AuthApplyCrushDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_Actor_Crushable(int32_t EntryPoint); // Function Comp_Actor_Crushable.Comp_Actor_Crushable_C.ExecuteUbergraph_Comp_Actor_Crushable // (Final|UbergraphFunction) // @ game+0x1af5410
};

