// WidgetBlueprintGeneratedClass WBP_Panel_PlayerPremierTeamName.WBP_Panel_PlayerPremierTeamName_C
// Size: 0x458 (Inherited: 0x3e0)
struct UWBP_Panel_PlayerPremierTeamName_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct USizeBox* SizeBox_Text; // 0x3e8(0x08)
	struct FString PlayerSubject; // 0x3f0(0x10)
	bool bCollapseIfInvalidData; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct UPlayerPremierTeamNameViewModel* TeamNameViewModel; // 0x408(0x08)
	struct FString PreviewTeamName; // 0x410(0x10)
	struct UCommonTextStyle* TextStyle; // 0x420(0x08)
	struct UCommonTextScrollStyle* ScrollStyle; // 0x428(0x08)
	struct UAresCommonText* TextBlock; // 0x430(0x08)
	bool bForceUpperCase; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct FText NoTeamDisplayName; // 0x440(0x18)

	void SetObservedPlayer(struct FString InPlayerSubject); // Function WBP_Panel_PlayerPremierTeamName.WBP_Panel_PlayerPremierTeamName_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindOrUnbindViewModel(bool bDoBind); // Function WBP_Panel_PlayerPremierTeamName.WBP_Panel_PlayerPremierTeamName_C.BindOrUnbindViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_PlayerPremierTeamName.WBP_Panel_PlayerPremierTeamName_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_PlayerPremierTeamName.WBP_Panel_PlayerPremierTeamName_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_PlayerPremierTeamName.WBP_Panel_PlayerPremierTeamName_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleTeamNameChanged(struct FString TeamName); // Function WBP_Panel_PlayerPremierTeamName.WBP_Panel_PlayerPremierTeamName_C.HandleTeamNameChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PlayerPremierTeamName.WBP_Panel_PlayerPremierTeamName_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleHasValidDataChanged(bool bHasValidData); // Function WBP_Panel_PlayerPremierTeamName.WBP_Panel_PlayerPremierTeamName_C.HandleHasValidDataChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PlayerPremierTeamName(int32_t EntryPoint); // Function WBP_Panel_PlayerPremierTeamName.WBP_Panel_PlayerPremierTeamName_C.ExecuteUbergraph_WBP_Panel_PlayerPremierTeamName // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

