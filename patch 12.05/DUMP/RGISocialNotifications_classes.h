// Class RGISocialNotifications.RGISocialNotificationsNotificationCollectionViewModel
// Size: 0xd0 (Inherited: 0x70)
struct URGISocialNotificationsNotificationCollectionViewModel : UMVVMViewModelBase {
	struct TArray<struct URGISocialNotificationsNotificationViewModel*> Notifications; // 0x70(0x10)
	struct TSet<struct URGISocialNotificationsNotificationViewModel*> NotificationsSet; // 0x80(0x50)

	void RemoveNotificationFromCollection(struct URGISocialNotificationsNotificationViewModel* NotificationViewModel); // Function RGISocialNotifications.RGISocialNotificationsNotificationCollectionViewModel.RemoveNotificationFromCollection // (Final|Native|Public|BlueprintCallable) // @ game+0x52e4d90
	struct TArray<struct URGISocialNotificationsNotificationViewModel*> GetNotifications(); // Function RGISocialNotifications.RGISocialNotificationsNotificationCollectionViewModel.GetNotifications // (Final|Native|Public|BlueprintCallable) // @ game+0x52e49b0
	int32_t GetNotificationCount(); // Function RGISocialNotifications.RGISocialNotificationsNotificationCollectionViewModel.GetNotificationCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52e4d70
	void DeclineAllNotifications(); // Function RGISocialNotifications.RGISocialNotificationsNotificationCollectionViewModel.DeclineAllNotifications // (Final|Native|Public|BlueprintCallable) // @ game+0x52e4a40
	void ClearNotificationsByType(enum class ENotificationType& InType); // Function RGISocialNotifications.RGISocialNotificationsNotificationCollectionViewModel.ClearNotificationsByType // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x52e4b70
	void AddNotificationToCollection(struct URGISocialNotificationsNotificationViewModel* NotificationViewModel); // Function RGISocialNotifications.RGISocialNotificationsNotificationCollectionViewModel.AddNotificationToCollection // (Final|Native|Public|BlueprintCallable) // @ game+0x52e4e80
};

// Class RGISocialNotifications.RGISocialNotificationsNotificationViewModel
// Size: 0x120 (Inherited: 0x70)
struct URGISocialNotificationsNotificationViewModel : UMVVMViewModelBase {
	char pad_70[0x30]; // 0x70(0x30)
	enum class ENotificationType Type; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FText Title; // 0xa8(0x18)
	struct FText Message; // 0xc0(0x18)
	struct FText AcknowledgeText; // 0xd8(0x18)
	struct FText DeclineText; // 0xf0(0x18)
	struct UObject* Data; // 0x108(0x08)
	bool bIsRead; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FDateTime NotificationTimestamp; // 0x118(0x08)

	void SetType(enum class ENotificationType& InType); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.SetType // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x52e5c80
	void SetTitle(struct FText& InTitle); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.SetTitle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x52e5b60
	void SetMessage(struct FText& InMessage); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.SetMessage // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x52e5a40
	void SetIsRead(bool InIsRead); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.SetIsRead // (Final|Native|Public|BlueprintCallable) // @ game+0x52e5920
	void SetDeclineText(struct FText& InDeclineText); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.SetDeclineText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x52e56e0
	void SetData(struct UObject* InData); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.SetData // (Final|Native|Public|BlueprintCallable) // @ game+0x52e55c0
	void SetAcknowledgeText(struct FText& InAcknowledgeText); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.SetAcknowledgeText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x52e5800
	enum class ENotificationType GetType(); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.GetType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52e5f70
	struct FText GetTitle(); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.GetTitle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52e5f00
	struct FText GetMessage(); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.GetMessage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52e5e90
	bool GetIsRead(); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.GetIsRead // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52e5e70
	struct FText GetDeclineText(); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.GetDeclineText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52e5d90
	struct UObject* GetData(); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.GetData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52e5d70
	struct FText GetAcknowledgeText(); // Function RGISocialNotifications.RGISocialNotificationsNotificationViewModel.GetAcknowledgeText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52e5e00
};

