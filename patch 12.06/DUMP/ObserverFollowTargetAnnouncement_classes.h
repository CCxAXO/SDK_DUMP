// WidgetBlueprintGeneratedClass ObserverFollowTargetAnnouncement.ObserverFollowTargetAnnouncement_C
// Size: 0x338 (Inherited: 0x318)
struct UObserverFollowTargetAnnouncement_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Brush_Normal; // 0x320(0x08)
	struct UTextBlock* PrimaryText; // 0x328(0x08)
	struct AObserverPlayerState* FollowTarget; // 0x330(0x08)

	void SetSubjectPlayer(struct AObserverPlayerState* Subject); // Function ObserverFollowTargetAnnouncement.ObserverFollowTargetAnnouncement_C.SetSubjectPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function ObserverFollowTargetAnnouncement.ObserverFollowTargetAnnouncement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HideWidget(); // Function ObserverFollowTargetAnnouncement.ObserverFollowTargetAnnouncement_C.HideWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnFollowTargetChanged_Event_1(struct AObserverPlayerState* CurrentObserver, struct AObserverPlayerState* OldFollowTarget, struct AObserverPlayerState* NewFollowTarget); // Function ObserverFollowTargetAnnouncement.ObserverFollowTargetAnnouncement_C.OnFollowTargetChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAresPlayerStateChanged_Event_1(struct AAresPlayerStateBase* NewValue); // Function ObserverFollowTargetAnnouncement.ObserverFollowTargetAnnouncement_C.OnAresPlayerStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ObserverFollowTargetAnnouncement(int32_t EntryPoint); // Function ObserverFollowTargetAnnouncement.ObserverFollowTargetAnnouncement_C.ExecuteUbergraph_ObserverFollowTargetAnnouncement // (Final|UbergraphFunction) // @ game+0x1b42740
};

