// Class RGISocialShared.RGISocialSharedAudioViewModel
// Size: 0xc8 (Inherited: 0x70)
struct URGISocialSharedAudioViewModel : UMVVMViewModelBase {
	struct FMulticastInlineDelegate OnAudioEventTriggered; // 0x70(0x10)
	struct TArray<enum class EAudioLockID> LockIDsInUse; // 0x80(0x10)
	struct FRGISocialSharedAudioViewModelEventContext LastEvent; // 0x90(0x18)
	struct TArray<struct FDateTime> LastEventTimes; // 0xa8(0x10)
	char pad_B8[0x10]; // 0xb8(0x10)

	void UnlockAudio(enum class EAudioLockID LockId); // Function RGISocialShared.RGISocialSharedAudioViewModel.UnlockAudio // (Native|Public|BlueprintCallable) // @ game+0x3a32360
	void LockAudio(enum class EAudioLockID LockId, struct FString ExtraContext); // Function RGISocialShared.RGISocialSharedAudioViewModel.LockAudio // (Native|Public|BlueprintCallable) // @ game+0x5330700
	bool IsAudioLocked(enum class EAudioLockID LockId); // Function RGISocialShared.RGISocialSharedAudioViewModel.IsAudioLocked // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x53305f0
	void Initialize(); // Function RGISocialShared.RGISocialSharedAudioViewModel.Initialize // (Final|Native|Public|BlueprintCallable) // @ game+0x53309f0
	struct FString GetLocksFormatted(); // Function RGISocialShared.RGISocialSharedAudioViewModel.GetLocksFormatted // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5330390
	struct FRGISocialSharedAudioViewModelEventContext GetLastEvent(); // Function RGISocialShared.RGISocialSharedAudioViewModel.GetLastEvent // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x53305a0
	void BroadcastAudioEvent(struct FRGISocialSharedAudioViewModelEventContext& EventContext); // Function RGISocialShared.RGISocialSharedAudioViewModel.BroadcastAudioEvent // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x53308e0
};

// Class RGISocialShared.RGISocialSharedButtonAction
// Size: 0xb8 (Inherited: 0x30)
struct URGISocialSharedButtonAction : UObject {
	char pad_30[0x48]; // 0x30(0x48)
	struct FText ActionText; // 0x78(0x18)
	struct FText ActionTextKey; // 0x90(0x18)
	struct FGameplayTag ActionTag; // 0xa8(0x0c)
	char pad_B4[0x4]; // 0xb4(0x04)

	void SetActionTextKey(struct FText& InActionKey); // Function RGISocialShared.RGISocialSharedButtonAction.SetActionTextKey // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5330f70
	void SetActionText(struct FText& InActionText); // Function RGISocialShared.RGISocialSharedButtonAction.SetActionText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x53310a0
	struct FText GetActionTextKey(); // Function RGISocialShared.RGISocialSharedButtonAction.GetActionTextKey // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x53311d0
	struct FText GetActionText(); // Function RGISocialShared.RGISocialSharedButtonAction.GetActionText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5331240
	void Execute(); // Function RGISocialShared.RGISocialSharedButtonAction.Execute // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x5330f50
};

// Class RGISocialShared.RGISocialSharedModalAction
// Size: 0x70 (Inherited: 0x30)
struct URGISocialSharedModalAction : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	struct FText ActionText; // 0x48(0x18)
	struct FGameplayTag ActionTag; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)

	void SetActionText(struct FText& InActionText); // Function RGISocialShared.RGISocialSharedModalAction.SetActionText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x53315a0
	struct FText GetActionText(); // Function RGISocialShared.RGISocialSharedModalAction.GetActionText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x53316d0
	void Execute(); // Function RGISocialShared.RGISocialSharedModalAction.Execute // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x5330f50
};

// Class RGISocialShared.RGISocialSharedModalManagerViewModel
// Size: 0x80 (Inherited: 0x70)
struct URGISocialSharedModalManagerViewModel : UMVVMViewModelBase {
	struct TArray<struct URGISocialSharedModalViewModelBase*> ModalStack; // 0x70(0x10)

