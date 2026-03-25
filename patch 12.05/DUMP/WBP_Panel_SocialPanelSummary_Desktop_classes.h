// WidgetBlueprintGeneratedClass WBP_Panel_SocialPanelSummary_Desktop.WBP_Panel_SocialPanelSummary_Desktop_C
// Size: 0x44c (Inherited: 0x3e0)
struct UWBP_Panel_SocialPanelSummary_Desktop_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresFriendRequestCountViewModel* AresFriendRequestCountViewModel; // 0x3e8(0x08)
	struct USocialExperienceOpenStateViewModel* SocialExperienceOpenStateViewModel; // 0x3f0(0x08)
	struct UWidgetAnimation* Anim_FriendRequestToSocial; // 0x3f8(0x08)
	struct UWidgetAnimation* Anim_SocialToFriendRequest; // 0x400(0x08)
	struct UImage* Image_Background; // 0x408(0x08)
	struct UOverlay* Overlay_Content; // 0x410(0x08)
	struct USizeBox* SizeBox_Content; // 0x418(0x08)
	struct USizeBox* SizeBox_Root; // 0x420(0x08)
	bool bFriendRequestIconIsVisible; // 0x428(0x01)
	bool bIsInitializing; // 0x429(0x01)
	char pad_42A[0x2]; // 0x42a(0x02)
	struct FLinearColor ClosedBackgroundColor; // 0x42c(0x10)
	struct FLinearColor OpenBackgroundColor; // 0x43c(0x10)

	void SetDisplayedIcon(bool ShowFriendRequestIcon, enum class EAresSocialTransitionType TransitionType); // Function WBP_Panel_SocialPanelSummary_Desktop.WBP_Panel_SocialPanelSummary_Desktop_C.SetDisplayedIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateOpenAppearance(double OpenInterpolation); // Function WBP_Panel_SocialPanelSummary_Desktop.WBP_Panel_SocialPanelSummary_Desktop_C.UpdateOpenAppearance // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_SocialPanelSummary_Desktop.WBP_Panel_SocialPanelSummary_Desktop_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_SocialPanelSummary_Desktop.WBP_Panel_SocialPanelSummary_Desktop_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_SocialPanelSummary_Desktop.WBP_Panel_SocialPanelSummary_Desktop_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnOpenInterpolationChanged(float NewValue); // Function WBP_Panel_SocialPanelSummary_Desktop.WBP_Panel_SocialPanelSummary_Desktop_C.OnOpenInterpolationChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnFriendRequestCountChanged(int32_t FriendRequestCount); // Function WBP_Panel_SocialPanelSummary_Desktop.WBP_Panel_SocialPanelSummary_Desktop_C.OnFriendRequestCountChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_SocialPanelSummary_Desktop(int32_t EntryPoint); // Function WBP_Panel_SocialPanelSummary_Desktop.WBP_Panel_SocialPanelSummary_Desktop_C.ExecuteUbergraph_WBP_Panel_SocialPanelSummary_Desktop // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

