// BlueprintGeneratedClass VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C
// Size: 0x150 (Inherited: 0x90)
struct UVM_CustomGame_MapSelect_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UCustomGameModel* CustomGameModel; // 0x98(0x08)
	struct UMapDataAsset* MapData; // 0xa0(0x08)
	struct UTexture2D* MapIcon; // 0xa8(0x08)
	struct FText MapDisplayText; // 0xb0(0x18)
	struct FMulticastInlineDelegate OnMapDisplayTextChanged; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnMapIconChanged; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnMapDataChanged; // 0xe8(0x10)
	struct UPartyViewController* PartyViewController; // 0xf8(0x08)
	struct TMap<struct FString, struct UMapDataAsset*> MapOptionsForCurrentMode; // 0x100(0x50)

	void Refresh(); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RequestSetMap(struct FString MapKey); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.RequestSetMap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Map Valid with Mode(struct UMapDataAsset* MapDataAsset, struct UGameModeDataAsset* ModeDataAsset, bool& Result); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.Map Valid with Mode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void RefreshCurrentMap(); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.RefreshCurrentMap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshMapOptions(); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.RefreshMapOptions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPartyViewController(struct UPartyViewController* PartyViewController); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.SetPartyViewController // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetPartyViewController(struct UPartyViewController*& PartyViewController); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.GetPartyViewController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void BindCustomGameModel(bool Bind); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.BindCustomGameModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetMapDisplayName(struct FText DisplayText); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.SetMapDisplayName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetMapDisplayName(struct FText& DisplayText); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.GetMapDisplayName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetMapIcon(struct UTexture2D* Icon); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.SetMapIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetMapIcon(struct UTexture2D*& Icon); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.GetMapIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetMapData(struct UMapDataAsset* MapData); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.SetMapData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetMapData(struct UMapDataAsset*& NewParam); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.GetMapData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetCustomGameModel(struct UCustomGameModel*& CustomGameModel); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.GetCustomGameModel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void SetCustomGameModel(struct UCustomGameModel* Model); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.SetCustomGameModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelCreated(); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void HandleSelectedMapChanged(struct FString NewMapURL); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.HandleSelectedMapChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleModeChanged(struct FString NewMode); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.HandleModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshBroadcast(); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_CustomGame_MapSelect(int32_t EntryPoint); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.ExecuteUbergraph_VM_CustomGame_MapSelect // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnMapDataChanged__DelegateSignature(struct UMapDataAsset* DataAsset); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.OnMapDataChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMapIconChanged__DelegateSignature(struct UTexture2D* MapIcon); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.OnMapIconChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMapDisplayTextChanged__DelegateSignature(struct FText DisplayText); // Function VM_CustomGame_MapSelect.VM_CustomGame_MapSelect_C.OnMapDisplayTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