	void PushSimpleModal(struct FName ModalType, struct FText& Title, struct FText& Message); // Function RGISocialShared.RGISocialSharedModalManagerViewModel.PushSimpleModal // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5331ab0
	void PushModal(struct URGISocialSharedModalViewModelBase* NewModal); // Function RGISocialShared.RGISocialSharedModalManagerViewModel.PushModal // (Final|Native|Public|BlueprintCallable) // @ game+0x5331e60
	void PopModal(); // Function RGISocialShared.RGISocialSharedModalManagerViewModel.PopModal // (Final|Native|Public|BlueprintCallable) // @ game+0x5331e40
	bool HasActiveModal(); // Function RGISocialShared.RGISocialSharedModalManagerViewModel.HasActiveModal // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5331d90
	struct URGISocialSharedModalViewModelBase* GetTopModal(); // Function RGISocialShared.RGISocialSharedModalManagerViewModel.GetTopModal // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5331d50
	void ClearModals(); // Function RGISocialShared.RGISocialSharedModalManagerViewModel.ClearModals // (Final|Native|Public|BlueprintCallable) // @ game+0x5331db0
};

// Class RGISocialShared.RGISocialSharedModalViewModelBase
// Size: 0xd8 (Inherited: 0x70)
struct URGISocialSharedModalViewModelBase : UMVVMViewModelBase {
	struct TArray<struct URGISocialSharedButtonAction*> ModalActions; // 0x70(0x10)
	char pad_80[0x18]; // 0x80(0x18)
	struct FName ModalType; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FText Title; // 0xa8(0x18)
	struct FText Message; // 0xc0(0x18)

	void SetModel(struct UObject* Model); // Function RGISocialShared.RGISocialSharedModalViewModelBase.SetModel // (Native|Public|BlueprintCallable) // @ game+0x5332400
	void OnRequestCloseClicked(); // Function RGISocialShared.RGISocialSharedModalViewModelBase.OnRequestCloseClicked // (Final|Native|Public) // @ game+0x53323e0
	void AddDefaultCancelAction(struct FText& CancelText); // Function RGISocialShared.RGISocialSharedModalViewModelBase.AddDefaultCancelAction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5332500
};

// Class RGISocialShared.RGISocialSharedNavigationViewModel
// Size: 0xa0 (Inherited: 0x70)
struct URGISocialSharedNavigationViewModel : UMVVMViewModelBase {
	struct FString NavigationPath; // 0x70(0x10)
	struct TArray<struct FString> NavigationHistory; // 0x80(0x10)
	struct URGIUINavigationModel* NavigationModel; // 0x90(0x08)
	int32_t MaxHistorySize; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)

	void SetNavigationPath(struct FString NewPath); // Function RGISocialShared.RGISocialSharedNavigationViewModel.SetNavigationPath // (Final|Native|Public|BlueprintCallable) // @ game+0x5332cd0
	void NavigateBack(); // Function RGISocialShared.RGISocialSharedNavigationViewModel.NavigateBack // (Final|Native|Public|BlueprintCallable) // @ game+0x5332af0
	void Initialize(struct URGIUINavigationModel* Model); // Function RGISocialShared.RGISocialSharedNavigationViewModel.Initialize // (Final|Native|Public|BlueprintCallable) // @ game+0x5332f00
	struct FString GetNavigationPath(); // Function RGISocialShared.RGISocialSharedNavigationViewModel.GetNavigationPath // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5332e00
	void AddToNavigationPath(struct FString NewPath); // Function RGISocialShared.RGISocialSharedNavigationViewModel.AddToNavigationPath // (Final|Native|Public|BlueprintCallable) // @ game+0x5332b10
};

// Class RGISocialShared.RGISocialSharedSelectableViewModelInterface
// Size: 0x30 (Inherited: 0x30)
struct URGISocialSharedSelectableViewModelInterface : UInterface {

	void OnViewModelSelected(); // Function RGISocialShared.RGISocialSharedSelectableViewModelInterface.OnViewModelSelected // (Native|Event|Public|BlueprintEvent) // @ game+0x41906f0
};

