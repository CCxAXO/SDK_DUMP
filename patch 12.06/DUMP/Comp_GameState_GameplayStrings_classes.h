// BlueprintGeneratedClass Comp_GameState_GameplayStrings.Comp_GameState_GameplayStrings_C
// Size: 0x178 (Inherited: 0xd8)
struct UComp_GameState_GameplayStrings_C : UActorComponent {
	struct TMap<enum class ECalloutSuperRegion, struct FText> SuperRegionToText; // 0xd8(0x50)
	struct TMap<enum class NonVerbalCommTypesEnum, struct FText> NonVerbalCommTypeToChatText; // 0x128(0x50)

	void Get Chat Text for Non Verbal Enum(enum class NonVerbalCommTypesEnum& Key, struct FText& Value); // Function Comp_GameState_GameplayStrings.Comp_GameState_GameplayStrings_C.Get Chat Text for Non Verbal Enum // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetSuperRegionCalloutName(enum class ECalloutSuperRegion& SuperRegion, struct FText& SuperRegionName); // Function Comp_GameState_GameplayStrings.Comp_GameState_GameplayStrings_C.GetSuperRegionCalloutName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

