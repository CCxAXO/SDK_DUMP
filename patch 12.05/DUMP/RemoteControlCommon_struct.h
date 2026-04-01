// Enum RemoteControlCommon.ERCProtocolBinding
enum class ERCProtocolBinding : uint8 {
	Added = 0,
	Removed = 1,
	ERCProtocolBinding_MAX = 2
};

// Enum RemoteControlCommon.ERCMask
enum class ERCMask : uint8 {
	NoMask = 0,
	MaskA = 1,
	MaskB = 2,
	MaskC = 4,
	MaskD = 8,
	ERCMask_MAX = 9
};

// ScriptStruct RemoteControlCommon.RCPropertyContainerKey
// Size: 0x0c (Inherited: 0x00)
struct FRCPropertyContainerKey {
	struct FName ValueTypeName; // 0x00(0x0c)
};

// ScriptStruct RemoteControlCommon.RCNetworkAddress
// Size: 0x04 (Inherited: 0x00)
struct FRCNetworkAddress {
	char ClassA; // 0x00(0x01)
	char ClassB; // 0x01(0x01)
	char ClassC; // 0x02(0x01)
	char ClassD; // 0x03(0x01)
};

// ScriptStruct RemoteControlCommon.RCNetworkAddressRange
// Size: 0x08 (Inherited: 0x00)
struct FRCNetworkAddressRange {
	struct FRCNetworkAddress LowerBound; // 0x00(0x04)
	struct FRCNetworkAddress UpperBound; // 0x04(0x04)
};

// ScriptStruct RemoteControlCommon.RCPassphrase
// Size: 0x20 (Inherited: 0x00)
struct FRCPassphrase {
	struct FString Identifier; // 0x00(0x10)
	struct FString Passphrase; // 0x10(0x10)
};

