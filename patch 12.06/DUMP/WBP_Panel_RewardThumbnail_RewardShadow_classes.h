// WidgetBlueprintGeneratedClass WBP_Panel_RewardThumbnail_RewardShadow.WBP_Panel_RewardThumbnail_RewardShadow_C
// Size: 0x420 (Inherited: 0x400)
struct UWBP_Panel_RewardThumbnail_RewardShadow_C : UWBP_Panel_RewardThumbnail_Interface_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* hover; // 0x408(0x08)
	struct UWBP_Panel_RewardThumbnail_C* WBP_Panel_RewardThumbnail; // 0x410(0x08)
	struct UWBP_Panel_RewardThumbnail_C* WBP_Panel_RewardThumbnail_Shadow; // 0x418(0x08)

	void OnParentUnhovered(); // Function WBP_Panel_RewardThumbnail_RewardShadow.WBP_Panel_RewardThumbnail_RewardShadow_C.OnParentUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnParentHovered(); // Function WBP_Panel_RewardThumbnail_RewardShadow.WBP_Panel_RewardThumbnail_RewardShadow_C.OnParentHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateColorAndOpacity(struct FLinearColor NewColorAndOpacity); // Function WBP_Panel_RewardThumbnail_RewardShadow.WBP_Panel_RewardThumbnail_RewardShadow_C.UpdateColorAndOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRewardChanged(struct URewardModel* Reward); // Function WBP_Panel_RewardThumbnail_RewardShadow.WBP_Panel_RewardThumbnail_RewardShadow_C.OnRewardChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateHoverAnimation(bool hover); // Function WBP_Panel_RewardThumbnail_RewardShadow.WBP_Panel_RewardThumbnail_RewardShadow_C.UpdateHoverAnimation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_RewardThumbnail_RewardShadow(int32_t EntryPoint); // Function WBP_Panel_RewardThumbnail_RewardShadow.WBP_Panel_RewardThumbnail_RewardShadow_C.ExecuteUbergraph_WBP_Panel_RewardThumbnail_RewardShadow // (Final|UbergraphFunction) // @ game+0x1b42740
};

