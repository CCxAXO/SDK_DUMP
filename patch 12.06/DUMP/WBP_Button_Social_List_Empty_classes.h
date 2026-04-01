// WidgetBlueprintGeneratedClass WBP_Button_Social_List_Empty.WBP_Button_Social_List_Empty_C
// Size: 0x1b10 (Inherited: 0x1ae8)
struct UWBP_Button_Social_List_Empty_C : UWBP_Button_Social_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae8(0x08)
	struct UNamedSlot* NamedSlot_BodyContent; // 0x1af0(0x08)
	struct UWBP_Template_SocialButton_C* WBP_Template_SocialButton; // 0x1af8(0x08)
	struct UMaterialInstance* OutlineMaterial; // 0x1b00(0x08)
	struct UMaterialInstance* DetailMaterial; // 0x1b08(0x08)

	struct TMap<struct FName, struct UMaterialInstanceDynamic*> GetAnimatableMaterialsMap(); // Function WBP_Button_Social_List_Empty.WBP_Button_Social_List_Empty_C.GetAnimatableMaterialsMap // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_Social_List_Empty.WBP_Button_Social_List_Empty_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_Social_List_Empty(int32_t EntryPoint); // Function WBP_Button_Social_List_Empty.WBP_Button_Social_List_Empty_C.ExecuteUbergraph_WBP_Button_Social_List_Empty // (Final|UbergraphFunction) // @ game+0x1b42740
};

