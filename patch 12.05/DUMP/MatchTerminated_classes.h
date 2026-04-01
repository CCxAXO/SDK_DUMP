// WidgetBlueprintGeneratedClass MatchTerminated.MatchTerminated_C
// Size: 0x358 (Inherited: 0x318)
struct UMatchTerminated_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* AnticheatLogo; // 0x320(0x08)
	struct UTextBlock* BanMessage; // 0x328(0x08)
	struct USharedButtonMaster_C* Continue; // 0x330(0x08)
	struct UTextBlock* HackerDetected; // 0x338(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x340(0x08)
	struct FString Reason; // 0x348(0x10)

	void Construct(); // Function MatchTerminated.MatchTerminated_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnCurrentMatchTerminatedNotification_Event_1(struct FString NotificationBody); // Function MatchTerminated.MatchTerminated_C.OnCurrentMatchTerminatedNotification_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Message(); // Function MatchTerminated.MatchTerminated_C.Update Message // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnClicked_Event_1(); // Function MatchTerminated.MatchTerminated_C.OnClicked_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnClose(); // Function MatchTerminated.MatchTerminated_C.OnClose // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MatchTerminated(int32_t EntryPoint); // Function MatchTerminated.MatchTerminated_C.ExecuteUbergraph_MatchTerminated // (Final|UbergraphFunction) // @ game+0x1af5410
};

