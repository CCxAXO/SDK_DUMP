// BlueprintGeneratedClass VM_Ping.VM_Ping_C
// Size: 0x220 (Inherited: 0xd0)
struct UVM_Ping_C : UPingViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct TArray<struct FStruct_GamepodPingOptionInfo> GamepodPingInfo; // 0xd8(0x10)
	struct UMaterialInstanceDynamic* MIDPing; // 0xe8(0x08)
	int32_t Ping; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FMulticastInlineDelegate OnGamepodPingsChanged; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnPingValueChanged; // 0x108(0x10)
	struct UMaterialInstance* MatPingParent; // 0x118(0x08)
	struct FMulticastInlineDelegate OnPingMaterialChanged; // 0x120(0x10)
	struct TMap<enum class PartyPingStatus, struct FLinearColor> PartyPingStatusToPingQualitiesMap; // 0x130(0x50)
	struct TMap<struct FString, bool> PreferredGamePods; // 0x180(0x50)
	struct TMap<enum class PartyPingStatus, enum class EPingQuality> PartyPingToPingQualityMap; // 0x1d0(0x50)

	void CreateGamepodPingMaterial(int32_t Ping, struct UMaterialInstanceDynamic*& PingMaterialInstance); // Function VM_Ping.VM_Ping_C.CreateGamepodPingMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	enum class EPingQuality GetPingQuality(int32_t PingValue); // Function VM_Ping.VM_Ping_C.GetPingQuality // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetGamePodQualities(struct FLinearColor NewGamePodQualities); // Function VM_Ping.VM_Ping_C.SetGamePodQualities // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void LoadGamepodPings(); // Function VM_Ping.VM_Ping_C.LoadGamepodPings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModel(); // Function VM_Ping.VM_Ping_C.InitViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateGamepodPingInfos(struct TArray<struct FPingInfo>& PingInfo, struct TArray<struct FStruct_GamepodPingOptionInfo>& GamepodPingInfo); // Function VM_Ping.VM_Ping_C.CreateGamepodPingInfos // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetOKPingIconColors(struct FLinearColor Color, struct UMaterialInstanceDynamic*& PingMaterialInstance); // Function VM_Ping.VM_Ping_C.SetOKPingIconColors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetNoPingIconColors(struct UMaterialInstanceDynamic*& PingMaterialInstance); // Function VM_Ping.VM_Ping_C.SetNoPingIconColors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetGoodPingIconColors(struct FLinearColor Color, struct UMaterialInstanceDynamic*& PingMaterialInstance); // Function VM_Ping.VM_Ping_C.SetGoodPingIconColors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetGreatPingIconColors(struct FLinearColor Color, struct UMaterialInstanceDynamic*& PingMaterialInstance); // Function VM_Ping.VM_Ping_C.SetGreatPingIconColors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBadPingIconColors(struct FLinearColor Color, struct UMaterialInstanceDynamic*& PingMaterialInstance); // Function VM_Ping.VM_Ping_C.SetBadPingIconColors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CalculatePingMaterialColor(int32_t Ping, struct UMaterialInstanceDynamic*& PingMaterialInstance); // Function VM_Ping.VM_Ping_C.CalculatePingMaterialColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPingMaterialTemplate(struct UMaterialInstance* Material); // Function VM_Ping.VM_Ping_C.SetPingMaterialTemplate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPingMaterial(struct UMaterialInstanceDynamic* Material Instance); // Function VM_Ping.VM_Ping_C.SetPingMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPingValue(int32_t InPing); // Function VM_Ping.VM_Ping_C.SetPingValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetGamepodPings(struct TArray<struct FStruct_GamepodPingOptionInfo>& GamepodPingOptionInfo); // Function VM_Ping.VM_Ping_C.SetGamepodPings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePreferredGamepodClicked(struct FString GamePodID, bool IsSelected); // Function VM_Ping.VM_Ping_C.HandlePreferredGamepodClicked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetPingValue(int32_t& Ping); // Function VM_Ping.VM_Ping_C.GetPingValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetPingMaterial(struct UMaterialInstanceDynamic*& MIDPing); // Function VM_Ping.VM_Ping_C.GetPingMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void OnModelGamePodsChanged(struct FLinearColor NewGamePodQualities); // Function VM_Ping.VM_Ping_C.OnModelGamePodsChanged // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelCreated(); // Function VM_Ping.VM_Ping_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnModelPingChanged(int32_t NewPing); // Function VM_Ping.VM_Ping_C.OnModelPingChanged // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_Ping(int32_t EntryPoint); // Function VM_Ping.VM_Ping_C.ExecuteUbergraph_VM_Ping // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnGamepodPingsChanged__DelegateSignature(struct TArray<struct FStruct_GamepodPingOptionInfo>& GamepodPingInfo); // Function VM_Ping.VM_Ping_C.OnGamepodPingsChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPingMaterialChanged__DelegateSignature(struct UMaterialInstanceDynamic* PingMaterial); // Function VM_Ping.VM_Ping_C.OnPingMaterialChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPingValueChanged__DelegateSignature(int32_t Value); // Function VM_Ping.VM_Ping_C.OnPingValueChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

