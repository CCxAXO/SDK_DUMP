// BlueprintGeneratedClass ThrottledMapPingComponent.ThrottledMapPingComponent_C
// Size: 0x148 (Inherited: 0xe8)
struct UThrottledMapPingComponent_C : UMapPingComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	double NearbyPingClearDistance; // 0xf0(0x08)
	struct TMap<int32_t, enum class NonVerbalCommTypesEnum> SelectedPingToCommStringMap; // 0xf8(0x50)

	bool ShouldCallTryConsumeBroadcastPing(struct FMapPingData PingData, struct FVector Location, struct TArray<struct FActivePingData>& ActivePings); // Function ThrottledMapPingComponent.ThrottledMapPingComponent_C.ShouldCallTryConsumeBroadcastPing // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool ValidateNewPing(struct FMapPingData& PingData, struct FVector& Location, struct TArray<struct FActivePingData>& ActivePings, struct FEffectData& NewPingEffectData); // Function ThrottledMapPingComponent.ThrottledMapPingComponent_C.ValidateNewPing // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnNewPing(enum class EMapPingType PingType, int32_t PingIndex, struct FVector& Location); // Function ThrottledMapPingComponent.ThrottledMapPingComponent_C.OnNewPing // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ThrottledMapPingComponent(int32_t EntryPoint); // Function ThrottledMapPingComponent.ThrottledMapPingComponent_C.ExecuteUbergraph_ThrottledMapPingComponent // (Final|UbergraphFunction) // @ game+0x1b42740
};

