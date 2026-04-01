// WidgetBlueprintGeneratedClass WBP_Button_Social_Icon.WBP_Button_Social_Icon_C
// Size: 0x1b21 (Inherited: 0x1ae8)
struct UWBP_Button_Social_Icon_C : UWBP_Button_Social_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae8(0x08)
	struct UMenuAnchor* MenuAnchor_Tooltip; // 0x1af0(0x08)
	struct FName IconTextureParameterName; // 0x1af8(0x0c)
	char pad_1B04[0x4]; // 0x1b04(0x04)
	struct FText Tooltip Text; // 0x1b08(0x18)
	enum class EMenuPlacement Tooltip Placement; // 0x1b20(0x01)

	struct UUserWidget* On Menu Anchor Get User Menu Content(); // Function WBP_Button_Social_Icon.WBP_Button_Social_Icon_C.On Menu Anchor Get User Menu Content // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateInteractionAppearance(); // Function WBP_Button_Social_Icon.WBP_Button_Social_Icon_C.UpdateInteractionAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIconBrush(struct FSlateBrush& InIconBrush); // Function WBP_Button_Social_Icon.WBP_Button_Social_Icon_C.SetIconBrush // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnHovered(); // Function WBP_Button_Social_Icon.WBP_Button_Social_Icon_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnUnhovered(); // Function WBP_Button_Social_Icon.WBP_Button_Social_Icon_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnPressed(); // Function WBP_Button_Social_Icon.WBP_Button_Social_Icon_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnReleased(); // Function WBP_Button_Social_Icon.WBP_Button_Social_Icon_C.BP_OnReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_Social_Icon.WBP_Button_Social_Icon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_Social_Icon(int32_t EntryPoint); // Function WBP_Button_Social_Icon.WBP_Button_Social_Icon_C.ExecuteUbergraph_WBP_Button_Social_Icon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

