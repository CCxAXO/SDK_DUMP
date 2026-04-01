// Class RGIMetrics.RGIMetricsRegistrySubsystem
// Size: 0x178 (Inherited: 0x38)
struct URGIMetricsRegistrySubsystem : UGameInstanceSubsystem {
	char pad_38[0x140]; // 0x38(0x140)

	void SetReplicatedMetricNames(struct FName& InSubsystemName, struct TArray<struct FName>& InMetricNames); // Function RGIMetrics.RGIMetricsRegistrySubsystem.SetReplicatedMetricNames // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x551b0d0
	struct TArray<struct FName> GetReplicatedMetricNames(struct FName& InSubsystemName); // Function RGIMetrics.RGIMetricsRegistrySubsystem.GetReplicatedMetricNames // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x551b2d0
	void CreateMetric(struct FName& Name); // Function RGIMetrics.RGIMetricsRegistrySubsystem.CreateMetric // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x551b440
	void ClearReplicatedMetricNames(struct FName& InSubsystemName); // Function RGIMetrics.RGIMetricsRegistrySubsystem.ClearReplicatedMetricNames // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x551afd0
	void AddSampleToMetric(struct FName& Name, double Value); // Function RGIMetrics.RGIMetricsRegistrySubsystem.AddSampleToMetric // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x551b590
};

// Class RGIMetrics.RGIMetricsReplicationComponent
// Size: 0xe8 (Inherited: 0xd8)
struct URGIMetricsReplicationComponent : UActorComponent {
	struct TArray<struct FRGINameEntry> ReplicatedMetricNames; // 0xd8(0x10)

	void ServerSetReplicatedMetricNames(struct TArray<struct FName> InMetricNames); // Function RGIMetrics.RGIMetricsReplicationComponent.ServerSetReplicatedMetricNames // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x55201b0
	void ServerFindMetricNamesWithRegex(struct TArray<struct FString> InStrings); // Function RGIMetrics.RGIMetricsReplicationComponent.ServerFindMetricNamesWithRegex // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x551feb0
	void ServerFindMetricNames(struct TArray<struct FString> InStrings); // Function RGIMetrics.RGIMetricsReplicationComponent.ServerFindMetricNames // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x551ffe0
	void ClientUpdateServerMetricsUnreliable(struct TArray<struct FRGIMetricReplicatedData> InMetrics); // Function RGIMetrics.RGIMetricsReplicationComponent.ClientUpdateServerMetricsUnreliable // (Final|Net|Native|Event|Private|NetClient) // @ game+0x551fbd0
	void ClientUpdateServerMetricsReliable(struct TArray<struct FRGIMetricReplicatedData> InMetrics); // Function RGIMetrics.RGIMetricsReplicationComponent.ClientUpdateServerMetricsReliable // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x551fbd0
	void ClientSendFoundMetricNames(struct TArray<struct FName> InNames); // Function RGIMetrics.RGIMetricsReplicationComponent.ClientSendFoundMetricNames // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x551fd00
};

// Class RGIMetrics.RGIMetricsReplicationSubsystem
// Size: 0xa8 (Inherited: 0x38)
struct URGIMetricsReplicationSubsystem : UGameInstanceSubsystem {
	char pad_38[0x70]; // 0x38(0x70)

	void HandlePawnControllerChanged(struct APawn* Pawn, struct AController* NewController); // Function RGIMetrics.RGIMetricsReplicationSubsystem.HandlePawnControllerChanged // (Final|Native|Private) // @ game+0x5521460
};

// Class RGIMetrics.RGIMetricsSettings
// Size: 0x80 (Inherited: 0x48)
struct URGIMetricsSettings : UDeveloperSettings {
	struct TSoftObjectPtr<UStringTable> MetricNameStringTableAsset; // 0x48(0x30)
	bool bUseReliableReplication; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)

	struct TArray<struct FName> GetMetricNames(); // Function RGIMetrics.RGIMetricsSettings.GetMetricNames // (Final|Native|Static|Public) // @ game+0x5522ab0
};

