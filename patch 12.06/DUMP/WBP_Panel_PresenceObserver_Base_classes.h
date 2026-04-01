// WidgetBlueprintGeneratedClass WBP_Panel_PresenceObserver_Base.WBP_Panel_PresenceObserver_Base_C
// Size: 0x410 (Inherited: 0x3e0)
struct UWBP_Panel_PresenceObserver_Base_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UVM_PlayerPresence_C* ViewModel; // 0x3e8(0x08)
	struct FString PlayerSubject; // 0x3f0(0x10)
	bool bUsePartyOverrideColor; // 0x400(0x01)
	enum class EAresSocialPresenceType DesignTimePresence; // 0x401(0x01)
	char pad_402[0x6]; // 0x402(0x06)
	struct UAresSocialPresenceColorSetDataAsset* PresenceColorSet; // 0x408(0x08)

	void GetPreviewPresenceState(struct FAresSocialPresenceState& PresenceState); // Function WBP_Panel_PresenceObserver_Base.WBP_Panel_PresenceObserver_Base_C.GetPreviewPresenceState // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetObservedPlayer(struct FString PlayerSubject); // Function WBP_Panel_PresenceObserver_Base.WBP_Panel_PresenceObserver_Base_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MakeViewModel(struct UVM_PlayerPresence_C*& ViewModel); // Function WBP_Panel_PresenceObserver_Base.WBP_Panel_PresenceObserver_Base_C.MakeViewModel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PresenceObserver_Base.WBP_Panel_PresenceObserver_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_PresenceObserver_Base.WBP_Panel_PresenceObserver_Base_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandlePresenceStateChanged(); // Function WBP_Panel_PresenceObserver_Base.WBP_Panel_PresenceObserver_Base_C.HandlePresenceStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplyDesignTimePreview(); // Function WBP_Panel_PresenceObserver_Base.WBP_Panel_PresenceObserver_Base_C.ApplyDesignTimePreview // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PresenceObserver_Base(int32_t EntryPoint); // Function WBP_Panel_PresenceObserver_Base.WBP_Panel_PresenceObserver_Base_C.ExecuteUbergraph_WBP_Panel_PresenceObserver_Base // (Final|UbergraphFunction) // @ game+0x1b42740
};

