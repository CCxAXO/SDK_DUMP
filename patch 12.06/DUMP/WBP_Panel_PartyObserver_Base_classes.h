// WidgetBlueprintGeneratedClass WBP_Panel_PartyObserver_Base.WBP_Panel_PartyObserver_Base_C
// Size: 0x414 (Inherited: 0x3e0)
struct UWBP_Panel_PartyObserver_Base_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UVM_SocialPartyState_C* SocialPartyStateViewModel; // 0x3e8(0x08)
	struct FString PartyId; // 0x3f0(0x10)
	int32_t PreviewPartySize; // 0x400(0x04)
	enum class EAresSocialPartyAccessibility PreviewPartyAccessibility; // 0x404(0x01)
	enum class EAresSocialPartyCompatibility PreviewPartyCompatibility; // 0x405(0x01)
	char pad_406[0x2]; // 0x406(0x02)
	int32_t PreviewExcludedPartyMemberCount; // 0x408(0x04)
	bool bPreviewIsVisibleParty; // 0x40c(0x01)
	char pad_40D[0x3]; // 0x40d(0x03)
	int32_t PreviewMaxPartySize; // 0x410(0x04)

	void GetPartyCompatibility(enum class EAresSocialPartyCompatibility& PartyCompatibility); // Function WBP_Panel_PartyObserver_Base.WBP_Panel_PartyObserver_Base_C.GetPartyCompatibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetPartyId(struct FString PartyId); // Function WBP_Panel_PartyObserver_Base.WBP_Panel_PartyObserver_Base_C.SetPartyId // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PartyObserver_Base.WBP_Panel_PartyObserver_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_PartyObserver_Base.WBP_Panel_PartyObserver_Base_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandlePartySizeChanged(int32_t PartySize); // Function WBP_Panel_PartyObserver_Base.WBP_Panel_PartyObserver_Base_C.HandlePartySizeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleAccessibilityChanged(enum class EAresSocialPartyAccessibility PartyAccessibility); // Function WBP_Panel_PartyObserver_Base.WBP_Panel_PartyObserver_Base_C.HandleAccessibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleCompatibilityChanged(enum class EAresSocialPartyCompatibility PartyCompatibility); // Function WBP_Panel_PartyObserver_Base.WBP_Panel_PartyObserver_Base_C.HandleCompatibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleExcludedPartyMemberCountChanged(int32_t ExcludedPartyMemberCount); // Function WBP_Panel_PartyObserver_Base.WBP_Panel_PartyObserver_Base_C.HandleExcludedPartyMemberCountChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsVisiblePartyChanged(bool bIsVisibleParty); // Function WBP_Panel_PartyObserver_Base.WBP_Panel_PartyObserver_Base_C.HandleIsVisiblePartyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleMaxPartySizeChanged(int32_t MaxPartySize); // Function WBP_Panel_PartyObserver_Base.WBP_Panel_PartyObserver_Base_C.HandleMaxPartySizeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_PartyObserver_Base.WBP_Panel_PartyObserver_Base_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PartyObserver_Base(int32_t EntryPoint); // Function WBP_Panel_PartyObserver_Base.WBP_Panel_PartyObserver_Base_C.ExecuteUbergraph_WBP_Panel_PartyObserver_Base // (Final|UbergraphFunction) // @ game+0x1b42740
};

