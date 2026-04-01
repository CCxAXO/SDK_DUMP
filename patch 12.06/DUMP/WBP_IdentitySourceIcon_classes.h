// WidgetBlueprintGeneratedClass WBP_IdentitySourceIcon.WBP_IdentitySourceIcon_C
// Size: 0x380 (Inherited: 0x360)
struct UWBP_IdentitySourceIcon_C : UAresIdentitySourceIconWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	struct USizeBox* SizeBox_Icon; // 0x368(0x08)
	struct FVector2D ImageSize; // 0x370(0x10)

	void PreConstruct(bool IsDesignTime); // Function WBP_IdentitySourceIcon.WBP_IdentitySourceIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SetIconSize(struct FVector2D NewSize); // Function WBP_IdentitySourceIcon.WBP_IdentitySourceIcon_C.SetIconSize // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_IdentitySourceIcon(int32_t EntryPoint); // Function WBP_IdentitySourceIcon.WBP_IdentitySourceIcon_C.ExecuteUbergraph_WBP_IdentitySourceIcon // (Final|UbergraphFunction) // @ game+0x1b42740
};

