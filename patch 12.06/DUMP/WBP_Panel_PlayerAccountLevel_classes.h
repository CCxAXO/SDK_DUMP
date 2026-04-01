// WidgetBlueprintGeneratedClass WBP_Panel_PlayerAccountLevel.WBP_Panel_PlayerAccountLevel_C
// Size: 0x430 (Inherited: 0x413)
struct UWBP_Panel_PlayerAccountLevel_C : UWBP_Panel_PlayerAccountLevelBorder_Base_C {
	char pad_413[0x5]; // 0x413(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UBorder* Border_LevelBorder; // 0x420(0x08)
	struct UAresCommonText* Text_AccountLevel; // 0x428(0x08)

	void Update Visibility(); // Function WBP_Panel_PlayerAccountLevel.WBP_Panel_PlayerAccountLevel_C.Update Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleLevelBorderTextureChanged(struct UTexture2D* LevelBorderTexture); // Function WBP_Panel_PlayerAccountLevel.WBP_Panel_PlayerAccountLevel_C.HandleLevelBorderTextureChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleAccountLevelChanged(int32_t AccountLevel); // Function WBP_Panel_PlayerAccountLevel.WBP_Panel_PlayerAccountLevel_C.HandleAccountLevelChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleShowAccountLevelChanged(bool bShowAccountLevel); // Function WBP_Panel_PlayerAccountLevel.WBP_Panel_PlayerAccountLevel_C.HandleShowAccountLevelChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PlayerAccountLevel(int32_t EntryPoint); // Function WBP_Panel_PlayerAccountLevel.WBP_Panel_PlayerAccountLevel_C.ExecuteUbergraph_WBP_Panel_PlayerAccountLevel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

