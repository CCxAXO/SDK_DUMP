// WidgetBlueprintGeneratedClass WBP_Panel_PlayerCard_Base.WBP_Panel_PlayerCard_Base_C
// Size: 0x410 (Inherited: 0x3e0)
struct UWBP_Panel_PlayerCard_Base_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	bool bShowPlayerCardImage; // 0x3e8(0x01)
	bool bIsLocalPlayer; // 0x3e9(0x01)
	bool bIsVisuallyFocused; // 0x3ea(0x01)
	bool bHasValidPresence; // 0x3eb(0x01)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct FString CurrentPlayerSubject; // 0x3f0(0x10)
	struct UVM_IsLocalPlayer_C* IsLocalPlayerViewModel; // 0x400(0x08)
	struct UVM_PlayerHasValidPresence_C* HasValidPresenceViewModel; // 0x408(0x08)

	void MakeViewModels(); // Function WBP_Panel_PlayerCard_Base.WBP_Panel_PlayerCard_Base_C.MakeViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHasValidPresence(bool bHasValidPresence); // Function WBP_Panel_PlayerCard_Base.WBP_Panel_PlayerCard_Base_C.SetHasValidPresence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleHasValidPresenceChanged(bool bHasValidPresence); // Function WBP_Panel_PlayerCard_Base.WBP_Panel_PlayerCard_Base_C.HandleHasValidPresenceChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsLocalPlayerChanged(bool bIsLocalPlayer); // Function WBP_Panel_PlayerCard_Base.WBP_Panel_PlayerCard_Base_C.HandleIsLocalPlayerChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetPlayerSubject(struct FString& PlayerSubject); // Function WBP_Panel_PlayerCard_Base.WBP_Panel_PlayerCard_Base_C.GetPlayerSubject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void SetIsVisuallyFocused(bool bIsVisuallyFocused); // Function WBP_Panel_PlayerCard_Base.WBP_Panel_PlayerCard_Base_C.SetIsVisuallyFocused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetShowPlayerCardImage(bool bShowPlayerCardImage); // Function WBP_Panel_PlayerCard_Base.WBP_Panel_PlayerCard_Base_C.SetShowPlayerCardImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsLocalPlayer(bool bIsLocalPlayer); // Function WBP_Panel_PlayerCard_Base.WBP_Panel_PlayerCard_Base_C.SetIsLocalPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPlayerSubject(struct FString PlayerSubject); // Function WBP_Panel_PlayerCard_Base.WBP_Panel_PlayerCard_Base_C.SetPlayerSubject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindViewModelEvents(bool bDoBind); // Function WBP_Panel_PlayerCard_Base.WBP_Panel_PlayerCard_Base_C.BindViewModelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PlayerCard_Base.WBP_Panel_PlayerCard_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_PlayerCard_Base.WBP_Panel_PlayerCard_Base_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_PlayerCard_Base.WBP_Panel_PlayerCard_Base_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_PlayerCard_Base(int32_t EntryPoint); // Function WBP_Panel_PlayerCard_Base.WBP_Panel_PlayerCard_Base_C.ExecuteUbergraph_WBP_Panel_PlayerCard_Base // (Final|UbergraphFunction) // @ game+0x1af5410
};

