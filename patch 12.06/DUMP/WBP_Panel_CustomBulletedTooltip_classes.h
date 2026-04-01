// WidgetBlueprintGeneratedClass WBP_Panel_CustomBulletedTooltip.WBP_Panel_CustomBulletedTooltip_C
// Size: 0x348 (Inherited: 0x318)
struct UWBP_Panel_CustomBulletedTooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UGenericTooltipWrapper_C* GenericTooltipWrapper; // 0x320(0x08)
	struct UVerticalBox* TooltipList; // 0x328(0x08)
	struct FString TooltipTextContent; // 0x330(0x10)
	struct UUserWidget* BulletWidgetItem; // 0x340(0x08)

	void ClearText(); // Function WBP_Panel_CustomBulletedTooltip.WBP_Panel_CustomBulletedTooltip_C.ClearText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Refresh View(); // Function WBP_Panel_CustomBulletedTooltip.WBP_Panel_CustomBulletedTooltip_C.Refresh View // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddText(struct FText New Text); // Function WBP_Panel_CustomBulletedTooltip.WBP_Panel_CustomBulletedTooltip_C.AddText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_CustomBulletedTooltip.WBP_Panel_CustomBulletedTooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_CustomBulletedTooltip(int32_t EntryPoint); // Function WBP_Panel_CustomBulletedTooltip.WBP_Panel_CustomBulletedTooltip_C.ExecuteUbergraph_WBP_Panel_CustomBulletedTooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

