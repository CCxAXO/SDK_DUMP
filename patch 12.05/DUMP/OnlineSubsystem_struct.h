// Enum OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8 {
	Unknown = 0,
	Success = 1,
	Failed = 2,
	Cancelled = 3,
	Invalid = 4,
	NotAllowed = 5,
	Restored = 6,
	AlreadyOwned = 7,
	EInAppPurchaseState_MAX = 8
};

// Enum OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8 {
	None = 0,
	Quit = 1,
	Won = 2,
	Lost = 3,
	Tied = 4,
	TimeExpired = 5,
	First = 6,
	Second = 7,
	Third = 8,
	Fourth = 9,
	EMPMatchOutcome_MAX = 10
};

// ScriptStruct OnlineSubsystem.NamedInterface
// Size: 0x18 (Inherited: 0x00)
struct FNamedInterface {
	struct FName InterfaceName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UObject* InterfaceObject; // 0x10(0x08)
};

// ScriptStruct OnlineSubsystem.NamedInterfaceDef
// Size: 0x20 (Inherited: 0x00)
struct FNamedInterfaceDef {
	struct FName InterfaceName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString InterfaceClassName; // 0x10(0x10)
};

