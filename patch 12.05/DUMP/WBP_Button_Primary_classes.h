// WidgetBlueprintGeneratedClass WBP_Button_Primary.WBP_Button_Primary_C
// Size: 0x1bf8 (Inherited: 0x1ae0)
struct UWBP_Button_Primary_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* Release; // 0x1ae8(0x08)
	struct UWidgetAnimation* Press; // 0x1af0(0x08)
	struct UWidgetAnimation* Unfocus; // 0x1af8(0x08)
	struct UWidgetAnimation* Focus; // 0x1b00(0x08)
	struct UHorizontalBox* ButtonContent_HBox; // 0x1b08(0x08)
	struct UImage* ButtonPrimaryMaterial_Img; // 0x1b10(0x08)
	struct UGenericTextTooltipContainer_C* GenericTextTooltipContainer; // 0x1b18(0x08)
	struct UVerticalBox* Root_VBox; // 0x1b20(0x08)
	struct UAresButtonRichTextComponent* RTCPrimaryText; // 0x1b28(0x08)
	struct UAresButtonRichTextComponent* RTCSupportingText; // 0x1b30(0x08)
	struct UHorizontalBox* SupportingTextContent_HBox; // 0x1b38(0x08)
	struct UImage* SupportingTextIcon_Img; // 0x1b40(0x08)
	enum class EHorizontalAlignment ContentsHorizontalAlignment; // 0x1b48(0x01)
	enum class EVerticalAlignment ContentsVerticalAlignment; // 0x1b49(0x01)
	char pad_1B4A[0x6]; // 0x1b4a(0x06)
	struct FText Tooltip Text; // 0x1b50(0x18)
	enum class EMenuPlacement TooltipPosition; // 0x1b68(0x01)
	enum class EWarningAlertType WarningType; // 0x1b69(0x01)
	char pad_1B6A[0x6]; // 0x1b6a(0x06)
	struct UMaterialInstance* WarningIconMI; // 0x1b70(0x08)
	struct FName WarningTypeMIParameterName; // 0x1b78(0x0c)
	char pad_1B84[0x4]; // 0x1b84(0x04)
	struct FText SupportingText; // 0x1b88(0x18)
	bool ShowSupportingTextIcon; // 0x1ba0(0x01)
	char pad_1BA1[0x7]; // 0x1ba1(0x07)
	struct TMap<struct FName, struct UMaterialInstanceDynamic*> MaterialsMap; // 0x1ba8(0x50)

	struct TMap<struct FName, struct UMaterialInstanceDynamic*> GetAnimatableMaterialsMap(); // Function WBP_Button_Primary.WBP_Button_Primary_C.GetAnimatableMaterialsMap // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Supporting Text(enum class EWarningAlertType WarningType, struct UMaterialInstance* WarningIconMaterial, struct FText SupportingText, bool ShowIcon); // Function WBP_Button_Primary.WBP_Button_Primary_C.Set Supporting Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleSetIconBrush(struct FSlateBrush& Brush); // Function WBP_Button_Primary.WBP_Button_Primary_C.HandleSetIconBrush // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_Primary.WBP_Button_Primary_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Button_Primary.WBP_Button_Primary_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionHovered(); // Function WBP_Button_Primary.WBP_Button_Primary_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionUnHovered(); // Function WBP_Button_Primary.WBP_Button_Primary_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionPressed(); // Function WBP_Button_Primary.WBP_Button_Primary_C.BP_OnTransitionPressed // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionReleased(); // Function WBP_Button_Primary.WBP_Button_Primary_C.BP_OnTransitionReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void SetIconBrush(struct FSlateBrush& InIconBrush); // Function WBP_Button_Primary.WBP_Button_Primary_C.SetIconBrush // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_Primary(int32_t EntryPoint); // Function WBP_Button_Primary.WBP_Button_Primary_C.ExecuteUbergraph_WBP_Button_Primary // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

