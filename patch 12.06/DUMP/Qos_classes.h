// Class Qos.QosBeaconClient
// Size: 0x530 (Inherited: 0x4f8)
struct AQosBeaconClient : AOnlineBeaconClient {
	char pad_4F8[0x38]; // 0x4f8(0x38)

	void ServerQosRequest(struct FString InSessionId); // Function Qos.QosBeaconClient.ServerQosRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x6f3e160
	void ClientQosResponse(enum class EQosResponseType Response); // Function Qos.QosBeaconClient.ClientQosResponse // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x6f3e060
};

// Class Qos.QosBeaconHost
// Size: 0x498 (Inherited: 0x488)
struct AQosBeaconHost : AOnlineBeaconHostObject {
	char pad_488[0x10]; // 0x488(0x10)
};

// Class Qos.QosEvaluator
// Size: 0x88 (Inherited: 0x30)
struct UQosEvaluator : UObject {
	char pad_30[0x20]; // 0x30(0x20)
	bool bInProgress; // 0x50(0x01)
	bool bCancelOperation; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct TArray<struct FDatacenterQosInstance> Datacenters; // 0x58(0x10)
	char pad_68[0x20]; // 0x68(0x20)
};

// Class Qos.QosRegionManager
// Size: 0x100 (Inherited: 0x30)
struct UQosRegionManager : UObject {
	int32_t NumTestsPerRegion; // 0x30(0x04)
	float PingTimeout; // 0x34(0x04)
	bool bEnableSubspaceBiasOrder; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString SubspaceDelimiter; // 0x40(0x10)
	struct TArray<struct FQosRegionInfo> RegionDefinitions; // 0x50(0x10)
	struct TArray<struct FQosDatacenterInfo> DatacenterDefinitions; // 0x60(0x10)
	struct FDateTime LastCheckTimestamp; // 0x70(0x08)
	struct UQosEvaluator* Evaluator; // 0x78(0x08)
	enum class EQosCompletionResult QosEvalResult; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TArray<struct FRegionQosInstance> RegionOptions; // 0x88(0x10)
	struct FString ForceRegionId; // 0x98(0x10)
	bool bRegionForcedViaCommandline; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FString SelectedRegionId; // 0xb0(0x10)
	char pad_C0[0x40]; // 0xc0(0x40)
};

