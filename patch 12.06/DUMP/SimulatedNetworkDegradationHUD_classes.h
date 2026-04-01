// WidgetBlueprintGeneratedClass SimulatedNetworkDegradationHUD.SimulatedNetworkDegradationHUD_C
// Size: 0x3b8 (Inherited: 0x330)
struct USimulatedNetworkDegradationHUD_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UTextBlock* AddedLagValue; // 0x338(0x08)
	struct UTextBlock* BaselinePacketLossValue; // 0x340(0x08)
	struct UTextBlock* BurstDurationValue; // 0x348(0x08)
	struct UVerticalBox* BurstLossDetails; // 0x350(0x08)
	struct UTextBlock* BurstLossEnabledValue; // 0x358(0x08)
	struct UTextBlock* BurstPercentageValue; // 0x360(0x08)
	struct UTextBlock* BurstPeriodValue; // 0x368(0x08)
	struct UImage* Image_1; // 0x370(0x08)
	struct UImage* Image_244; // 0x378(0x08)
	struct UImage* Image_246; // 0x380(0x08)
	struct UImage* Image_247; // 0x388(0x08)
	struct UTextBlock* LagVarianceValue; // 0x390(0x08)
	struct UCanvasPanel* NetworkSimulationCanvas; // 0x398(0x08)
	struct UTextBlock* PresetNameValue; // 0x3a0(0x08)
	struct UVerticalBox* SimulatedNetworkDegradationPanel; // 0x3a8(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x3b0(0x08)

	void UpdateBurstLossInfo(struct FBurstPacketLossSettings Burst Loss Settings); // Function SimulatedNetworkDegradationHUD.SimulatedNetworkDegradationHUD_C.UpdateBurstLossInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBurstLossSimulationChanged(bool IsBurstLossActive, struct FBurstPacketLossSettings Burst Loss Settings); // Function SimulatedNetworkDegradationHUD.SimulatedNetworkDegradationHUD_C.OnBurstLossSimulationChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateDegradedNetworkInfo(struct FNetworkDegradationSettings NetworkSettings, struct FString PresetName); // Function SimulatedNetworkDegradationHUD.SimulatedNetworkDegradationHUD_C.UpdateDegradedNetworkInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function SimulatedNetworkDegradationHUD.SimulatedNetworkDegradationHUD_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SimulatingBurstLossChanged(struct UAresNetDriver* AresNetDriver, bool bIsSimulatingBurstLoss); // Function SimulatedNetworkDegradationHUD.SimulatedNetworkDegradationHUD_C.SimulatingBurstLossChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SimulatedNetworkDegradationChanged(struct UAresNetDriver* AresNetDriver, bool bEnabled, struct FString PresetName); // Function SimulatedNetworkDegradationHUD.SimulatedNetworkDegradationHUD_C.SimulatedNetworkDegradationChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SimulatedNetworkDegradationHUD(int32_t EntryPoint); // Function SimulatedNetworkDegradationHUD.SimulatedNetworkDegradationHUD_C.ExecuteUbergraph_SimulatedNetworkDegradationHUD // (Final|UbergraphFunction) // @ game+0x1b42740
};

