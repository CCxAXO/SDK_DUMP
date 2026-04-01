// WidgetBlueprintGeneratedClass WBP_Panel_PlayerAccountLevelBorder_Base.WBP_Panel_PlayerAccountLevelBorder_Base_C
// Size: 0x413 (Inherited: 0x3e0)
struct UWBP_Panel_PlayerAccountLevelBorder_Base_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct ULevelBorderUIData* PreviewLevelBorderUIData; // 0x3e8(0x08)
	struct UVM_PlayerAccountLevelBorder_C* PlayerAccountLevelBorderVM; // 0x3f0(0x08)
	struct FString PlayerSubject; // 0x3f8(0x10)
	enum class EAresLevelBorderAppearance BorderAppearance; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	int32_t PreviewAccountLevel; // 0x40c(0x04)
	bool bPreviewShowAccountLevel; // 0x410(0x01)
	bool bRespectHideSetting; // 0x411(0x01)
	bool OverrideActive; // 0x412(0x01)

	void HandleShowAccountLevelChange(bool bShowAccountLevel); // Function WBP_Panel_PlayerAccountLevelBorder_Base.WBP_Panel_PlayerAccountLevelBorder_Base_C.HandleShowAccountLevelChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleLevelBorderTexturedChangedWithOverride(struct UTexture2D* LevelBorderTexture); // Function WBP_Panel_PlayerAccountLevelBorder_Base.WBP_Panel_PlayerAccountLevelBorder_Base_C.HandleLevelBorderTexturedChangedWithOverride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindViewModel(bool Bind); // Function WBP_Panel_PlayerAccountLevelBorder_Base.WBP_Panel_PlayerAccountLevelBorder_Base_C.BindViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OverrideBorderTexture(struct UTexture2D* OverrideTexture, bool OverrideActive); // Function WBP_Panel_PlayerAccountLevelBorder_Base.WBP_Panel_PlayerAccountLevelBorder_Base_C.OverrideBorderTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Account Level Should be Displayed(bool& bShouldBeDisplayed); // Function WBP_Panel_PlayerAccountLevelBorder_Base.WBP_Panel_PlayerAccountLevelBorder_Base_C.Account Level Should be Displayed // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetObservedPlayer(struct FString PlayerSubject); // Function WBP_Panel_PlayerAccountLevelBorder_Base.WBP_Panel_PlayerAccountLevelBorder_Base_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PlayerAccountLevelBorder_Base.WBP_Panel_PlayerAccountLevelBorder_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleLevelBorderTextureChanged(struct UTexture2D* LevelBorderTexture); // Function WBP_Panel_PlayerAccountLevelBorder_Base.WBP_Panel_PlayerAccountLevelBorder_Base_C.HandleLevelBorderTextureChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleAccountLevelChanged(int32_t AccountLevel); // Function WBP_Panel_PlayerAccountLevelBorder_Base.WBP_Panel_PlayerAccountLevelBorder_Base_C.HandleAccountLevelChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleShowAccountLevelChanged(bool bShowAccountLevel); // Function WBP_Panel_PlayerAccountLevelBorder_Base.WBP_Panel_PlayerAccountLevelBorder_Base_C.HandleShowAccountLevelChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_PlayerAccountLevelBorder_Base.WBP_Panel_PlayerAccountLevelBorder_Base_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_PlayerAccountLevelBorder_Base.WBP_Panel_PlayerAccountLevelBorder_Base_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_PlayerAccountLevelBorder_Base.WBP_Panel_PlayerAccountLevelBorder_Base_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PlayerAccountLevelBorder_Base(int32_t EntryPoint); // Function WBP_Panel_PlayerAccountLevelBorder_Base.WBP_Panel_PlayerAccountLevelBorder_Base_C.ExecuteUbergraph_WBP_Panel_PlayerAccountLevelBorder_Base // (Final|UbergraphFunction) // @ game+0x1b42740
};