// Class RGISocialShared.RGISocialSharedToastCollectionViewModel
// Size: 0x88 (Inherited: 0x70)
struct URGISocialSharedToastCollectionViewModel : UMVVMViewModelBase {
	struct TArray<struct URGISocialSharedToastViewModel*> ToastStack; // 0x70(0x10)
	struct URGISocialSharedToastViewModel* LatestToast; // 0x80(0x08)

	struct URGISocialSharedToastViewModel* AddToast(struct FText& Text, int32_t Duration, enum class EToastState State); // Function RGISocialShared.RGISocialSharedToastCollectionViewModel.AddToast // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x53342f0
	struct URGISocialSharedToastViewModel* AddPartyInviteInboundToast(struct FString Puuid, struct FString GameName, struct URGISocialSharedButtonAction* AcceptAction, struct URGISocialSharedButtonAction* CancelAction, int32_t& Duration); // Function RGISocialShared.RGISocialSharedToastCollectionViewModel.AddPartyInviteInboundToast // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5333b10
	struct URGISocialSharedToastViewModel* AddFriendRequestInboundToast(struct FString Puuid, struct FString GameName, struct URGISocialSharedButtonAction* AcceptAction, struct URGISocialSharedButtonAction* CancelAction, int32_t& Duration); // Function RGISocialShared.RGISocialSharedToastCollectionViewModel.AddFriendRequestInboundToast // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5333f00
};

// Class RGISocialShared.RGISocialSharedToastViewModel
// Size: 0xd0 (Inherited: 0x70)
struct URGISocialSharedToastViewModel : UMVVMViewModelBase {
	struct FText ToastText; // 0x70(0x18)
	bool ToastValid; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	int32_t ToastDuration; // 0x8c(0x04)
	enum class EToastState ToastState; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FString ToastPuuid; // 0x98(0x10)
	struct FDateTime ToastArrivalTime; // 0xa8(0x08)
	struct TArray<struct URGISocialSharedButtonAction*> ToastActions; // 0xb0(0x10)
	enum class EToastType ToastTag; // 0xc0(0x01)
	char pad_C1[0xf]; // 0xc1(0x0f)

	void SetToastValid(bool Valid); // Function RGISocialShared.RGISocialSharedToastViewModel.SetToastValid // (Final|Native|Public|BlueprintCallable) // @ game+0x53349a0
	void SetToastText(struct FText& Text); // Function RGISocialShared.RGISocialSharedToastViewModel.SetToastText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5334fd0
	void SetToastState(enum class EToastState State); // Function RGISocialShared.RGISocialSharedToastViewModel.SetToastState // (Final|Native|Public|BlueprintCallable) // @ game+0x5334d20
	void SetToastPuuid(struct FString Puuid); // Function RGISocialShared.RGISocialSharedToastViewModel.SetToastPuuid // (Final|Native|Public|BlueprintCallable) // @ game+0x5334bc0
	void SetToastDuration(int32_t Duration); // Function RGISocialShared.RGISocialSharedToastViewModel.SetToastDuration // (Final|Native|Public|BlueprintCallable) // @ game+0x5334e40
	bool IsToastValid(); // Function RGISocialShared.RGISocialSharedToastViewModel.IsToastValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5334910
	void Initialize(struct FText& Text, int32_t& Duration, enum class EToastState State, struct FString Puuid); // Function RGISocialShared.RGISocialSharedToastViewModel.Initialize // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5335140
	struct FText GetToastText(); // Function RGISocialShared.RGISocialSharedToastViewModel.GetToastText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5334f60
	enum class EToastState GetToastState(); // Function RGISocialShared.RGISocialSharedToastViewModel.GetToastState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5334d00
	struct FString GetToastPuuid(); // Function RGISocialShared.RGISocialSharedToastViewModel.GetToastPuuid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5334ac0
	int32_t GetToastDuration(); // Function RGISocialShared.RGISocialSharedToastViewModel.GetToastDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x28a8750
	void ForceToastExpire(); // Function RGISocialShared.RGISocialSharedToastViewModel.ForceToastExpire // (Final|Native|Public|BlueprintCallable) // @ game+0x5334930
};

