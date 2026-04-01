// WidgetBlueprintGeneratedClass WBP_View_EquippableHUDElement_PC.WBP_View_EquippableHUDElement_PC_C
// Size: 0x480 (Inherited: 0x3f1)
struct UWBP_View_EquippableHUDElement_PC_C : UWBP_View_EquippableHUDElement_Base_C {
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f8(0x08)
	struct UWidgetAnimation* SetBase; // 0x400(0x08)
	struct UWidgetAnimation* WhenEquipped; // 0x408(0x08)
	struct UWidgetAnimation* InFadeOut; // 0x410(0x08)
	struct UActionNameIconPrompt_C* ActionNameIconPrompt; // 0x418(0x08)
	struct UVerticalBox* attachmentNamesVBox; // 0x420(0x08)
	struct UImage* BG; // 0x428(0x08)
	struct UTextBlock* EquipmentName; // 0x430(0x08)
	struct UVerticalBox* equippableInfoBox; // 0x438(0x08)
	struct UImage* Equipped; // 0x440(0x08)
	struct UImage* EquippmentIcon; // 0x448(0x08)
	struct UTextBlock* SkinName; // 0x450(0x08)
	struct UImage* undequipped; // 0x458(0x08)
	struct FLinearColor UnequippedTint; // 0x460(0x10)
	struct FLinearColor EquippedTInt; // 0x470(0x10)

	void PreConstruct(bool IsDesignTime); // Function WBP_View_EquippableHUDElement_PC.WBP_View_EquippableHUDElement_PC_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnEquippableInfoChanged(struct FEquippableHUDInfo EquippableInfo); // Function WBP_View_EquippableHUDElement_PC.WBP_View_EquippableHUDElement_PC_C.OnEquippableInfoChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEquippedStateChanged(bool Equipped); // Function WBP_View_EquippableHUDElement_PC.WBP_View_EquippableHUDElement_PC_C.OnEquippedStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnActionNameChanged(struct FName ActionName); // Function WBP_View_EquippableHUDElement_PC.WBP_View_EquippableHUDElement_PC_C.OnActionNameChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateFadeAnimation(bool Fade); // Function WBP_View_EquippableHUDElement_PC.WBP_View_EquippableHUDElement_PC_C.UpdateFadeAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_View_EquippableHUDElement_PC(int32_t EntryPoint); // Function WBP_View_EquippableHUDElement_PC.WBP_View_EquippableHUDElement_PC_C.ExecuteUbergraph_WBP_View_EquippableHUDElement_PC // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

