// WidgetBlueprintGeneratedClass WBP_SocialNotificationBorder.WBP_SocialNotificationBorder_C
// Size: 0x360 (Inherited: 0x318)
struct UWBP_SocialNotificationBorder_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Anim_NotificationBorder_ALT; // 0x320(0x08)
	struct UWidgetAnimation* Anim_NotificationBorder; // 0x328(0x08)
	struct UImage* Image_NotificationBorder; // 0x330(0x08)
	struct FSlateColor BorderColor; // 0x338(0x14)
	struct FName MaterialName; // 0x34c(0x0c)
	struct UMaterialInterface* NotificationBorderMaterial; // 0x358(0x08)

	void AddToAnimatableMaterialsMap(struct TMap<struct FName, struct UMaterialInstanceDynamic*> InAnimatableMaterialsMap, struct TMap<struct FName, struct UMaterialInstanceDynamic*>& OutAnimatableMaterialsMap); // Function WBP_SocialNotificationBorder.WBP_SocialNotificationBorder_C.AddToAnimatableMaterialsMap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBorderColor(struct FSlateColor InBorderColor); // Function WBP_SocialNotificationBorder.WBP_SocialNotificationBorder_C.SetBorderColor // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayNotificationAnimation(); // Function WBP_SocialNotificationBorder.WBP_SocialNotificationBorder_C.PlayNotificationAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClearNotificationAnimation(); // Function WBP_SocialNotificationBorder.WBP_SocialNotificationBorder_C.ClearNotificationAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_SocialNotificationBorder.WBP_SocialNotificationBorder_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_SocialNotificationBorder(int32_t EntryPoint); // Function WBP_SocialNotificationBorder.WBP_SocialNotificationBorder_C.ExecuteUbergraph_WBP_SocialNotificationBorder // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

