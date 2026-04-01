// Class DataflowCore.DataflowSettings
// Size: 0xf0 (Inherited: 0x48)
struct UDataflowSettings : UDeveloperSettings {
	struct FLinearColor ArrayPinTypeColor; // 0x48(0x10)
	struct FLinearColor ManagedArrayCollectionPinTypeColor; // 0x58(0x10)
	struct FLinearColor BoxPinTypeColor; // 0x68(0x10)
	struct FLinearColor SpherePinTypeColor; // 0x78(0x10)
	struct TMap<struct FName, struct FNodeColors> NodeColorsMap; // 0x88(0x50)
	char pad_D8[0x18]; // 0xd8(0x18)
};

