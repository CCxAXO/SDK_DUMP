// WidgetBlueprintGeneratedClass WBP_Button_Social_List_Icon.WBP_Button_Social_List_Icon_C
// Size: 0x1b70 (Inherited: 0x1ae8)
struct UWBP_Button_Social_List_Icon_C : UWBP_Button_Social_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae8(0x08)
	struct UBorder* Border_IconArea; // 0x1af0(0x08)
	struct UNamedSlot* NamedSlot_BodyContent; // 0x1af8(0x08)
	struct USizeBox* SizeBox_Icon; // 0x1b00(0x08)
	struct UWBP_Template_SocialButton_C* WBP_Template_SocialButton; // 0x1b08(0x08)
	struct UMaterialInstance* OutlineMaterial; // 0x1b10(0x08)
	struct FVector2D IconSize; // 0x1b18(0x10)
	struct FLinearColor IconAreaColor; // 0x1b28(0x10)
	struct FSlateColor IconTint; // 0x1b38(0x14)
	bool bOverrideIconTintDuringInteraction; // 0x1b4c(0x01)
	char pad_1B4D[0x3]; // 0x1b4d(0x03)
	struct FSlateColor InteractionIconTint; // 0x1b50(0x14)
	char pad_1B64[0x4]; // 0x1b64(0x04)
	struct UMaterialInstance* DetailMaterial; // 0x1b68(0x08)

	void UpdateInteractionAppearance(); // Function WBP_Button_Social_List_Icon.WBP_Button_Social_List_Icon_C.UpdateInteractionAppearance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct TMap<struct FName, struct UMaterialInstanceDynamic*> GetAnimatableMaterialsMap(); // Function WBP_Button_Social_List_Icon.WBP_Button_Social_List_Icon_C.GetAnimatableMaterialsMap // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_Social_List_Icon.WBP_Button_Social_List_Icon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SetIconBrush(struct FSlateBrush& InIconBrush); // Function WBP_Button_Social_List_Icon.WBP_Button_Social_List_Icon_C.SetIconBrush // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnHovered(); // Function WBP_Button_Social_List_Icon.WBP_Button_Social_List_Icon_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnUnhovered(); // Function WBP_Button_Social_List_Icon.WBP_Button_Social_List_Icon_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnPressed(); // Function WBP_Button_Social_List_Icon.WBP_Button_Social_List_Icon_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnReleased(); // Function WBP_Button_Social_List_Icon.WBP_Button_Social_List_Icon_C.BP_OnReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_Social_List_Icon(int32_t EntryPoint); // Function WBP_Button_Social_List_Icon.WBP_Button_Social_List_Icon_C.ExecuteUbergraph_WBP_Button_Social_List_Icon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

