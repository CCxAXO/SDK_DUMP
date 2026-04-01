// WidgetBlueprintGeneratedClass WBP_Panel_HovercardRow_PlayerName.WBP_Panel_HovercardRow_PlayerName_C
// Size: 0x411 (Inherited: 0x3e0)
struct UWBP_Panel_HovercardRow_PlayerName_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UVM_PlayerDisplayableIdentity_C* VM_PlayerDisplayableIdentity; // 0x3e8(0x08)
	struct USocialPanelPlayerNameIdentitySourceViewModel* SocialPanelPlayerNameIdentitySourceViewModel; // 0x3f0(0x08)
	struct UWBP_IdentitySourceIcon_C* WBP_IdentitySourceIcon; // 0x3f8(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x400(0x08)
	struct UWBP_Template_HovercardDetailRow_Social_C* WBP_Template_HovercardDetailRow_Social; // 0x408(0x08)
	enum class EAresIdentityDisplay DesiredIdentitySource; // 0x410(0x01)

	void UpdateVisibility(); // Function WBP_Panel_HovercardRow_PlayerName.WBP_Panel_HovercardRow_PlayerName_C.UpdateVisibility // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetObservedPlayer(struct FString InPlayerSubject); // Function WBP_Panel_HovercardRow_PlayerName.WBP_Panel_HovercardRow_PlayerName_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDesiredIdentitySource(enum class EAresIdentityDisplay InDesiredIdentitySource); // Function WBP_Panel_HovercardRow_PlayerName.WBP_Panel_HovercardRow_PlayerName_C.SetDesiredIdentitySource // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDisplayableIdentitySourceChanged(enum class EAresIdentitySource InIdentitySource); // Function WBP_Panel_HovercardRow_PlayerName.WBP_Panel_HovercardRow_PlayerName_C.OnDisplayableIdentitySourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSocialPanelPlayerNameIdentitySourceChanged(enum class EAresIdentitySource InIdentitySource); // Function WBP_Panel_HovercardRow_PlayerName.WBP_Panel_HovercardRow_PlayerName_C.OnSocialPanelPlayerNameIdentitySourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnHasValidIdentityChanged(bool bInHasValidIdentity); // Function WBP_Panel_HovercardRow_PlayerName.WBP_Panel_HovercardRow_PlayerName_C.OnHasValidIdentityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_HovercardRow_PlayerName.WBP_Panel_HovercardRow_PlayerName_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_HovercardRow_PlayerName(int32_t EntryPoint); // Function WBP_Panel_HovercardRow_PlayerName.WBP_Panel_HovercardRow_PlayerName_C.ExecuteUbergraph_WBP_Panel_HovercardRow_PlayerName // (Final|UbergraphFunction) // @ game+0x1af5410
};

