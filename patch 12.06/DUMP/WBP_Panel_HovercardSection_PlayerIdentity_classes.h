// WidgetBlueprintGeneratedClass WBP_Panel_HovercardSection_PlayerIdentity.WBP_Panel_HovercardSection_PlayerIdentity_C
// Size: 0x430 (Inherited: 0x3e0)
struct UWBP_Panel_HovercardSection_PlayerIdentity_C : UWBP_Panel_HovercardSection_SocialPanelPlayer_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UVM_PlayerPrimaryIdentitySource_C* VM_PlayerPrimaryIdentitySource; // 0x3e8(0x08)
	struct USocialPanelPlayerNameIdentitySourceViewModel* SocialPanelPlayerNameIdentitySourceViewModel; // 0x3f0(0x08)
	struct UWBP_IdentitySourceIcon_C* WBP_IdentitySourceIcon; // 0x3f8(0x08)
	struct UWBP_Panel_PartyLeader_C* WBP_Panel_PartyLeader; // 0x400(0x08)
	struct UWBP_Panel_PlayerAccountLevel_C* WBP_Panel_PlayerAccountLevel; // 0x408(0x08)
	struct UWBP_Panel_PlayerCardImage_C* WBP_Panel_PlayerCardImage; // 0x410(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x418(0x08)
	struct UWBP_Panel_PlayerTitle_C* WBP_Panel_PlayerTitle; // 0x420(0x08)
	struct UWBP_Panel_SmallPlayerCardBorder_C* WBP_Panel_SmallPlayerCardBorder; // 0x428(0x08)

	void SetObservedPlayer(struct FString InPlayerSubject); // Function WBP_Panel_HovercardSection_PlayerIdentity.WBP_Panel_HovercardSection_PlayerIdentity_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPrimaryIdentitySourceChanged(enum class EAresIdentitySource InIdentitySource); // Function WBP_Panel_HovercardSection_PlayerIdentity.WBP_Panel_HovercardSection_PlayerIdentity_C.OnPrimaryIdentitySourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerNameIdentitySourceChanged(enum class EAresIdentitySource InIdentitySource); // Function WBP_Panel_HovercardSection_PlayerIdentity.WBP_Panel_HovercardSection_PlayerIdentity_C.OnPlayerNameIdentitySourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_HovercardSection_PlayerIdentity(int32_t EntryPoint); // Function WBP_Panel_HovercardSection_PlayerIdentity.WBP_Panel_HovercardSection_PlayerIdentity_C.ExecuteUbergraph_WBP_Panel_HovercardSection_PlayerIdentity // (Final|UbergraphFunction) // @ game+0x1b42740
};

