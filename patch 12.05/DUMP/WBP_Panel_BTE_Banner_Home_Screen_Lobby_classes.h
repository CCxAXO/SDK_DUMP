// WidgetBlueprintGeneratedClass WBP_Panel_BTE_Banner_Home_Screen_Lobby.WBP_Panel_BTE_Banner_Home_Screen_Lobby_C
// Size: 0x1bc0 (Inherited: 0x1b20)
struct UWBP_Panel_BTE_Banner_Home_Screen_Lobby_C : UWBP_Panel_AbstractBTEBanner_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b20(0x08)
	struct UWidgetAnimation* ReleaseAnim; // 0x1b28(0x08)
	struct UWidgetAnimation* PressAnim; // 0x1b30(0x08)
	struct UImage* DiamondBorder; // 0x1b38(0x08)
	struct UImage* DiamondCenter; // 0x1b40(0x08)
	struct UAresCommonText* DisplayName; // 0x1b48(0x08)
	struct UOverlay* LockedDiamond; // 0x1b50(0x08)
	struct UImage* Milestone1; // 0x1b58(0x08)
	struct UImage* Milestone2; // 0x1b60(0x08)
	struct UImage* Milestone3; // 0x1b68(0x08)
	struct UImage* Milestone4; // 0x1b70(0x08)
	struct UImage* Milestone5; // 0x1b78(0x08)
	struct UHorizontalBox* MilestoneProgress; // 0x1b80(0x08)
	struct UImage* Separator; // 0x1b88(0x08)
	struct UImage* Separator_2; // 0x1b90(0x08)
	struct UImage* Separator_3; // 0x1b98(0x08)
	struct UImage* Separator_4; // 0x1ba0(0x08)
	struct FString BTEModalURL; // 0x1ba8(0x10)
	struct UVM_BTEModalScreen_C* BTEModal VM; // 0x1bb8(0x08)

	void Add Image(struct UTexture2D* Texture); // Function WBP_Panel_BTE_Banner_Home_Screen_Lobby.WBP_Panel_BTE_Banner_Home_Screen_Lobby_C.Add Image // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(); // Function WBP_Panel_BTE_Banner_Home_Screen_Lobby.WBP_Panel_BTE_Banner_Home_Screen_Lobby_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle On Display Name All Caps Changed(struct FText DisplayNameAllCaps); // Function WBP_Panel_BTE_Banner_Home_Screen_Lobby.WBP_Panel_BTE_Banner_Home_Screen_Lobby_C.Handle On Display Name All Caps Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle On Should Show BTE Changed(bool ShouldShowBTE); // Function WBP_Panel_BTE_Banner_Home_Screen_Lobby.WBP_Panel_BTE_Banner_Home_Screen_Lobby_C.Handle On Should Show BTE Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle On Active Milestone Changed(int32_t ActiveMilestone); // Function WBP_Panel_BTE_Banner_Home_Screen_Lobby.WBP_Panel_BTE_Banner_Home_Screen_Lobby_C.Handle On Active Milestone Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle BTE Banner Clicked(); // Function WBP_Panel_BTE_Banner_Home_Screen_Lobby.WBP_Panel_BTE_Banner_Home_Screen_Lobby_C.Handle BTE Banner Clicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Bind Events(bool Bind); // Function WBP_Panel_BTE_Banner_Home_Screen_Lobby.WBP_Panel_BTE_Banner_Home_Screen_Lobby_C.Bind Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init Modal View Model(); // Function WBP_Panel_BTE_Banner_Home_Screen_Lobby.WBP_Panel_BTE_Banner_Home_Screen_Lobby_C.Init Modal View Model // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_BTE_Banner_Home_Screen_Lobby.WBP_Panel_BTE_Banner_Home_Screen_Lobby_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_BTE_Banner_Home_Screen_Lobby.WBP_Panel_BTE_Banner_Home_Screen_Lobby_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_BTE_Banner_Home_Screen_Lobby.WBP_Panel_BTE_Banner_Home_Screen_Lobby_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnClicked(); // Function WBP_Panel_BTE_Banner_Home_Screen_Lobby.WBP_Panel_BTE_Banner_Home_Screen_Lobby_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnPressed(); // Function WBP_Panel_BTE_Banner_Home_Screen_Lobby.WBP_Panel_BTE_Banner_Home_Screen_Lobby_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnReleased(); // Function WBP_Panel_BTE_Banner_Home_Screen_Lobby.WBP_Panel_BTE_Banner_Home_Screen_Lobby_C.BP_OnReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionPressed(); // Function WBP_Panel_BTE_Banner_Home_Screen_Lobby.WBP_Panel_BTE_Banner_Home_Screen_Lobby_C.BP_OnTransitionPressed // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionReleased(); // Function WBP_Panel_BTE_Banner_Home_Screen_Lobby.WBP_Panel_BTE_Banner_Home_Screen_Lobby_C.BP_OnTransitionReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnHovered(); // Function WBP_Panel_BTE_Banner_Home_Screen_Lobby.WBP_Panel_BTE_Banner_Home_Screen_Lobby_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnUnhovered(); // Function WBP_Panel_BTE_Banner_Home_Screen_Lobby.WBP_Panel_BTE_Banner_Home_Screen_Lobby_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_BTE_Banner_Home_Screen_Lobby(int32_t EntryPoint); // Function WBP_Panel_BTE_Banner_Home_Screen_Lobby.WBP_Panel_BTE_Banner_Home_Screen_Lobby_C.ExecuteUbergraph_WBP_Panel_BTE_Banner_Home_Screen_Lobby // (Final|UbergraphFunction) // @ game+0x1af5410
};

