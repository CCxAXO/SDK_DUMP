// WidgetBlueprintGeneratedClass WBP_View_CharacterSelectPlayerState.WBP_View_CharacterSelectPlayerState_C
// Size: 0x1c00 (Inherited: 0x1ae0)
struct UWBP_View_CharacterSelectPlayerState_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* LockInFailure_ResetState; // 0x1ae8(0x08)
	struct UWidgetAnimation* AgentSelectedAnim; // 0x1af0(0x08)
	struct UWidgetAnimation* LockInAnim; // 0x1af8(0x08)
	struct UWidgetAnimation* SelectingDotsAnim; // 0x1b00(0x08)
	struct UImage* AgentBorder; // 0x1b08(0x08)
	struct UImage* Anim_PickingBackdrop; // 0x1b10(0x08)
	struct UImage* BtmDeco_L; // 0x1b18(0x08)
	struct UImage* BtmDeco_R; // 0x1b20(0x08)
	struct UAresCommonText* CharacterNameText; // 0x1b28(0x08)
	struct UImage* CharacterPortraitImage; // 0x1b30(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher; // 0x1b38(0x08)
	struct UImage* LoadingImage1; // 0x1b40(0x08)
	struct UImage* LoadingImage2; // 0x1b48(0x08)
	struct UImage* LoadingImage3; // 0x1b50(0x08)
	struct UHorizontalBox* LoadingImageParent; // 0x1b58(0x08)
	struct UAresCommonText* PlayerNameText; // 0x1b60(0x08)
	struct UImage* RoleContainer; // 0x1b68(0x08)
	struct UImage* RoleIconImage; // 0x1b70(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x1b78(0x08)
	struct UVM_CharacterSelectPlayerState_C* PlayerStateViewModel; // 0x1b80(0x08)
	struct UMaterialInstanceDynamic* DMI_AgentPortraitCrop; // 0x1b88(0x08)
	struct UMaterialInstanceDynamic* DMI_RoleContainer; // 0x1b90(0x08)
	double SelectingOpacity; // 0x1b98(0x08)
	double LockedInOpacity; // 0x1ba0(0x08)
	struct UMaterialInterface* AgentPortraitCrop_Material; // 0x1ba8(0x08)
	struct UMaterialInterface* AgentRoleFrame_Material; // 0x1bb0(0x08)
	struct FSlateColor LockedInTextColor; // 0x1bb8(0x14)
	char pad_1BCC[0x4]; // 0x1bcc(0x04)
	struct UMaterialInstanceDynamic* DMI_PortraitOutline; // 0x1bd0(0x08)
	struct UMaterialInterface* PortraitOutline_Material; // 0x1bd8(0x08)
	struct FSlateColor NotLockedInTextColor; // 0x1be0(0x14)
	char pad_1BF4[0x4]; // 0x1bf4(0x04)
	struct UPregameViewController* PregamePlayerViewController; // 0x1bf8(0x08)

	void SetViewModel(struct UVM_CharacterSelectPlayerState_C* ViewModel); // Function WBP_View_CharacterSelectPlayerState.WBP_View_CharacterSelectPlayerState_C.SetViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPlayerNameText(struct FText NewPlayerName); // Function WBP_View_CharacterSelectPlayerState.WBP_View_CharacterSelectPlayerState_C.SetPlayerNameText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCharacterRoleIcon(struct UTexture2D* NewRoleIcon, bool IsMatchedSize); // Function WBP_View_CharacterSelectPlayerState.WBP_View_CharacterSelectPlayerState_C.SetCharacterRoleIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCharacterNameText(struct FText NewCharacterName); // Function WBP_View_CharacterSelectPlayerState.WBP_View_CharacterSelectPlayerState_C.SetCharacterNameText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Character Portrait(struct UTexture2D* NewCharPortrait, bool Match Size); // Function WBP_View_CharacterSelectPlayerState.WBP_View_CharacterSelectPlayerState_C.Set Character Portrait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleStopSelectingAnimation(); // Function WBP_View_CharacterSelectPlayerState.WBP_View_CharacterSelectPlayerState_C.HandleStopSelectingAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayLockInAnimations(); // Function WBP_View_CharacterSelectPlayerState.WBP_View_CharacterSelectPlayerState_C.PlayLockInAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayResetLockInAnimations(); // Function WBP_View_CharacterSelectPlayerState.WBP_View_CharacterSelectPlayerState_C.PlayResetLockInAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleLockingInLocalPlayer(bool LockingIn); // Function WBP_View_CharacterSelectPlayerState.WBP_View_CharacterSelectPlayerState_C.HandleLockingInLocalPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleLockedInLocalPlayer(); // Function WBP_View_CharacterSelectPlayerState.WBP_View_CharacterSelectPlayerState_C.HandleLockedInLocalPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleLockedIn(); // Function WBP_View_CharacterSelectPlayerState.WBP_View_CharacterSelectPlayerState_C.HandleLockedIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindAnimations(bool LocalPlayer, struct UPregameViewController* PregameViewController); // Function WBP_View_CharacterSelectPlayerState.WBP_View_CharacterSelectPlayerState_C.BindAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_View_CharacterSelectPlayerState.WBP_View_CharacterSelectPlayerState_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_View_CharacterSelectPlayerState.WBP_View_CharacterSelectPlayerState_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_View_CharacterSelectPlayerState(int32_t EntryPoint); // Function WBP_View_CharacterSelectPlayerState.WBP_View_CharacterSelectPlayerState_C.ExecuteUbergraph_WBP_View_CharacterSelectPlayerState // (Final|UbergraphFunction) // @ game+0x1af5410
};

