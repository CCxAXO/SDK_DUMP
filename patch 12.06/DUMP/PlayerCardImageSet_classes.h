// BlueprintGeneratedClass PlayerCardImageSet.PlayerCardImageSet_C
// Size: 0xb0 (Inherited: 0x50)
struct UPlayerCardImageSet_C : UAresBasePrimaryDataAsset {
	struct FPlayerCardImageDefinition SmallImage; // 0x50(0x20)
	struct FPlayerCardImageDefinition WideImage; // 0x70(0x20)
	struct FPlayerCardImageDefinition LargeImage; // 0x90(0x20)

	void GetCardImageDefinition(enum class EPlayerCardImageType ImageType, struct FPlayerCardImageDefinition& Image Definition); // Function PlayerCardImageSet.PlayerCardImageSet_C.GetCardImageDefinition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
};

