// WidgetBlueprintGeneratedClass WBP_Panel_SmallPlayerCardBorder.WBP_Panel_SmallPlayerCardBorder_C
// Size: 0x430 (Inherited: 0x3e0)
struct UWBP_Panel_SmallPlayerCardBorder_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UPlayerPremierPlatingViewModel* PlayerPremierPlatingViewModel; // 0x3e8(0x08)
	struct UVM_PlayerAccountLevelBorder_C* VM_PlayerAccountLevelBorder; // 0x3f0(0x08)
	struct UImage* Image_FallbackBorder; // 0x3f8(0x08)
	struct UImage* Image_LevelBorder; // 0x400(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* LazyLoader_PremierBorder; // 0x408(0x08)
	struct UNamedSlot* NamedSlot_PlayerCardImage; // 0x410(0x08)
	struct ULevelBorderUIData* PreviewLevelBorderUIData; // 0x418(0x08)
	bool bRespectHideAccountLevel; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct UPlayerCardB_Small_Base_C* PremierBorderWidget; // 0x428(0x08)

	void HasDisplayablePremierPlating(bool& bReturnValue); // Function WBP_Panel_SmallPlayerCardBorder.WBP_Panel_SmallPlayerCardBorder_C.HasDisplayablePremierPlating // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void HasDisplayablePremierBorder(bool& bReturnValue); // Function WBP_Panel_SmallPlayerCardBorder.WBP_Panel_SmallPlayerCardBorder_C.HasDisplayablePremierBorder // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetObservedPlayer(struct FString PlayerSubject); // Function WBP_Panel_SmallPlayerCardBorder.WBP_Panel_SmallPlayerCardBorder_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HasDisplayableLevelBorder(bool& bReturnValue); // Function WBP_Panel_SmallPlayerCardBorder.WBP_Panel_SmallPlayerCardBorder_C.HasDisplayableLevelBorder // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateDisplayedBorder(); // Function WBP_Panel_SmallPlayerCardBorder.WBP_Panel_SmallPlayerCardBorder_C.UpdateDisplayedBorder // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_SmallPlayerCardBorder.WBP_Panel_SmallPlayerCardBorder_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_SmallPlayerCardBorder.WBP_Panel_SmallPlayerCardBorder_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnAccountLevelChanged(int32_t InAccountLevel); // Function WBP_Panel_SmallPlayerCardBorder.WBP_Panel_SmallPlayerCardBorder_C.OnAccountLevelChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLevelBorderTextureChanged(struct UTexture2D* InBorderTexture); // Function WBP_Panel_SmallPlayerCardBorder.WBP_Panel_SmallPlayerCardBorder_C.OnLevelBorderTextureChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnShowAccountLevelChanged(bool bInShowAccountLevel); // Function WBP_Panel_SmallPlayerCardBorder.WBP_Panel_SmallPlayerCardBorder_C.OnShowAccountLevelChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnShowPlatingChanged(bool bInShowPlating); // Function WBP_Panel_SmallPlayerCardBorder.WBP_Panel_SmallPlayerCardBorder_C.OnShowPlatingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnShowAuraChanged(bool bInShowAura); // Function WBP_Panel_SmallPlayerCardBorder.WBP_Panel_SmallPlayerCardBorder_C.OnShowAuraChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlatingChanged(enum class EPremierPrestigePlating InPlating); // Function WBP_Panel_SmallPlayerCardBorder.WBP_Panel_SmallPlayerCardBorder_C.OnPlatingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_SmallPlayerCardBorder(int32_t EntryPoint); // Function WBP_Panel_SmallPlayerCardBorder.WBP_Panel_SmallPlayerCardBorder_C.ExecuteUbergraph_WBP_Panel_SmallPlayerCardBorder // (Final|UbergraphFunction) // @ game+0x1b42740
};

