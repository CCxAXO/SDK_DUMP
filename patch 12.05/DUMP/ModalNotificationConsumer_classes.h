// BlueprintGeneratedClass ModalNotificationConsumer.ModalNotificationConsumer_C
// Size: 0x118 (Inherited: 0xf0)
struct UModalNotificationConsumer_C : UQueuedNotificationConsumerComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	struct UQueuedNotification* HeldNotification; // 0xf8(0x08)
	struct UGenericModalNotification_Base_C* HeldWidget; // 0x100(0x08)
	struct UMenuStackEntry* HeldMenuStackEntry; // 0x108(0x08)
	struct UMainMenuViewControllerBP_C* ViewController; // 0x110(0x08)

	void Init(struct UMainMenuViewController* ViewController); // Function ModalNotificationConsumer.ModalNotificationConsumer_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetActionText(struct UNotificationAction* Action, struct FText DefaultText, struct FText& Text); // Function ModalNotificationConsumer.ModalNotificationConsumer_C.GetActionText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void TeardownHeldNotification(); // Function ModalNotificationConsumer.ModalNotificationConsumer_C.TeardownHeldNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SpawnNotification(struct UQueuedNotification* Notification, struct UGenericModalNotification_Base_C*& Widget); // Function ModalNotificationConsumer.ModalNotificationConsumer_C.SpawnNotification // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TeardownNotification(struct UQueuedNotification* Notification); // Function ModalNotificationConsumer.ModalNotificationConsumer_C.TeardownNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnNotificationDequeued(struct UQueuedNotification* Notification); // Function ModalNotificationConsumer.ModalNotificationConsumer_C.OnNotificationDequeued // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function ModalNotificationConsumer.ModalNotificationConsumer_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function ModalNotificationConsumer.ModalNotificationConsumer_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnCanRemoveNotification(struct UQueuedNotification* Notification); // Function ModalNotificationConsumer.ModalNotificationConsumer_C.OnCanRemoveNotification // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnCanDisplayNotification(struct UQueuedNotification* Notification); // Function ModalNotificationConsumer.ModalNotificationConsumer_C.OnCanDisplayNotification // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnActionA(); // Function ModalNotificationConsumer.ModalNotificationConsumer_C.OnActionA // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnActionB(); // Function ModalNotificationConsumer.ModalNotificationConsumer_C.OnActionB // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCancel(); // Function ModalNotificationConsumer.ModalNotificationConsumer_C.OnCancel // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ModalNotificationConsumer(int32_t EntryPoint); // Function ModalNotificationConsumer.ModalNotificationConsumer_C.ExecuteUbergraph_ModalNotificationConsumer // (Final|UbergraphFunction) // @ game+0x1af5410
};

