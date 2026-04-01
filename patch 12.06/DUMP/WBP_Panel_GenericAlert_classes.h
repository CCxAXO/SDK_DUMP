// WidgetBlueprintGeneratedClass WBP_Panel_GenericAlert.WBP_Panel_GenericAlert_C
// Size: 0x441 (Inherited: 0x3e0)
struct UWBP_Panel_GenericAlert_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UHorizontalBox* AlertContainer; // 0x3e8(0x08)
	struct UImage* AlertIcon; // 0x3f0(0x08)
	struct UAresButtonRichTextComponent* AlertRichText; // 0x3f8(0x08)
	enum class EWarningAlertType AlertType; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct UMaterialInstance* AlertIconMaterialInstance; // 0x408(0x08)
	struct FName AlertTypeMaterialInstanceParameter; // 0x410(0x0c)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct FText AlertText; // 0x420(0x18)
	double AlertTextWrapLocation; // 0x438(0x08)
	bool bShowAlertIcon; // 0x440(0x01)

	void UpdateAlertVisibility(); // Function WBP_Panel_GenericAlert.WBP_Panel_GenericAlert_C.UpdateAlertVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetShowAlertIcon(bool bShowAlertIcon); // Function WBP_Panel_GenericAlert.WBP_Panel_GenericAlert_C.SetShowAlertIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetAlertText(struct FText AlertText); // Function WBP_Panel_GenericAlert.WBP_Panel_GenericAlert_C.SetAlertText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetAlertType(enum class EWarningAlertType AlertType); // Function WBP_Panel_GenericAlert.WBP_Panel_GenericAlert_C.SetAlertType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_GenericAlert.WBP_Panel_GenericAlert_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_GenericAlert(int32_t EntryPoint); // Function WBP_Panel_GenericAlert.WBP_Panel_GenericAlert_C.ExecuteUbergraph_WBP_Panel_GenericAlert // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

