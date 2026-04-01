// WidgetBlueprintGeneratedClass WBP_Panel_ContentTierIcon.WBP_Panel_ContentTierIcon_C
// Size: 0x470 (Inherited: 0x3e0)
struct UWBP_Panel_ContentTierIcon_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* hover; // 0x3e8(0x08)
	struct UWidgetAnimation* XEAnim; // 0x3f0(0x08)
	struct UImage* OwnedIcon; // 0x3f8(0x08)
	struct UImage* TierIcon; // 0x400(0x08)
	struct UImage* TierIconAdditive; // 0x408(0x08)
	struct UOverlay* TierOverlay; // 0x410(0x08)
	struct UImage* XEIconAdditive; // 0x418(0x08)
	struct UContentTierViewModel* ContentTierViewModel; // 0x420(0x08)
	struct UTexture* ContentTierIcon; // 0x428(0x08)
	bool bIsExclusiveTier; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	struct FLinearColor ContentTierColor; // 0x434(0x10)
	char pad_444[0x4]; // 0x444(0x04)
	struct UMaterialInstanceDynamic* AdditiveMaterial; // 0x448(0x08)
	bool bShowXEAnim; // 0x450(0x01)
	bool bIsOwned; // 0x451(0x01)
	char pad_452[0x6]; // 0x452(0x06)
	struct UEquippableSkinHandle* SkinHandle; // 0x458(0x08)
	enum class Enum_ContentTierIcon_IsOwnedBehavior BehaviorWhenIsOwned; // 0x460(0x01)
	char pad_461[0x7]; // 0x461(0x07)
	struct UVM_InventoryItem_C* VM_InventoryItem; // 0x468(0x08)

	void IsReadyForDisplay(bool& ReadyForDisplay); // Function WBP_Panel_ContentTierIcon.WBP_Panel_ContentTierIcon_C.IsReadyForDisplay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void OnContentTierHasValidDataChanged(bool NewValue); // Function WBP_Panel_ContentTierIcon.WBP_Panel_ContentTierIcon_C.OnContentTierHasValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateIconVisibility(); // Function WBP_Panel_ContentTierIcon.WBP_Panel_ContentTierIcon_C.UpdateIconVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsOwnedChanged(bool IsOwned); // Function WBP_Panel_ContentTierIcon.WBP_Panel_ContentTierIcon_C.OnIsOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayHoverAnim(); // Function WBP_Panel_ContentTierIcon.WBP_Panel_ContentTierIcon_C.PlayHoverAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayUnHoverAnim(); // Function WBP_Panel_ContentTierIcon.WBP_Panel_ContentTierIcon_C.PlayUnHoverAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayXEAnim(); // Function WBP_Panel_ContentTierIcon.WBP_Panel_ContentTierIcon_C.PlayXEAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StopXEAnim(); // Function WBP_Panel_ContentTierIcon.WBP_Panel_ContentTierIcon_C.StopXEAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShouldShowIcons(bool& ShouldShowTierIcon, bool& ShouldShowOwnedIcon); // Function WBP_Panel_ContentTierIcon.WBP_Panel_ContentTierIcon_C.ShouldShowIcons // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void ShouldShowXEIconAdditive(bool& ShouldShow); // Function WBP_Panel_ContentTierIcon.WBP_Panel_ContentTierIcon_C.ShouldShowXEIconAdditive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Panel_ContentTierIcon.WBP_Panel_ContentTierIcon_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_Panel_ContentTierIcon.WBP_Panel_ContentTierIcon_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init View Models From Skin Handle(struct UEquippableSkinHandle* SkinHandle); // Function WBP_Panel_ContentTierIcon.WBP_Panel_ContentTierIcon_C.Init View Models From Skin Handle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplyIconTexture(struct UTexture* ContentTierIcon); // Function WBP_Panel_ContentTierIcon.WBP_Panel_ContentTierIcon_C.ApplyIconTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsExclusiveTierChanged(bool IsExclusiveTier); // Function WBP_Panel_ContentTierIcon.WBP_Panel_ContentTierIcon_C.OnIsExclusiveTierChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnContentTierIconChanged(struct UTexture* ContentTierIcon); // Function WBP_Panel_ContentTierIcon.WBP_Panel_ContentTierIcon_C.OnContentTierIconChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_ContentTierIcon.WBP_Panel_ContentTierIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_ContentTierIcon.WBP_Panel_ContentTierIcon_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_ContentTierIcon(int32_t EntryPoint); // Function WBP_Panel_ContentTierIcon.WBP_Panel_ContentTierIcon_C.ExecuteUbergraph_WBP_Panel_ContentTierIcon // (Final|UbergraphFunction) // @ game+0x1b42740
};

