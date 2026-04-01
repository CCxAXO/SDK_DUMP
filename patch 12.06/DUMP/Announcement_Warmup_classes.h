// WidgetBlueprintGeneratedClass Announcement_Warmup.Announcement_Warmup_C
// Size: 0x390 (Inherited: 0x322)
struct UAnnouncement_Warmup_C : UBaseAnnouncementWidget_C {
	char pad_322[0x6]; // 0x322(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* Anim_IN_1; // 0x330(0x08)
	struct UImage* bar_left; // 0x338(0x08)
	struct UImage* bar_right; // 0x340(0x08)
	struct UBorder* BrushNormal; // 0x348(0x08)
	struct UImage* Ether; // 0x350(0x08)
	struct UImage* LeftBar; // 0x358(0x08)
	struct UTextBlock* PrimaryText; // 0x360(0x08)
	struct UImage* RightBar; // 0x368(0x08)
	struct UTextBlock* SecondaryText; // 0x370(0x08)
	struct AShooterCharacter* Character; // 0x378(0x08)
	struct AActor* actorForLocationText; // 0x380(0x08)
	struct UMaterialInstance* Icon Material; // 0x388(0x08)

	struct FText GetSecondaryText(); // Function Announcement_Warmup.Announcement_Warmup_C.GetSecondaryText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void get VolumeLocation(struct AActor* Actor, struct FText& calloutVolumeText); // Function Announcement_Warmup.Announcement_Warmup_C.get VolumeLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetNameFromPlayerState(struct AShooterPlayerState* State, struct FText& Name); // Function Announcement_Warmup.Announcement_Warmup_C.GetNameFromPlayerState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateIcon(struct UImage* Widget, struct UTexture* Texture); // Function Announcement_Warmup.Announcement_Warmup_C.UpdateIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function Announcement_Warmup.Announcement_Warmup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnAnimatingIn(); // Function Announcement_Warmup.Announcement_Warmup_C.OnAnimatingIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAnimatingOut(); // Function Announcement_Warmup.Announcement_Warmup_C.OnAnimatingOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Announcement_Warmup.Announcement_Warmup_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Announcement_Warmup(int32_t EntryPoint); // Function Announcement_Warmup.Announcement_Warmup_C.ExecuteUbergraph_Announcement_Warmup // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

