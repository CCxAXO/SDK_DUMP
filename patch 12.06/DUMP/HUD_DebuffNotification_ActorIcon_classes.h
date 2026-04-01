// WidgetBlueprintGeneratedClass HUD_DebuffNotification_ActorIcon.HUD_DebuffNotification_ActorIcon_C
// Size: 0x348 (Inherited: 0x318)
struct UHUD_DebuffNotification_ActorIcon_C : UUserWidget {
	struct UImage* ActorIcon; // 0x318(0x08)
	struct UTextBlock* TextBlock_TimeRemaining; // 0x320(0x08)
	struct AActor* Actor; // 0x328(0x08)
	bool DebuffIsInfiniteDuration; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	double DebuffExpectedEndTime; // 0x338(0x08)
	struct FTimerHandle CountDownTimerHandle; // 0x340(0x08)

	struct UTexture* GetActorIcon(); // Function HUD_DebuffNotification_ActorIcon.HUD_DebuffNotification_ActorIcon_C.GetActorIcon // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateTimeRemaining(); // Function HUD_DebuffNotification_ActorIcon.HUD_DebuffNotification_ActorIcon_C.UpdateTimeRemaining // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleShooterCharacterDied(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function HUD_DebuffNotification_ActorIcon.HUD_DebuffNotification_ActorIcon_C.HandleShooterCharacterDied // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleDamageableDied(struct UDamageResponse* Response); // Function HUD_DebuffNotification_ActorIcon.HUD_DebuffNotification_ActorIcon_C.HandleDamageableDied // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Reset(); // Function HUD_DebuffNotification_ActorIcon.HUD_DebuffNotification_ActorIcon_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetActiveActor(struct AActor* NewActor, double ExpectedEndTime, bool IsInfiniteDuration); // Function HUD_DebuffNotification_ActorIcon.HUD_DebuffNotification_ActorIcon_C.SetActiveActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIconVisibility(bool ShouldBeVisible); // Function HUD_DebuffNotification_ActorIcon.HUD_DebuffNotification_ActorIcon_C.SetIconVisibility // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

