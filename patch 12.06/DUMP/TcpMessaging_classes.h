// Class TcpMessaging.TcpMessagingSettings
// Size: 0x68 (Inherited: 0x30)
struct UTcpMessagingSettings : UObject {
	bool EnableTransport; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString ListenEndpoint; // 0x38(0x10)
	struct TArray<struct FString> ConnectToEndpoints; // 0x48(0x10)
	int32_t ConnectionRetryDelay; // 0x58(0x04)
	int32_t ConnectionRetryPeriod; // 0x5c(0x04)
	bool bStopServiceWhenAppDeactivates; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

