// BlueprintGeneratedClass VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C
// Size: 0x158 (Inherited: 0x90)
struct UVM_Lobby_ServerSelect_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UCustomGameModel* CustomGameModel; // 0x98(0x08)
	struct UPartyModel* PartyModel; // 0xa0(0x08)
	struct FString GamePodText; // 0xa8(0x10)
	struct FMulticastInlineDelegate GamePodTextChanged; // 0xb8(0x10)
	struct UMaterialInstance* PingMaterial; // 0xc8(0x08)
	struct FMulticastInlineDelegate PingMaterialChanged; // 0xd0(0x10)
	struct UVM_Ping_C* PingVM; // 0xe0(0x08)
	struct FMulticastInlineDelegate GamePodOptionsChanged; // 0xe8(0x10)
	struct TArray<struct FString> GamePodNames; // 0xf8(0x10)
	struct TMap<struct FString, struct FString> GamePodNameToID; // 0x108(0x50)

	void HandleSelectGamepodByName(struct FString InGamePodName); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.HandleSelectGamepodByName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetGamePodOptions(struct TArray<struct FString>& InGamePods); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.SetGamePodOptions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InternalRefreshBroadcast(); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.InternalRefreshBroadcast // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePingMaterialChanged(struct UMaterialInstanceDynamic* PingMaterial); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.HandlePingMaterialChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindPingViewModel(struct UVM_Ping_C* PingVM); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.BindPingViewModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitPingViewModel(); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.InitPingViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateMatchmadeGamePods(struct TMap<struct FString, bool> PreferredGamepopds); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.UpdateMatchmadeGamePods // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPingMaterial(struct UMaterialInstance* PingMaterial); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.SetPingMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePartyStateChanged(enum class EPartyViewState PartyState); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.HandlePartyStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetMatchmadeGamepodText(struct TMap<struct FString, bool> PreferredGamePods, struct FString& GamePodText); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.GetMatchmadeGamepodText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePreferredGamePodsChanged(struct FPreferredGamePodMap PreferredGamePods); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.HandlePreferredGamePodsChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindPartyModel(struct UPartyModel* PartyModel); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.BindPartyModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshGamePodsSelection(bool IsCustom); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.RefreshGamePodsSelection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetGamePodText(struct FString GamePodText); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.SetGamePodText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleCustomGamePodChanged(struct FString NewValue); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.HandleCustomGamePodChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleGamepodPingsChanged(struct TArray<struct FStruct_GamepodPingOptionInfo>& GamepodPingInfo); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.HandleGamepodPingsChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindCustomGameModel(struct UCustomGameModel* CustomGameModel); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.BindCustomGameModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPartyModel(struct UPartyModel* PartyModel); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.SetPartyModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCustomGameModel(struct UCustomGameModel* Model); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.SetCustomGameModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_Lobby_ServerSelect(int32_t EntryPoint); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.ExecuteUbergraph_VM_Lobby_ServerSelect // (Final|UbergraphFunction) // @ game+0x1b42740
	void GamePodOptionsChanged__DelegateSignature(struct TArray<struct FString>& GamePods); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.GamePodOptionsChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PingMaterialChanged__DelegateSignature(struct UMaterialInstance* PingMaterial); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.PingMaterialChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GamePodTextChanged__DelegateSignature(struct FString GamePodText); // Function VM_Lobby_ServerSelect.VM_Lobby_ServerSelect_C.GamePodTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

