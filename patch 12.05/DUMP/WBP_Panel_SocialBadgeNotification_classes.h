// WidgetBlueprintGeneratedClass WBP_Panel_SocialBadgeNotification.WBP_Panel_SocialBadgeNotification_C
// Size: 0x410 (Inherited: 0x3e0)
struct UWBP_Panel_SocialBadgeNotification_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* BadgeIcon; // 0x3e8(0x08)
	struct TArray<struct UAresSocialCountViewModelBase*> SocialCountVMs; // 0x3f0(0x10)
	struct TArray<struct UAresSocialCountViewModelBase*> ViewModelClasses; // 0x400(0x10)

	void InitializeViewModels(); // Function WBP_Panel_SocialBadgeNotification.WBP_Panel_SocialBadgeNotification_C.InitializeViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ResetViewModels(); // Function WBP_Panel_SocialBadgeNotification.WBP_Panel_SocialBadgeNotification_C.ResetViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ClearSocialCountVMs(); // Function WBP_Panel_SocialBadgeNotification.WBP_Panel_SocialBadgeNotification_C.ClearSocialCountVMs // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetTotalCount(int32_t& TotalCount); // Function WBP_Panel_SocialBadgeNotification.WBP_Panel_SocialBadgeNotification_C.GetTotalCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void HandleCountChanged(int32_t CurrentCount, int32_t PreviousCount); // Function WBP_Panel_SocialBadgeNotification.WBP_Panel_SocialBadgeNotification_C.HandleCountChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindOrUnbindViewModels(bool bDoBind); // Function WBP_Panel_SocialBadgeNotification.WBP_Panel_SocialBadgeNotification_C.BindOrUnbindViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MakeViewModels(struct TArray<struct UAresSocialCountViewModelBase*>& SocialCountViewModelClasses); // Function WBP_Panel_SocialBadgeNotification.WBP_Panel_SocialBadgeNotification_C.MakeViewModels // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_SocialBadgeNotification.WBP_Panel_SocialBadgeNotification_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_SocialBadgeNotification.WBP_Panel_SocialBadgeNotification_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_SocialBadgeNotification.WBP_Panel_SocialBadgeNotification_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_SocialBadgeNotification(int32_t EntryPoint); // Function WBP_Panel_SocialBadgeNotification.WBP_Panel_SocialBadgeNotification_C.ExecuteUbergraph_WBP_Panel_SocialBadgeNotification // (Final|UbergraphFunction) // @ game+0x1af5410
};

