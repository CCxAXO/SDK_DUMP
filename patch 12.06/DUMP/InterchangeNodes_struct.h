// Enum InterchangeNodes.EInterchangeAnimationPayLoadType
enum class EInterchangeAnimationPayLoadType : uint8 {
	NONE = 0,
	CURVE = 1,
	MORPHTARGETCURVE = 2,
	STEPCURVE = 3,
	BAKED = 4,
	MORPHTARGETCURVEWEIGHTINSTANCE = 5,
	EInterchangeAnimationPayLoadType_MAX = 6
};

// Enum InterchangeNodes.EInterchangeAnimatedProperty
enum class EInterchangeAnimatedProperty : uint8 {
	None = 0,
	Visibility = 1,
	MAX = 2
};

// Enum InterchangeNodes.EInterchangeCameraProjectionType
enum class EInterchangeCameraProjectionType : uint8 {
	Perspective = 0,
	Orthographic = 1,
	EInterchangeCameraProjectionType_MAX = 2
};

// Enum InterchangeNodes.EInterchangeLightUnits
enum class EInterchangeLightUnits : uint8 {
	Unitless = 0,
	Candelas = 1,
	Lumens = 2,
	EV = 3,
	EInterchangeLightUnits_MAX = 4
};

// Enum InterchangeNodes.EInterchangeTextureWrapMode
enum class EInterchangeTextureWrapMode : uint8 {
	Wrap = 0,
	Clamp = 1,
	Mirror = 2,
	EInterchangeTextureWrapMode_MAX = 3
};

// Enum InterchangeNodes.EInterchangeTextureFilterMode
enum class EInterchangeTextureFilterMode : uint8 {
	Nearest = 0,
	Bilinear = 1,
	Trilinear = 2,
	Default = 3,
	EInterchangeTextureFilterMode_MAX = 4
};

// Enum InterchangeNodes.EInterchangeMeshPayLoadType
enum class EInterchangeMeshPayLoadType : uint8 {
	NONE = 0,
	STATIC = 1,
	SKELETAL = 2,
	MORPHTARGET = 3,
	EInterchangeMeshPayLoadType_MAX = 4
};

// ScriptStruct InterchangeNodes.InterchangeAnimationPayLoadKey
// Size: 0x18 (Inherited: 0x00)
struct FInterchangeAnimationPayLoadKey {
	struct FString UniqueId; // 0x00(0x10)
	enum class EInterchangeAnimationPayLoadType Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct InterchangeNodes.InterchangeMeshPayLoadKey
// Size: 0x18 (Inherited: 0x00)
struct FInterchangeMeshPayLoadKey {
	struct FString UniqueId; // 0x00(0x10)
	enum class EInterchangeMeshPayLoadType Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

