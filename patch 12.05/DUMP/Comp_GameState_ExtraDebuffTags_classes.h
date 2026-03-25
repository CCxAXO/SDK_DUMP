// BlueprintGeneratedClass Comp_GameState_ExtraDebuffTags.Comp_GameState_ExtraDebuffTags_C
// Size: 0x190 (Inherited: 0xd8)
struct UComp_GameState_ExtraDebuffTags_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct TArray<struct FStruct_GameplayTagAndHUD_Info> HUDTrackedTags; // 0xe0(0x10)
	struct TMap<struct FGameplayTag, struct AEffectContainer*> VisualsTrackedTagAndFXC; // 0xf0(0x50)
	struct TMap<struct FGameplayTag, struct FName> VisualsTrackedTagAndName; // 0x140(0x50)

	void ReceiveBeginPlay(); // Function Comp_GameState_ExtraDebuffTags.Comp_GameState_ExtraDebuffTags_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_GameState_ExtraDebuffTags(int32_t EntryPoint); // Function Comp_GameState_ExtraDebuffTags.Comp_GameState_ExtraDebuffTags_C.ExecuteUbergraph_Comp_GameState_ExtraDebuffTags // (Final|UbergraphFunction) // @ game+0x1af5410
};

