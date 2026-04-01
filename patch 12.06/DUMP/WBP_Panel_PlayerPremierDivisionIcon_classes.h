// WidgetBlueprintGeneratedClass WBP_Panel_PlayerPremierDivisionIcon.WBP_Panel_PlayerPremierDivisionIcon_C
// Size: 0x419 (Inherited: 0x3e0)
struct UWBP_Panel_PlayerPremierDivisionIcon_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* Image_Icon; // 0x3e8(0x08)
	struct UPlayerPremierDivisionIconViewModel* DivisionIconViewModel; // 0x3f0(0x08)
	struct UTexture2D* UnknownDivisionIcon; // 0x3f8(0x08)
	enum class EPremierDivisionIcon IconSize; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct FString PlayerSubject; // 0x408(0x10)
	bool bCollapseIfInvalidData; // 0x418(0x01)

	void SetObservedPlayer(struct FString InPlayerSubject); // Function WBP_Panel_PlayerPremierDivisionIcon.WBP_Panel_PlayerPremierDivisionIcon_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindOrUnbindViewModel(bool bDoBind); // Function WBP_Panel_PlayerPremierDivisionIcon.WBP_Panel_PlayerPremierDivisionIcon_C.BindOrUnbindViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_PlayerPremierDivisionIcon.WBP_Panel_PlayerPremierDivisionIcon_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_PlayerPremierDivisionIcon.WBP_Panel_PlayerPremierDivisionIcon_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_PlayerPremierDivisionIcon.WBP_Panel_PlayerPremierDivisionIcon_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleDivisionIconChanged(struct UTexture* IconTexture); // Function WBP_Panel_PlayerPremierDivisionIcon.WBP_Panel_PlayerPremierDivisionIcon_C.HandleDivisionIconChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PlayerPremierDivisionIcon.WBP_Panel_PlayerPremierDivisionIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleHasValidDataChanged(bool bHasValidData); // Function WBP_Panel_PlayerPremierDivisionIcon.WBP_Panel_PlayerPremierDivisionIcon_C.HandleHasValidDataChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PlayerPremierDivisionIcon(int32_t EntryPoint); // Function WBP_Panel_PlayerPremierDivisionIcon.WBP_Panel_PlayerPremierDivisionIcon_C.ExecuteUbergraph_WBP_Panel_PlayerPremierDivisionIcon // (Final|UbergraphFunction) // @ game+0x1b42740
};

