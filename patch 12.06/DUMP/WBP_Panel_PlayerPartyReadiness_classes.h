// WidgetBlueprintGeneratedClass WBP_Panel_PlayerPartyReadiness.WBP_Panel_PlayerPartyReadiness_C
// Size: 0x443 (Inherited: 0x3e0)
struct UWBP_Panel_PlayerPartyReadiness_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* Text_Status; // 0x3e8(0x08)
	struct FText PreviewStatus; // 0x3f0(0x18)
	struct UCommonTextStyle* DefaultTextStyle; // 0x408(0x08)
	struct UVM_PlayerPartyReadiness_C* PlayerPartyReadinessViewModel; // 0x410(0x08)
	struct FString PlayerSubject; // 0x418(0x10)
	struct UCommonTextStyle* NotReadyTextStyle; // 0x428(0x08)
	struct UCommonTextStyle* OverrideTextStyle; // 0x430(0x08)
	struct UAresSocialPresenceColorSetDataAsset* PresenceColorSet; // 0x438(0x08)
	bool bTintDefaultTextStyle; // 0x440(0x01)
	enum class EAresSocialPresenceType PreviewPresenceType; // 0x441(0x01)
	bool bIsUsingDefaultTextStyle; // 0x442(0x01)

	void UpdateTextColor(enum class EAresSocialPresenceType PresenceType); // Function WBP_Panel_PlayerPartyReadiness.WBP_Panel_PlayerPartyReadiness_C.UpdateTextColor // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DeriveCurrentTextStyle(struct UCommonTextStyle*& OutTextStyle, bool& bIsDefault); // Function WBP_Panel_PlayerPartyReadiness.WBP_Panel_PlayerPartyReadiness_C.DeriveCurrentTextStyle // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplyTextStyle(); // Function WBP_Panel_PlayerPartyReadiness.WBP_Panel_PlayerPartyReadiness_C.ApplyTextStyle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetOverrideTextStyle(struct UCommonTextStyle* InOverrideTextStyle); // Function WBP_Panel_PlayerPartyReadiness.WBP_Panel_PlayerPartyReadiness_C.SetOverrideTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetObservedPlayer(struct FString PlayerSubject); // Function WBP_Panel_PlayerPartyReadiness.WBP_Panel_PlayerPartyReadiness_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PlayerPartyReadiness.WBP_Panel_PlayerPartyReadiness_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_PlayerPartyReadiness.WBP_Panel_PlayerPartyReadiness_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_PlayerPartyReadiness.WBP_Panel_PlayerPartyReadiness_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_PlayerPartyReadiness.WBP_Panel_PlayerPartyReadiness_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleIsReadyChanged(bool bIsReady); // Function WBP_Panel_PlayerPartyReadiness.WBP_Panel_PlayerPartyReadiness_C.HandleIsReadyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleReadyStatusTextChanged(struct FText CurrentPlayerTitle); // Function WBP_Panel_PlayerPartyReadiness.WBP_Panel_PlayerPartyReadiness_C.HandleReadyStatusTextChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleReadyPresenceTypeChanged(enum class EAresSocialPresenceType ReadyPresenceType); // Function WBP_Panel_PlayerPartyReadiness.WBP_Panel_PlayerPartyReadiness_C.HandleReadyPresenceTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PlayerPartyReadiness(int32_t EntryPoint); // Function WBP_Panel_PlayerPartyReadiness.WBP_Panel_PlayerPartyReadiness_C.ExecuteUbergraph_WBP_Panel_PlayerPartyReadiness // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

