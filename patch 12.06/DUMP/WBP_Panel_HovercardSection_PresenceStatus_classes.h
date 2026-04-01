// WidgetBlueprintGeneratedClass WBP_Panel_HovercardSection_PresenceStatus.WBP_Panel_HovercardSection_PresenceStatus_C
// Size: 0x400 (Inherited: 0x3e0)
struct UWBP_Panel_HovercardSection_PresenceStatus_C : UWBP_Panel_HovercardSection_SocialPanelPlayer_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct USocialPanelPlayerNameIdentitySourceViewModel* SocialPanelPlayerNameIdentitySourceViewModel; // 0x3e8(0x08)
	struct UWBP_Panel_PresenceStatusDot_C* WBP_Panel_PresenceStatusDot; // 0x3f0(0x08)
	struct UWBP_Panel_PresenceStatusText_C* WBP_Panel_PresenceStatusText; // 0x3f8(0x08)

	void SetObservedPlayer(struct FString InPlayerSubject); // Function WBP_Panel_HovercardSection_PresenceStatus.WBP_Panel_HovercardSection_PresenceStatus_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerNameIdentitySourceChanged(enum class EAresIdentitySource InIdentitySource); // Function WBP_Panel_HovercardSection_PresenceStatus.WBP_Panel_HovercardSection_PresenceStatus_C.OnPlayerNameIdentitySourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_HovercardSection_PresenceStatus(int32_t EntryPoint); // Function WBP_Panel_HovercardSection_PresenceStatus.WBP_Panel_HovercardSection_PresenceStatus_C.ExecuteUbergraph_WBP_Panel_HovercardSection_PresenceStatus // (Final|UbergraphFunction) // @ game+0x1b42740
};

