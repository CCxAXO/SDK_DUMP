// WidgetBlueprintGeneratedClass WBP_Template_SocialButton.WBP_Template_SocialButton_C
// Size: 0x360 (Inherited: 0x318)
struct UWBP_Template_SocialButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Image_Detail; // 0x320(0x08)
	struct UImage* Image_Outline; // 0x328(0x08)
	struct UNamedSlot* NamedSlot_Content; // 0x330(0x08)
	struct UMaterialInstance* DetailMaterial; // 0x338(0x08)
	struct UMaterialInstance* OutlineMaterial; // 0x340(0x08)
	struct FName DetailMaterialName; // 0x348(0x0c)
	struct FName OutlineMaterialName; // 0x354(0x0c)

	void SetOutlineMaterial(struct UMaterialInstance* NewOutlineMaterial); // Function WBP_Template_SocialButton.WBP_Template_SocialButton_C.SetOutlineMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDetailMaterial(struct UMaterialInstance* NewDetailMaterial); // Function WBP_Template_SocialButton.WBP_Template_SocialButton_C.SetDetailMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddToAnimatableMaterialsMap(struct TMap<struct FName, struct UMaterialInstanceDynamic*> InMap, struct TMap<struct FName, struct UMaterialInstanceDynamic*>& OutMap); // Function WBP_Template_SocialButton.WBP_Template_SocialButton_C.AddToAnimatableMaterialsMap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Template_SocialButton.WBP_Template_SocialButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Template_SocialButton(int32_t EntryPoint); // Function WBP_Template_SocialButton.WBP_Template_SocialButton_C.ExecuteUbergraph_WBP_Template_SocialButton // (Final|UbergraphFunction) // @ game+0x1af5410
};

