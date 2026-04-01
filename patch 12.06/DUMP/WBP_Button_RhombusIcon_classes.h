// WidgetBlueprintGeneratedClass WBP_Button_RhombusIcon.WBP_Button_RhombusIcon_C
// Size: 0x1b60 (Inherited: 0x1ae0)
struct UWBP_Button_RhombusIcon_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UImage* Img_Background; // 0x1ae8(0x08)
	struct UImage* Img_FiligreeBG; // 0x1af0(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x1af8(0x08)
	bool OnFocusPath; // 0x1b00(0x01)
	bool bIsVisuallyFocused; // 0x1b01(0x01)
	char pad_1B02[0x6]; // 0x1b02(0x06)
	struct UTexture2D* Icon; // 0x1b08(0x08)
	struct FName MatParam_Icon; // 0x1b10(0x0c)
	char pad_1B1C[0x4]; // 0x1b1c(0x04)
	double IconSize; // 0x1b20(0x08)
	struct FName MatParam_IconSize; // 0x1b28(0x0c)
	char pad_1B34[0x4]; // 0x1b34(0x04)
	struct UMaterialInstanceDynamic* DMI_Filagree; // 0x1b38(0x08)
	struct FMulticastInlineDelegate OnPressed; // 0x1b40(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x1b50(0x10)

	void SetIconSize(double TextureSize); // Function WBP_Button_RhombusIcon.WBP_Button_RhombusIcon_C.SetIconSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIcon(struct UTexture2D* Texture); // Function WBP_Button_RhombusIcon.WBP_Button_RhombusIcon_C.SetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsVisuallyFocused(bool bIsVisuallyFocused); // Function WBP_Button_RhombusIcon.WBP_Button_RhombusIcon_C.SetIsVisuallyFocused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateVisualFocusState(); // Function WBP_Button_RhombusIcon.WBP_Button_RhombusIcon_C.UpdateVisualFocusState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateMaterial(); // Function WBP_Button_RhombusIcon.WBP_Button_RhombusIcon_C.CreateMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_RhombusIcon.WBP_Button_RhombusIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Button_RhombusIcon.WBP_Button_RhombusIcon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function WBP_Button_RhombusIcon.WBP_Button_RhombusIcon_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function WBP_Button_RhombusIcon.WBP_Button_RhombusIcon_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Button_RhombusIcon.WBP_Button_RhombusIcon_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Button_RhombusIcon.WBP_Button_RhombusIcon_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void BP_OnHovered(); // Function WBP_Button_RhombusIcon.WBP_Button_RhombusIcon_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnUnhovered(); // Function WBP_Button_RhombusIcon.WBP_Button_RhombusIcon_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnPressed(); // Function WBP_Button_RhombusIcon.WBP_Button_RhombusIcon_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnReleased(); // Function WBP_Button_RhombusIcon.WBP_Button_RhombusIcon_C.BP_OnReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_RhombusIcon(int32_t EntryPoint); // Function WBP_Button_RhombusIcon.WBP_Button_RhombusIcon_C.ExecuteUbergraph_WBP_Button_RhombusIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnReleased__DelegateSignature(); // Function WBP_Button_RhombusIcon.WBP_Button_RhombusIcon_C.OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPressed__DelegateSignature(); // Function WBP_Button_RhombusIcon.WBP_Button_RhombusIcon_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