// Class RGISocialShared.RGISocialSharedViewModelHelper
// Size: 0x30 (Inherited: 0x30)
struct URGISocialSharedViewModelHelper : UBlueprintFunctionLibrary {
};

// Class RGISocialShared.RGISocialSharedSettings
// Size: 0xb8 (Inherited: 0x48)
struct URGISocialSharedSettings : UDeveloperSettings {
	struct TSoftClassPtr<UObject> DefaultAudioViewModel; // 0x48(0x30)
	struct TSoftClassPtr<UObject> DefaultToastCollectionViewModel; // 0x78(0x30)
	bool bAreAudioEventsEnabled; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	int32_t iMaxSoundEventsPerCooldown; // 0xac(0x04)
	float fSoundCooldownSeconds; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class RGISocialShared.RGISocialSharedSubsystem
// Size: 0x58 (Inherited: 0x38)
struct URGISocialSharedSubsystem : UGameInstanceSubsystem {
	struct URGISocialSharedModalManagerViewModel* ModalManager; // 0x38(0x08)
	struct URGISocialSharedNavigationViewModel* NavigationViewModel; // 0x40(0x08)
	struct URGISocialSharedAudioViewModel* AudioViewModel; // 0x48(0x08)
	struct URGISocialSharedToastCollectionViewModel* ToastCollectionViewModel; // 0x50(0x08)

	void SetupInitialDataAndDelegates(); // Function RGISocialShared.RGISocialSharedSubsystem.SetupInitialDataAndDelegates // (Final|Native|Public) // @ game+0x39f7660
	bool IsPlatformRiotPlatform(enum class ERGISocialSharedPlatform InPlatform); // Function RGISocialShared.RGISocialSharedSubsystem.IsPlatformRiotPlatform // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5337560
	struct UMVVMSubsystem* GetMVVMSubsystem(); // Function RGISocialShared.RGISocialSharedSubsystem.GetMVVMSubsystem // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5337690
	struct FString GetLocalizedDateTimeString(struct FDateTime& UtcTimestamp); // Function RGISocialShared.RGISocialSharedSubsystem.GetLocalizedDateTimeString // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x5337400
	struct FString GetLocal24HourTimeString(struct FDateTime& UtcTimestamp); // Function RGISocialShared.RGISocialSharedSubsystem.GetLocal24HourTimeString // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x53370e0
	struct URGISocialSharedAudioViewModel* GetAudioViewModel(); // Function RGISocialShared.RGISocialSharedSubsystem.GetAudioViewModel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x362e550
	struct URGISocialSharedToastViewModel* CreateToastSuccess(struct FText& Text, int32_t Duration); // Function RGISocialShared.RGISocialSharedSubsystem.CreateToastSuccess // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5336f00
	struct URGISocialSharedToastViewModel* CreateToastError(struct FText& Text, int32_t Duration); // Function RGISocialShared.RGISocialSharedSubsystem.CreateToastError // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5336d20
	struct URGISocialSharedToastViewModel* CreateToastDefault(struct FText& Text, int32_t Duration); // Function RGISocialShared.RGISocialSharedSubsystem.CreateToastDefault // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x5336b40
	struct URGISocialSharedToastViewModel* CreateInboundPartyInviteToast(struct FString GameName, int32_t Duration, struct FString Puuid); // Function RGISocialShared.RGISocialSharedSubsystem.CreateInboundPartyInviteToast // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5336560
	struct URGISocialSharedToastViewModel* CreateInboundFriendRequestToast(struct FString GameName, int32_t Duration, struct FString Puuid); // Function RGISocialShared.RGISocialSharedSubsystem.CreateInboundFriendRequestToast // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5336850
};

// Class RGISocialShared.RGIUINavigationModel
// Size: 0x80 (Inherited: 0x70)
struct URGIUINavigationModel : UMVVMViewModelBase {
	struct FString NavigationPath; // 0x70(0x10)
};

