// WidgetBlueprintGeneratedClass WBP_Panel_LimitedEditionBase.WBP_Panel_LimitedEditionBase_C
// Size: 0x420 (Inherited: 0x3e0)
struct UWBP_Panel_LimitedEditionBase_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UOverlay* ContentEditionOverlay; // 0x3e8(0x08)
	struct UNamedSlot* LimitedEditionSlot_Background; // 0x3f0(0x08)
	struct UNamedSlot* LimitedEditionSlot_Body; // 0x3f8(0x08)
	struct ULimitedEditionViewModel* LimitedEditionViewModel; // 0x400(0x08)
	enum class EContentEditionType ContentEdition; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct UEquippableSkinHandle* SkinHandle; // 0x410(0x08)
	struct UStorefrontItemHandle* StorefrontItemHandle; // 0x418(0x08)

	void InitViewModelsFromStorefrontItemHandle(struct UStorefrontItemHandle* NewStorefrontItemHandle); // Function WBP_Panel_LimitedEditionBase.WBP_Panel_LimitedEditionBase_C.InitViewModelsFromStorefrontItemHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShouldShowIcon(bool& ShouldShowIcon); // Function WBP_Panel_LimitedEditionBase.WBP_Panel_LimitedEditionBase_C.ShouldShowIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void IsReadyForDisplay(bool& ReadyForDisplay); // Function WBP_Panel_LimitedEditionBase.WBP_Panel_LimitedEditionBase_C.IsReadyForDisplay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void OnContentEditionHasValidDataChanged(bool NewValue); // Function WBP_Panel_LimitedEditionBase.WBP_Panel_LimitedEditionBase_C.OnContentEditionHasValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnContentEditionChanged(enum class EContentEditionType& ContentEdition); // Function WBP_Panel_LimitedEditionBase.WBP_Panel_LimitedEditionBase_C.OnContentEditionChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModelsFromSkinHandle(struct UEquippableSkinHandle* SkinHandle); // Function WBP_Panel_LimitedEditionBase.WBP_Panel_LimitedEditionBase_C.InitViewModelsFromSkinHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_Panel_LimitedEditionBase.WBP_Panel_LimitedEditionBase_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateIconVisibility(); // Function WBP_Panel_LimitedEditionBase.WBP_Panel_LimitedEditionBase_C.UpdateIconVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Panel_LimitedEditionBase.WBP_Panel_LimitedEditionBase_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_LimitedEditionBase.WBP_Panel_LimitedEditionBase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_LimitedEditionBase.WBP_Panel_LimitedEditionBase_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_LimitedEditionBase(int32_t EntryPoint); // Function WBP_Panel_LimitedEditionBase.WBP_Panel_LimitedEditionBase_C.ExecuteUbergraph_WBP_Panel_LimitedEditionBase // (Final|UbergraphFunction) // @ game+0x1b42740
};

