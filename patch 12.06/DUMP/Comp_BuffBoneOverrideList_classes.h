// BlueprintGeneratedClass Comp_BuffBoneOverrideList.Comp_BuffBoneOverrideList_C
// Size: 0x128 (Inherited: 0xd8)
struct UComp_BuffBoneOverrideList_C : UActorComponent {
	struct TMap<struct FGameplayTag, struct FName> BoneOverrideMap; // 0xd8(0x50)

	void GetBoneOverride(struct FGameplayTag BuffTag, struct FName DefaultName, struct FName& BoneName); // Function Comp_BuffBoneOverrideList.Comp_BuffBoneOverrideList_C.GetBoneOverride // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

