// Enum BlueprintComponentReference.EBlueprintComponentReferenceMode
enum class EBlueprintComponentReferenceMode : uint8 {
	None = 0,
	Property = 1,
	Path = 2,
	EBlueprintComponentReferenceMode_MAX = 3
};

// Enum BlueprintComponentReference.EComponentSearchResult
enum class EComponentSearchResult : uint8 {
	Found = 0,
	NotFound = 1,
	EComponentSearchResult_MAX = 2
};

// ScriptStruct BlueprintComponentReference.BlueprintComponentReference
// Size: 0x10 (Inherited: 0x00)
struct FBlueprintComponentReference {
	enum class EBlueprintComponentReferenceMode Mode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Value; // 0x04(0x0c)
};

