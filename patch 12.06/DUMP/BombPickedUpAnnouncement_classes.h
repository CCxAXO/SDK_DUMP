// WidgetBlueprintGeneratedClass BombPickedUpAnnouncement.BombPickedUpAnnouncement_C
// Size: 0x3c0 (Inherited: 0x322)
struct UBombPickedUpAnnouncement_C : UBaseAnnouncementWidget_C {
	char pad_322[0x6]; // 0x322(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* Ani_Intro; // 0x330(0x08)
	struct UWidgetAnimation* Anim_IN; // 0x338(0x08)
	struct UWidgetAnimation* Anim_OUT; // 0x340(0x08)
	struct UImage* Bomb_Flipbook; // 0x348(0x08)
	struct UBombIcon_C* BombIcon; // 0x350(0x08)
	struct UImage* BrushNormal; // 0x358(0x08)
	struct UImage* Ether; // 0x360(0x08)
	struct UTextBlock* PrimaryText; // 0x368(0x08)
	struct UTextBlock* Sub_Text; // 0x370(0x08)
	struct AShooterCharacter* Character; // 0x378(0x08)
	struct FText Text; // 0x380(0x18)
	struct AActor* actorForLocationText; // 0x398(0x08)
	struct UMaterialInstanceDynamic* MID_BackgroundBrush; // 0x3a0(0x08)
	struct FName CornerColor; // 0x3a8(0x0c)
	struct FName BaseColor; // 0x3b4(0x0c)

	void HandleCharacterUsablesChanged(); // Function BombPickedUpAnnouncement.BombPickedUpAnnouncement_C.HandleCharacterUsablesChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void get VolumeLocation(struct AActor* Actor, struct FText& calloutVolumeText); // Function BombPickedUpAnnouncement.BombPickedUpAnnouncement_C.get VolumeLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetNameFromPlayerState(struct AShooterPlayerState* State, struct FText& Name); // Function BombPickedUpAnnouncement.BombPickedUpAnnouncement_C.GetNameFromPlayerState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateIcon(struct UImage* Widget, struct UTexture* Texture); // Function BombPickedUpAnnouncement.BombPickedUpAnnouncement_C.UpdateIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function BombPickedUpAnnouncement.BombPickedUpAnnouncement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnAnimatingIn(); // Function BombPickedUpAnnouncement.BombPickedUpAnnouncement_C.OnAnimatingIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAnimatingOut(); // Function BombPickedUpAnnouncement.BombPickedUpAnnouncement_C.OnAnimatingOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function BombPickedUpAnnouncement.BombPickedUpAnnouncement_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BombPickedUpAnnouncement(int32_t EntryPoint); // Function BombPickedUpAnnouncement.BombPickedUpAnnouncement_C.ExecuteUbergraph_BombPickedUpAnnouncement // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