// Class RGISocialNotifications.RGISocialCounter
// Size: 0x48 (Inherited: 0x30)
struct URGISocialCounter : UObject {
	int32_t Count; // 0x30(0x04)
	bool bIncludeInAll; // 0x34(0x01)
	char pad_35[0x13]; // 0x35(0x13)
};

// Class RGISocialNotifications.SubTaggedCounterMap
// Size: 0x88 (Inherited: 0x30)
struct USubTaggedCounterMap : UObject {
	struct URGISocialCounter* AggregateCounter; // 0x30(0x08)
	struct TMap<struct FString, struct URGISocialCounter*> SubTagToCounterMap; // 0x38(0x50)
};

// Class RGISocialNotifications.RGISocialNotificationsSubsystem
// Size: 0xf8 (Inherited: 0x38)
struct URGISocialNotificationsSubsystem : UGameInstanceSubsystem {
	char pad_38[0x18]; // 0x38(0x18)
	struct TMap<struct FString, struct URGISocialCounter*> SimpleCounterMap; // 0x50(0x50)
	struct TMap<struct FString, struct USubTaggedCounterMap*> AggregateCounterMap; // 0xa0(0x50)
	struct URGISocialNotificationsNotificationCollectionViewModel* NotificationCollectionViewModel; // 0xf0(0x08)

	void SetSimpleCount(struct FString Tag, int32_t Count, bool IncludeInAll); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.SetSimpleCount // (Final|Native|Public|BlueprintCallable) // @ game+0x52e8960
	void SetLoadingState(bool IsLoading); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.SetLoadingState // (Final|Native|Public|BlueprintCallable) // @ game+0x52e6b20
	void SetCompositeCount(struct FString Tag, struct FString SubTag, int32_t Count, bool IncludeInAll); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.SetCompositeCount // (Final|Native|Public|BlueprintCallable) // @ game+0x52e7a70
	void ResetAggregateCounter(struct FString Tag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.ResetAggregateCounter // (Final|Native|Public|BlueprintCallable) // @ game+0x52e7da0
	bool HasSimpleCounter(struct FString Tag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.HasSimpleCounter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52e8270
	bool HasCompositeCounter(struct FString Tag, struct FString SubTag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.HasCompositeCounter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52e6c20
	bool HasAggregateCounter(struct FString Tag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.HasAggregateCounter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52e6e50
	struct URGISocialCounter* GetSimpleCounter(struct FString Tag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.GetSimpleCounter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52e83b0
	int32_t GetSimpleCount(struct FString Tag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.GetSimpleCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52e84f0
	struct URGISocialCounter* GetOrInitializeSimpleCounter(struct FString Tag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.GetOrInitializeSimpleCounter // (Final|Native|Public|BlueprintCallable) // @ game+0x52e8bd0
	struct URGISocialCounter* GetOrInitializeCompositeCounter(struct FString Tag, struct FString SubTag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.GetOrInitializeCompositeCounter // (Final|Native|Public|BlueprintCallable) // @ game+0x52e7ed0
	struct URGISocialCounter* GetOrInitializeAggregateCounter(struct FString Tag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.GetOrInitializeAggregateCounter // (Final|Native|Public|BlueprintCallable) // @ game+0x52e8130
	bool GetIsLoading(); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.GetIsLoading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52e6b00
	struct URGISocialCounter* GetCompositeCounter(struct FString Tag, struct FString SubTag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.GetCompositeCounter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52e6f90
	int32_t GetCompositeCount(struct FString Tag, struct FString SubTag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.GetCompositeCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52e7300
	int32_t GetAllCount(); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.GetAllCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4282880
	struct URGISocialCounter* GetAggregateCounter(struct FString Tag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.GetAggregateCounter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52e71c0
	int32_t GetAggregateCount(struct FString Tag); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.GetAggregateCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x52e7530
	void AddSimpleCount(struct FString Tag, int32_t Count, bool IncludeInAll); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.AddSimpleCount // (Final|Native|Public|BlueprintCallable) // @ game+0x52e86f0
	void AddCompositeCount(struct FString Tag, struct FString SubTag, int32_t Count, bool IncludeInAll); // Function RGISocialNotifications.RGISocialNotificationsSubsystem.AddCompositeCount // (Final|Native|Public|BlueprintCallable) // @ game+0x52e7740
};

