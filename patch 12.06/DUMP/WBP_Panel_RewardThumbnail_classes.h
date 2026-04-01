// WidgetBlueprintGeneratedClass WBP_Panel_RewardThumbnail.WBP_Panel_RewardThumbnail_C
// Size: 0x438 (Inherited: 0x3e0)
struct UWBP_Panel_RewardThumbnail_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* Icon; // 0x3e8(0x08)
	struct UVM_Reward_C* RewardViewModel; // 0x3f0(0x08)
	struct URewardModel* RewardModelObject; // 0x3f8(0x08)
	struct FWidgetTransform IconTransform; // 0x400(0x38)

	void OnIconChanged(struct UTexture* IconTexture, bool DisplayIconAsBackground); // Function WBP_Panel_RewardThumbnail.WBP_Panel_RewardThumbnail_C.OnIconChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIconTransformChanged(struct FWidgetTransform IconTransform); // Function WBP_Panel_RewardThumbnail.WBP_Panel_RewardThumbnail_C.OnIconTransformChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Panel_RewardThumbnail.WBP_Panel_RewardThumbnail_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModel(); // Function WBP_Panel_RewardThumbnail.WBP_Panel_RewardThumbnail_C.InitViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_RewardThumbnail.WBP_Panel_RewardThumbnail_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_RewardThumbnail.WBP_Panel_RewardThumbnail_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_RewardThumbnail(int32_t EntryPoint); // Function WBP_Panel_RewardThumbnail.WBP_Panel_RewardThumbnail_C.ExecuteUbergraph_WBP_Panel_RewardThumbnail // (Final|UbergraphFunction) // @ game+0x1b42740
};

